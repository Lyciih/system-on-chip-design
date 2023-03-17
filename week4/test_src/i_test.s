.org	0x0
.global	_start
_start:
	ori x5, x5, 1
	ori x1, x5, 2
	ori x2, x5, 4
	ori x3, x5, 8
	ori x4, x5, 16

	addi x1, x1, 2
	addi x2, x2, 4
	addi x3, x3, 8
	addi x4, x4, 16
	addi x5, x5, 1

	slti x6, x1, -6
	slti x7, x2, 10
	slti x8, x3, -18
	slti x9, x4, -32
	slti x10, x5, -3


	sltiu x6, x1, -6
	sltiu x7, x2, 8
	sltiu x8, x3, -18
	sltiu x9, x4, -32
	sltiu x10, x5, -3


	xori x6, x1, 6
	xori x7, x2, 10
	xori x8, x3, 18
	xori x9, x4, 34
	xori x10, x5, 2

	andi x6, x1, 6
	andi x7, x2, 10
	andi x8, x3, 18
	andi x9, x4, 34
	andi x10, x5, 2

	
	slli x6, x1, 1
	slli x7, x2, 2
	slli x8, x3, 3
	slli x9, x4, 4
	slli x10, x5, 5


	srli x6, x1, 1
	srli x7, x2, 2
	srli x8, x3, 3
	srli x9, x4, 4
	srli x10, x5, 5


	addi x1, x0, -1
	addi x2, x0, -2
	addi x3, x0, -3
	addi x4, x0, -4
	addi x5, x0, -5
	


	srli x6, x1, 1
	srli x7, x2, 2
	srli x8, x3, 3
	srli x9, x4, 4
	srli x10, x5, 5


	addi x1, x0, -100
	addi x2, x0, -200
	addi x3, x0, 300
	addi x4, x0, -400
	addi x5, x0, -500
	


	srai x6, x1, 1
	srai x7, x2, 2
	srai x8, x3, 3
	srai x9, x4, 4
	srai x10, x5, 5
