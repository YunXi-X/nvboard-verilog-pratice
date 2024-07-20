module lfsr(clk,out);
input clk;
output reg [7:0]out;
reg [7:0]counter;


    always@(posedge clk) begin

        if(out == 8'b00000000) begin
            counter = 8'b00000000;
            out <= 8'b0000001;
        end
            else begin
            if (counter < 8'b11111111) begin
                out[7]<=out[4]^out[3]^out[2]^out[0];
//                reg_d u0(.i(out[7]),.clk(clk),.out(out[6]));
//                reg_d u1(.i(out[6]),.clk(clk),.out(out[5]));
//                reg_d u2(.i(out[5]),.clk(clk),.out(out[4]));
//                reg_d u3(.i(out[4]),.clk(clk),.out(out[3]));
//                reg_d u4(.i(out[3]),.clk(clk),.out(out[2]));
//                reg_d u5(.i(out[2]),.clk(clk),.out(out[1]));
//                reg_d u6(.i(out[1]),.clk(clk),.out(out[0]));
                out[6]<=out[7];                
                out[5]<=out[6];                
                out[4]<=out[5];                
                out[3]<=out[4];                
                out[2]<=out[3];                
                out[1]<=out[2];                
                out[0]<=out[1];                
              counter = counter + 1;
            end else begin
                out <= 8'b00000000;
            end
        end
    end
endmodule
