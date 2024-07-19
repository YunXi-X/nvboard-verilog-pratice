module lfsr_top(clk,out);
    input clk;
    output reg [7:0] out;

    lfsr lfsr_i0(.clk(clk),.out(out));
    
endmodule 
