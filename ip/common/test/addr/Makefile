SIM ?= icarus
TOPLEVEL_LANG ?= verilog
COMPILE_ARGS += -g2012
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../rtl/weft_addr_decode.sv \
                   $(PWD)/weft_addr_decode_tb.sv
COCOTB_TEST_MODULES = test_addr
TOPLEVEL = weft_addr_decode_tb
include $(shell cocotb-config --makefiles)/Makefile.sim