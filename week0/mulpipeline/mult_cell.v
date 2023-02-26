module mult_cell #(
		parameter XLEN = 32,
		parameter SHIFT = 0
		)
	(
		input	wire		clk_i,
		input	wire		rst_i,
		input	wire		en_i,
		input	wire		flush_i,
		input	wire[XLEN-1:0]	a_i,
		input	wire		b_i,

		output	reg[XLEN*2:0]	acc_o,
		output	reg		ready_o
	);

	always@(posedge clk_i)
	begin
		if(rst_i)
		begin
			ready_o	<= 'b0;
			acc_o	<= 'b0;
		end
		else if(flush_i)
		begin
			ready_o	<= 'b0;
			acc_o	<= 'b0;
		end
		else if(en_i)
		begin
			ready_o	<= 1'b1;
			if(b_i)
			begin
				acc_o	<= {{(XLEN + 1 - SHIFT){1'b0}}, a_i, {SHIFT{1'b0}}};
			end
			else
			begin
				acc_o	<= 'b0;
			end
		end
		else
		begin
			ready_o	<= 'b0;
			acc_o	<= 'b0;
		end

	end
endmodule
