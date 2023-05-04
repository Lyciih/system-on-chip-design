`include "defines.v"

module exe_type_m(
		input	wire	clk_i,
		input	wire	rst_i,

		input	wire[`DATA_WIDTH-1:0]	op1_i,
		input	wire[`DATA_WIDTH-1:0]	op2_i,
		input	wire[`RDATA_WIDTH-1:0]	inst_i,

		output	wire			stall_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o,
		output	reg			reg_we_o
		);
