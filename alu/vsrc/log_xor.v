module log_xor(a,b,out);
	
	input reg [3:0]a,b;
	output reg [3:0]out;

	assign out = a^b;

endmodule
