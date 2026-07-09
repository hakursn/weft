// warp_branch.sv — branch condition evaluation (op = funct3).
`default_nettype none
module warp_branch (
  input  wire [2:0]  op_i,
  input  wire [31:0] a_i,
  input  wire [31:0] b_i,
  output logic       taken_o
);
  always_comb unique case (op_i)
    3'b000: taken_o = (a_i == b_i);
    3'b001: taken_o = (a_i != b_i);
    3'b100: taken_o = ($signed(a_i) <  $signed(b_i));
    3'b101: taken_o = ($signed(a_i) >= $signed(b_i));
    3'b110: taken_o = (a_i <  b_i);
    3'b111: taken_o = (a_i >= b_i);
    default: taken_o = 1'b0;
  endcase
endmodule
`default_nettype wire