
module addr_4(a,b,cin,sum,cout);
	
	input reg [3:0]a;
	input reg [3:0]b;
	input cin;

	output reg [3:0]sum;
	output cout;

	wire temp0,temp1,temp2;
	wire sum0,sum1,sum2,sum3;

	addr ins1(.a(a[0]),.b(b[0]),.cin(cin),.sum(sum0),.cout(temp0));
	addr ins2(.a(a[1]),.b(b[1]),.cin(temp0),.sum(sum1),.cout(temp1));
	addr ins3(.a(a[2]),.b(b[2]),.cin(temp1),.sum(sum2),.cout(temp2));
	addr ins4(.a(a[3]),.b(b[3]),.cin(temp2),.sum(sum3),.cout(cout));

	assign sum = {sum3,sum2,sum1,sum0};
	
endmodule

module addr(input a,b,cin,output sum,cout);

	assign {cout,sum}=a+b+cin;	

endmodule
