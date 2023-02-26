module mul#(parameter XLEN = 32)
	(
	 input wire	clk_i,
	 input wire	rst_i,
	 input wire	[XLEN-1 : 0]	a_i,
	 input wire	[XLEN-1 : 0]	b_i,
	 input wire	req_i,

	 output	reg	ready_o,
	 output	reg	[XLEN-1 : 0]	result_o
	 );


	wire is_a_zero, is_b_zero;

	assign is_a_zero = ~(|a_i);
	assign is_b_zero = ~(|b_i);

	wire [XLEN-1 : 0] op_a, op_b;

	assign op_a = a_i;
	assign op_b = b_i;

	wire	is_calc_done;
	reg	[XLEN-1 : 0]	reg32;
	reg	[XLEN*2 : 0]	result;
	reg	[5 : 0]		cnt;

	assign is_calc_done = ~|cnt;

	wire	[XLEN-1 : 0]	mull, mulh;

	assign mull = result[31 : 0];
	assign mulh = result[63 : 32]; 
//======================================================================================

	localparam	S_IDLE	= 2'b00;
	localparam	S_CALC	= 2'b01;
	localparam	S_DONE	= 2'b10;
	reg [1:0] S, S_nxt;

	always@(posedge clk_i)
	begin
		if(rst_i|~req_i)      //?
			S <= S_IDLE;
		else
			S <= S_nxt;
	end


	always@(*)
	begin
		case(S)
			S_IDLE:
				S_nxt = (is_a_zero | is_b_zero)? S_DONE : S_CALC;
			S_CALC:
				S_nxt = (is_calc_done)? S_DONE : S_CALC;
			S_DONE:
				S_nxt = S_IDLE;
			default:
				S_nxt = S_IDLE;
		endcase
	end

//======================================================================================
	wire	mul_add = result[0];

	wire	[31 : 0]	adder_opa, adder_opb;
	assign	adder_opa = reg32;
	assign	adder_opb = result[63 : 32];

	wire	[31 : 0]	adder_tmp = adder_opa + adder_opb;
	wire	[63 : 0]	result_tmp = {adder_tmp, result[31 : 0]};

	always@(posedge clk_i)
	begin
	if(S == S_IDLE && req_i == 1'b1)
		begin
		if(is_a_zero | is_b_zero)
			begin
			result <= 65'b0;
			end
		else
			begin
			cnt <= 'd31;
			reg32 <= op_a;
			result <= {1'b0, 32'b0, op_b};
			end
		end
	else if(S == S_CALC)
		begin
		cnt <= cnt - 'd1;
		result <= (mul_add)? {1'b0, result_tmp[63 :1]} : {1'b0, result[64 : 1]};
		end
	//else if(S == S_SIGN_ADJUST)
		//result <= (signed_adjust)? -result : result;
	end

//======================================================================================

	always @(posedge clk_i)
	begin
		if(S == S_DONE)
			begin
			result_o <= mull;
			ready_o <= 1'b1;
			end
		else
			begin
			result_o <= result_o;
			ready_o <= 1'b0;
			end
	end
endmodule

		


