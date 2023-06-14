`define	RNUM		32	//暫存器數量
`define	ADDR_WIDTH	32
`define	RADDR_WIDTH	5	//暫存器編號	
`define	DATA_WIDTH	32
`define	RDATA_WIDTH	32	//暫存器位元數
`define	MEM_SIZE	32'h200000
`define	MEM_OFFSET	32'h0
`define	PART_ADDR_WIDTH	21

`define	RAM_SIZE	65535
`define	RAM_WIDTH	22
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

//CSR
`define INST_TYPE_SYSTEM	7'b1110011	//opcode
`define	INST_CSR_PRIV	3'b000
`define	INST_CSRRW	3'b001
`define	INST_CSRRS	3'b010
`define	INST_CSRRC	3'b011
`define	INST_CSRRWI	3'b101
`define	INST_CSRRSI	3'b110
`define	INST_CSRRCI	3'b111


`define	CSR_ADDR_WIDTH		12
`define	CSR_MVENDORID_ADDR	12'hF11
`define	CSR_MARCHID_ADDR	12'hF12
`define	CSR_MIMPID_ADDR		12'hF13
`define	CSR_MHARTID_ADDR	12'hF14
/*------ Machine trap setup ---------*/
`define	CSR_MSTATUS_ADDR	12'h300
`define	CSR_MISA_ADDR		12'h301
`define	CSR_MEDELEG_ADDR	12'h302
`define	CSR_MIDELEG_ADDR	12'h303
`define	CSR_MIE_ADDR		12'h304
`define	CSR_MTVEC_ADDR		12'h305
`define	CSR_MCOUNTEREN_ADDR	12'h306
`define	CSR_MCOUNTINHIBIT_ADDR	12'h320

/*------ Machine trap handling ------*/
`define	CSR_MSCRATCH_ADDR	12'h340
`define	CSR_MEPC_ADDR		12'h341
`define	CSR_MCAUSE_ADDR		12'h342
`define	CSR_MTVAL_ADDR		12'h343
`define	CSR_MIP_ADDR		12'h344

`define	CSR_CYCLE_ADDR		12'hC00
`define	CSR_CYCLEH_ADDR		12'hC80
`define	CSR_MCYCLE_ADDR		12'hB00
`define	CSR_MCYCLEH_ADDR	12'hB80
`define	CSR_MINSTRET_ADDR	12'hB02
`define	CSR_MINSTRETH_ADDR	12'hB82

/*------ Machine memory protection --*/
`define	CSR_PMPCFG0_ADDR	12'h3A0
`define	CSR_PMPADDR0_ADDR	12'h3B0


/*------ Supervisor trap setup ------*/
`define	CSR_STVEC_ADDR		12'h105


/*------ Supervisor trap handling ---*/
`define	CSR_SSCRATCH_ADDR	12'h140
`define	CSR_SEPC_ADDR		12'h141
`define	CSR_SCAUSE_ADDR		12'h142

/* Supervisor Protection and Translation */
`define	CSR_SATP_ADDR		12'h180
