`include "defines.v"

module clint(
		input	wire			clk_i,
		input	wire			rst_i,
		
		input	wire			req_i,
		input	wire			we_i,
		input	wire[`DATA_WIDTH-1:0]	addr_i,
		input	wire[`DATA_WIDTH-1:0]	data_i,
		output	reg[`DATA_WIDTH-1:0]	data_o,

		//to csr
		output	reg			timer_irq_o,
		output	reg			software_irq_o
	    );

	localparam	MTIMECMP_BASE	= 16'h4000;
	localparam	MSIP_BASE	= 16'h0;
	localparam	TIME_ADDR	= 16'hBFF8;
	wire[15:0]	raddr 		= addr_i[15:0];

	reg	[`DATA_WIDTH-1:0]	mtime_mem[0:1];
	reg	[`DATA_WIDTH-1:0]	mtimecmp_mem[0:1];
	reg	[`DATA_WIDTH-1:0]	msip_mem;
	reg	[`DATA_WIDTH*2-1:0]	mtime = {mtime_mem[1], mtime_mem[0]};
	reg	[`DATA_WIDTH*2-1:0]	mtimecmp = {mtimecmp_mem[1], mtimecmp_mem[0]};
	reg	[`DATA_WIDTH*2-1:0]	msip = {32'b0, msip_mem};

	wire	carry = (mtime_mem[0] == 32'hFFFF_FFFF);

	wire	is_time_addr0 = (raddr == TIME_ADDR);
	wire	is_time_addr1 = (raddr == TIME_ADDR + 16'h4);
	wire	is_mtimecmp_addr0 = (raddr == MTIMECMP_BASE);
	wire	is_mtimecmp_addr1 = (raddr == MTIMECMP_BASE + 16'h4);
	wire	is_msip_addr = (raddr == MSIP_BASE);

	always@(posedge clk_i) begin
		if(rst_i == 1) begin
			mtime_mem[0] <= 32'b0;
			mtime_mem[1] <= 32'b0;
			mtimecmp_mem[0] <= 32'b0;
			mtimecmp_mem[0] <= 32'b0;
			msip_mem <= 32'b0;
		end
		else if(we_i) begin
			if(is_msip_addr) begin
				msip_mem <= data_i;
			end
			else if(is_mtimecmp_addr0) begin
				mtimecmp_mem[0] <= data_i;
			end
			else if(is_mtimecmp_addr1) begin
				mtimecmp_mem[1] <= data_i;
			end
		end
		else begin
			mtime_mem[0] <= mtime_mem[0] + 32'b1;
			mtime_mem[1] <= mtime_mem[1] + {31'b0, carry};
		end
	end

	always@(*) begin
		if(req_i == 1) begin
			if(is_msip_addr) begin
				data_o = msip_mem;
			end
			else if(is_mtimecmp_addr0) begin
				data_o = mtimecmp_mem[0];
			end
			else if(is_mtimecmp_addr1) begin
				data_o = mtimecmp_mem[1];
			end
			else if(is_time_addr0) begin
				data_o = mtime_mem[0];
			end
			else if(is_time_addr1) begin
				data_o = mtime_mem[1];
			end
		end
		else begin
			data_o = `ZERO;
		end
	end

	wire[63:0]	time_interval = (mtime - mtimecmp);
	wire		is_timeout = (time_interval[63] == 1'b0);
	wire		is_mtimecmp_nonzero = (mtimecmp == 64'h0);
	assign		timer_irq_o = (is_timeout & ~is_mtimecmp_nonzero);
	assign		software_irq_o = | msip;
endmodule
				
			
	


