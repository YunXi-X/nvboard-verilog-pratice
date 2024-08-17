module FSM_top(
    input clk, reset,
    input in,
    output reg out
    );

    parameter[3:0]  S0=0, S1=1, S2=2, S3=3, S4=4, S5=5, S6=6, S7=7, S8=8;

    reg [3:0] next_statue, statue;

    always@(*) begin
        case(statue)
            4'b0000 : next_statue = in ? S1:S5;
            4'b0001 : next_statue = in ? S2:S5;
            4'b0010 : next_statue = in ? S3:S5;
            4'b0011 : next_statue = in ? S4:S5;
            4'b0100 : next_statue = in ? S4:S5;
            4'b0101 : next_statue = in ? S1:S6;
            4'b0110 : next_statue = in ? S1:S7;
            4'b0111 : next_statue = in ? S1:S8;
            4'b1000 : next_statue = in ? S1:S8;
            default : next_statue = S0;
        endcase
    end
	
    always@(posedge clk or posedge reset) begin
		statue = next_statue;	
        case(statue)
            S0 : out<=1'b0;
            S1 : out<=1'b0;
            S2 : out<=1'b0;
            S3 : out<=1'b0;
            S4 : out<=1'b1;
            S5 : out<=1'b0;
            S6 : out<=1'b0;
            S7 : out<=1'b0;
            S8 : out<=1'b1;
			default : out<=1'b0;
        endcase
    end
    endmodule
