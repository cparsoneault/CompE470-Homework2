`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question3 
//////////////////////////////////////////////////////////////////////////////////
module comparator(input [1:0] x1, x2,
						output reg LT, EQ, GrT
    );//x1 and x2 are 2 bit inputs
		//LT, EQ, GrT are 1 bit outputs
		//LT = 1 when x1 < x2
		//EQ = 1 when x1 = x2
		//GrT = 1 when x1 > x2
	always@* begin
		LT = 0; EQ = 0; GrT = 0;
		if (x1 > x2)
			GrT = 1;
		else if (x1 == x2)
			EQ = 1;
		else if (x1 < x2)
			LT = 1;
		else begin
			LT = 1'bx;
			GrT = 1'bx;
			EQ = 1'bx;
		end
	end
endmodule

module tb_comparator;
	wire LT, EQ, GrT;
	reg [1:0] x1, x2;
	comparator test1 (x1, x2, LT, EQ, GrT);
	initial begin
		x1 = 2'b00; x2 = 2'b00;
		#5 x1 = 2'b01; x2 = 2'b10;
		#5 x1 = 2'b11; x2 = 2'b01;
		#5 x1 = 2'b10; x2 = 2'b10;
	end
endmodule
