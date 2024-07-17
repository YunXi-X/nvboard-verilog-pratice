module log_equ(input [3:0]a, input [3:0]b,output [3:0]out);

	assign out = (a==b)? 4'b0001:4'b0000;

endmodule
