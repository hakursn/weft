`timescale 1ns/1ps
module tb_exec_sv; import warp_pkg::*;
  int errors=0;
  // ALU
  logic [99:0] av [0:399]; alu_op_e aop; logic [31:0] aa,ab,ares,aexp;
  warp_alu ualu(.op_i(aop),.a_i(aa),.b_i(ab),.result_o(ares));
  // BRANCH
  logic [71:0] bv [0:199]; logic [2:0] bop; logic [31:0] ba,bb; logic bt,bexp;
  warp_branch ubr(.op_i(bop),.a_i(ba),.b_i(bb),.taken_o(bt));
  initial begin
    $readmemh("alu_vec.hex", av);
    for(int i=0;i<400;i++) begin
      aop=alu_op_e'(av[i][99:96]); aa=av[i][95:64]; ab=av[i][63:32]; aexp=av[i][31:0]; #1;
      if(ares!==aexp) begin errors++; if(errors<8) $display("ALU op=%0d a=%h b=%h exp=%h got=%h",av[i][99:96],aa,ab,aexp,ares); end
    end
    $readmemh("branch_vec.hex", bv);
    for(int i=0;i<200;i++) begin
      bop=bv[i][71:68][2:0]; ba=bv[i][67:36]; bb=bv[i][35:4]; bexp=bv[i][0]; #1;
      if(bt!==bexp) begin errors++; if(errors<8) $display("BR f3=%0d a=%h b=%h exp=%0d got=%0d",bv[i][71:68],ba,bb,bexp,bt); end
    end
    $display("exec SV (ALU 400 + BRANCH 200 vs ISS): errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL");
    $finish;
  end
endmodule