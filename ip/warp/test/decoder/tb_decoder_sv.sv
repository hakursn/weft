`timescale 1ns/1ps
module tb_decoder_sv; import warp_pkg::*;
  logic [31:0] ins; decoded_t d; int errors=0;
  warp_decoder dut(.instr_i(ins),.d_o(d));
  function [31:0] R(input [6:0] f7,input [4:0] rs2,input [4:0] rs1,input [2:0] f3,input [4:0] rd,input [6:0] op); return {f7,rs2,rs1,f3,rd,op}; endfunction
  function [31:0] I(input [11:0] imm,input [4:0] rs1,input [2:0] f3,input [4:0] rd,input [6:0] op); return {imm,rs1,f3,rd,op}; endfunction
  function [31:0] S(input [11:0] imm,input [4:0] rs2,input [4:0] rs1,input [2:0] f3,input [6:0] op); return {imm[11:5],rs2,rs1,f3,imm[4:0],op}; endfunction
  function [31:0] U(input [19:0] immhi,input [4:0] rd,input [6:0] op); return {immhi,rd,op}; endfunction
  task automatic ck(input string nm, input cond); if(!cond) begin errors++; $display("  %s FAIL",nm); end endtask
  initial begin
    // ADDI x1,x0,5
    ins=I(12'd5,5'd0,3'b000,5'd1,7'b0010011); #1;
    ck("ADDI rd",  d.rd==5'd1); ck("ADDI rs1",d.rs1==5'd0); ck("ADDI imm",d.imm==32'd5);
    ck("ADDI alu", d.alu_op==ALU_ADD); ck("ADDI opb",d.opb_sel==B_IMM); ck("ADDI wr",d.reg_write); ck("ADDI wb",d.wb_sel==WB_ALU);
    // SUB x3,x1,x2
    ins=R(7'b0100000,5'd2,5'd1,3'b000,5'd3,7'b0110011); #1;
    ck("SUB alu",d.alu_op==ALU_SUB); ck("SUB opb",d.opb_sel==B_RS2); ck("SUB rs2",d.rs2==5'd2);
    // SRAI x5,x6,3
    ins=I({7'b0100000,5'd3},5'd6,3'b101,5'd5,7'b0010011); #1;
    ck("SRAI alu",d.alu_op==ALU_SRA); ck("SRAI imm",d.imm[4:0]==5'd3);
    // LW x5,8(x6)
    ins=I(12'd8,5'd6,3'b010,5'd5,7'b0000011); #1;
    ck("LW load",d.is_load); ck("LW wb",d.wb_sel==WB_MEM); ck("LW imm",d.imm==32'd8); ck("LW f3",d.mem_funct3==3'b010);
    // SW x7,12(x8)
    ins=S(12'd12,5'd7,5'd8,3'b010,7'b0100011); #1;
    ck("SW store",d.is_store); ck("SW nowr",!d.reg_write); ck("SW imm",d.imm==32'd12); ck("SW rs2",d.rs2==5'd7);
    // BEQ x9,x10,+16  (imm_b, offset 16)
    ins={7'b0000000,5'd10,5'd9,3'b000,5'd0,7'b1100011}; #1;  // raw; check flags
    ck("BEQ br",d.is_branch); ck("BEQ nowr",!d.reg_write); ck("BEQ op",d.br_op==3'b000);
    // LUI x11,0x12345
    ins=U(20'h12345,5'd11,7'b0110111); #1;
    ck("LUI imm",d.imm==32'h12345000); ck("LUI opa",d.opa_sel==A_ZERO); ck("LUI wr",d.reg_write);
    // AUIPC x12,0x1
    ins=U(20'h00001,5'd12,7'b0010111); #1;
    ck("AUIPC opa",d.opa_sel==A_PC); ck("AUIPC imm",d.imm==32'h00001000);
    // JAL x1
    ins={20'h00000,5'd1,7'b1101111}; #1;
    ck("JAL jal",d.is_jal); ck("JAL wb",d.wb_sel==WB_PC4); ck("JAL wr",d.reg_write);
    // JALR x1,x2,0
    ins=I(12'd0,5'd2,3'b000,5'd1,7'b1100111); #1;
    ck("JALR jalr",d.is_jalr); ck("JALR wb",d.wb_sel==WB_PC4);
    // illegal
    ins=32'hFFFFFFFF; #1; ck("illegal",d.illegal);
    $display("decoder SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule