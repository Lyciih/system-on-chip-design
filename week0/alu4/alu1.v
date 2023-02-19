module alu1 (
		input	a,
		input	b,
		input	c_in,
		input	[1:0] op,
		output	result,
		output	c_out
		);

	wire	c1, c2, c3;
	and	g1(c1, a, b);
	or	g2(c2, a, b);
	fulladder	g4(a, b, c_in, c3, c_out);
	mux_case	g5(c1, c2, c3, 0, op, result);

endmodule

