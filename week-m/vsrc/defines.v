`define	RNUM		32	//暫存器數量
`define	ADDR_WIDTH	32
`define	RADDR_WIDTH	5	//暫存器編號	
`define	DATA_WIDTH	32
`define	RDATA_WIDTH	32	//暫存器位元數
`define	MEM_SIZE	32'h200000
`define	MEM_OFFSET	32'h0
`define	PART_ADDR_WIDTH	21

`define	RAM_SIZE	65535
`define	RAM_WIDTH	16
`define	STOP		1
`define	NOSTOP		0
`define HALT_ADDR	32'h200008

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

`define	R_TYPE		1'b0
`define	INST_ADD_SUB	3'b000		//fun3 ADD_SUB
`define	INST_SLL	3'b001		//fun3 SLL
`define	INST_SLT	3'b010		//fun3 SLT
`define	INST_SLTU	3'b011		//fun3 SLTU
`define	INST_XOR	3'b100		//fun3 XOR
`define	INST_SR		3'b101		//fun3 SR
`define	INST_OR		3'b110		//fun3 OR
`define	INST_AND	3'b111		//fun3 AND

`define	M_TYPE		1'b1
`define	INST_MUL	3'b000
`define	INST_MULH	3'b001
`define	INST_MULSU	3'b010
`define	INST_MULHU	3'b011
`define	INST_DIV	3'b100
`define	INST_DIVU	3'b101
`define	INST_REM	3'b110
`define	INST_REMU	3'b111


//LUI AUIPC
`define INST_TYPE_LUI	7'b0110111	//opcode
`define INST_TYPE_AUIPC	7'b0010111	//opcode

//S
`define INST_TYPE_S	7'b0100011	//opcode
`define INST_SB 	3'b000		//fun3 SB
`define INST_SH 	3'b001		//fun3 SH
`define INST_SW 	3'b010		//fun3 SW
`define SB		4'b0001		
`define SH		4'b0010		
`define SW		4'b0011		


//L
`define INST_TYPE_L	7'b0000011	//opcode
`define INST_LB 	3'b000		//fun3 LB
`define INST_LH 	3'b001		//fun3 LH
`define INST_LW 	3'b010		//fun3 LW
`define INST_LBU 	3'b100		//fun3 LBU
`define INST_LHU 	3'b101		//fun3 LHU
`define LB		4'b1001		
`define LH		4'b1010		
`define LW		4'b1011		
`define LBU		4'b1100		
`define LHU		4'b1101		
`define MEM_NOP		4'b0000		

//J
`define	INST_TYPE_JAL	7'b1101111
`define	INST_TYPE_JALR	7'b1100111

//B
`define	INST_TYPE_B	7'b1100011
`define	INST_BEQ	3'b000
`define	INST_BNE	3'b001
`define	INST_BLT	3'b100
`define	INST_BGE	3'b101
`define	INST_BLTU	3'b110
`define	INST_BGEU	3'b111


