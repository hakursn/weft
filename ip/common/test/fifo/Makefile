SIM ?= icarus
TOPLEVEL_LANG ?= verilog
COMPILE_ARGS += -g2012
VERILOG_SOURCES += $(PWD)/../../rtl/weft_sync_fifo.sv $(PWD)/weft_sync_fifo_tb.sv
COCOTB_TEST_MODULES = test_fifo
TOPLEVEL = weft_sync_fifo_tb
include $(shell cocotb-config --makefiles)/Makefile.sim