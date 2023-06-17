`include "defines"

module mem(
		input	wire	rst_i,
		input	wire	clk_i,


		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire			reg_we_i,
		input	wire[`RDATA_WIDTH-1:0]	reg_wdata_i,
		
		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,
		
		output	reg[`RDATA_WIDTH-1:0]	inst_o,
		output	reg[`ADDR_WIDTH-1:0]	inst_addr_o,
		//output	reg[`RDATA_WIDTH-1:0]	inst_o,
		//output	reg[`ADDR_WIDTH-1:0]	inst_addr_o,

		input	wire[`ADDR_WIDTH-1:0]	mem_addr_i,
		input	wire[`DATA_WIDTH-1:0]	mem_data_i,
		input	wire			mem_we_i,
		input	wire[3:0]		mem_op_i,

		input	wire[`DATA_WIDTH-1:0]	ram_data_i,


		output	reg[`ADDR_WIDTH-1:0]	ram_addr_o,
		output	reg[`DATA_WIDTH-1:0]	ram_data_o,
		output	reg			ram_w_request_o,
		output	reg			ram_request_o,
		output	reg[3:0]		ram_op_o,

		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o,
		//output	reg			halt_o
		
		input wire			csr_we_i,
		input wire[`CSR_ADDR_WIDTH-1:0]	csr_waddr_i,
		input wire[`DATA_WIDTH-1:0]	csr_wdata_i,

		output reg			csr_we_o,
		output reg[`CSR_ADDR_WIDTH-1:0]	csr_waddr_o,
		output reg[`DATA_WIDTH-1:0]	csr_wdata_o
	  );

/*
	always@(posedge clk_i)begin
		if(mem_op_i == `SW && mem_addr_i == `HALT_ADDR)
			halt_o <= 1'b1;
		else
			halt_o <= halt_o;
	end
*/

	wire[1:0] ram_addr_offset = mem_addr_i[1:0];

	assign ram_data_o = mem_data_i;
	assign ram_op_o = mem_op_i;

	always@(*) begin
		if(rst_i == 1) begin
			reg_waddr_o = `ZERO_REG;
			reg_we_o = `WRITE_DISABLE;
			reg_wdata_o = `ZERO;

			inst_o = `ZERO;
			inst_addr_o = `ZERO;
			
			ram_addr_o = `ZERO;
			ram_data_o = 0;
			ram_w_request_o = `WRITE_DISABLE;
			ram_request_o = 0;
			csr_we_o = `WRITE_DISABLE;
			csr_waddr_o = 0;
			csr_wdata_o = `ZERO;
		end
		else begin
			reg_waddr_o = reg_waddr_i;
			reg_we_o = reg_we_i;

			inst_o = inst_i;
			inst_addr_o = inst_addr_i;

			ram_w_request_o = mem_we_i;
			ram_addr_o = mem_addr_i;
			csr_we_o = csr_we_i;
			csr_waddr_o = csr_waddr_i;
			csr_wdata_o = csr_wdata_i;
			case(mem_op_i)
				`SB: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`SH: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`SW: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`LB: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`LBU: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`LH: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`LHU: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				`LW: begin
					ram_request_o = 1;
					reg_wdata_o = ram_data_i;
				end
				default:begin
					reg_wdata_o = reg_wdata_i;
					ram_addr_o = `ZERO;
					ram_data_o = 0;
					ram_w_request_o = `WRITE_DISABLE;
					ram_request_o = 0;
				end
			endcase
		end
	end
endmodule
