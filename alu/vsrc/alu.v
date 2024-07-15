module alu(
	input [3:0] a,
	input [3:0]	b,	
	input i_mod,		//mod select

	output o_overflow_1, o_overflow_2,	//overflow flag
	output o_res_1, o_res_2,
	output o_minus,
	output o_cout_1,o_cout_2,
	output [3:0] o_max,
	output o_equ,
	output [7:0]o_seg,
	output [3:0] o_and,
	output [3:0] o_or,
	output [3:0] o_not,
	output [3:0] o_xor

);
	wire [3:0] a_1,b_1,b_sub,b_sub_1;
	wire [3:0] max_0;

	wire [3:0] not_0,and_0,or_0,xor_0,equ_0;
	wire [3:0] b_sub_1;

	assign not_0=~a;
	assign a_1=(a[3])?({a[3],~a[2:0]}+1'b1):a;
	assign b_1=(b[3])?({b[3],~b[2:0]}+1'b1):b;

	assign b_sub = {~b[3],b[2:0]};
	assign b_sub_1 = (b_sub[3])?({b_sub[3],~b[2:0]}+1'b1):b_sub;
	
	addr_4 addr_4_i1(.a(a_1),.b(b_1),.sum(o_res_1),.cout(o_cout_1),.overflow(o_overflow_1));
	addr_4 addr_4_i2(.a(a_1),.b(b_sub_1),.sum(o_res_2),.cout(o_cout_2),.overflow(o_overflow_2));

	log_max max_i0(.a(a),.b(b),.out(o_max));
	log_and and_i0(.a(a),.b(b),.out(o_and));
	log_or or_i0(.a(a),.b(b),.out(o_or));
	log_xor xor_i0(.a(a),.b(b),.out(o_xor));

	
endmodule

