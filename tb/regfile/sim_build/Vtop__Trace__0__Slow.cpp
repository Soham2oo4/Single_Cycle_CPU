// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"address3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"address3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullCData(oldp+3,(vlSelf->address1),5);
    bufp->fullCData(oldp+4,(vlSelf->address2),5);
    bufp->fullIData(oldp+5,(vlSelf->read_data1),32);
    bufp->fullIData(oldp+6,(vlSelf->read_data2),32);
    bufp->fullCData(oldp+7,(vlSelf->address3),5);
    bufp->fullIData(oldp+8,(vlSelf->write_data),32);
    bufp->fullBit(oldp+9,(vlSelf->write_enable));
    bufp->fullBit(oldp+10,(vlSelf->regfile__DOT__clk));
    bufp->fullBit(oldp+11,(vlSelf->regfile__DOT__rst_n));
    bufp->fullCData(oldp+12,(vlSelf->regfile__DOT__address1),5);
    bufp->fullCData(oldp+13,(vlSelf->regfile__DOT__address2),5);
    bufp->fullIData(oldp+14,(vlSelf->regfile__DOT__read_data1),32);
    bufp->fullIData(oldp+15,(vlSelf->regfile__DOT__read_data2),32);
    bufp->fullCData(oldp+16,(vlSelf->regfile__DOT__address3),5);
    bufp->fullIData(oldp+17,(vlSelf->regfile__DOT__write_data),32);
    bufp->fullBit(oldp+18,(vlSelf->regfile__DOT__write_enable));
    bufp->fullIData(oldp+19,(vlSelf->regfile__DOT__registers[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->regfile__DOT__registers[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->regfile__DOT__registers[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->regfile__DOT__registers[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->regfile__DOT__registers[4]),32);
    bufp->fullIData(oldp+24,(vlSelf->regfile__DOT__registers[5]),32);
    bufp->fullIData(oldp+25,(vlSelf->regfile__DOT__registers[6]),32);
    bufp->fullIData(oldp+26,(vlSelf->regfile__DOT__registers[7]),32);
    bufp->fullIData(oldp+27,(vlSelf->regfile__DOT__registers[8]),32);
    bufp->fullIData(oldp+28,(vlSelf->regfile__DOT__registers[9]),32);
    bufp->fullIData(oldp+29,(vlSelf->regfile__DOT__registers[10]),32);
    bufp->fullIData(oldp+30,(vlSelf->regfile__DOT__registers[11]),32);
    bufp->fullIData(oldp+31,(vlSelf->regfile__DOT__registers[12]),32);
    bufp->fullIData(oldp+32,(vlSelf->regfile__DOT__registers[13]),32);
    bufp->fullIData(oldp+33,(vlSelf->regfile__DOT__registers[14]),32);
    bufp->fullIData(oldp+34,(vlSelf->regfile__DOT__registers[15]),32);
    bufp->fullIData(oldp+35,(vlSelf->regfile__DOT__registers[16]),32);
    bufp->fullIData(oldp+36,(vlSelf->regfile__DOT__registers[17]),32);
    bufp->fullIData(oldp+37,(vlSelf->regfile__DOT__registers[18]),32);
    bufp->fullIData(oldp+38,(vlSelf->regfile__DOT__registers[19]),32);
    bufp->fullIData(oldp+39,(vlSelf->regfile__DOT__registers[20]),32);
    bufp->fullIData(oldp+40,(vlSelf->regfile__DOT__registers[21]),32);
    bufp->fullIData(oldp+41,(vlSelf->regfile__DOT__registers[22]),32);
    bufp->fullIData(oldp+42,(vlSelf->regfile__DOT__registers[23]),32);
    bufp->fullIData(oldp+43,(vlSelf->regfile__DOT__registers[24]),32);
    bufp->fullIData(oldp+44,(vlSelf->regfile__DOT__registers[25]),32);
    bufp->fullIData(oldp+45,(vlSelf->regfile__DOT__registers[26]),32);
    bufp->fullIData(oldp+46,(vlSelf->regfile__DOT__registers[27]),32);
    bufp->fullIData(oldp+47,(vlSelf->regfile__DOT__registers[28]),32);
    bufp->fullIData(oldp+48,(vlSelf->regfile__DOT__registers[29]),32);
    bufp->fullIData(oldp+49,(vlSelf->regfile__DOT__registers[30]),32);
    bufp->fullIData(oldp+50,(vlSelf->regfile__DOT__registers[31]),32);
    bufp->fullIData(oldp+51,(vlSelf->regfile__DOT__unnamedblk1__DOT__i),32);
}
