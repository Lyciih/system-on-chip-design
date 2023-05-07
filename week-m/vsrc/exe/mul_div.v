module mul_div(
		input	wire		clk_i,
		input	wire		mul_div_req_i,
		input	wire[2:0]	m_d_op,
		input	wire[6:0]	op,
		input	wire[31:0]	rs1,
		input	wire		rs1_signed,
		input	wire[31:0]	rs2,
		input	wire		rs2_signed,

		output	reg[31:0]	high,
		output	reg[31:0]	low,
		output	reg		ready,
		output	reg[5:0]	count
	      );

	reg[64:0]	long_temp;
	reg[31:0]	rs1_temp;	
	reg[31:0]	rs2_temp;	
	reg		rs1_is_neg;
	reg		rs2_is_neg;

	wire		m_or_d = m_d_op[2];


	always@(posedge clk_i)begin
		if(mul_div_req_i == 1 && op == `INST_TYPE_R_M)begin
			//乘法
			if(m_or_d == 0)begin
				if(rs1 == 0 || rs2 == 0)begin
					high = 0;
					low = 0;
					ready = 1;
				end				
				else if(count == 0)begin
					if (m_d_op[1] == 0)begin
						if($signed(rs1) < 0)begin
							rs1_temp = ~rs1 + 1;
							rs1_is_neg = 1;
						end
						else begin
							rs1_temp = rs1;
							rs1_is_neg = 0;
						end
					end
					else begin
						if(m_d_op[0] == 0)begin
							if($signed(rs1) < 0)begin
								rs1_temp = ~rs1 + 1;
								rs1_is_neg = 1;
							end
							else begin
								rs1_temp = rs1;
								rs1_is_neg = 0;
							end
						end
						else begin
							rs1_temp = rs1;
							rs1_is_neg = 0;
						end
					end
						


					if (m_d_op[1] == 0)begin
						if($signed(rs2) < 0)begin
							rs2_temp = ~rs2 + 1;
							rs2_is_neg = 1;
						end
						else begin
							rs2_temp = rs2;
							rs2_is_neg = 0;
						end
					end
					else begin
						rs2_temp = rs2;
						rs2_is_neg = 0;
					end

					long_temp = {{33{1'b0}}, rs2_temp};
					if(long_temp[0] == 1)begin
						long_temp[64:32] = long_temp[64:32] + rs1_temp;
					end
					count = count + 1;
					high = long_temp[63:32];
					low = long_temp[31:0];
				end
				else begin
					if(count < 32)begin
						long_temp = long_temp >> 1;
						if(long_temp[0] == 1)begin
							long_temp[64:32] = long_temp[64:32] + rs1_temp;
						end
						count = count + 1;
						high = long_temp[63:32];
						low = long_temp[31:0];
						if(count == 32)begin
							long_temp = long_temp >> 1;
							high = long_temp[63:32];
							low = long_temp[31:0];
							if(rs1_is_neg ^ rs2_is_neg == 1)begin
								long_temp = ~long_temp + 1;
								high = long_temp[63:32];
								low = long_temp[31:0];
							end
							ready = 1;
						end
					end
				end
			end
			//除法
			else begin
				if(rs1 == 0 || rs2 == 0)begin
					high = rs1;
					if(rs2 == 0)begin
						low = -1;
					end
					else begin
						low = 0;
					end
					ready = 1;
				end				
				else if(count == 0)begin
					if (m_d_op[0] == 0)begin
						if($signed(rs1) < 0)begin
							rs1_temp = ~rs1 + 1;
							rs1_is_neg = 1;
						end
						else begin
							rs1_temp = rs1;
							rs1_is_neg = 0;
						end
					end
					else begin
						rs1_temp = rs1;
						rs1_is_neg = 0;
					end
						


					if (m_d_op[0] == 0)begin
						if($signed(rs2) < 0)begin
							rs2_temp = ~rs2 + 1;
							rs2_is_neg = 1;
						end
						else begin
							rs2_temp = rs2;
							rs2_is_neg = 0;
						end
					end
					else begin
						rs2_temp = rs2;
						rs2_is_neg = 0;
					end

					long_temp = {{32{1'b0}}, rs1_temp, {1'b0}};
					if(long_temp[63:32] >= rs2_temp)begin
						long_temp[63:32] = long_temp[63:32] - rs2_temp;
						long_temp[0] = 1;
					end
					count = count + 1;
					high = long_temp[63:32];
					low = long_temp[31:0];
				end
				else begin
					if(count < 32)begin
						long_temp = long_temp << 1;
						if(long_temp[63:32] >= rs2_temp)begin
							long_temp[63:32] = long_temp[63:32] - rs2_temp;
							long_temp[0] = 1;
						end
						count = count + 1;
						high = long_temp[63:32];
						low = long_temp[31:0];
						if(count == 32)begin
							if(rs1_is_neg == 1)begin
								high = ~long_temp[63:32] + 1;
							end
							else begin
								high = long_temp[63:32];
							end
							if(rs1_is_neg ^ rs2_is_neg == 1)begin
								low = ~long_temp[31:0] + 1;
							end
							ready = 1;
						end
					end
				end
			end
		end
		else begin
			high = 0;
			low = 0;
			ready = 0;
			count = 0;
			rs1_is_neg = 0;
			rs2_is_neg = 0;
			long_temp = 0;
			rs1_temp = 0;
			rs2_temp = 0;
		end
	end
endmodule
