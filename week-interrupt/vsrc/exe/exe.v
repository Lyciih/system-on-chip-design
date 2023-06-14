`include "defines.v" 

module exe(
		input	wire	rst_i,
		input	wire	clk_i,

		input 	wire[`DATA_WIDTH-1:0]	op1_i,
		input 	wire[`DATA_WIDTH-1:0]	op2_i,
		input	wire			reg_we_i,
		input	wire[`RADDR_WIDTH-1:0]	reg_waddr_i,
		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,
		
		input 	wire[`DATA_WIDTH-1:0]	exception_i,


		output	reg[`ADDR_WIDTH-1:0]	inst_addr_o,
		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			reg_we_o,
		output	reg[`RDATA_WIDTH-1:0]	reg_wdata_o,

		output	reg[`ADDR_WIDTH-1:0]	mem_addr_o,
		output	reg[`DATA_WIDTH-1:0]	mem_data_o,
		output	reg			mem_we_o,
		output	reg[3:0]		mem_op_o,
		
		output	reg			stallreq_o,
		output	reg			jump_enable_o,
		output	reg[`ADDR_WIDTH-1:0]	jump_addr_o,
		

		//to csr
		input	wire[`DATA_WIDTH-1:0]		csr_rdata_i,
		output	reg[`CSR_ADDR_WIDTH-1:0]	csr_raddr_o,
		
		//to exe_mem
		output	reg[`DATA_WIDTH-1:0]		csr_wdata_o,
		output	reg[`CSR_ADDR_WIDTH-1:0]	csr_waddr_o,
		output	reg				csr_we_o,
		
		output	reg[`DATA_WIDTH-1:0]		exception_o,
		
		input	wire				mem_exe_csr_we_i,
		input	wire[`CSR_ADDR_WIDTH-1:0]	mem_exe_csr_waddr_i,
		input	wire[`DATA_WIDTH-1:0]		mem_exe_csr_wdata_i
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
	wire		r_or_m_type = inst_i[25];	

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

	wire[1:0]	m_d_op;
	wire		rs1_signed_i;
	wire		rs2_signed_i;
	wire[31:0]	m_d_high_result;
	wire[31:0]	m_d_low_result;
	wire		m_d_ready;
	wire[5:0]	m_d_count;

	mul_div m_d(
			.clk_i(clk_i),
			.mul_div_req_i(inst_i[25]),
			.m_d_op(inst_i[14:12]),
			.op(inst_i[6:0]),
			.rs1(op1_i),
			.rs1_signed(rs1_signed_i),
			.rs2(op2_i),
			.rs2_signed(rs2_signed_i),

			.high(m_d_high_result),
			.low(m_d_low_result),
			.ready(m_d_ready),
			.count(m_d_count)
		   );

/*
	wire[`RDATA_WIDTH-1:0]	system_reg_wdata_o;
	wire[`RDATA_WIDTH-1:0]	system_csr_wdata_o;
	exe_type_system exe_type_system0(
			.rst_i(rst_i),
			.inst_i(inst_i),
			.op1_i(op1_i),
			.reg_wdata_o(system_reg_wdata_o),
			.csr_rdata_i(csr_rdata_i),
			.csr_wdata_o(system_csr_wdata_o)
			);
*/

	wire[31:20]			csr_addr = inst_i[31:20];
	reg[`DATA_WIDTH-1:0]		csr_rdata;
	always@(*) begin
		if(csr_addr == mem_exe_csr_waddr_i && mem_exe_csr_we_i == `WRITE_ENABLE) begin
			csr_rdata = mem_exe_csr_wdata_i;
		end
		else begin
			csr_rdata = csr_rdata_i;
		end
	end


	always@(*) begin
		if(rst_i == 1) begin
			reg_waddr_o = `ZERO_REG;
			reg_wdata_o = `ZERO;
			reg_we_o = `WRITE_DISABLE;
			exception_o = 0;
			inst_addr_o = `ZERO;
		end
		else begin
			reg_we_o = reg_we_i;
			mem_op_o = `MEM_NOP;
			
			exception_o = exception_i;

			//stallreq_o = 1'b0;
			jump_enable_o = 1'b0;
			jump_addr_o = `ZERO;

			csr_we_o = `WRITE_DISABLE;
			csr_raddr_o = 0;
			csr_waddr_o = 0;
			csr_wdata_o = `ZERO;

			inst_addr_o = inst_addr_i;
			
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
					case(r_or_m_type)
						`R_TYPE: begin
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
						`M_TYPE: begin
							if(m_d_ready == 1)begin
								stallreq_o = 0;
								reg_waddr_o = reg_waddr_i;
								reg_we_o = `WRITE_ENABLE;
								case(funct3)
									`INST_MUL: begin
										reg_wdata_o = m_d_low_result;
									end
									`INST_MULH: begin
										reg_wdata_o = m_d_high_result;
									end
									`INST_MULSU: begin
										reg_wdata_o = m_d_high_result;
									end
									`INST_MULHU: begin
										reg_wdata_o = m_d_high_result;
									end
									`INST_DIV: begin
										reg_wdata_o = m_d_low_result;
									end
									`INST_DIVU: begin
										reg_wdata_o = m_d_low_result;
									end
									`INST_REM: begin
										reg_wdata_o = m_d_high_result;
									end
									`INST_REMU: begin
										reg_wdata_o = m_d_high_result;
									end
								endcase
							end
							else begin
								stallreq_o = 1;
								reg_waddr_o = `ZERO_REG;
								reg_wdata_o = `ZERO;
								reg_we_o = `WRITE_DISABLE;
							end
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
							mem_addr_o = $signed(op1_i)+$signed(load_addr_offset);
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
				`INST_TYPE_SYSTEM: begin
					case(funct3)
						`INST_CSRRW: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = op1_i;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						`INST_CSRRWI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = op1_i;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						`INST_CSRRS: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = op1_i | csr_rdata;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						`INST_CSRRSI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = op1_i | csr_rdata;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						`INST_CSRRC: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = ~op1_i & csr_rdata;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						`INST_CSRRCI: begin
							reg_waddr_o = reg_waddr_i;
							reg_wdata_o = csr_rdata;
							reg_we_o = reg_we_i;

							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_ENABLE;
							csr_wdata_o = ~op1_i & csr_rdata;
							csr_raddr_o = inst_i[31:20];
							csr_waddr_o = inst_i[31:20];
						end
						default: begin
							reg_waddr_o = `ZERO_REG;
							reg_wdata_o = `ZERO;
							reg_we_o = `WRITE_DISABLE;
							
							mem_addr_o = `ZERO;
							mem_data_o = `ZERO;
							mem_we_o = `WRITE_DISABLE;
							mem_op_o = `MEM_NOP;
							csr_we_o = `WRITE_DISABLE;
							csr_wdata_o = `ZERO;
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



