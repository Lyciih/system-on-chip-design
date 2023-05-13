`include	"defines.v"

module	test_top(
		input	wire	rst_i,
		input	wire	clk_i,
		output	reg	halt_o	//for isa test
		);


	localparam	int	NrDevices	= 1;
	localparam	int	NrHosts		= 1;
	localparam	int	MemSize 	= 32'h100000;
	localparam	int	MemAddrWidth 	= 20;

	`define	HOST_CORE_PORT	0
	`define	DEV_RAM		0

	wire				host_req		[NrHosts];
	wire				host_gnt		[NrHosts];
	wire	[`ADDR_WIDTH-1:0]	host_addr		[NrHosts];
	wire				host_we			[NrHosts];
	wire	[`DATA_WIDTH-1:0]	host_wdata		[NrHosts];
	wire	[`DATA_WIDTH-1:0]	host_rdata		[NrHosts];

	wire				device_req		[NrDevices];
	wire	[`ADDR_WIDTH-1:0]	device_addr		[NrDevices];
	wire				device_we		[NrDevices];
	wire	[`DATA_WIDTH-1:0]	device_wdata		[NrDevices];
	wire	[`DATA_WIDTH-1:0]	device_rdata		[NrDevices];


	wire	[`ADDR_WIDTH-1:0]	cfg_device_addr_base	[NrDevices];
	wire	[`ADDR_WIDTH-1:0]	cfg_device_addr_mask	[NrDevices];

	assign	cfg_device_addr_base[`DEV_RAM] = 32'h0;
	assign	cfg_device_addr_mask[`DEV_RAM] = ~32'hFFFFF;



	bus #(
			.NrDevices	(NrDevices),
			.NrHosts	(NrHosts),
			.DataWidth	(`DATA_WIDTH),
			.AddressWidth	(`ADDR_WIDTH)
	     ) u_bus (
		     .clk_i	(clk_i),
		     .rst_i	(rst_i),

		     .host_req_i	(host_req),
		     .host_gnt_o	(host_gnt),
		     .host_addr_i	(host_addr),
		     .host_we_i		(host_we),
		     .host_wdata_i	(host_wdata),
		     .host_rdata_o	(host_rdata),


		     .device_req_o	(device_req),
		     .device_addr_o	(device_addr),
		     .device_we_o	(device_we),
		     .device_wdata_o	(device_wdata),
		     .device_rdata_i	(device_rdata),

		     .cfg_device_addr_base,
		     .cfg_device_addr_mask
		     );






	wire[`ADDR_WIDTH-1:0]	core_ram_pc;
	wire			core_ram_ce;
	wire[`DATA_WIDTH-1:0]	ram_core_inst;

	core_top core_top0(
			.rst_i(rst_i),
			.clk_i(clk_i),
			.halt_o(halt_o),

			.ram_we_o(host_we[`HOST_CORE_PORT]),
			.ram_addr_o(host_addr[`HOST_CORE_PORT]),
			.ram_wdata_o(host_wdata[`HOST_CORE_PORT]),
			.ram_rdata_i(host_rdata[`HOST_CORE_PORT]),

			.pc_wire_o(core_ram_pc),
			.ce_wire_o(core_ram_ce),
			.if_inst_i(ram_core_inst)
			);


	dpram	dpram0(
			.rst_i(rst_i),
			.clk_i(clk_i),

			.we_i(device_we[`DEV_RAM]),
			.addr_i(device_addr[`DEV_RAM]),
			.data_i(device_wdata[`DEV_RAM]),
			.data_o(device_rdata[`DEV_RAM]),

			.pc_i(core_ram_pc),
			.inst_ce_i(core_ram_ce),
			.inst_o(ram_core_inst)
			);


endmodule
