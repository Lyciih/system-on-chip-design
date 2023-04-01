`include "defines"

module mem(
		input	wire	rst_i,

		//from ram
		input	wire[`DATA_WIDTH-1:0]	ram_data_i,

		//to ram
		output	reg[`ADDR_WIDTH-1:0]	ram_addr_o,
		output	ram_w_request_o,
		output	reg[`DATA_WIDTH-1:0]	ram_data_o,

		//from exe exe_mem 
		input	wire			mem_we_i,
		input	wire[`ADDR_WIDTH-1:0]	mem_addr_i,
		input	wire[`DATA_WIDTH-1:0]	mem_data_i,
		input	wire[3:0]		mem_op_i,
/*
		output	wire			mem_we_o,
		output	wire[`ADDR_WIDTH-1:0]	mem_addr_o,
		output	wire[`DATA_WIDTH-1:0]	mem_data_o,
		output	wire[3:0]		mem_op_o,
*/
		//
		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire			reg_we_i,
		input	wire[`RDATA_WIDTH-1:0]	reg_wdata_i,

		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o
	  );


	wire[1:0] ram_addr_offset = mem_addr_i[1:0];

	always@(*) begin
		if(rst_i == 1'b1) begin
			reg_waddr_o = `ZERO_REG;
			reg_we_o = `WRITE_ENABLE;
			reg_wdata_o = `ZERO;
			ram_addr_o = `ZERO;
			ram_data_o = `ZERO;
			ram_w_request_o = `WRITE_DISABLE;
		end
		else begin
			reg_waddr_o = reg_waddr_i;
			reg_we_o = reg_we_i;
			ram_w_request_o = mem_we_i;
			ram_addr_o = mem_addr_i;
			case (mem_op_i)
				`LB: begin
					case (ram_addr_offset)
					2'b00: begin
						reg_wdata_o = {{24{ram_data_i[7]}}, ram_data_i[7:0]};
					end
					2'b01: begin
						reg_wdata_o = {{24{ram_data_i[15]}}, ram_data_i[15:8]};
					end
					2'b10: begin
						reg_wdata_o = {{24{ram_data_i[23]}}, ram_data_i[23:16]};
					end
					default: begin
						reg_wdata_o = {{24{ram_data_i[31]}}, ram_data_i[31:24]};
					end
					endcase
				end
				`SB: begin
					case (ram_addr_offset)
					2'b00: begin
						ram_data_o = {ram_data_i[31:8], mem_data_i[7:0]};
					end
					2'b01: begin
						ram_data_o = {ram_data_i[31:16], mem_data_i[7:0], ram_data_i[7:0]};
					end
					2'b10: begin
						ram_data_o = {ram_data_i[31:24], mem_data_i[7:0], ram_data_i[15:0]};
					end
					default: begin
						ram_data_o = {mem_data_i[7:0], ram_data_i[23:0]};
					end
					endcase
				end
				default: begin
					reg_wdata_o = reg_wdata_i;
					ram_addr_o = `ZERO;
					ram_data_o = `ZERO;
					ram_w_request_o = `WRITE_DISABLE;
				end
			endcase
		end
	end
endmodule
