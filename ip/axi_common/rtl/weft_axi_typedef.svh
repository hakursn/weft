// weft_axi_typedef.svh — parameterized AXI channel / req / resp struct builders.
// Include this, then invoke `WEFT_AXI_TYPEDEF_ALL(pfx, addr_t, id_t, data_t, strb_t, user_t)`
// to generate pfx_aw_chan_t, pfx_w_chan_t, ..., pfx_req_t, pfx_rsp_t.
// Depends on weft_axi_pkg for the width-independent sub-fields.
`ifndef WEFT_AXI_TYPEDEF_SVH
`define WEFT_AXI_TYPEDEF_SVH

`define WEFT_AXI_TYPEDEF_AW_CHAN_T(aw_t, addr_t, id_t, user_t) \
  typedef struct packed {                                      \
    id_t                   id;                                 \
    addr_t                 addr;                               \
    weft_axi_pkg::len_t    len;                                \
    weft_axi_pkg::size_t   size;                               \
    weft_axi_pkg::burst_t  burst;                              \
    logic                  lock;                               \
    weft_axi_pkg::cache_t  cache;                              \
    weft_axi_pkg::prot_t   prot;                               \
    weft_axi_pkg::qos_t    qos;                                \
    weft_axi_pkg::region_t region;                             \
    weft_axi_pkg::atop_t   atop;                               \
    user_t                 user;                               \
  } aw_t;

`define WEFT_AXI_TYPEDEF_W_CHAN_T(w_t, data_t, strb_t, user_t) \
  typedef struct packed { data_t data; strb_t strb; logic last; user_t user; } w_t;

`define WEFT_AXI_TYPEDEF_B_CHAN_T(b_t, id_t, user_t) \
  typedef struct packed { id_t id; weft_axi_pkg::resp_t resp; user_t user; } b_t;

`define WEFT_AXI_TYPEDEF_AR_CHAN_T(ar_t, addr_t, id_t, user_t) \
  typedef struct packed {                                      \
    id_t                   id;                                 \
    addr_t                 addr;                               \
    weft_axi_pkg::len_t    len;                                \
    weft_axi_pkg::size_t   size;                               \
    weft_axi_pkg::burst_t  burst;                              \
    logic                  lock;                               \
    weft_axi_pkg::cache_t  cache;                              \
    weft_axi_pkg::prot_t   prot;                               \
    weft_axi_pkg::qos_t    qos;                                \
    weft_axi_pkg::region_t region;                             \
    user_t                 user;                               \
  } ar_t;

`define WEFT_AXI_TYPEDEF_R_CHAN_T(r_t, data_t, id_t, user_t) \
  typedef struct packed { id_t id; data_t data; weft_axi_pkg::resp_t resp; logic last; user_t user; } r_t;

`define WEFT_AXI_TYPEDEF_REQ_T(req_t, aw_t, w_t, ar_t) \
  typedef struct packed {                              \
    aw_t aw; logic aw_valid;                           \
    w_t  w;  logic w_valid;                            \
    logic b_ready;                                     \
    ar_t ar; logic ar_valid;                           \
    logic r_ready;                                     \
  } req_t;

`define WEFT_AXI_TYPEDEF_RSP_T(rsp_t, b_t, r_t) \
  typedef struct packed {                       \
    logic aw_ready; logic w_ready;              \
    b_t b; logic b_valid;                       \
    logic ar_ready;                             \
    r_t r; logic r_valid;                       \
  } rsp_t;

`define WEFT_AXI_TYPEDEF_ALL(pfx, addr_t, id_t, data_t, strb_t, user_t)             \
  `WEFT_AXI_TYPEDEF_AW_CHAN_T(pfx``_aw_chan_t, addr_t, id_t, user_t)                \
  `WEFT_AXI_TYPEDEF_W_CHAN_T(pfx``_w_chan_t, data_t, strb_t, user_t)                \
  `WEFT_AXI_TYPEDEF_B_CHAN_T(pfx``_b_chan_t, id_t, user_t)                          \
  `WEFT_AXI_TYPEDEF_AR_CHAN_T(pfx``_ar_chan_t, addr_t, id_t, user_t)                \
  `WEFT_AXI_TYPEDEF_R_CHAN_T(pfx``_r_chan_t, data_t, id_t, user_t)                  \
  `WEFT_AXI_TYPEDEF_REQ_T(pfx``_req_t, pfx``_aw_chan_t, pfx``_w_chan_t, pfx``_ar_chan_t) \
  `WEFT_AXI_TYPEDEF_RSP_T(pfx``_rsp_t, pfx``_b_chan_t, pfx``_r_chan_t)

`endif
