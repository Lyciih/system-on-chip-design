module mul#(parameter XLEN = 32)(
		input	wire		clk_i,
		input	wire		rst_i,
		input	wire		req_i,
		input	wire[XLEN-1:0]	a_i,
		input	wire[XLEN-1:0]	b_i,

		output	reg		ready_o,
		output	reg[XLEN*2-1:0]	result_o,
		output	reg		overflow_o
		);


	wire	[XLEN*2:0]	acc_temp[XLEN-1:0];
	wire	[XLEN*2:0]	acc_temp_1[(XLEN/2)-1:0];
	wire	[XLEN*2:0]	acc_temp_2[(XLEN/4)-1:0];
	wire	[XLEN*2:0]	acc_temp_3[(XLEN/8)-1:0];
	wire	[XLEN*2:0]	acc_temp_4[(XLEN/16)-1:0];
	wire	[XLEN*2:0]	acc_temp_5;
	wire	[XLEN-1:0]	ready_temp;

	mult_cell	#(.XLEN(XLEN), .SHIFT(0))
	u_mult_step0(
			.clk_i		(clk_i),
			.rst_i		(rst_i),
			.en_i		(req_i),
			.flush_i	(~req_i),
			.a_i		(a_i),
			.b_i		(b_i[0]),

			.acc_o		(acc_temp[0]),
			.ready_o	(ready_temp[0])
		    );

	genvar	i;
	generate
		for(i = 1; i < XLEN; i = i + 1)
		begin
			mult_cell	#(.XLEN(XLEN), .SHIFT(i))
			mult_stepx(
					.clk_i		(clk_i),
					.rst_i		(rst_i),
					.en_i		(req_i),
					.flush_i	(~req_i),
					.a_i		(a_i),
					.b_i		(b_i[i]),

					.acc_o		(acc_temp[i]),
					.ready_o	(ready_temp[i])
		    		);
		end
	endgenerate

	
	

	for( i = 0; i < XLEN - 1; i = i + 2)
	begin
		assign acc_temp_1[i/2] = acc_temp[i] + acc_temp[i+1];
	end



		
	for(i = 0; i < (XLEN/2) - 1; i = i + 2)
	begin
		assign acc_temp_2[i/2] = acc_temp_1[i] + acc_temp_1[i+1];
	end

	for(i = 0; i < (XLEN/4) - 1; i = i + 2)
	begin
		assign acc_temp_3[i/2] = acc_temp_2[i] + acc_temp_2[i+1];
	end


	for(i = 0; i < (XLEN/8) - 1; i = i + 2)
	begin
		assign acc_temp_4[i/2] = acc_temp_3[i] + acc_temp_3[i+1];
	end


	assign acc_temp_5 = acc_temp_4[0] + acc_temp_4[1];
	

	always@(*)
	begin
		if(rst_i)
		begin
			ready_o = 1'b0;
			result_o = 64'b0;
			overflow_o = 1'b0;
		end
		else
		begin
			ready_o = (req_i) ? ready_temp[XLEN-1]: 1'b0;
			result_o = (req_i) ? acc_temp_5[63:0]: 64'b0;
			overflow_o = (req_i) ? acc_temp_5[64]: 1'b0;
		end
	end
endmodule

