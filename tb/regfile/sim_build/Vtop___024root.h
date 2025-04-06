// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(address1,4,0);
    VL_IN8(address2,4,0);
    VL_IN8(address3,4,0);
    VL_IN8(write_enable,0,0);
    CData/*0:0*/ regfile__DOT__clk;
    CData/*0:0*/ regfile__DOT__rst_n;
    CData/*4:0*/ regfile__DOT__address1;
    CData/*4:0*/ regfile__DOT__address2;
    CData/*4:0*/ regfile__DOT__address3;
    CData/*0:0*/ regfile__DOT__write_enable;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(read_data1,31,0);
    VL_OUT(read_data2,31,0);
    VL_IN(write_data,31,0);
    IData/*31:0*/ regfile__DOT__read_data1;
    IData/*31:0*/ regfile__DOT__read_data2;
    IData/*31:0*/ regfile__DOT__write_data;
    IData/*31:0*/ regfile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile__DOT__registers;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
