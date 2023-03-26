`include "defines.v"

module shift_r_cell #(parameter XLEN = 32, parameter DISTANCE = 0)(
		input	wire		rst_i,
		input	wire[XLEN-1:0]	value_i,
		input	wire		arithmetic_i,

		output	reg[XLEN-1:0]	value_o
		);

	always@(*)begin
		if(rst_i == 1)begin
			value_o = `ZERO;
		end
		else if(arithmetic_i == 0)begin
			value_o = {{DISTANCE{1'b0}}, value_i[XLEN-1:DISTANCE]};
		end
		else begin
			value_o = {{DISTANCE{value_i[XLEN-1]}}, value_i[XLEN-1:DISTANCE]};
		end
	end
endmodule
