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
		input	wire[`DATA_WIDTH-1:0]	mstatus_i
		);




	
	always@(*) begin		//此處只處理mtvec的輸出，但不決定中斷要不要發生
		if(rst_i == 1) begin
			int_addr_o = 0;
		end
		else if(inst_i == `MRET) begin
			int_addr_o = mepc_i;
		end
		else if(mtvec_i[1:0] == 0)begin
			int_addr_o = mtvec_i;
		end
		else if(mtvec_i[1:0] == 1)begin
			int_addr_o = {mtvec_i[31:2], 2'b0} + 4 * mcause_i;
		end
		else begin
			int_addr_o = 0;
		end
	end


	reg	interrupt_accept;
	assign	interrupt_enable_o = interrupt_accept;

	always@(*) begin			//判斷中斷是否受理
		if(rst_i == 1) begin
			interrupt_accept = 0;
		end
		else if(exception_i != 0) begin	//異常無法屏蔽，並且優先處理
			interrupt_accept = 1;
		end
		else if(mstatus_i[3] == 1) begin	//檢查 mstatus.mie 是否被屏蔽
			if(external_interrupt_i) begin		//外部中斷
				interrupt_accept = 1;
			end
			else if(inst_i == `ECALL) begin	//軟體中斷
				interrupt_accept = 1;
			end
			else if(timer_interrupt_i) begin	//時間中斷
				interrupt_accept = 1;
			end
			else begin
				interrupt_accept = 0;
			end
		end
		else if(inst_i == `MRET) begin
			interrupt_accept = 1;
		end
		else begin
			interrupt_accept = 0;
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
