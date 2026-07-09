// warp_alu.sv — combinational RV32I ALU.
`default_nettype none
module warp_alu import warp_pkg::*; (
  input  alu_op_e     op_i,
  input  wire [31:0]  a_i,
  input  wire [31:0]  b_i,
  output logic [31:0] result_o
);
  wire [4:0] sh = b_i[4:0];
  always_comb unique case (op_i)
    ALU_ADD:  result_o = a_i + b_i;
    ALU_SUB:  result_o = a_i - b_i;
    ALU_SLL:  result_o = a_i << sh;
    ALU_SLT:  result_o = ($signed(a_i) <  $signed(b_i)) ? 32'd1 : 32'd0;
    ALU_SLTU: result_o = (a_i <  b_i)                    ? 32'd1 : 32'd0;
    ALU_XOR:  result_o = a_i ^ b_i;
    ALU_SRL:  result_o = a_i >> sh;
    ALU_SRA:  result_o = $unsigned($signed(a_i) >>> sh);
    ALU_OR:   result_o = a_i | b_i;
    ALU_AND:  result_o = a_i & b_i;
    default:  result_o = 32'd0;
  endcase
endmodule
`default_nettype wire