`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question 2
//////////////////////////////////////////////////////////////////////////////////
module mux_5x1(input [14:0] in, [2:0] sel,
					output reg [2:0] out
    );//The specifications call for -2 to 2 to be passed to output
		//3 bits are required to represent this.
		//bits 2:0 of in will hold a binary -2,
		//bits 5:3 will hold a binary -1, etc.
		//sel is 3 bits since that is required to select from 5 inputs
		//out is 3 bits since each selected input will be 3 bits
always@* begin
	if (sel == 0) out = in[2:0];
	else if (sel == 1) out = in[5:3];
	else if (sel == 2) out = in[8:6];
	else if (sel == 3) out = in[11:9];
	else if (sel == 4) out = in[14:12];
	else out = 3'bxxx;
end
endmodule

module tb_mux_5x1;
	wire [2:0] out;
	reg [14:0] in;
	reg [2:0] sel;
	mux_5x1 test1 (in, sel, out);
	initial begin
		in[2:0] = -2;
		in[5:3] = -1;
		in[8:6] = 0;
		in[11:9] = 1;
		in[14:12] = 2;
		sel = 3'b000;
		#5 sel = 1;
		#5 sel = 2;
		#5 sel = 3;
		#5 sel = 4;
		#5 sel = 5;
	end
endmodule
