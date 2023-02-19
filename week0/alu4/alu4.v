module alu4 (
		input	[3:0]	a,
		input	[3:0]	b,
		input	c_in,
		input	[1:0]	op,
		output	[3:0]	result,
		output	c_out
	    );

	wire c1, c2, c3;

	alu1	al0(a[0], b[0], c_in, op, result[0], c1);
	alu1	al1(a[1], b[1], c1, op, result[1], c2);
	alu1	al2(a[2], b[2], c2, op, result[2], c3);
	alu1	al3(a[3], b[3], c3, op, result[3], c_out);

endmodule

	
		
