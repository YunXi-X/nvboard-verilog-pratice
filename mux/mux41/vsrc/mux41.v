module mux41(
	input [1:0] Y,
	input X_0, X_1, X_2, X_3,
	output reg out
);
	always@(*)begin
		case(Y)
			2'b00: out = X_0;			
			2'b01: out = X_1;			
			2'b10: out = X_2;			
			2'b11: out = X_3;			
		endcase
	end

endmodule














