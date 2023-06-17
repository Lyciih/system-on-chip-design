`include "defines.v"

module interrupt(
		input	wire	clk_i,
		input	wire	rst_i,

		input	wire[`RDATA_WIDTH-1:0]	inst_i,
		input	wire[`ADDR_WIDTH-1:0]	inst_addr_i,
		input	wire[`ADDR_WIDTH-1:0]	exception_i,

		input	wire	 		external_interrupt_i,
		input	wire	 		timer_interrupt_i,
		
		output	reg			interrupt_enable_o,
		output	reg[`ADDR_WIDTH-1:0]	int_addr_o,
		
		//from csr
		input	wire[`ADDR_WIDTH-1:0]	mepc_i,
		input	wire[`ADDR_WIDTH-1:0]	mtvec_i,
		input	wire[`ADDR_WIDTH-1:0]	mcause_i,
		input	wire[`DATA_WIDTH-1:0]	mstatus_i,
		input	wire[`DATA_WIDTH-1:0]	mie_i
		);

	reg[31:0] exception;	//目前先留32種exception的位置
	assign exception[31:2] = exception_i[31:2];

	always@(*) begin
		if(inst_i == `ECALL) begin
			exception[0] = 1;
		end
		else if(inst_i == `MRET) begin
			exception[1] = 1;
		end
		else begin
			exception[1:0] = 0;
		end
	end

	reg[`ADDR_WIDTH-1:0]	mtvec_select;
	
	always@(*) begin		//此處只處理mtvec的輸出，但不決定中斷要不要發生
		if(rst_i == 1) begin
			mtvec_select = 0;
		end
		else if(mtvec_i[1:0] == 0)begin
			mtvec_select = mtvec_i;
		end
		else if(mtvec_i[1:0] == 1)begin
			mtvec_select = {mtvec_i[31:2], 2'b0} + 4 * mcause_i;
		end
		else begin
			mtvec_select = 0;
		end
	end


	reg	interrupt_accept;
	assign	interrupt_enable_o = interrupt_accept;
	
	reg	software_interrupt;

	always@(*) begin			//判斷中斷是否受理
		if(rst_i == 1) begin
			interrupt_accept = 0;
			int_addr_o = 0;
		end
		else if(exception != 0) begin	//異常無法屏蔽，並且優先處理
			if(inst_i == `ECALL) begin
				interrupt_accept = 1;
				int_addr_o = mtvec_select;
			end
			else if(inst_i == `MRET) begin
				interrupt_accept = 1;
				int_addr_o = mepc_i;
			end
			else begin
				interrupt_accept = 0;
				int_addr_o = mtvec_select;
			end
		end
		else if(mstatus_i[3] == 1) begin	//檢查 mstatus.mie 是否被屏蔽
			if(external_interrupt_i & mie_i[11]) begin	//外部中斷
				interrupt_accept = 1;
				int_addr_o = mtvec_select;
			end
			else if(software_interrupt & mie_i[3]) begin	//軟體中斷
				interrupt_accept = 1;
				int_addr_o = mtvec_select;
			end
			else if(timer_interrupt_i & mie_i[7]) begin	//時間中斷
				interrupt_accept = 1;
				int_addr_o = mtvec_select;
			end
			else begin
				interrupt_accept = 0;
				int_addr_o = 0;
			end
		end
		else begin
			interrupt_accept = 0;
			int_addr_o = 0;
		end
	end

/*	

	always@(*) begin
		if(rst_i == 1) begin
			interrupt_enable_o = 0;
			int_addr_o = 0;
		end
		else if(inst_i == `ECALL) begin
			if(mtvec_i[1:0] == 0)begin
				interrupt_enable_o = 1;
				int_addr_o = mtvec_i;
			end
			else if(mtvec_i[1:0] == 1)begin
				interrupt_enable_o = 1;
				int_addr_o = {mtvec_i[31:2], 2'b0} + 4 * mcause_i;
			end
			else begin
				interrupt_enable_o = 0;
				int_addr_o = 0;
			end
		end
		else if(inst_i == `MRET) begin
			interrupt_enable_o = 1;
			int_addr_o = mepc_i;
		end
		else begin
			interrupt_enable_o = 0;
			int_addr_o = 0;
		end
	end
*/

endmodule
