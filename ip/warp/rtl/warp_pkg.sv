// warp_pkg.sv — Warp core parameters + decode control types (clean-room RV32I core).
package warp_pkg;
  localparam int unsigned XLEN         = 32;
  localparam logic [31:0]  RESET_VECTOR = 32'h8000_0000;

  typedef enum logic [3:0] {
    ALU_ADD, ALU_SUB, ALU_SLL, ALU_SLT, ALU_SLTU,
    ALU_XOR, ALU_SRL, ALU_SRA, ALU_OR,  ALU_AND
  } alu_op_e;

  typedef enum logic [1:0] { A_RS1, A_PC,  A_ZERO } opa_sel_e;   // ALU operand-A source
  typedef enum logic       { B_RS2, B_IMM }         opb_sel_e;   // ALU operand-B source
  typedef enum logic [1:0] { WB_ALU, WB_MEM, WB_PC4 } wb_sel_e;  // writeback source

  typedef struct packed {
    logic [4:0]  rs1, rs2, rd;
    logic [31:0] imm;
    alu_op_e     alu_op;
    opa_sel_e    opa_sel;
    opb_sel_e    opb_sel;
    logic        is_branch;
    logic [2:0]  br_op;        // branch condition = funct3
    logic        is_jal, is_jalr;
    logic        is_load, is_store;
    logic [2:0]  mem_funct3;   // load/store size + sign
    logic        reg_write;
    wb_sel_e     wb_sel;
    logic        illegal;
  } decoded_t;
endpackage