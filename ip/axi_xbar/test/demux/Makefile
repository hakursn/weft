SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += -Wno-fatal -I$(PWD)/../../../axi_common/rtl
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../../common/rtl/weft_addr_decode.sv \
                   $(PWD)/../../rtl/weft_axi_demux.sv \
                   $(PWD)/weft_axi_demux_flat.sv
COCOTB_TEST_MODULES = test_demux
TOPLEVEL = weft_axi_demux_flat
include $(shell cocotb-config --makefiles)/Makefile.sim