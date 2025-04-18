// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgCData(oldp+2,(vlSelf->address1),5);
    bufp->chgCData(oldp+3,(vlSelf->address2),5);
    bufp->chgIData(oldp+4,(vlSelf->read_data1),32);
    bufp->chgIData(oldp+5,(vlSelf->read_data2),32);
    bufp->chgCData(oldp+6,(vlSelf->address3),5);
    bufp->chgIData(oldp+7,(vlSelf->write_data),32);
    bufp->chgBit(oldp+8,(vlSelf->write_enable));
    bufp->chgBit(oldp+9,(vlSelf->regfile__DOT__clk));
    bufp->chgBit(oldp+10,(vlSelf->regfile__DOT__rst_n));
    bufp->chgCData(oldp+11,(vlSelf->regfile__DOT__address1),5);
    bufp->chgCData(oldp+12,(vlSelf->regfile__DOT__address2),5);
    bufp->chgIData(oldp+13,(vlSelf->regfile__DOT__read_data1),32);
    bufp->chgIData(oldp+14,(vlSelf->regfile__DOT__read_data2),32);
    bufp->chgCData(oldp+15,(vlSelf->regfile__DOT__address3),5);
    bufp->chgIData(oldp+16,(vlSelf->regfile__DOT__write_data),32);
    bufp->chgBit(oldp+17,(vlSelf->regfile__DOT__write_enable));
    bufp->chgIData(oldp+18,(vlSelf->regfile__DOT__registers[0]),32);
    bufp->chgIData(oldp+19,(vlSelf->regfile__DOT__registers[1]),32);
    bufp->chgIData(oldp+20,(vlSelf->regfile__DOT__registers[2]),32);
    bufp->chgIData(oldp+21,(vlSelf->regfile__DOT__registers[3]),32);
    bufp->chgIData(oldp+22,(vlSelf->regfile__DOT__registers[4]),32);
    bufp->chgIData(oldp+23,(vlSelf->regfile__DOT__registers[5]),32);
    bufp->chgIData(oldp+24,(vlSelf->regfile__DOT__registers[6]),32);
    bufp->chgIData(oldp+25,(vlSelf->regfile__DOT__registers[7]),32);
    bufp->chgIData(oldp+26,(vlSelf->regfile__DOT__registers[8]),32);
    bufp->chgIData(oldp+27,(vlSelf->regfile__DOT__registers[9]),32);
    bufp->chgIData(oldp+28,(vlSelf->regfile__DOT__registers[10]),32);
    bufp->chgIData(oldp+29,(vlSelf->regfile__DOT__registers[11]),32);
    bufp->chgIData(oldp+30,(vlSelf->regfile__DOT__registers[12]),32);
    bufp->chgIData(oldp+31,(vlSelf->regfile__DOT__registers[13]),32);
    bufp->chgIData(oldp+32,(vlSelf->regfile__DOT__registers[14]),32);
    bufp->chgIData(oldp+33,(vlSelf->regfile__DOT__registers[15]),32);
    bufp->chgIData(oldp+34,(vlSelf->regfile__DOT__registers[16]),32);
    bufp->chgIData(oldp+35,(vlSelf->regfile__DOT__registers[17]),32);
    bufp->chgIData(oldp+36,(vlSelf->regfile__DOT__registers[18]),32);
    bufp->chgIData(oldp+37,(vlSelf->regfile__DOT__registers[19]),32);
    bufp->chgIData(oldp+38,(vlSelf->regfile__DOT__registers[20]),32);
    bufp->chgIData(oldp+39,(vlSelf->regfile__DOT__registers[21]),32);
    bufp->chgIData(oldp+40,(vlSelf->regfile__DOT__registers[22]),32);
    bufp->chgIData(oldp+41,(vlSelf->regfile__DOT__registers[23]),32);
    bufp->chgIData(oldp+42,(vlSelf->regfile__DOT__registers[24]),32);
    bufp->chgIData(oldp+43,(vlSelf->regfile__DOT__registers[25]),32);
    bufp->chgIData(oldp+44,(vlSelf->regfile__DOT__registers[26]),32);
    bufp->chgIData(oldp+45,(vlSelf->regfile__DOT__registers[27]),32);
    bufp->chgIData(oldp+46,(vlSelf->regfile__DOT__registers[28]),32);
    bufp->chgIData(oldp+47,(vlSelf->regfile__DOT__registers[29]),32);
    bufp->chgIData(oldp+48,(vlSelf->regfile__DOT__registers[30]),32);
    bufp->chgIData(oldp+49,(vlSelf->regfile__DOT__registers[31]),32);
    bufp->chgIData(oldp+50,(vlSelf->regfile__DOT__unnamedblk1__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
