module log_max(input [3:0]a,b,output out);

	assign out = (a>b)?a:b;

endmodule
