`include "defines.v"

module	csr(
		input	wire	clk_i,
		input	wire	rst_i,


		//from exe read pipe_ctrl
		input	wire[`CSR_ADDR_WIDTH-1:0]	raddr_i,
		output	reg[`DATA_WIDTH-1:0]		rdata_o,

		//wb update csr
		input 	wire				we_i,
		input	wire[`CSR_ADDR_WIDTH-1:0]	waddr_i,
		input	wire[`DATA_WIDTH-1:0]		wdata_i,
		input	wire				instret_incr_i
	   );

	localparam	CSR_MVENDORID_VALUE	=	32'b0;
	localparam	CSR_MARCHID_VALUE	=	{1'b0, 31'd22};
	localparam	CSR_MIMPID_VALUE	=	32'b0;
	localparam	CSR_MHARTID_VALUE	=	32'b0;

	//misa
	wire	[1:0]			mxl;
	wire	[25:0]			mextensions;
	wire	[`RDATA_WIDTH-1:0]	misa;
	assign	mxl = 2'b01;
	assign	mextensions = 26'b00000000000001000100000000;
	assign	misa = {mxl, 4'b0, mextensions};

	//mcycle
	reg[`RDATA_WIDTH*2-1:0]	mcycle;
	reg[`RDATA_WIDTH*2-1:0]	minstret;

	always@(posedge	clk_i)begin
		if(rst_i == 1'b1)begin
			mcycle		<= 0;
			minstret	<= 0;
		end
		else begin
			mcycle 		<= mcycle + 64'd1;
			if(instret_incr_i)begin
				minstret <= minstret + 64'd1;
			end
		end
	end

	//mstatus
	reg[`RDATA_WIDTH-1:0]	mstatus;
	
	wire w_mstatus;
	assign w_mstatus = ((waddr_i == `CSR_MSTATUS_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mstatus <= `ZERO;
		end
		else if(w_mstatus) begin
			mstatus <= wdata_i;
		end
	end


	//mie
	reg[`RDATA_WIDTH-1:0]	mie;

	wire w_mie;
	assign w_mie = ((waddr_i == `CSR_MIE_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mie <= `ZERO;
		end
		else if(w_mie) begin
			mie <= wdata_i;
		end
	end

	//mtvec
	reg[`RDATA_WIDTH-1:0]	mtvec;

	wire w_mtvec;
	assign w_mtvec = ((waddr_i == `CSR_MTVEC_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mtvec <= `ZERO;
		end
		else if(w_mtvec) begin
			mtvec <= wdata_i;
		end
	end
	
	//mscratch
	reg[`RDATA_WIDTH-1:0]	mscratch;

	wire w_mscratch;
	assign w_mscratch = ((waddr_i == `CSR_MSCRATCH_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mscratch <= `ZERO;
		end
		else if(w_mscratch) begin
			mscratch <= wdata_i;
		end
	end

	//mepc
	reg[`RDATA_WIDTH-1:0]	mepc;

	wire w_mepc;
	assign w_mepc = ((waddr_i == `CSR_MEPC_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mepc <= `ZERO;
		end
		else if(w_mepc) begin
			mepc <= wdata_i;
		end
	end

	//mcause
	reg[`RDATA_WIDTH-1:0]	mcause;
	assign mcause = {32'b0};

	/*
	wire w_mcause;
	assign w_mcause = ((waddr_i == `CSR_MCAUSE_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mcause <= `ZERO;
		end
		else if(w_mcause) begin
			mcause <= wdata_i;
		end
	end
	*/

	//mip
	reg[`RDATA_WIDTH-1:0]	mip;
	assign mip = {32'b0};
	
	/*
	wire w_mip;
	assign w_mip = ((waddr_i == `CSR_MIP_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mip <= `ZERO;
		end
		else if(w_mip) begin
			mip <= wdata_i;
		end
	end
	*/

	//mtval
	reg[`RDATA_WIDTH-1:0]	mtval;

	wire w_mtval;
	assign w_mtval = ((waddr_i == `CSR_MTVAL_ADDR) && we_i == `WRITE_ENABLE);
	always@(posedge clk_i) begin
		if(rst_i == 1'b1) begin
			mtval <= `ZERO;
		end
		else if(w_mtval) begin
			mtval <= wdata_i;
		end
	end

/*--------------------- read csr -----------------------------*/
	always@(*)begin
		if((waddr_i == raddr_i) && (we_i == `WRITE_ENABLE))begin
			rdata_o = wdata_i;
		end
		else begin
			case (raddr_i)
				`CSR_MVENDORID_ADDR: begin
					rdata_o = CSR_MVENDORID_VALUE;
				end
				`CSR_MARCHID_ADDR: begin
					rdata_o = CSR_MARCHID_VALUE;
				end
				`CSR_MIMPID_ADDR: begin
					rdata_o = CSR_MIMPID_VALUE;
				end
				`CSR_MHARTID_ADDR: begin
					rdata_o = CSR_MHARTID_VALUE;
				end
				`CSR_MISA_ADDR: begin
					rdata_o = misa;
				end
				`CSR_MCYCLE_ADDR, `CSR_CYCLE_ADDR: begin
					rdata_o = mcycle[`DATA_WIDTH-1:0];
				end
				`CSR_MCYCLEH_ADDR, `CSR_CYCLEH_ADDR: begin
					rdata_o = mcycle[63:32];
				end
				`CSR_MINSTRET_ADDR: begin
					rdata_o = minstret[`DATA_WIDTH-1:0];
				end
				`CSR_MSTATUS_ADDR: begin
					rdata_o = mstatus;
				end
				`CSR_MIE_ADDR: begin
					rdata_o = mie;
				end
				`CSR_MTVEC_ADDR: begin
					rdata_o = mtvec;
				end
				`CSR_MSCRATCH_ADDR: begin
					rdata_o = mscratch;
				end
				`CSR_MEPC_ADDR: begin
					rdata_o = mepc;
				end
				`CSR_MCAUSE_ADDR: begin
					rdata_o = mcause;
				end
				`CSR_MIP_ADDR: begin
					rdata_o = mip;
				end
				default: begin
					rdata_o = `ZERO;
				end
			endcase
		end
	end
endmodule
