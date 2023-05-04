`include "defines.v" 

module exe(
		input	wire	rst_i,

		input 	wire[`DATA_WIDTH-1:0]	op1_i,
		input 	wire[`DATA_WIDTH-1:0]	op2_i,
		input	wire			reg_we_i,
		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,

		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o,

		output	reg[`ADDR_WIDTH-1:0]	mem_addr_o,
		output	reg[`DATA_WIDTH-1:0]	mem_data_o,
		output	reg			mem_we_o,
		output	reg[3:0]		mem_op_o,
		
		//output	reg			stallreq_o,
		output	reg			jump_enable_o,
		output	reg[`ADDR_WIDTH-1:0]	jump_addr_o
	  );


	wire[6:0] 	opcode = inst_i[6:0];

	wire[2:0] 	funct3 = inst_i[14:12];
	wire[6:0] 	funct7 = inst_i[31:25];
	wire[4:0]  	shamt = inst_i[24:20];
	wire		direct = inst_i[14];
	wire		arithmetic = inst_i[30];
	wire[31:0]	shift_result_type_i;
	wire[31:0]	shift_result_type_r;
	wire[31:0] 	b_type_offset = inst_addr_i + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
	wire[31:0] 	jal_type_offset = inst_addr_i + {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};

	wire[`ADDR_WIDTH-1:0]	store_addr_offset;
	assign store_addr_offset = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};

	wire[`ADDR_WIDTH-1:0]	load_addr_offset;
	assign load_addr_offset = {{20{inst_i[31]}}, inst_i[31:20]};

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

	always@(*) begin
		if(rst_i == 1) begin
			reg_waddr_o = `ZERO_REG;
			reg_wdata_o = `ZERO;
			reg_we_o = `WRITE_DISABLE;
		end
		else begin
			reg_we_o = reg_we_i;
			mem_op_o = `MEM_NOP;

			//stallreq_o = 1'b0;
			jump_enable_o = 1'b0;
			jump_addr_o = `ZERO;

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
							if($signed(op1_i) < $signed(op2_i))begin
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
							
							if($signed(op1_i) < $signed(op2_i))begin
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
				`INST_TYPE_LUI, `INST_TYPE_AUIPC: begin
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = op1_i+op2_i;
					reg_we_o = reg_we_i;
				end
				`INST_TYPE_S: begin
					reg_waddr_o = `ZERO_REG;
					reg_wdata_o = `ZERO;
					reg_we_o = `WRITE_DISABLE;
					mem_addr_o = $signed(op1_i)+$signed(store_addr_offset);
					mem_data_o = op2_i;
					mem_we_o = `WRITE_ENABLE;
					case(funct3)
						`INST_SB:begin
							mem_op_o = `SB;
						end
						`INST_SH:begin
							mem_op_o = `SH;
						end
						`INST_SW:begin
							mem_op_o = `SW;
						end
						default:begin
							mem_op_o = `MEM_NOP;
						end
					endcase
				end
				`INST_TYPE_L: begin
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = `ZERO;
					reg_we_o = `WRITE_ENABLE;
					mem_addr_o = $signed(op1_i)+$signed(load_addr_offset);
					mem_data_o = `ZERO;
					mem_we_o = `WRITE_DISABLE;
					case(funct3)
						`INST_LB:begin
							mem_op_o = `LB;
						end
						`INST_LH:begin
							mem_op_o = `LH;
						end
						`INST_LW:begin
							mem_op_o = `LW;
						end
						`INST_LBU:begin
							mem_op_o = `LBU;
						end
						`INST_LHU:begin
							mem_op_o = `LHU;
						end
						default:begin
							mem_op_o = `MEM_NOP;
						end
					endcase
				end
				`INST_TYPE_JAL: begin
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = inst_addr_i + 4;

					//stallreq_o = 1;
					jump_enable_o = 1'b1;
					jump_addr_o = jal_type_offset; 
				end
				`INST_TYPE_JALR: begin
					reg_waddr_o = reg_waddr_i;
					reg_wdata_o = inst_addr_i + 4;

					//stallreq_o = 1;
					jump_enable_o = 1'b1;
					jump_addr_o = (op1_i + {{20{inst_i[31]}}, inst_i[31:20]}) & -1; 
				end
				`INST_TYPE_B: begin
					reg_waddr_o = `ZERO_REG;
					reg_wdata_o = `ZERO;

					case(funct3)
						`INST_BEQ:begin
							if(op1_i == op2_i)begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						`INST_BNE:begin
							if(op1_i != op2_i)begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						`INST_BLT:begin
							if($signed(op1_i) < $signed(op2_i))begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						`INST_BGE:begin
							if($signed(op1_i) >= $signed(op2_i))begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						`INST_BLTU:begin
							if(op1_i < op2_i)begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						`INST_BGEU:begin
							if(op1_i >= op2_i)begin
								jump_enable_o = 1'b1;
								jump_addr_o = b_type_offset;
							end
						end
						default:begin
							jump_enable_o = 1'b0;
							jump_addr_o = `ZERO;
						end
					endcase
				end
				default: begin
					reg_waddr_o = `ZERO_REG;
					reg_wdata_o = `ZERO;
					reg_we_o = `WRITE_DISABLE;

					mem_addr_o = `ZERO;
					mem_data_o = `ZERO;
					mem_we_o = `WRITE_DISABLE;
					mem_op_o = `MEM_NOP;
				end
			endcase
		end
	end
endmodule



