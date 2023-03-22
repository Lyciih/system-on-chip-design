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
`define	INST_ADDI	3'b000		//fun3 ADDI
`define	INST_SLTI	3'b010		//fun3 SLTI
`define	INST_SLTIU	3'b011		//fun3 SLTIU
`define	INST_XORI	3'b100		//fun3 XORI
`define	INST_ORI	3'b110		//fun3 ORI
`define	INST_ANDI	3'b111		//fun3 ANDI
`define	INST_SLLI	3'b001		//fun3 SLLI
`define	INST_SRLI_AND_SRAI	3'b101		//fun3 SRLI and SRAI


`define	INST_TYPE_R_M	7'b0110011	//opcode

`define	INST_ADD_SUB	3'b000		//fun3 ADD_SUB
`define	INST_SLL	3'b001		//fun3 SLL
`define	INST_SLT	3'b010		//fun3 SLT
`define	INST_SLTU	3'b011		//fun3 SLTU
`define	INST_XOR	3'b100		//fun3 XOR
`define	INST_SR		3'b101		//fun3 SR
`define	INST_OR		3'b110		//fun3 OR
`define	INST_AND	3'b111		//fun3 AND


