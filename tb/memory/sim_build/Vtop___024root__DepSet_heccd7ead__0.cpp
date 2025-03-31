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
    vlSelf->memory__DOT__clk = vlSelf->clk;
    vlSelf->memory__DOT__address = vlSelf->address;
    vlSelf->memory__DOT__write_data = vlSelf->write_data;
    vlSelf->memory__DOT__byte_enable = vlSelf->byte_enable;
    vlSelf->memory__DOT__write_enable = vlSelf->write_enable;
    vlSelf->memory__DOT__rst_n = vlSelf->rst_n;
    vlSelf->read_data = vlSelf->memory__DOT__mem[(0x7fU 
                                                  & (vlSelf->address 
                                                     >> 2U))];
    vlSelf->memory__DOT__read_data = vlSelf->read_data;
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
    CData/*6:0*/ __Vdlyvdim0__memory__DOT__mem__v0;
    __Vdlyvdim0__memory__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__memory__DOT__mem__v0;
    __Vdlyvlsb__memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__memory__DOT__mem__v0;
    __Vdlyvval__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__memory__DOT__mem__v0;
    __Vdlyvset__memory__DOT__mem__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__memory__DOT__mem__v1;
    __Vdlyvdim0__memory__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__memory__DOT__mem__v1;
    __Vdlyvlsb__memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__memory__DOT__mem__v1;
    __Vdlyvval__memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__memory__DOT__mem__v1;
    __Vdlyvset__memory__DOT__mem__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__memory__DOT__mem__v2;
    __Vdlyvdim0__memory__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__memory__DOT__mem__v2;
    __Vdlyvlsb__memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__memory__DOT__mem__v2;
    __Vdlyvval__memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__memory__DOT__mem__v2;
    __Vdlyvset__memory__DOT__mem__v2 = 0;
    CData/*6:0*/ __Vdlyvdim0__memory__DOT__mem__v3;
    __Vdlyvdim0__memory__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__memory__DOT__mem__v3;
    __Vdlyvlsb__memory__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__memory__DOT__mem__v3;
    __Vdlyvval__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__memory__DOT__mem__v3;
    __Vdlyvset__memory__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__memory__DOT__mem__v0 = 0U;
    __Vdlyvset__memory__DOT__mem__v1 = 0U;
    __Vdlyvset__memory__DOT__mem__v2 = 0U;
    __Vdlyvset__memory__DOT__mem__v3 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->write_enable) {
            if ((0U == (3U & vlSelf->address))) {
                vlSelf->memory__DOT__unnamedblk2__DOT__i = 1U;
                vlSelf->memory__DOT__unnamedblk2__DOT__i = 2U;
                vlSelf->memory__DOT__unnamedblk2__DOT__i = 3U;
                vlSelf->memory__DOT__unnamedblk2__DOT__i = 4U;
                if ((1U & (IData)(vlSelf->byte_enable))) {
                    __Vdlyvval__memory__DOT__mem__v0 
                        = (0xffU & vlSelf->write_data);
                    __Vdlyvset__memory__DOT__mem__v0 = 1U;
                    __Vdlyvlsb__memory__DOT__mem__v0 = 0U;
                    __Vdlyvdim0__memory__DOT__mem__v0 
                        = (0x7fU & (vlSelf->address 
                                    >> 2U));
                }
                if ((2U & (IData)(vlSelf->byte_enable))) {
                    __Vdlyvval__memory__DOT__mem__v1 
                        = (0xffU & (vlSelf->write_data 
                                    >> 8U));
                    __Vdlyvset__memory__DOT__mem__v1 = 1U;
                    __Vdlyvlsb__memory__DOT__mem__v1 = 8U;
                    __Vdlyvdim0__memory__DOT__mem__v1 
                        = (0x7fU & (vlSelf->address 
                                    >> 2U));
                }
                if ((4U & (IData)(vlSelf->byte_enable))) {
                    __Vdlyvval__memory__DOT__mem__v2 
                        = (0xffU & (vlSelf->write_data 
                                    >> 0x10U));
                    __Vdlyvset__memory__DOT__mem__v2 = 1U;
                    __Vdlyvlsb__memory__DOT__mem__v2 = 0x10U;
                    __Vdlyvdim0__memory__DOT__mem__v2 
                        = (0x7fU & (vlSelf->address 
                                    >> 2U));
                }
                if ((8U & (IData)(vlSelf->byte_enable))) {
                    __Vdlyvval__memory__DOT__mem__v3 
                        = (vlSelf->write_data >> 0x18U);
                    __Vdlyvset__memory__DOT__mem__v3 = 1U;
                    __Vdlyvlsb__memory__DOT__mem__v3 = 0x18U;
                    __Vdlyvdim0__memory__DOT__mem__v3 
                        = (0x7fU & (vlSelf->address 
                                    >> 2U));
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->memory__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->memory__DOT__unnamedblk1__DOT__i)) {
            vlSelf->memory__DOT__mem[(0x7fU & vlSelf->memory__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelf->memory__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->memory__DOT__unnamedblk1__DOT__i);
        }
    }
    if (__Vdlyvset__memory__DOT__mem__v0) {
        vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__DOT__mem__v0))) 
                & vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__memory__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__memory__DOT__mem__v0))));
    }
    if (__Vdlyvset__memory__DOT__mem__v1) {
        vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__DOT__mem__v1))) 
                & vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__memory__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__memory__DOT__mem__v1))));
    }
    if (__Vdlyvset__memory__DOT__mem__v2) {
        vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__DOT__mem__v2))) 
                & vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__memory__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__memory__DOT__mem__v2))));
    }
    if (__Vdlyvset__memory__DOT__mem__v3) {
        vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__DOT__mem__v3))) 
                & vlSelf->memory__DOT__mem[__Vdlyvdim0__memory__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__memory__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__memory__DOT__mem__v3))));
    }
    vlSelf->read_data = vlSelf->memory__DOT__mem[(0x7fU 
                                                  & (vlSelf->address 
                                                     >> 2U))];
    vlSelf->memory__DOT__read_data = vlSelf->read_data;
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
            VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/memory/../../src/memory.sv", 3, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/memory/../../src/memory.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/mnt/d/Hackathons/RISCV_proc/tb/memory/../../src/memory.sv", 3, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->byte_enable & 0xf0U))) {
        Verilated::overWidthError("byte_enable");}
    if (VL_UNLIKELY((vlSelf->write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
