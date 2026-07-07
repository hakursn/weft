SIM ?= icarus
TOPLEVEL_LANG ?= verilog
COMPILE_ARGS += -g2012
VERILOG_SOURCES += $(PWD)/../../rtl/weft_skid_buffer.sv $(PWD)/weft_skid_buffer_tb.sv
TOPLEVEL = weft_skid_buffer_tb
MODULE = test_skid
include $(shell cocotb-config --makefiles)/Makefile.sim