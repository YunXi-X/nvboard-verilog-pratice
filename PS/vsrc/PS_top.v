module PS_top(
    input clk, reset,
    input in,
    input [3:0] statue,
    output reg out
    );

    parameter[3:0]  S0=0, S1=1, S2=2, S3=3, S4=4, S5=5, S6=6, S7=7, S8=8;

    reg [3:0] out_temp;

    always@(posedge clk) begin
        case(statue)
            4'b0000 : out_temp <= in ? S1:S5;
            4'b0001 : out_temp <= in ? S2:S5;
            4'b0010 : out_temp <= in ? S3:S5;
            4'b0011 : out_temp <= in ? S4:S5;
            4'b0100 : out_temp <= in ? S4:S5;
            4'b0101 : out_temp <= in ? S1:S6;
            4'b0110 : out_temp <= in ? S1:S7;
            4'b0111 : out_temp <= in ? S1:S8;
            4'b1000 : out_temp <= in ? S1:S8;
            default : out_temp <= S0;
        endcase
    end

    always@(posedge clk) begin
        case(out_temp)
            S0 : out<=0'b0,
            S1 : out<=0'b0,
            S2 : out<=0'b0,
            S3 : out<=0'b0,
            S4 : out<=0'b1,
            S5 : out<=0'b0,
            S6 : out<=0'b0,
            S7 : out<=0'b0,
            S8 : out<=0'b1,
        endcase
    end
    endmodule
