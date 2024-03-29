`include "defines.v"

module dpram #(
		parameter	RAM_SIZE = 1,
		parameter	RAM_ADDR_WIDTH = 1
		)(
		input	wire			clk_i,
		input	wire			rst_i,

		input	wire			we_i,
		input	wire[`ADDR_WIDTH-1:0]	addr_i,
		input	wire[`DATA_WIDTH-1:0]	data_i,

		output	reg[`DATA_WIDTH-1:0]	data_o,

		//for pc
		input	wire			inst_ce_i,
		input	wire[`ADDR_WIDTH-1:0]	pc_i,
		output	reg[`DATA_WIDTH-1:0]	inst_o
		);

	reg[7:0]			mem[0:RAM_SIZE-1];
	wire[RAM_ADDR_WIDTH-1:0]	addr4;
	assign addr4 = {addr_i[RAM_ADDR_WIDTH-1:2],2'b0};

	wire[RAM_ADDR_WIDTH-1:0]	rom_addr4;
	assign rom_addr4 = {pc_i[RAM_ADDR_WIDTH-1:2],2'b0};


	//data port
	always@(posedge clk_i)begin
		if(we_i == `WRITE_ENABLE && rst_i == 1'b0)begin
			mem[addr4] <= data_i[31:24];
			mem[addr4+1] <= data_i[23:16];
			mem[addr4+2] <= data_i[15:8];
			mem[addr4+3] <= data_i[7:0];
		end
	end

	always@(*)begin
		if(rst_i == 1'b1)begin
			data_o = `ZERO;
		end
		else if(we_i == `WRITE_DISABLE)begin
			data_o = {mem[addr4], mem[addr4+1], mem[addr4+2], mem[addr4+3]};
		end
		else begin
			data_o = `ZERO;
		end
	end

	//instruction port
	always@(*)begin
		if(inst_ce_i == 1'b0)begin
			inst_o = `ZERO;
		end
		else begin 
			inst_o = {mem[rom_addr4], mem[rom_addr4+1], mem[rom_addr4+2], mem[rom_addr4+3]};
		end
	end

	task writeByte;
		/*verilator public*/
		input	integer byte_addr;
		input	[7:0] val;
		begin
			mem[byte_addr[RAM_ADDR_WIDTH-1:0]] = val;
		end
	endtask
endmodule


