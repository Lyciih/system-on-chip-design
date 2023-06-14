`include	"defines.v"

module	core_top(
		input	wire	rst_i,
		input	wire	clk_i,
		//output	reg	halt_o,	//for isa test


		// ram
		output	reg			ram_we_o,
		output	reg			ram_request_o,
		output	reg[3:0]		ram_op_o,
		output	reg[`ADDR_WIDTH-1:0]	ram_addr_o,
		output	reg[`DATA_WIDTH-1:0]	ram_wdata_o,
		input	wire[`DATA_WIDTH-1:0]	ram_rdata_i,

		input	wire			timer_irq_i,
		input	wire			software_irq_i,

		// pc_reg
		output	reg[`ADDR_WIDTH-1:0]	pc_wire_o,
		output	reg			ce_wire_o,
		input	wire[`DATA_WIDTH-1:0]	if_inst_i
		);


	wire[`ADDR_WIDTH-1:0]	pc_wire;
	wire			ce_wire;

	//pipe_ctrl
	wire[5:0]		ctrl_stall_o;
	wire			ctrl_flush_jump_o;
	wire[`ADDR_WIDTH-1:0]	ctrl_new_pc_o;

	//if to if_id
	wire[`ADDR_WIDTH-1:0]	if_inst_addr_o;

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
	
	wire[`CSR_ADDR_WIDTH-1:0]	exe_csr_raddr;

	//exe_mem
	wire[`RADDR_WIDTH-1:0]	exe_mem_reg_waddr_o;
	wire			exe_mem_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	exe_mem_reg_wdata_o;
	wire[`ADDR_WIDTH-1:0]	exe_mem_mem_addr_o;
	wire[`DATA_WIDTH-1:0]	exe_mem_mem_data_o;
	wire			exe_mem_mem_we_o;
	wire[3:0]		exe_mem_mem_op_o;


	wire[`RADDR_WIDTH-1:0]	mem_reg_waddr_o;
	wire			mem_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	mem_reg_wdata_o;
	wire			mem_halt_o;	//for isa




	//mem_wb
	wire[`RADDR_WIDTH-1:0]	mem_wb_reg_waddr_o;
	wire			mem_wb_reg_we_o;
	wire[`RDATA_WIDTH-1:0]	mem_wb_reg_wdata_o;
	
	/*------- CSR -------------------------------------*/
	//exe to exe_mem
	wire				exe_exe_mem_we;
	wire[`CSR_ADDR_WIDTH-1:0]	exe_exe_mem_waddr;
	wire[`DATA_WIDTH-1:0]		exe_exe_mem_wdata;
	
	//exe_mem to mem
	wire				exe_mem_mem_we;
	wire[`CSR_ADDR_WIDTH-1:0]	exe_mem_mem_waddr;
	wire[`DATA_WIDTH-1:0]		exe_mem_mem_wdata;
	
	//mem to mem_wb
	wire				mem_wb_we;
	wire[`CSR_ADDR_WIDTH-1:0]	mem_wb_waddr;
	wire[`DATA_WIDTH-1:0]		mem_wb_wdata;

	//mem_wb to csr
	wire				wb_csr_we;
	wire[`CSR_ADDR_WIDTH-1:0]	wb_csr_waddr;
	wire[`DATA_WIDTH-1:0]		wb_csr_wdata;
	wire				wb_csr_instret_incr;

	//csr to exe
	wire[`DATA_WIDTH-1:0]		csr_exe_rdata;
	
	/*------- exception ---------------------------------*/
	wire[`DATA_WIDTH-1:0]		id_id_exe_exception;
	wire[`DATA_WIDTH-1:0]		id_exe_exe_exception;
	wire[`DATA_WIDTH-1:0]		exe_exe_mem_exception;
	wire[`DATA_WIDTH-1:0]		exe_mem_mem_exception;
	wire[`DATA_WIDTH-1:0]		mem_interrupt_ctrl_exception;

	wire[`ADDR_WIDTH-1:0]		exe_exe_mem_inst_addr;
	wire[`ADDR_WIDTH-1:0]		exe_mem_mem_inst_addr;
	wire[`ADDR_WIDTH-1:0]		mem_interrupt_ctrl_inst_addr;
	

	wire	mstatus_ie;
	wire	mie_external;
	wire	mie_timer;
	wire	mie_software;
	
	wire	mip_external;
	wire	mip_timer;
	wire	mip_software;
	wire	[`ADDR_WIDTH-1:0]	mtvec;
	wire	[`ADDR_WIDTH-1:0]	csr_interrupt_ctrl_mepc;
	wire	[`ADDR_WIDTH-1:0]	interrupt_ctrl_csr_mepc;

	wire	interrupt_type;
	wire	cause_we;
	wire[3:0]	cause;
	wire	epc_we;
	wire	mepc;
	wire	mstatus_ie_clear;
	wire	mstatus_ie_set;



	wire	flush_int;
	wire	interrupt_ctrl_pipe_ctrl_int_enable;
	wire[`ADDR_WIDTH-1:0]	isr_addr;
	
	pipe_ctrl ctrl0(
			.rst_i(rst_i),
			.stallreq_from_id_i(id_pipe_ctrl_stallreq_o),
			.stallreq_from_exe_i(exe_pipe_ctrl_stallreq_o),
			.jump_enable_i(exe_pipe_ctrl_jump_enable_o),
			.int_enable_i(interrupt_ctrl_pipe_ctrl_int_enable),
			.jump_addr_i(exe_pipe_ctrl_jump_addr_o),
			.isr_addr_i(isr_addr),

			.stall_o(ctrl_stall_o),
			.flush_jump_o(ctrl_flush_jump_o),
			.flush_int_o(flush_int),
			.new_pc_o(ctrl_new_pc_o)
			);

	assign	pc_wire_o = pc_wire;
	assign	ce_wire_o = ce_wire;
	pc_reg	pc_reg0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),
			.flush_jump_i(ctrl_flush_jump_o),
			.flush_int_i(flush_int),
			.new_pc_i(ctrl_new_pc_o),
			.pc_o(pc_wire),
			.ce_o(ce_wire)
		       );


	assign	if_inst_addr_o	=  pc_wire;

	if_id	if_id0(
			.clk_i(clk_i),
			.rst_i(rst_i),
			.stall_i(ctrl_stall_o),
			.flush_jump_i(ctrl_flush_jump_o),
			.flush_int_i(flush_int),
			.inst_addr_i(if_inst_addr_o),
			.inst_i(if_inst_i),
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
			
			.stallreq_o(id_pipe_ctrl_stallreq_o),

			.exception_o(id_id_exe_exception)
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
			.flush_int_i(flush_int),

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
			.rd_o(id_exe_id_rd_o),

			.exception_i(id_id_exe_exception),
			.exception_o(id_exe_exe_exception)
		       );

	exe	exe0(
			.rst_i(rst_i),
			.clk_i(clk_i),

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
			.jump_addr_o(exe_pipe_ctrl_jump_addr_o),

			.csr_rdata_i(csr_exe_rdata),
			.csr_raddr_o(exe_csr_raddr),
			.csr_wdata_o(exe_exe_mem_wdata),
			.csr_waddr_o(exe_exe_mem_waddr),
			.csr_we_o(exe_exe_mem_we),

			.mem_exe_csr_we_i(mem_wb_we),
			.mem_exe_csr_waddr_i(mem_wb_waddr),
			.mem_exe_csr_wdata_i(mem_wb_wdata),

			.exception_i(id_exe_exe_exception),
			.exception_o(exe_exe_mem_exception),
			.inst_addr_o(exe_exe_mem_inst_addr)
		);

	exe_mem	exe_mem0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),
			.flush_int_i(flush_int),

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
			.mem_op_o(exe_mem_mem_op_o),

			.csr_we_i(exe_exe_mem_we),
			.csr_waddr_i(exe_exe_mem_waddr),
			.csr_wdata_i(exe_exe_mem_wdata),
			.csr_we_o(exe_mem_mem_we),
			.csr_waddr_o(exe_mem_mem_waddr),
			.csr_wdata_o(exe_mem_mem_wdata),
	
			.exception_i(exe_exe_mem_exception),
			.exception_o(exe_mem_mem_exception),
			.inst_addr_i(exe_exe_mem_inst_addr),
			.inst_addr_o(exe_mem_mem_inst_addr)
			);

	//assign	halt_o = mem_halt_o;

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
			.ram_data_i(ram_rdata_i),


			.ram_addr_o(ram_addr_o),
			.ram_data_o(ram_wdata_o),
			.ram_w_request_o(ram_we_o),
			.ram_request_o(ram_request_o),
			.ram_op_o(ram_op_o),

			.reg_waddr_o(mem_reg_waddr_o),
			.reg_we_o(mem_reg_we_o),
			.reg_wdata_o(mem_reg_wdata_o),
			//.halt_o(mem_halt_o)	//for isa test
			
			.csr_we_i(exe_mem_mem_we),
			.csr_waddr_i(exe_mem_mem_waddr),
			.csr_wdata_i(exe_mem_mem_wdata),
			.csr_we_o(mem_wb_we),
			.csr_waddr_o(mem_wb_waddr),
			.csr_wdata_o(mem_wb_wdata),

			.exception_i(exe_mem_mem_exception),
			.exception_o(mem_interrupt_ctrl_exception),
			.inst_addr_i(exe_mem_mem_inst_addr),
			.inst_addr_o(mem_interrupt_ctrl_inst_addr)
		);


	mem_wb	mem_wb0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.stall_i(ctrl_stall_o),
			.flush_int_i(flush_int),

			.reg_waddr_i(mem_reg_waddr_o),
			.reg_we_i(mem_reg_we_o),
			.reg_wdata_i(mem_reg_wdata_o),

			.reg_waddr_o(mem_wb_reg_waddr_o),
			.reg_we_o(mem_wb_reg_we_o),
			.reg_wdata_o(mem_wb_reg_wdata_o),
			
			.csr_we_i(mem_wb_we),
			.csr_waddr_i(mem_wb_waddr),
			.csr_wdata_i(mem_wb_wdata),
			.csr_we_o(wb_csr_we),
			.csr_waddr_o(wb_csr_waddr),
			.csr_wdata_o(wb_csr_wdata)
		       );

	csr	csr0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			
			.raddr_i(exe_csr_raddr),
			.rdata_o(csr_exe_rdata),

			.we_i(wb_csr_we),
			.waddr_i(wb_csr_waddr),
			.wdata_i(wb_csr_wdata),
			.instret_incr_i(wb_csr_instret_incr),

			//from clint plic
			.irq_timer_i(timer_irq_i),
			.irq_software_i(software_irq_i),
			.irq_external_i(),

			//between interrupt_ctrl
			//to interrupt_ctrl
			.mstatus_ie_o(mstatus_ie),
			.mie_external_o(mie_external),
			.mie_timer_o(mie_timer),
			.mie_software_o(mie_software),

			.mip_external_o(mip_external),
			.mip_timer_o(mip_timer),
			.mip_software_o(mip_software),
			.mtvec_o(mtvec),
			.mepc_o(csr_interrupt_ctrl_mepc),

			//from interrupt_ctrl
			.interrupt_type_i(interrupt_type),
			.cause_we_i(cause_we),
			.cause_i(cause),
			.epc_we_i(epc_we),
			.epc_i(interrupt_ctrl_csr_mepc),
			.mstatus_ie_clear_i(mstatus_ie_clear),
			.mstatus_ie_set_i(mstatus_ie_set)
		    );



	interrupt_ctrl interrupt_ctrl0(
			.rst_i(rst_i),
			.clk_i(clk_i),

			.exception_i(mem_interrupt_ctrl_exception),
			.pc_i(mem_interrupt_ctrl_inst_addr),

			//from csr
			.mstatus_ie_i(mstatus_ie),
			.mie_external_i(mie_external),
			.mie_timer_i(mie_timer),
			.mie_sw_i(mie_software),

			.mip_external_i(mip_external),
			.mip_timer_i(mip_timer),
			.mip_sw_i(mip_software),

			.mtvec_i(mtvec),
			.epc_i(csr_interrupt_ctrl_mepc),

			//to csr
			.interrupt_type_o(interrupt_type),
			.cause_we_o(cause_we),
			.trap_cause_o(cause),

			.epc_we_o(epc_we),
			.epc_o(interrupt_ctrl_csr_mepc),

			.mstatus_ie_clear_o(mstatus_ie_clear),
			.mstatus_ie_set_o(mstatus_ie_set),

			.flush_o(interrupt_ctrl_pipe_ctrl_int_enable),
			.new_pc_o(isr_addr)
			);


endmodule
