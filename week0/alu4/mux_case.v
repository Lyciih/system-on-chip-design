module mux_case (
		input	a_i,
		input	b_i,
		input	c_i,
		input	d_i,
		input	[1:0]	sel_i,
		output	q_o
		);

	reg q;
	assign q_o = q;

	always@(*)
	begin
		case(sel_i)
			2'b00	: q = a_i;
			2'b01	: q = b_i;
			2'b10	: q = c_i;
			default	: q = d_i;
		endcase
	end

endmodule
	
