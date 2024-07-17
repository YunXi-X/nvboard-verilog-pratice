module alu(
	input [3:0] a,
	input [3:0]	b,	
	input [2:0] i_mod,		//mod select

	output o_overflow,	//overflow flag
	output o_cout,
	output [7:0] o_seg,
    output [3:0] o_res,
    output [7:0] o_minus
);
	wire [3:0] a_1,b_1,b_sub,b_sub_1;
	wire [3:0] b_sub_1;
    wire o_overflow_1, o_overflow_2, o_cout_1, o_cout_2;
    
    wire [3:0] o_res_1, o_res_2;
    wire [3:0] o_max, o_and, o_or, o_not, o_xor, o_equ;

	assign o_not=~a;
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
    log_equ eq_i0(.a(a),.b(b),.out(o_equ));
    
    MuxKey #(8,3,4) Mux_i0(o_res,i_mod,{
            3'b000,o_res_1,
            3'b001,o_res_2,
            3'b010,o_not,
            3'b011,o_and,
            3'b100,o_or,
            3'b101,o_xor,
            3'b110,o_max,
            3'b111,o_equ
        });

    MuxKey #(2,3,1) Mux_i1(o_cout,i_mod,{
            3'b000,o_cout_1,
            3'b001,o_cout_2
        });

    MuxKey #(2,3,1) Mux_i2(o_overflow,i_mod,{
            3'b000,o_overflow_1,
            3'b001,o_overflow_2
        });

    seg seg_i0(.i_minus(o_res[3]),.i_seg(o_res[2:0]),.o_seg(o_seg));
    assign o_minus = o_res[3]?8'b11111101:8'b11111111;

endmodule

