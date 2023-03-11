`include "defines.v"

module shift #(parameter XLEN = 32)(
		input	wire rst_i,
		input	wire[XLEN-1:0]	value_i,
		input	wire[4:0]	shamt_i,
		input	wire		direct_i,
		input	wire		arithmetic_i,

		output	reg[XLEN-1:0]	value_o
		);

	wire [XLEN-1:0]	shift_l_temp[XLEN-1:0];
	wire [XLEN-1:0]	shift_r_temp[XLEN-1:0];


	shift_l_cell	#(.XLEN(XLEN), .DISTANCE(0))
	shift_l_cell_0
	(
	 	.rst_i		(rst_i),
		.value_i	(value_i),

		.value_o	(shift_l_temp[0])
	);

	genvar i;
	generate
		for(i = 1; i <= XLEN - 1; i = i + 1)begin
			shift_l_cell	#(.XLEN(XLEN), .DISTANCE(i))
			shift_l_sell_n
			(
				.rst_i		(rst_i),
				.value_i	(value_i),

				.value_o	(shift_l_temp[i])
			);
		end
	endgenerate




	shift_r_cell	#(.XLEN(XLEN), .DISTANCE(0))
	shift_r_cell_0
	(
	 	.rst_i		(rst_i),
		.value_i	(value_i),
		.arithmetic_i	(arithmetic_i),

		.value_o	(shift_r_temp[0])
	);

	generate
		for(i = 1; i <= XLEN - 1; i = i + 1)begin
			shift_r_cell	#(.XLEN(XLEN), .DISTANCE(i))
			shift_r_sell_n
			(
				.rst_i		(rst_i),
				.value_i	(value_i),
				.arithmetic_i	(arithmetic_i),

				.value_o	(shift_r_temp[i])
			);
		end
	endgenerate





	always@(*)begin
		if(rst_i) begin
			value_o = 32'b0;
		end
		else if(direct_i == 0)begin
			value_o = shift_l_temp[shamt_i];
		end
		else begin
			value_o = shift_r_temp[shamt_i];
		end
	end
endmodule
			 	

