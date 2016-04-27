`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question4
//////////////////////////////////////////////////////////////////////////////////
module decoder_4x8(input [3:0] in,
						output reg [7:0] c);
			//4bit input
			//8bit output
			//if the input is the binary represenation of 0-9
			//output lights up the LEDs that correspond
			//to the number. If input > 9, decimal point LED lights up
	always@* begin
		c = 0;
		case (in)
			0: c = 8'b0001_1111;
			1: c = 8'b0000_0110;
			2: c = 8'b0101_1011;
			3: c = 8'b0100_1111;
			4: c = 8'b0110_0110;
			5: c = 8'b0110_1101;
			6: c = 8'b0111_1101;
			7: c = 8'b0000_0111;
			8:	c = 8'b0111_1111;
			9: c = 8'b0110_1111;
			default: c = 8'b1000_0000;
		endcase
	end
endmodule

module tb_decoder_4x8;
	wire [7:0] c;
	reg [3:0] in;
	decoder_4x8 test1 (in, c);
	initial begin
		in = 0;
		while (in < 16)
			#5 in = in + 1;
	end
endmodule
