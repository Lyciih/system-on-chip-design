`include "defines.v"

module	pipe_ctrl(
		input	wire	rst_i,

		input	wire	stallreq_from_id_i,	//load hazard
		input	wire	stallreq_from_exe_i,	//load hazard
		input	wire	jump_enable_i,
		input	wire[`ADDR_WIDTH-1:0]	jump_addr_i,


		output	reg[5:0]	stall_o,
		output	reg		flush_jump_o,
		output	reg[`ADDR_WIDTH-1:0]	new_pc_o,
		
		input	wire	interrupt_enable_i,
		input	wire[`ADDR_WIDTH-1:0]	mtvec_addr_i,
		output	reg		flush_interrupt_o
		);

	assign	flush_jump_o = jump_enable_i;
	assign	flush_interrupt_o = interrupt_enable_i;

	//assign	new_pc_o = jump_addr_i;

	always@(*)begin
		if(rst_i == 1)begin
			new_pc_o = 0;
		end
		else if(interrupt_enable_i == 1)begin
			new_pc_o = mtvec_addr_i;
		end
		else if(jump_enable_i == 1)begin
			new_pc_o = jump_addr_i;
		end
		else begin
			new_pc_o = 0;
		end
	end

	always@(*)begin
		if(rst_i == 1'b1)begin
			stall_o = 6'b000000;
		end
		else if(stallreq_from_exe_i == `STOP)begin
			stall_o = 6'b001111;
		end
		else if(stallreq_from_id_i == `STOP)begin
			stall_o = 6'b000111;
		end
		else begin
			stall_o = 6'b000000;
		end
	end
endmodule
