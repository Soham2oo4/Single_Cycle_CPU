// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->regfile__DOT__clk = vlSelf->clk;
    vlSelf->regfile__DOT__rst_n = vlSelf->rst_n;
    vlSelf->regfile__DOT__address1 = vlSelf->address1;
    vlSelf->regfile__DOT__address2 = vlSelf->address2;
    vlSelf->regfile__DOT__address3 = vlSelf->address3;
    vlSelf->regfile__DOT__write_data = vlSelf->write_data;
    vlSelf->regfile__DOT__write_enable = vlSelf->write_enable;
    vlSelf->regfile__DOT__read_data1 = vlSelf->regfile__DOT__registers
        [vlSelf->address1];
    vlSelf->regfile__DOT__read_data2 = vlSelf->regfile__DOT__registers
        [vlSelf->address2];
    vlSelf->read_data1 = vlSelf->regfile__DOT__read_data1;
    vlSelf->read_data2 = vlSelf->regfile__DOT__read_data2;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regfile__DOT__registers__v0;
    __Vdlyvdim0__regfile__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regfile__DOT__registers__v0;
    __Vdlyvval__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regfile__DOT__registers__v0;
    __Vdlyvset__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regfile__DOT__registers__v1;
    __Vdlyvset__regfile__DOT__registers__v1 = 0;
    // Body
    __Vdlyvset__regfile__DOT__registers__v0 = 0U;
    __Vdlyvset__regfile__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 1U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 3U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 6U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 7U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 9U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelf->regfile__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->write_enable) & (0U != (IData)(vlSelf->address3)))) {
            __Vdlyvval__regfile__DOT__registers__v0 
                = vlSelf->write_data;
            __Vdlyvset__regfile__DOT__registers__v0 = 1U;
            __Vdlyvdim0__regfile__DOT__registers__v0 
                = vlSelf->address3;
        }
    } else {
        __Vdlyvset__regfile__DOT__registers__v1 = 1U;
    }
    if (__Vdlyvset__regfile__DOT__registers__v0) {
        vlSelf->regfile__DOT__registers[__Vdlyvdim0__regfile__DOT__registers__v0] 
            = __Vdlyvval__regfile__DOT__registers__v0;
    }
    if (__Vdlyvset__regfile__DOT__registers__v1) {
        vlSelf->regfile__DOT__registers[0U] = 0U;
        vlSelf->regfile__DOT__registers[1U] = 0U;
        vlSelf->regfile__DOT__registers[2U] = 0U;
        vlSelf->regfile__DOT__registers[3U] = 0U;
        vlSelf->regfile__DOT__registers[4U] = 0U;
        vlSelf->regfile__DOT__registers[5U] = 0U;
        vlSelf->regfile__DOT__registers[6U] = 0U;
        vlSelf->regfile__DOT__registers[7U] = 0U;
        vlSelf->regfile__DOT__registers[8U] = 0U;
        vlSelf->regfile__DOT__registers[9U] = 0U;
        vlSelf->regfile__DOT__registers[0xaU] = 0U;
        vlSelf->regfile__DOT__registers[0xbU] = 0U;
        vlSelf->regfile__DOT__registers[0xcU] = 0U;
        vlSelf->regfile__DOT__registers[0xdU] = 0U;
        vlSelf->regfile__DOT__registers[0xeU] = 0U;
        vlSelf->regfile__DOT__registers[0xfU] = 0U;
        vlSelf->regfile__DOT__registers[0x10U] = 0U;
        vlSelf->regfile__DOT__registers[0x11U] = 0U;
        vlSelf->regfile__DOT__registers[0x12U] = 0U;
        vlSelf->regfile__DOT__registers[0x13U] = 0U;
        vlSelf->regfile__DOT__registers[0x14U] = 0U;
        vlSelf->regfile__DOT__registers[0x15U] = 0U;
        vlSelf->regfile__DOT__registers[0x16U] = 0U;
        vlSelf->regfile__DOT__registers[0x17U] = 0U;
        vlSelf->regfile__DOT__registers[0x18U] = 0U;
        vlSelf->regfile__DOT__registers[0x19U] = 0U;
        vlSelf->regfile__DOT__registers[0x1aU] = 0U;
        vlSelf->regfile__DOT__registers[0x1bU] = 0U;
        vlSelf->regfile__DOT__registers[0x1cU] = 0U;
        vlSelf->regfile__DOT__registers[0x1dU] = 0U;
        vlSelf->regfile__DOT__registers[0x1eU] = 0U;
        vlSelf->regfile__DOT__registers[0x1fU] = 0U;
    }
    vlSelf->regfile__DOT__read_data1 = vlSelf->regfile__DOT__registers
        [vlSelf->address1];
    vlSelf->regfile__DOT__read_data2 = vlSelf->regfile__DOT__registers
        [vlSelf->address2];
    vlSelf->read_data1 = vlSelf->regfile__DOT__read_data1;
    vlSelf->read_data2 = vlSelf->regfile__DOT__read_data2;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/regfile/../../src/regfile.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/regfile/../../src/regfile.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/regfile/../../src/regfile.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->address1 & 0xe0U))) {
        Verilated::overWidthError("address1");}
    if (VL_UNLIKELY((vlSelf->address2 & 0xe0U))) {
        Verilated::overWidthError("address2");}
    if (VL_UNLIKELY((vlSelf->address3 & 0xe0U))) {
        Verilated::overWidthError("address3");}
    if (VL_UNLIKELY((vlSelf->write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
}
#endif  // VL_DEBUG
