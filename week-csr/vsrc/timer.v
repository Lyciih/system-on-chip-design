module	timer(
		input	wire	clk_i,
		input	wire	rst_i,

		input	wire	req_i,
		input	wire	we_i,
		input	wire[`ADDR_WIDTH-1:0]	addr_i,
		input	wire[`DATA_WIDTH-1:0]	time_set_i,

		output	reg[31:0]		second_count
	     );

	reg[31:0]	clk_count;

	initial	begin
		clk_count = 0;
		second_count = 0;
	end

	always@(posedge clk_i)begin
		clk_count = clk_count + 1;
		if (clk_count == 10000)begin
			second_count = second_count + 1;
			clk_count = 0;
		end
	end
endmodule
		
