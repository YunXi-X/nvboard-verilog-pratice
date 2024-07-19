module reg_d(input i,clk,output reg out);
    always@(posedge clk)begin
        out <= i;
    end 
endmodule
