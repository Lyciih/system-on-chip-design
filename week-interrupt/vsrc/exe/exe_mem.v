`include "defines.v"

module exe_mem(
		input	wire	rst_i,
		input	wire	clk_i,
		input	wire[5:0]	stall_i,
		input	wire		flush_interrupt_i,

		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire			reg_we_i,
		input	wire[`RDATA_WIDTH-1:0]	reg_wdata_i,

		input	wire[`ADDR_WIDTH-1:0]	mem_addr_i,
		input	wire[`DATA_WIDTH-1:0]	mem_data_i,
		input	wire			mem_we_i,
		input	wire[3:0]		mem_op_i,

		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,
		
		output	reg[`RDATA_WIDTH-1:0]	inst_o,
		output	reg[`ADDR_WIDTH-1:0]	inst_addr_o,
		//------------------------------------------------------
		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o,

		output	reg[`ADDR_WIDTH-1:0]	mem_addr_o,
		output	reg[`DATA_WIDTH-1:0]	mem_data_o,
		output	reg			mem_we_o,
		output	reg[3:0]		mem_op_o,


		input wire			csr_we_i,
		input wire[`CSR_ADDR_WIDTH-1:0]	csr_waddr_i,
		input wire[`DATA_WIDTH-1:0]	csr_wdata_i,

		output reg			csr_we_o,
		output reg[`CSR_ADDR_WIDTH-1:0]	csr_waddr_o,
		output reg[`DATA_WIDTH-1:0]	csr_wdata_o
	      );

	always@(posedge clk_i) begin
		if(rst_i == 1 | flush_interrupt_i) begin
			reg_waddr_o <= `ZERO_REG;
			reg_we_o <= `WRITE_ENABLE;
			reg_wdata_o <= `ZERO;
			mem_addr_o <= `ZERO;
			mem_data_o <= `ZERO;
			mem_we_o <= `WRITE_DISABLE;
			mem_op_o <= `MEM_NOP;
			csr_we_o <= `WRITE_DISABLE;
			csr_waddr_o <= 0;
			csr_wdata_o <= `ZERO;
			inst_o <= `NOP;
			inst_addr_o <= `ZERO;
		end
		else begin
			reg_waddr_o <= reg_waddr_i;
			reg_we_o <= reg_we_i;
			reg_wdata_o <= reg_wdata_i;
			mem_addr_o <= mem_addr_i;
			mem_data_o <= mem_data_i;
			mem_we_o <= mem_we_i;
			mem_op_o <= mem_op_i;
			csr_we_o <= csr_we_i;
			csr_waddr_o <= csr_waddr_i;
			csr_wdata_o <= csr_wdata_i;
			inst_o <= inst_i;
			inst_addr_o <= inst_addr_i;
		end
	end
endmodule
