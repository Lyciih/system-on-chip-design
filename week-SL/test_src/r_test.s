.org	0x0
.global	_start
_start:
	ori x1, x0, 7
	ori x2, x0, 8
	add x3, x1, x2


	ori x1, x0, 7
	ori x2, x0, 8
	sub x3, x1, x2

	ori x1, x0, 7
	ori x2, x0, 8
	sll x3, x1, x2


	ori x1, x0, -7
	ori x2, x0, 8
	slt x3, x1, x2


	ori x1, x0, -1
	ori x2, x0, 3
	sltu x3, x1, x2


	ori x1, x0, 10
	ori x2, x0, 15
	xor x3, x1, x2


	ori x1, x0, -20
	ori x2, x0, 8
	srl x3, x1, x2


	ori x1, x0, -20
	ori x2, x0, 8
	sra x3, x1, x2


	ori x1, x0, 3
	ori x2, x0, 12
	or x3, x1, x2


	ori x1, x0, 15
	ori x2, x0, 10
	and x3, x1, x2
