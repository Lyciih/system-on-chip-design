`include "defines.v"

module shift_l_cell #(parameter XLEN = 32, parameter DISTANCE = 0)(
		input	wire		rst_i,
		input	wire[XLEN-1:0]	value_i,

		output	reg[XLEN-1:0]	value_o
		);

	always@(*)begin
		if(rst_i == 1)begin
			value_o = `ZERO;
		end
		else begin
			value_o = {value_i[XLEN-1-DISTANCE:0], {DISTANCE{1'b0}}};
		end
	end
endmodule
