// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_regfile);

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
    __Vscope_regfile.configure(this, name(), "regfile", "regfile", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_regfile__unnamedblk1.configure(this, name(), "regfile.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_regfile);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"address1", &(TOP.address1), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"address2", &(TOP.address2), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"address3", &(TOP.address3), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_data1", &(TOP.read_data1), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_data2", &(TOP.read_data2), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_data", &(TOP.write_data), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_enable", &(TOP.write_enable), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_regfile.varInsert(__Vfinal,"address1", &(TOP.regfile__DOT__address1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_regfile.varInsert(__Vfinal,"address2", &(TOP.regfile__DOT__address2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_regfile.varInsert(__Vfinal,"address3", &(TOP.regfile__DOT__address3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_regfile.varInsert(__Vfinal,"clk", &(TOP.regfile__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_regfile.varInsert(__Vfinal,"read_data1", &(TOP.regfile__DOT__read_data1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_regfile.varInsert(__Vfinal,"read_data2", &(TOP.regfile__DOT__read_data2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_regfile.varInsert(__Vfinal,"registers", &(TOP.regfile__DOT__registers), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_regfile.varInsert(__Vfinal,"rst_n", &(TOP.regfile__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_regfile.varInsert(__Vfinal,"write_data", &(TOP.regfile__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_regfile.varInsert(__Vfinal,"write_enable", &(TOP.regfile__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_regfile__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.regfile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}
