SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs
WAVES = 1
VERILOG_SOURCES += $(PWD)/../../src/memory.sv
TOPLEVEL = memory
MODULE = test_memory 
include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: compile sim

compile:
	verilator --cc --sv --Wall --lint-only --Wno-fatal $(VERILOG_SOURCES)

sim: 
	make results.xml
