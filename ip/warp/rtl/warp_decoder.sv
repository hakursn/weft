// warp_decoder.sv — combinational RV32I instruction decoder.
`default_nettype none
module warp_decoder import warp_pkg::*; (
  input  wire [31:0] instr_i,
  output decoded_t   d_o
);
  wire [6:0] opcode = instr_i[6:0];
  wire [2:0] funct3 = instr_i[14:12];
  wire [6:0] funct7 = instr_i[31:25];
  // immediates by format
  wire [31:0] imm_i = {{20{instr_i[31]}}, instr_i[31:20]};
  wire [31:0] imm_s = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};
  wire [31:0] imm_b = {{19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0};
  wire [31:0] imm_u = {instr_i[31:12], 12'b0};
  wire [31:0] imm_j = {{11{instr_i[31]}}, instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};

  always_comb begin
    d_o            = '0;
    d_o.rs1        = instr_i[19:15];
    d_o.rs2        = instr_i[24:20];
    d_o.rd         = instr_i[11:7];
    d_o.imm        = imm_i;
    d_o.alu_op     = ALU_ADD;
    d_o.opa_sel    = A_RS1;
    d_o.opb_sel    = B_IMM;
    d_o.br_op      = funct3;
    d_o.mem_funct3 = funct3;
    d_o.wb_sel     = WB_ALU;
    d_o.illegal    = 1'b0;

    unique case (opcode)
      7'b0110111: begin // LUI:  rd = imm
        d_o.imm=imm_u; d_o.opa_sel=A_ZERO; d_o.opb_sel=B_IMM; d_o.alu_op=ALU_ADD; d_o.reg_write=1'b1;
      end
      7'b0010111: begin // AUIPC: rd = pc + imm
        d_o.imm=imm_u; d_o.opa_sel=A_PC; d_o.opb_sel=B_IMM; d_o.alu_op=ALU_ADD; d_o.reg_write=1'b1;
      end
      7'b1101111: begin // JAL: rd = pc+4 ; target = pc + imm_j
        d_o.imm=imm_j; d_o.is_jal=1'b1; d_o.reg_write=1'b1; d_o.wb_sel=WB_PC4;
      end
      7'b1100111: begin // JALR: rd = pc+4 ; target = (rs1+imm_i)&~1
        d_o.imm=imm_i; d_o.is_jalr=1'b1; d_o.reg_write=1'b1; d_o.wb_sel=WB_PC4;
      end
      7'b1100011: begin // BRANCH
        d_o.imm=imm_b; d_o.is_branch=1'b1; d_o.reg_write=1'b0;
      end
      7'b0000011: begin // LOAD
        d_o.imm=imm_i; d_o.opa_sel=A_RS1; d_o.opb_sel=B_IMM; d_o.alu_op=ALU_ADD;
        d_o.is_load=1'b1; d_o.reg_write=1'b1; d_o.wb_sel=WB_MEM;
      end
      7'b0100011: begin // STORE
        d_o.imm=imm_s; d_o.opa_sel=A_RS1; d_o.opb_sel=B_IMM; d_o.alu_op=ALU_ADD; d_o.is_store=1'b1;
      end
      7'b0010011: begin // OP-IMM
        d_o.imm=imm_i; d_o.opa_sel=A_RS1; d_o.opb_sel=B_IMM; d_o.reg_write=1'b1;
        unique case (funct3)
          3'b000: d_o.alu_op=ALU_ADD;                                  // ADDI
          3'b010: d_o.alu_op=ALU_SLT;                                  // SLTI
          3'b011: d_o.alu_op=ALU_SLTU;                                 // SLTIU
          3'b100: d_o.alu_op=ALU_XOR;                                  // XORI
          3'b110: d_o.alu_op=ALU_OR;                                   // ORI
          3'b111: d_o.alu_op=ALU_AND;                                  // ANDI
          3'b001: d_o.alu_op=ALU_SLL;                                  // SLLI
          3'b101: d_o.alu_op=(funct7[5])?ALU_SRA:ALU_SRL;              // SRAI/SRLI
          default: d_o.illegal=1'b1;
        endcase
      end
      7'b0110011: begin // OP (R-type)
        d_o.opa_sel=A_RS1; d_o.opb_sel=B_RS2; d_o.reg_write=1'b1;
        unique case (funct3)
          3'b000: d_o.alu_op=(funct7[5])?ALU_SUB:ALU_ADD;             // ADD/SUB
          3'b001: d_o.alu_op=ALU_SLL;
          3'b010: d_o.alu_op=ALU_SLT;
          3'b011: d_o.alu_op=ALU_SLTU;
          3'b100: d_o.alu_op=ALU_XOR;
          3'b101: d_o.alu_op=(funct7[5])?ALU_SRA:ALU_SRL;
          3'b110: d_o.alu_op=ALU_OR;
          3'b111: d_o.alu_op=ALU_AND;
          default: d_o.illegal=1'b1;
        endcase
      end
      7'b0001111: begin d_o.reg_write=1'b0; end                        // FENCE -> NOP
      default:    d_o.illegal=1'b1;                                    // incl. SYSTEM (Phase 1b)
    endcase
  end
endmodule
`default_nettype wire