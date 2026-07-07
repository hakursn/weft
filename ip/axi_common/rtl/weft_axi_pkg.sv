// weft_axi_pkg.sv — Weft's AXI type/constant package.
// Holds only the width-independent AXI sub-fields, the encodings, and the
// elaboration-time config/rule structs. Address/data/ID/user widths stay
// per-instance parameters on the modules, so the crossbar is fully parameterized.

package weft_axi_pkg;
  // Fixed-width AXI sub-fields
  typedef logic [7:0] len_t;      // AxLEN  (beats-1)
  typedef logic [2:0] size_t;     // AxSIZE (log2 bytes)
  typedef logic [1:0] burst_t;    // AxBURST
  typedef logic [3:0] cache_t;    // AxCACHE
  typedef logic [2:0] prot_t;     // AxPROT
  typedef logic [3:0] qos_t;      // AxQOS
  typedef logic [3:0] region_t;   // AxREGION
  typedef logic [1:0] resp_t;     // xRESP
  typedef logic [5:0] atop_t;     // atomic op (kept for shape; unused when ATOPs=0)

  // AxBURST encodings
  localparam burst_t BURST_FIXED = 2'b00;
  localparam burst_t BURST_INCR  = 2'b01;
  localparam burst_t BURST_WRAP  = 2'b10;

  // xRESP encodings
  localparam resp_t RESP_OKAY   = 2'b00;
  localparam resp_t RESP_EXOKAY = 2'b01;
  localparam resp_t RESP_SLVERR = 2'b10;
  localparam resp_t RESP_DECERR = 2'b11;

  // AxSIZE from a byte count (bytes = 2**size)
  function automatic size_t size_from_bytes(input int unsigned bytes);
    size_from_bytes = '0;
    for (int s = 0; s < 8; s++) if ((1 << s) == bytes) size_from_bytes = size_t'(s);
  endfunction

  // Crossbar configuration (passed as a parameter at elaboration)
  typedef struct packed {
    logic [31:0] NoSlvPorts;    // AXI managers connecting into the xbar
    logic [31:0] NoMstPorts;    // AXI subordinates connecting out
    logic [31:0] MaxMstTrans;   // max outstanding transactions per manager port
    logic [31:0] MaxSlvTrans;   // max outstanding transactions per subordinate port
    logic        FallThrough;   // 0 = register (cut) arbitration path, 1 = combinational
    logic [31:0] AddrWidth;
    logic [31:0] DataWidth;
    logic [31:0] IdWidth;       // manager-side ID width
    logic [31:0] UserWidth;
  } xbar_cfg_t;

  // One contiguous address region -> one subordinate index: start <= addr < end
  typedef struct packed {
    logic [31:0] idx;
    logic [63:0] start_addr;
    logic [63:0] end_addr;
  } xbar_rule_t;
endpackage