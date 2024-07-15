//
//module addr_4(a,b,sum,cout,overflow);
//	
//	input reg [3:0]a;
//	input reg [3:0]b;
//	input cin;
//	input overflow;
//
//	output reg [3:0]sum;
//	output cout;
//
//	wire temp0,temp1,temp2;
//	wire sum0,sum1,sum2,sum3;
//
//	addr ins1(.a(a[0]),.b(b[0]),.cin(1'b0),.sum(sum0),.cout(temp0));
//	addr ins2(.a(a[1]),.b(b[1]),.cin(temp0),.sum(sum1),.cout(temp1));
//	addr ins3(.a(a[2]),.b(b[2]),.cin(temp1),.sum(sum2),.cout(temp2));
//	addr ins4(.a(a[3]),.b(b[3]),.cin(temp2),.sum(sum3),.cout(cout));
//
//	assign sum = {sum3,sum2,sum1,sum0};
//	assign overflow = (a[3]==b[3])&&(a[3]!=sum[3]);
//	
//endmodule
//
//module addr(input a,b,cin,output sum,cout);
//
//	wire [3:0] temp;
//	assign {cout,temp}=a+b+cin;	
//	
//	assign sum = sum[3]?({temp[3],~temp[2:0]}+1'b1):temp;
//
//endmodule


module addr_4(a,b,sum,cout,overflow);

	input [3:0] a,b;
	output [3:0] sum;
	output cout,overflow;
	
	wire [3:0] temp;
	
	assign {cout,temp[3:0]} = a+b; 
	assign sum = temp[3]?({temp[3],~temp[2:0]}):temp;

	assign overflow = (a[3]==b[3])&&(sum[3]!=a[3]);

endmodule












