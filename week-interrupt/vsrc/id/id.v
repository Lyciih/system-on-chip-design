`include "defines.v"

module	id(
		input	wire			rst_i,
		

		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,
		input	wire[`DATA_WIDTH-1:0]	inst_i,


		input	wire[`RDATA_WIDTH-1:0]	reg1_rdata_i,
		input	wire[`RDATA_WIDTH-1:0]	reg2_rdata_i,

		//from id_exe
		input	wire			pre_inst_is_load_i,
		input	wire[`RADDR_WIDTH-1:0]	exe_rd_i,

		//為了解決 data hazard 
		input	wire[`RADDR_WIDTH-1:0]	exe_reg_waddr_i,
		input	wire			exe_reg_we_i,
		input	wire[`RDATA_WIDTH-1:0]	exe_reg_wdata_i,
		
		input	wire[`RADDR_WIDTH-1:0]	mem_reg_waddr_i,
		input	wire			mem_reg_we_i,
		input	wire[`RDATA_WIDTH-1:0]	mem_reg_wdata_i,
		//


		output	reg[`RADDR_WIDTH-1:0]	reg1_raddr_o,
		output	reg[`RADDR_WIDTH-1:0]	reg2_raddr_o,
		output	reg			reg1_re_o,
		output	reg			reg2_re_o,

		output	reg[`DATA_WIDTH-1:0]	inst_o,
		output	reg[`ADDR_WIDTH-1:0]	inst_addr_o,
		output	reg[`RDATA_WIDTH-1:0]	op1_o,
		output	reg[`RDATA_WIDTH-1:0]	op2_o,
		output	reg			reg_we_o,
		output	reg[`RADDR_WIDTH-1:0]	reg_waddr_o,
		output	reg			stallreq_o
		);


	reg[`RDATA_WIDTH-1:0]	op1_o_final;
	reg[`RDATA_WIDTH-1:0]	op2_o_final;


	wire[6:0]		opcode = inst_i[6:0];
	wire[4:0]		rd = inst_i[11:7];
	wire[2:0]		funct3 = inst_i[14:12];
	wire[4:0]		rs1 = inst_i[19:15];
	wire[4:0]		rs2 = inst_i[24:20];

	wire[`RADDR_WIDTH-1:0]	i_reg1_raddr_o;
	wire[`RADDR_WIDTH-1:0]	i_reg2_raddr_o;
	wire			i_reg1_re_o;
	wire			i_reg2_re_o;
	wire[`RDATA_WIDTH-1:0]	i_op1_o;
	wire[`RDATA_WIDTH-1:0]	i_op2_o;
	wire			i_reg_we_o;
	wire[`RADDR_WIDTH-1:0]	i_reg_waddr_o;


	wire[`RADDR_WIDTH-1:0]	r_reg1_raddr_o;
	wire[`RADDR_WIDTH-1:0]	r_reg2_raddr_o;
	wire			r_reg1_re_o;
	wire			r_reg2_re_o;
	wire[`RDATA_WIDTH-1:0]	r_op1_o;
	wire[`RDATA_WIDTH-1:0]	r_op2_o;
	wire			r_reg_we_o;
	wire[`RADDR_WIDTH-1:0]	r_reg_waddr_o;

	wire			is_load_hazard;
	assign	is_load_hazard = (pre_inst_is_load_i == 1'b1 && (rs1 == exe_rd_i || rs2 == exe_rd_i));


	always@(*)begin
		if(is_load_hazard)
			stallreq_o = 1'b1;
		else
			stallreq_o = 1'b0;
	end



	id_type_i	inst_type_i(
			.inst_i(inst_i),
			.reg1_rdata_i(reg1_rdata_i),
			.reg2_rdata_i(reg2_rdata_i),
			.reg1_raddr_o(i_reg1_raddr_o),
			.reg2_raddr_o(i_reg2_raddr_o),
			.reg1_re_o(i_reg1_re_o),
			.reg2_re_o(i_reg2_re_o),
			.op1_o(i_op1_o),
			.op2_o(i_op2_o),
			.reg_we_o(i_reg_we_o),
			.reg_waddr_o(i_reg_waddr_o)
			);


	id_type_r	inst_type_r(
			.inst_i(inst_i),
			.reg1_rdata_i(reg1_rdata_i),
			.reg2_rdata_i(reg2_rdata_i),
			.reg1_raddr_o(r_reg1_raddr_o),
			.reg2_raddr_o(r_reg2_raddr_o),
			.reg1_re_o(r_reg1_re_o),
			.reg2_re_o(r_reg2_re_o),
			.op1_o(r_op1_o),
			.op2_o(r_op2_o),
			.reg_we_o(r_reg_we_o),
			.reg_waddr_o(r_reg_waddr_o)
			);


	always@(*)
		begin
		if(rst_i == 1)
			begin
			inst_o = `NOP;
			inst_addr_o = `ZERO;
			reg1_raddr_o = `ZERO_REG;
			reg2_raddr_o = `ZERO_REG;
			reg1_re_o = `READ_DISABLE;
			reg2_re_o = `READ_DISABLE;
			reg_we_o = `WRITE_DISABLE;
			reg_waddr_o = `ZERO_REG;
			op1_o_final = `ZERO;
			op2_o_final = `ZERO;
			end
		else
			begin
			case(opcode)
				`INST_TYPE_I:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = i_reg1_raddr_o;
					reg2_raddr_o = i_reg2_raddr_o;
					reg1_re_o = i_reg1_re_o;
					reg2_re_o = i_reg2_re_o;
					reg_we_o = i_reg_we_o;
					reg_waddr_o = i_reg_waddr_o;
					op1_o_final = i_op1_o;
					op2_o_final = i_op2_o;
					end
				`INST_TYPE_R_M:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = r_reg1_raddr_o;
					reg2_raddr_o = r_reg2_raddr_o;
					reg1_re_o = r_reg1_re_o;
					reg2_re_o = r_reg2_re_o;
					reg_we_o = r_reg_we_o;
					reg_waddr_o = r_reg_waddr_o;
					op1_o_final = r_op1_o;
					op2_o_final = r_op2_o;
					end
				`INST_TYPE_LUI:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = `ZERO_REG;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_DISABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_ENABLE;
					reg_waddr_o = rd;
					op1_o_final = {inst_i[31:12],{12{1'b0}}};
					op2_o_final = {32{1'b0}};
					end
				`INST_TYPE_AUIPC:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = `ZERO_REG;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_DISABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_ENABLE;
					reg_waddr_o = rd;
					op1_o_final = inst_addr_i;
					op2_o_final = {inst_i[31:12],{12{1'b0}}};
					end
				`INST_TYPE_S:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = rs1;
					reg2_raddr_o = rs2;
					reg1_re_o = `READ_ENABLE;
					reg2_re_o = `READ_ENABLE;
					reg_we_o = `WRITE_DISABLE;
					reg_waddr_o = `ZERO_REG;
					op1_o_final = reg1_rdata_i;
					op2_o_final = reg2_rdata_i;
					end
				`INST_TYPE_L:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = rs1;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_ENABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_ENABLE;
					reg_waddr_o = rd;
					op1_o_final = reg1_rdata_i;
					op2_o_final = `ZERO;
					end
				`INST_TYPE_JAL:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = `ZERO_REG;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_DISABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_ENABLE;
					reg_waddr_o = rd;
					op1_o_final = `ZERO;
					op2_o_final = `ZERO;
					end
				`INST_TYPE_JALR:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = rs1;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_ENABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_ENABLE;
					reg_waddr_o = rd;
					op1_o_final = reg1_rdata_i;
					op2_o_final = `ZERO;
					end
				`INST_TYPE_B:
					begin
					inst_o = inst_i;
					inst_addr_o = inst_addr_i;
					reg1_raddr_o = rs1;
					reg2_raddr_o = rs2;
					reg1_re_o = `READ_ENABLE;
					reg2_re_o = `READ_ENABLE;
					reg_we_o = `WRITE_DISABLE;
					reg_waddr_o = `ZERO_REG;
					op1_o_final = reg1_rdata_i;
					op2_o_final = reg2_rdata_i;
					end
				`INST_TYPE_SYSTEM: begin
					case(funct3)
						`INST_CSRRW: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = rs1;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_ENABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final = reg1_rdata_i;
							op2_o_final = `ZERO;
						end
						`INST_CSRRWI: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = `ZERO_REG;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_DISABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final ={{27{1'b0}}, inst_i[19:15]};
							op2_o_final = `ZERO;
						end
						`INST_CSRRS: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = rs1;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_ENABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final = reg1_rdata_i;
							op2_o_final = `ZERO;
						end
						`INST_CSRRSI: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = `ZERO_REG;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_DISABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final ={{27{1'b0}}, inst_i[19:15]};
							op2_o_final = `ZERO;
						end
						`INST_CSRRC: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = rs1;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_ENABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final = reg1_rdata_i;
							op2_o_final = `ZERO;
						end
						`INST_CSRRCI: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = `ZERO_REG;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_DISABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_ENABLE;
							reg_waddr_o = rd;
							op1_o_final ={{27{1'b0}}, inst_i[19:15]};
							op2_o_final = `ZERO;
						end
						default: begin
							inst_o = inst_i;
							inst_addr_o = inst_addr_i;
							reg1_raddr_o = `ZERO_REG;
							reg2_raddr_o = `ZERO_REG;
							reg1_re_o = `READ_DISABLE;
							reg2_re_o = `READ_DISABLE;
							reg_we_o = `WRITE_DISABLE;
							reg_waddr_o = `ZERO_REG;
							op1_o_final = `ZERO;
							op2_o_final = `ZERO;
						end
					endcase
				end
				default:
					begin
					inst_o = `NOP;
					inst_addr_o = `ZERO;
					reg1_raddr_o = `ZERO_REG;
					reg2_raddr_o = `ZERO_REG;
					reg1_re_o = `READ_DISABLE;
					reg2_re_o = `READ_DISABLE;
					reg_we_o = `WRITE_DISABLE;
					reg_waddr_o = `ZERO_REG;
					op1_o_final = `ZERO;
					op2_o_final = `ZERO;
					end
			endcase
			end
		end


	always@(*)
		begin
		if(rst_i == 1)
			begin
			op1_o = `ZERO;
			end
		else if(reg1_re_o == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg1_raddr_o && reg1_raddr_o != 0)
			begin
			op1_o = exe_reg_wdata_i;
			end
		else if(reg1_re_o == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg1_raddr_o && reg1_raddr_o != 0)
			begin
			op1_o = mem_reg_wdata_i;
			end
		else
			begin
			op1_o = op1_o_final;
			end
		end
			
	always@(*)
		begin
		if(rst_i == 1)
			begin
			op2_o = `ZERO;
			end
		else if(reg2_re_o == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg2_raddr_o)
			begin
			op2_o = exe_reg_wdata_i;
			end
		else if(reg2_re_o == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg2_raddr_o)
			begin
			op2_o = mem_reg_wdata_i;
			end
		else
			begin
			op2_o = op2_o_final;
			end
		end
endmodule


