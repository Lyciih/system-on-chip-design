`include "defines.v"

module interrupt(
		input	wire	clk_i,
		input	wire	rst_i,

		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,

		output	reg			interrupt_enable_o,
		output	reg[`ADDR_WIDTH-1:0]	int_addr_o,
		
		//from csr
		input	wire[`ADDR_WIDTH-1:0]	mepc_i
		);

	reg	interrupt_signal;

	assign	interrupt_enable_o = interrupt_signal;

	always@(*) begin
		if(rst_i == 1) begin
			interrupt_enable_o = 0;
			int_addr_o = 0;
		end
		else if(inst_i == `ECALL) begin
			interrupt_enable_o = 1;
			int_addr_o = 100;
		end
		else if(inst_i == `MRET) begin
			interrupt_enable_o = 1;
			int_addr_o = mepc_i;
		end
		else begin
			interrupt_enable_o = 0;
			int_addr_o = 0;
		end
	end


endmodule
