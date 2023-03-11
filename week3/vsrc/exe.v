`include "defines.v"

module exe(
		input	wire	rst_i,

		input 	wire[`DATA_WIDTH-1:0]	op1_i,
		input 	wire[`DATA_WIDTH-1:0]	op2_i,
		input	wire			reg_we_i,
		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire[`RDATA_WIDTH-1:0]	inst_i,

		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o
	  );


	wire[6:0] 	opcode = inst_i[6:0];
	wire[2:0] 	funct3 = inst_i[14:12];
	wire[6:0] 	funct7 = inst_i[31:25];
	wire[4:0]  	shamt = inst_i[24:20];
	wire		direct = inst_i[14];
	wire		arithmetic = inst_i[30];
	wire[31:0]	shift_result;


	reg[31:0] 	compare_sub;



	shift shift0(
			.rst_i(rst_i),
			.value_i(op1_i),
			.shamt_i(shamt),
			.direct_i(direct),
			.arithmetic_i(arithmetic),
			.value_o(shift_result)
		    );


	always@(*) begin
		if(rst_i == 1) begin
			reg_waddr_o = `ZERO_REG;
			reg_wdata_o = `ZERO;
			reg_we_o = `WRITE_DISABLE;
		end
		else begin
			reg_we_o = reg_we_i;
			case(opcode)
				`INST_TYPE_I: begin
					case(funct3)
						`INST_ADDI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i + op2_i;
						end
						`INST_SLTI: begin
							reg_waddr_o = reg_waddr_i;

							compare_sub = op1_i - op2_i;
							if(compare_sub[31] == 1)begin
								reg_wdata_o = 1;
							end
							else begin
								reg_wdata_o = 0;
							end
						end
						`INST_SLTIU: begin
							reg_waddr_o = reg_waddr_i;
							if(op1_i < op2_i)begin
								reg_wdata_o = 1;
							end
							else begin
								reg_wdata_o = 0;
							end
						end
						`INST_XORI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i ^ op2_i;
						end
						`INST_ORI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i | op2_i;
						end
						`INST_ANDI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i & op2_i;
						end
						`INST_SLLI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = shift_result;
						end
						`INST_SRLI_AND_SRAI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = shift_result;
						end
						default: begin
							reg_waddr_o = `ZERO_REG;
							reg_wdata_o = `ZERO;
							reg_we_o = `WRITE_DISABLE;
						end
					endcase
				end
				default: begin
					reg_waddr_o = `ZERO_REG;
					reg_wdata_o = `ZERO;
					reg_we_o = `WRITE_DISABLE;
				end
			endcase
		end
	end
endmodule



