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
    VL_IN8(byte_enable,3,0);
    VL_IN8(write_enable,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ memory__DOT__clk;
    CData/*3:0*/ memory__DOT__byte_enable;
    CData/*0:0*/ memory__DOT__write_enable;
    CData/*0:0*/ memory__DOT__rst_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(address,31,0);
    VL_IN(write_data,31,0);
    VL_OUT(read_data,31,0);
    IData/*31:0*/ memory__DOT__address;
    IData/*31:0*/ memory__DOT__write_data;
    IData/*31:0*/ memory__DOT__read_data;
    IData/*31:0*/ memory__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 128> memory__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*7:0*/ memory__DOT__mem_init = 0U;
    static constexpr IData/*31:0*/ memory__DOT__WORDS = 0x00000080U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
