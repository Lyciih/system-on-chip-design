`include "defines.v"

module interrupt_ctrl(
		input	wire	clk_i,
		input	wire	rst_i,

		input	wire[`DATA_WIDTH-1:0]	exception_i,
		input	wire[`DATA_WIDTH-1:0]	pc_i,

		//from csr
		input	wire			mstatus_ie_i,
		input	wire			mie_external_i,
		input	wire			mie_timer_i,
		input	wire			mie_sw_i,

		input	wire			mip_external_i,
		input	wire			mip_timer_i,
		input	wire			mip_sw_i,

		input	wire[`ADDR_WIDTH-1:0]	mtvec_i,
		input	wire[`ADDR_WIDTH-1:0]	epc_i,

		//to csr
		output	reg			interrupt_type_o,
		output	reg			cause_we_o,
		output	reg[3:0]		trap_cause_o,

		output	reg			epc_we_o,
		output	reg[`ADDR_WIDTH-1:0]	epc_o,
		
		output	reg			mstatus_ie_clear_o,//for interrupt
		output	reg			mstatus_ie_set_o,//for mret

		// signals to other statges of the pipeline
		output	reg			flush_o,
		output	reg[`ADDR_WIDTH-1:0]	new_pc_o
		);

	//state registers
	reg	[3:0] S;
	reg	[3:0] S_nxt;

	//machine states
	parameter RESET		= 4'b0001;
	parameter OPERATING	= 4'b0010;
	parameter TRAP_TAKEN	= 4'b0100;
	parameter TRAP_RETURN	= 4'b1000;

	//exception , mret and ecall are implement now
	wire	mret;
	wire	ecall;
	assign	{ecall, mret} = exception_i[1:0];

	//check there is a interrupt on pending
	wire	eip;
	wire	tip;
	wire	sip;
	wire	ip;

	assign	eip = mie_external_i & mip_external_i;
	assign	tip = mie_timer_i & mip_timer_i;
	assign	sip = mie_sw_i & mip_sw_i;
	assign	ip = eip | tip | sip;

	//interrupt need to be processed
	wire	trap_happened;
	assign	trap_happened = (mstatus_ie_i & ip) | ecall | mret;

	always@(posedge clk_i) begin
		if(rst_i == 1) begin
			S <= RESET;
		end
		else begin
			S <= S_nxt;
		end
	end

	//state transfer
	always@(*) begin
		case(S)
			RESET: begin
				S_nxt = OPERATING;
			end
			OPERATING: begin
				if(trap_happened) begin
					S_nxt = TRAP_TAKEN;
				end
				if(mret) begin
					S_nxt = TRAP_RETURN;
				end
				else begin
					S_nxt = OPERATING;
				end
			end
			TRAP_TAKEN: begin
				S_nxt = OPERATING;
			end
			TRAP_RETURN: begin
				S_nxt = OPERATING;
			end
			default: begin
				S_nxt = OPERATING;
			end
		endcase
	end
				
	assign epc_o = pc_i;

	reg[1:0]	mtvec_mode;
	reg[29:0]	mtvec_base;

	assign mtvec_base = mtvec_i[31:2];
	assign mtvec_mode = mtvec_i[1:0];

	reg[`ADDR_WIDTH-1:0]	trap_mux_out;
	wire[`ADDR_WIDTH-1:0]	vec_mux_out;
	wire[`ADDR_WIDTH-1:0]	base_offset;

	assign base_offset = {26'b0, trap_cause_o, 2'b0};
	assign vec_mux_out = mtvec_i[0] ? {mtvec_base, 2'b00} + base_offset : {mtvec_base, 2'b00};
	assign trap_mux_out = interrupt_type_o ? vec_mux_out : {mtvec_base, 2'b00};

	reg exception;
	always@(posedge clk_i) begin
		exception <= (|exception_i);
	end

	//output generation
	always@(*) begin
		case(S)
			RESET: begin
				flush_o = 1'b0;
				new_pc_o = `ZERO;
				epc_we_o = 1'b0;
				cause_we_o = 1'b0;
				mstatus_ie_clear_o = 1'b0;
				mstatus_ie_set_o = 1'b0;
			end
			OPERATING: begin
				flush_o = 1'b0;
				new_pc_o = `ZERO;
				epc_we_o = 1'b0;
				cause_we_o = 1'b0;
				mstatus_ie_clear_o = 1'b0;
				mstatus_ie_set_o = 1'b0;
			end
			TRAP_TAKEN: begin
				flush_o = 1'b1;
				new_pc_o = trap_mux_out;
				epc_we_o = 1'b1;
				cause_we_o = 1'b1;
				mstatus_ie_clear_o = 1'b1;
				mstatus_ie_set_o = 1'b0;
				epc_o = (exception) ? pc_i + 32'h4 : pc_i;
			end
			TRAP_RETURN: begin
				flush_o = 1'b1;
				new_pc_o = epc_i;
				epc_we_o = 1'b0;
				cause_we_o = 1'b0;
				mstatus_ie_clear_o = 1'b0;
				mstatus_ie_set_o = 1'b1;
			end
			default: begin
				flush_o = 1'b0;
				new_pc_o = `ZERO;
				epc_we_o = 1'b0;
				cause_we_o = 1'b0;
				mstatus_ie_clear_o = 1'b0;
				mstatus_ie_set_o = 1'b0;
			end
		endcase
	end


	//update mcause csr
	always@(posedge clk_i) begin
		if(rst_i == 1) begin
			trap_cause_o <= 4'b0;
			interrupt_type_o <= 1'b0;
		end
		else if(S == OPERATING) begin
			if(mstatus_ie_i & eip) begin
				trap_cause_o <= 4'd11;
				interrupt_type_o <= 1'b1;
			end
			else if(mstatus_ie_i & sip) begin
				trap_cause_o <= 4'd3;
				interrupt_type_o <= 1'b1;
			end
			else if(mstatus_ie_i & tip) begin
				trap_cause_o <= 4'd7;
				interrupt_type_o <= 1'b1;
			end
			else if(ecall) begin
				trap_cause_o <= 4'd11;
				interrupt_type_o <= 1'b0;
			end
		end
	end
endmodule
