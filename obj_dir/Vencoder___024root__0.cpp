// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder__pch.h"

VlCoroutine Vencoder___024root___eval_initial__TOP__Vtiming__0(Vencoder___024root* vlSelf);

void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_initial\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vencoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vencoder___024root___eval_initial__TOP__Vtiming__0(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("encoder.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_encoder__DOT__y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_encoder.v", 
                                         17);
    vlSelfRef.tb_encoder__DOT__y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_encoder.v", 
                                         18);
    vlSelfRef.tb_encoder__DOT__y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_encoder.v", 
                                         19);
    vlSelfRef.tb_encoder__DOT__y = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_encoder.v", 
                                         20);
    vlSelfRef.tb_encoder__DOT__y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_encoder.v", 
                                         21);
    VL_FINISH_MT("tb_encoder.v", 23, "");
    co_return;
}

void Vencoder___024root___eval_triggers_vec__act(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_triggers_vec__act\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb_encoder__DOT__y) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_encoder__DOT__y__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_encoder__DOT__a) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_encoder__DOT__a__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_encoder__DOT__a__0 
        = vlSelfRef.tb_encoder__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_encoder__DOT__y__0 
        = vlSelfRef.tb_encoder__DOT__y;
}

bool Vencoder___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 16> Vencoder__ConstPool__TABLE_h0d64967e_0;

void Vencoder___024root___act_sequent__TOP__0(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___act_sequent__TOP__0\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.tb_encoder__DOT__y;
    vlSelfRef.tb_encoder__DOT__a = Vencoder__ConstPool__TABLE_h0d64967e_0
        [__Vtableidx1];
}

void Vencoder___024root___eval_act(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_act\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vencoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vencoder___024root___nba_sequent__TOP__0(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___nba_sequent__TOP__0\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
        VL_WRITEF_NX("time=%0t y=%b a=%b\n",0,64,VL_TIME_UNITED_Q(1),
                     -12,4,(IData)(vlSelfRef.tb_encoder__DOT__y),
                     2,vlSelfRef.tb_encoder__DOT__a);
    }
}

void Vencoder___024root___eval_nba(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_nba\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vencoder___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vencoder___024root___timing_resume(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___timing_resume\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vencoder___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vencoder___024root___eval_phase__act(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_phase__act\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vencoder___024root___eval_triggers_vec__act(vlSelf);
    Vencoder___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencoder___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vencoder___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vencoder___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vencoder___024root___timing_resume(vlSelf);
        Vencoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vencoder___024root___eval_phase__inact(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_phase__inact\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_encoder.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vencoder___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vencoder___024root___eval_phase__nba(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_phase__nba\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vencoder___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vencoder___024root___eval_nba(vlSelf);
        Vencoder___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vencoder___024root___eval(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vencoder___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_encoder.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_encoder.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vencoder___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_encoder.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vencoder___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vencoder___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vencoder___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder___024root___eval_debug_assertions\n"); );
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
