// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder.h for the primary calling header

#ifndef VERILATED_VENCODER___024ROOT_H_
#define VERILATED_VENCODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vencoder___024unit;


class Vencoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencoder___024root final {
  public:
    // CELLS
    Vencoder___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_encoder__DOT__y;
    CData/*1:0*/ tb_encoder__DOT__a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_encoder__DOT__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_encoder__DOT__y__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vencoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vencoder___024root(Vencoder__Syms* symsp, const char* namep);
    ~Vencoder___024root();
    VL_UNCOPYABLE(Vencoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
