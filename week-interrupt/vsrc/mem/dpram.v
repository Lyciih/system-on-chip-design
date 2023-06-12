`include "defines.v"

module dpram(
		input	wire			clk_i,
		input	wire			rst_i,

		input	wire			we_i,
		input	wire			request_i,
		input	wire[`ADDR_WIDTH-1:0]	addr_i,
		input	wire[`DATA_WIDTH-1:0]	data_i,
		input	wire[3:0]		ram_op_i,

		output	reg[`DATA_WIDTH-1:0]	data_o,

		//for pc
		input	wire			inst_ce_i,
		input	wire[`ADDR_WIDTH-1:0]	pc_i,
		output	reg[`DATA_WIDTH-1:0]	inst_o
		);

	reg[7:0]			mem[3145727:0];

	wire[1:0] ram_addr_offset = addr_i[1:0];
	reg[63:0]			data_temp;
	reg[63:0]			data_write;
	
	wire[`RAM_WIDTH-1:0]	addr4;
	assign addr4 = {addr_i[`RAM_WIDTH-1:2], 2'b0};

	wire[`RAM_WIDTH-1:0]	rom_addr4;
	assign rom_addr4 = {pc_i[`RAM_WIDTH-1:2], 2'b0};


	//data port
	always@(posedge clk_i)begin
		if(we_i == `WRITE_ENABLE && rst_i == 1'b0 && request_i == 1)begin
			case(ram_op_i)
				`SB: begin
					case (ram_addr_offset)
						2'b00: begin
							data_write = {data_temp[63:8],data_i[7:0]};
					    	end
					    	2'b01: begin
							data_write = {data_temp[63:16],data_i[7:0],data_temp[7:0]};
					    	end
					    	2'b10:begin
							data_write = {data_temp[63:24],data_i[7:0],data_temp[15:0]};
					    	end
					    	default:begin
							data_write = {data_temp[63:32],data_i[7:0],data_temp[23:0]};
					    	end
					endcase
				end
				`SH: begin
					case (ram_addr_offset)
						2'b00: begin
							data_write = {data_temp[63:16],data_i[15:0]};
					    	end
					    	2'b01: begin
							data_write = {data_temp[63:24],data_i[15:0],data_temp[7:0]};
					    	end
					    	2'b10: begin
							data_write = {data_temp[63:32],data_i[15:0],data_temp[15:0]};
					    	end
					    	default:begin
							data_write = {data_temp[63:40],data_i[15:0],data_temp[23:0]};
					    	end
					endcase
				end
				`SW: begin
					case (ram_addr_offset)
						2'b00: begin
							data_write = {data_temp[63:32],data_i[31:0]};
					    	end
					    	2'b01: begin
							data_write = {data_temp[63:40],data_i[31:0],data_temp[7:0]};
					    	end
					    	2'b10: begin
							data_write = {data_temp[63:48],data_i[31:0],data_temp[15:0]};
					    	end
					    	default:begin
							data_write = {data_temp[63:56],data_i[31:0],data_temp[23:0]};
					    	end
					endcase
				end
				default: begin
					data_write = data_temp;
				end
			endcase

			mem[addr4+4] <= data_write[63:56];
            		mem[addr4+5] <= data_write[55:48];
            		mem[addr4+6] <= data_write[47:40];
            		mem[addr4+7] <= data_write[39:32];
			mem[addr4]   <= data_write[31:24];
            		mem[addr4+1] <= data_write[23:16];
            		mem[addr4+2] <= data_write[15:8];
            		mem[addr4+3] <= data_write[7:0];
		end
	end

	always@(*)begin
		if(rst_i == 1'b1)begin
			data_o = 0;
		end
		else if(request_i == 1)begin
			data_temp =  {mem[addr4+4],mem[addr4+5],mem[addr4+6],mem[addr4+7],mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};
			case(ram_op_i)
				`LB: begin
					case(ram_addr_offset)
						2'b00:begin
							data_o = {{24{data_temp[7]}},data_temp[7:0]};
						end
						2'b01:begin
							data_o = {{24{data_temp[15]}},data_temp[15:8]};
						end
						2'b10:begin
							data_o = {{24{data_temp[23]}},data_temp[23:16]};
						end
						default:begin
							data_o = {{24{data_temp[31]}},data_temp[31:24]};
						end
					endcase      
				end
				`LBU: begin
					case(ram_addr_offset)
						2'b00:begin
							data_o = {{24{1'b0}}, data_temp[7:0]};
						end
						2'b01:begin
							data_o = {{24{1'b0}}, data_temp[15:8]};
						end
						2'b10:begin
							data_o = {{24{1'b0}}, data_temp[23:16]};
						end
						default:begin
							data_o = {{24{1'b0}}, data_temp[31:24]};
						end
					endcase      
				end
				`LH: begin
					case(ram_addr_offset)
						2'b00:begin
							data_o = {{16{data_temp[15]}}, data_temp[15:0]};
						end
						2'b01:begin
							data_o = {{16{data_temp[23]}}, data_temp[23:8]};
						end
						2'b10:begin
							data_o = {{16{data_temp[31]}}, data_temp[31:16]};
						end
						default:begin
							data_o = {{16{data_temp[39]}}, data_temp[39:24]};
						end
					endcase
				end
				`LHU: begin
					case(ram_addr_offset)
						2'b00:begin
							data_o = {{16{1'b0}},data_temp[15:0]};
						end
						2'b01:begin
							data_o = {{16{1'b0}},data_temp[23:8]};
						end
						2'b10:begin
							data_o = {{16{1'b0}},data_temp[31:16]};
						end
						default:begin
							data_o = {{16{1'b0}},data_temp[39:24]};
						end
					endcase      
				end
				`LW: begin
					case(ram_addr_offset)
						2'b00:begin
							data_o = data_temp[31:0];
						end
						2'b01:begin
							data_o = data_temp[39:8];
						end
						2'b10:begin
							data_o = data_temp[47:16];
						end
						default:begin
							data_o = data_temp[55:24];
						end
					endcase      
				end
				default:begin
					data_o = 0;
				end
			endcase
		end
		else begin
			data_o = 0;
		end
	end





	//instruction port
	always@(*)begin
		if(inst_ce_i == 1'b0)begin
			inst_o = `ZERO;
		end
		else begin 
			inst_o = {mem[rom_addr4],mem[rom_addr4+1],mem[rom_addr4+2],mem[rom_addr4+3]};
		end
	end

	task writeByte;
	/*verilator public*/
		input	integer byte_addr;
		input	[7:0] val;
		begin
			mem[byte_addr[`RAM_WIDTH-1:0]] = val;
		end
	endtask
endmodule


