module sub_4(a,b,res,cout,overflow);
	input [3:0]a,b;
	output [3:0] res;
	output cout;
	output overflow;

	wire [3:0] a_1,b_1;
	wire [3:0] b_sub,b_sub_1;
	wire [3:0] temp;

	assign a_1=(a[3])?({a[3],~a[2:0]}+1'b1):a;
	assign b_1=(b[3])?({b[3],~b[2:0]}+1'b1):b;

	assign b_sub = {~b[3],b[2:0]};
	assign b_sub_1 = b_sub[3]?({b_sub[3],~b_sub[2:0]}+1'b1):b_sub;
	
	addr_4 addr_i0(.a(a_1),.b(b_sub_1),.sum(res),.cout(cout),.overflow(overflow));

endmodule

