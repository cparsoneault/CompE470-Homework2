`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question1
//////////////////////////////////////////////////////////////////////////////////
module flipFlops(input clk, INIT, output reg [3:0] q
    );//clk is the clock signal
		//q is the output of each flip-flop
		//g1, g2, g3 are intermediate values that hold the combinational logic specified
	 reg g1, g2, g3;
	 always @(posedge clk or negedge INIT) begin
		if(INIT)
			q = 4'b1111;
		else begin
			g1 <= &q[2:0];
			g2 <= g1 ^ q[3];
			g3 <= g2 ^ q[0];
			q[0] <= g3;
			q[1] <= q[0];
			q[2] <= q[1];
			q[3] <= q[2];
		end
	 end
endmodule

module tb_flipFlops;
	wire [3:0] q;
	reg clk, INIT;
	flipFlops test1 (clk, INIT, q);
	initial begin
	clk = 0;
	INIT = 1;
	#5 clk = 1;
	#2 INIT = 0;
	#3 clk = 0;
	forever
		#5 clk = ~clk;
	end
endmodule
