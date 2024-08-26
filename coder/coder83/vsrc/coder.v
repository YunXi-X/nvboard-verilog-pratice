module coder(x,en,out,seg);
	input [7:0]x;
	input en;
	output reg[2:0] out;
    output reg[7:0] seg;

	integer i;

    parameter HEX0 = 8'b0000_0010;
    parameter HEX1 = 8'b1001_1111;
    parameter HEX2 = 8'b0010_0101;
    parameter HEX3 = 8'b0000_1101;
    parameter HEX4 = 8'b1001_1001;
    parameter HEX5 = 8'b0100_1001;
    parameter HEX6 = 8'b0100_0001;
    parameter HEX7 = 8'b0001_1111;
    parameter HEX8 = 8'b0000_0000;

	always@(x or en) begin
		if(en) begin
			out=0;
			for(i=0;i<=7;i=i+1) 
                if(x[i]==1) begin
                    out=i[2:0];
                    case(out)
                        3'b000: seg<=HEX0;
                        3'b001: seg<=HEX1;
                        3'b010: seg<=HEX2;
                        3'b011: seg<=HEX3;
                        3'b100: seg<=HEX4;
                        3'b101: seg<=HEX5;
                        3'b110: seg<=HEX6;
                        3'b111: seg<=HEX7;
                    endcase
                end
			end
		else out=0;
	end

endmodule
