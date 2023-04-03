`include	"defines.v"

module	test_top(
		input	wire	rst_i,
		input	wire	clk_i,
		output	reg	halt_o	//for isa test
		);


	wire[`ADDR_WIDTH-1:0]	pc_wire;
	wire			ce_wire;

	//pipe_ctrl
	wire[5:0]		ctrl_stall_o;
	wire			ctrl_flush_jump_o;
	wire[`ADDR_WIDTH-1:0]	ctrl_new_pc_o;

	//if to if_id
	wire[`ADDR_WIDTH-1:0]	if_inst_addr_o;
	wire[`DATA_WIDTH-1:0]	if_inst_o;

	//if_id to id
	wire[`ADDR_WIDTH-1:0]	if_id_inst_addr_o;
	wire[`DATA_WIDTH-1:0]	if_id_inst_o;

	//id to id_exe
	wire[`DATA_WIDTH-1:0]	id_inst_o;
	wire[`ADDR_WIDTH-1:0]	id_inst_addr_o;
	wire[`RDATA_WIDTH-1:0]	id_op1_o;
	wire[`RDATA_WIDTH-1:0]	id_op2_o;
	wire			id_reg_we_o;
	wire[`RADDR_WIDTH-1:0]	id_reg_waddr_o;
	
	//id to regfile
	wire[`RADDR_WIDTH-1:0]	id_reg1_addr_o;
	wire[`RADDR_WIDTH-1:0]	id_reg2_addr_o;
	wire			id_reg1_re_o;
	wire			id_reg2_re_o;

	//id to pipe_ctrl
	wire			id_pipe_ctrl_stallreq_o;

	//regfile 對外
	wire[`RDATA_WIDTH-1:0]	reg1_data_o;
	wire[`RDATA_WIDTH-1:0]	reg2_data_o;

	//id_exe to exe
	wire[`RDATA_WIDTH-1:0]	id_exe_op1_o;
	wire[`RDATA_WIDTH-1:0]	id_exe_op2_o;
	wire			id_exe_reg_we_o;
	wire[`RADDR_WIDTH-1:0]	id_exe_reg_waddr_o;
	wire[`DATA_WIDTH-1:0]	id_exe_inst_o;
	wire[`ADDR_WIDTH-1:0]	id_exe_inst_addr_o;

	//id_exe to id
	wire			id_exe_id_inst_is_load_o;
	wire[`RADDR_WIDTH-1:0]	id_exe_id_rd_o;

	//exe
	wire[`RADDR_WIDTH-1:0]	exe_reg_waddr_o;
	wire			exe_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	exe_reg_wdata_o;
	wire[`ADDR_WIDTH-1:0]	exe_mem_addr_o;
	wire[`DATA_WIDTH-1:0]	exe_mem_data_o;
	wire			exe_mem_we_o;
	wire[3:0]		exe_mem_op_o;

	wire			exe_pipe_ctrl_stallreq_o;
	wire			exe_pipe_ctrl_jump_enable_o;
	wire[`ADDR_WIDTH-1:0]	exe_pipe_ctrl_jump_addr_o;

	//exe_mem
	wire[`RADDR_WIDTH-1:0]	exe_mem_reg_waddr_o;
	wire			exe_mem_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	exe_mem_reg_wdata_o;
	wire[`ADDR_WIDTH-1:0]	exe_mem_mem_addr_o;
	wire[`DATA_WIDTH-1:0]	exe_mem_mem_data_o;
	wire			exe_mem_mem_we_o;
	wire[3:0]		exe_mem_mem_op_o;

	//mem
	wire[`ADDR_WIDTH-1:0]	mem_ram_addr_o;
	wire[`DATA_WIDTH-1:0]	mem_ram_data_o;
	wire			mem_ram_w_request_o;

	wire[`RADDR_WIDTH-1:0]	mem_reg_waddr_o;
	wire			mem_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	mem_reg_wdata_o;

	wire			mem_halt_o;	//for isa test

	//ram
	wire[`DATA_WIDTH-1:0]	ram_mem_data_o;


	//mem_wb
	wire[`RADDR_WIDTH-1:0]	mem_wb_reg_waddr_o;
	wire			mem_wb_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	mem_wb_reg_wdata_o;

	pipe_ctrl ctrl0(
			.rst_i(rst_i),
			.stallreq_from_id_i(id_pipe_ctrl_stallreq_o),
			.stallreq_from_exe_i(exe_pipe_ctrl_stallreq_o),
			.jump_enable_i(exe_pipe_ctrl_jump_enable_o),
			.jump_addr_i(exe_pipe_ctrl_jump_addr_o),

			.stall_o(ctrl_stall_o),
			.flush_jump_o(ctrl_flush_jump_o),
			.new_pc_o(ctrl_new_pc_o)
			);

	pc_reg	pc_reg0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),
			.flush_jump_i(ctrl_flush_jump_o),
			.new_pc_i(ctrl_new_pc_o),
			.pc_o(pc_wire),
			.ce_o(ce_wire)
		       );
/*
	rom	rom0(
			.addr_i(pc_wire),
			.clk_i(clk_i),
			.ce_i(ce_wire),
			.inst_o(if_inst_o)
		    );
*/
	assign	if_inst_addr_o	=  pc_wire;

	if_id	if_id0(
			.clk_i(clk_i),
			.rst_i(rst_i),
			.stall_i(ctrl_stall_o),
			.flush_jump_i(ctrl_flush_jump_o),
			.inst_addr_i(if_inst_addr_o),
			.inst_i(if_inst_o),
			.inst_addr_o(if_id_inst_addr_o),
			.inst_o(if_id_inst_o)
		      );

	id	id0(
			.rst_i(rst_i),

			.inst_addr_i(if_id_inst_addr_o),
			.inst_i(if_id_inst_o),

			.reg1_rdata_i(reg1_data_o),
			.reg2_rdata_i(reg2_data_o),


			//from exe
			.exe_reg_waddr_i(exe_reg_waddr_o),
			.exe_reg_wdata_i(exe_reg_wdata_o),
			.exe_reg_we_i(exe_reg_we_o),
			
			//from mem
			.mem_reg_waddr_i(mem_reg_waddr_o),
			.mem_reg_wdata_i(mem_reg_wdata_o),
			.mem_reg_we_i(mem_reg_we_o),
			
			//from id_exe
			.pre_inst_is_load_i(id_exe_id_inst_is_load_o),
			.exe_rd_i(id_exe_id_rd_o),

			.reg1_raddr_o(id_reg1_addr_o),
			.reg2_raddr_o(id_reg2_addr_o),
			.reg1_re_o(id_reg1_re_o),
			.reg2_re_o(id_reg2_re_o),

			.inst_o(id_inst_o),
			.inst_addr_o(id_inst_addr_o),
			.op1_o(id_op1_o),
			.op2_o(id_op2_o),
			.reg_we_o(id_reg_we_o),
			.reg_waddr_o(id_reg_waddr_o),
			
			.stallreq_o(id_pipe_ctrl_stallreq_o)
		   );

	regfile	regfile0(
			.rst_i(rst_i),
			.clk_i(clk_i),

			//wb新增
			.waddr_i(mem_wb_reg_waddr_o),
			.we_i(mem_wb_reg_we_o),
			.wdata_i(mem_wb_reg_wdata_o),
			//

			.re1_i(id_reg1_re_o),
			.raddr1_i(id_reg1_addr_o),
			.re2_i(id_reg2_re_o),
			.raddr2_i(id_reg2_addr_o),

			.rdata1_o(reg1_data_o),
			.rdata2_o(reg2_data_o)
			);

	id_exe	id_exe0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),
			.flush_jump_i(ctrl_flush_jump_o),

			.inst_i(id_inst_o),
			.inst_addr_i(id_inst_addr_o),
			.op1_i(id_op1_o),
			.op2_i(id_op2_o),
			.reg_we_i(id_reg_we_o),
			.reg_waddr_i(id_reg_waddr_o),

			.op1_o(id_exe_op1_o),
			.op2_o(id_exe_op2_o),
			.reg_we_o(id_exe_reg_we_o),
			.reg_waddr_o(id_exe_reg_waddr_o),
			.inst_o(id_exe_inst_o),
			.inst_addr_o(id_exe_inst_addr_o),
			.inst_is_load_o(id_exe_id_inst_is_load_o),
			.rd_o(id_exe_id_rd_o)
		       );

	exe	exe0(
			.rst_i(rst_i),

			.op1_i(id_exe_op1_o),
			.op2_i(id_exe_op2_o),
			.reg_we_i(id_exe_reg_we_o),
			.reg_waddr_i(id_exe_reg_waddr_o),
			.inst_i(id_exe_inst_o),
			.inst_addr_i(id_exe_inst_addr_o),

			.reg_waddr_o(exe_reg_waddr_o),
			.reg_we_o(exe_reg_we_o),
			.reg_wdata_o(exe_reg_wdata_o),
			.mem_addr_o(exe_mem_addr_o),
			.mem_data_o(exe_mem_data_o),
			.mem_we_o(exe_mem_we_o),
			.mem_op_o(exe_mem_op_o),
			
			.stallreq_o(exe_pipe_ctrl_stallreq_o),
			.jump_enable_o(exe_pipe_ctrl_jump_enable_o),
			.jump_addr_o(exe_pipe_ctrl_jump_addr_o)
		);

	exe_mem	exe_mem0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),

			.reg_waddr_i(exe_reg_waddr_o),
			.reg_we_i(exe_reg_we_o),
			.reg_wdata_i(exe_reg_wdata_o),

			.mem_addr_i(exe_mem_addr_o),
			.mem_data_i(exe_mem_data_o),
			.mem_we_i(exe_mem_we_o),
			.mem_op_i(exe_mem_op_o),
			////////////////////////////
			.reg_waddr_o(exe_mem_reg_waddr_o),
			.reg_we_o(exe_mem_reg_we_o),
			.reg_wdata_o(exe_mem_reg_wdata_o),
			.mem_addr_o(exe_mem_mem_addr_o),
			.mem_data_o(exe_mem_mem_data_o),
			.mem_we_o(exe_mem_mem_we_o),
			.mem_op_o(exe_mem_mem_op_o)
			);

	assign	halt_o = mem_halt_o;

	mem mem0(
			.rst_i(rst_i),
			.clk_i(clk_i),


			.reg_waddr_i(exe_mem_reg_waddr_o),
			.reg_we_i(exe_mem_reg_we_o),
			.reg_wdata_i(exe_mem_reg_wdata_o),

			.mem_addr_i(exe_mem_mem_addr_o),
			.mem_data_i(exe_mem_mem_data_o),
			.mem_we_i(exe_mem_mem_we_o),
			.mem_op_i(exe_mem_mem_op_o),
			.ram_data_i(ram_mem_data_o),


			.ram_addr_o(mem_ram_addr_o),
			.ram_data_o(mem_ram_data_o),
			.ram_w_request_o(mem_ram_w_request_o),

			.reg_waddr_o(mem_reg_waddr_o),
			.reg_we_o(mem_reg_we_o),
			.reg_wdata_o(mem_reg_wdata_o),
			.halt_o(mem_halt_o)	//for isa test
		);

	dpram	dpram0(
			.rst_i(rst_i),
			.clk_i(clk_i),

			.we_i(mem_ram_w_request_o),
			.addr_i(mem_ram_addr_o),
			.data_i(mem_ram_data_o),

			.data_o(ram_mem_data_o),

			.pc_i(pc_wire),
			.inst_ce_i(ce_wire),
			.inst_o(if_inst_o)
			);

	mem_wb	mem_wb0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),

			.reg_waddr_i(mem_reg_waddr_o),
			.reg_we_i(mem_reg_we_o),
			.reg_wdata_i(mem_reg_wdata_o),

			.reg_waddr_o(mem_wb_reg_waddr_o),
			.reg_we_o(mem_wb_reg_we_o),
			.reg_wdata_o(mem_wb_reg_wdata_o)
		       );

endmodule
