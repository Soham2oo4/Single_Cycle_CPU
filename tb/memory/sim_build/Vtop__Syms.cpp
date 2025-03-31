// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_memory);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_memory.configure(this, name(), "memory", "memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_memory__unnamedblk1.configure(this, name(), "memory.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_memory__unnamedblk2.configure(this, name(), "memory.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_memory);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"address", &(TOP.address), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"byte_enable", &(TOP.byte_enable), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_data", &(TOP.read_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_data", &(TOP.write_data), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_enable", &(TOP.write_enable), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_memory.varInsert(__Vfinal,"WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.memory__DOT__WORDS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_memory.varInsert(__Vfinal,"address", &(TOP.memory__DOT__address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_memory.varInsert(__Vfinal,"byte_enable", &(TOP.memory__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_memory.varInsert(__Vfinal,"clk", &(TOP.memory__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_memory.varInsert(__Vfinal,"mem", &(TOP.memory__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,127);
        __Vscope_memory.varInsert(__Vfinal,"mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.memory__DOT__mem_init))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_memory.varInsert(__Vfinal,"read_data", &(TOP.memory__DOT__read_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_memory.varInsert(__Vfinal,"rst_n", &(TOP.memory__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_memory.varInsert(__Vfinal,"write_data", &(TOP.memory__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_memory.varInsert(__Vfinal,"write_enable", &(TOP.memory__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_memory__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.memory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_memory__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.memory__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}
