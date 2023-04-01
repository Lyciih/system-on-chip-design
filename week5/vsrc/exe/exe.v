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
	wire[31:0]	shift_result_type_i;
	wire[31:0]	shift_result_type_r;

	wire[]

	reg[31:0] 	compare_sub_type_i;
	reg[31:0] 	compare_sub_type_r;

	wire		r_type_add_or_sub = inst_i[30];
	wire		r_type_sl_or_sr = inst_i[14];
	wire		r_type_arithmetic = inst_i[30];


	shift shift_i_type(
			.rst_i(rst_i),
			.value_i(op1_i),
			.shamt_i(shamt),
			.direct_i(direct),
			.arithmetic_i(arithmetic),
			.value_o(shift_result_type_i)
		    );

	shift shift_r_type(
			.rst_i(rst_i),
			.value_i(op1_i),
			.shamt_i(op2_i[4:0]),
			.direct_i(r_type_sl_or_sr),
			.arithmetic_i(r_type_arithmetic),
			.value_o(shift_result_type_r)
		    );

	exe_type_s_l exe_type_s_l_0(
			.rst_i(rsr_i),
			.op1_i(op1_i),
			.op2_i(op2_i),
			.inst_i(inst_i),

			.reg_wdata_o(),
			.reg_we_o(),
			.mem_addr_o(),
			.mem_data_o(),
			.mem_we_o(),
			.mem_op_o()
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

							compare_sub_type_i = op1_i - op2_i;
							if(compare_sub_type_i[31] == 1)begin
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
							reg_wdata_o = shift_result_type_i;
						end
						`INST_SRLI_AND_SRAI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = shift_result_type_i;
						end
						default: begin
							reg_waddr_o = `ZERO_REG;
							reg_wdata_o = `ZERO;
							reg_we_o = `WRITE_DISABLE;
						end
					endcase
				end
				`INST_TYPE_R_M: begin
					case(funct3)
						`INST_ADD_SUB: begin
							reg_waddr_o = reg_waddr_i;

							if(r_type_add_or_sub == 0)begin
								reg_wdata_o = op1_i + op2_i;
							end
							else begin
								reg_wdata_o = op1_i - op2_i;
							end
						end
						`INST_SLL: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = shift_result_type_r;
						end
						`INST_SLT: begin
							reg_waddr_o = reg_waddr_i;
							
							compare_sub_type_r = op1_i - op2_i;
							if(compare_sub_type_r[31] == 1)begin
								reg_wdata_o = 1;
							end
							else begin
								reg_wdata_o = 0;
							end
						end
						`INST_SLTU: begin
							reg_waddr_o = reg_waddr_i;

							if(op1_i < op2_i)begin
								reg_wdata_o = 1;
							end
							else begin
								reg_wdata_o = 0;
							end
						end
						`INST_XOR: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i ^ op2_i;
						end
						`INST_SR: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = shift_result_type_r;
						end
						`INST_OR: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i | op2_i;
						end
						`INST_AND: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = op1_i & op2_i;
						end
						default: begin
							reg_waddr_o = `ZERO_REG;
							reg_wdata_o = `ZERO;
							reg_we_o = `WRITE_DISABLE;
						end
					endcase
				end
				`INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = op1_i + op2_i;
					reg_we_o = reg_we_i;
				end
				`INST_TYPE_S, `INST_TYPE_L:begin //type S L
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = op1_i + op2_i;
					reg_we_o = reg_we_i;
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



