`define	RNUM		32	//暫存器數量
`define	ADDR_WIDTH	32
`define	RADDR_WIDTH	5	//暫存器編號	
`define	DATA_WIDTH	32
`define	RDATA_WIDTH	32	//暫存器位元數
`define	MEM_SIZE	32'h200000
`define	MEM_OFFSET	32'h0
`define	PART_ADDR_WIDTH	21


`define	ZERO		32'h0
`define	ZERO_REG	0
`define	WRITE_ENABLE	1'b1
`define	READ_ENABLE	1'b1
`define	WRITE_DISABLE	1'b0
`define	READ_DISABLE	1'b0


`define	NOP		32'h00000013	//空指令
`define	INST_TYPE_I	7'b0010011	//opcode
`define	INST_ORI	3'b110		//fun3 ori

