// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========


void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf);

VCPU___024root::VCPU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCPU___024root___ctor_var_reset(this);
}

void VCPU___024root::__Vconfigure(VCPU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCPU___024root::~VCPU___024root() {
}

void VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask);

void VCPU___024root___settle__TOP__1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__1\n"); );
    // Variables
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_109;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_120;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_131;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_142;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_209;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_222;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_267;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_284;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_335;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_376;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_538;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_562;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_573;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_584;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_619;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_630;
    CData/*0:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7;
    CData/*0:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_218;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_229;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_240;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_248;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_259;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_13;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_45;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_58;
    QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_83;
    // Body
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0U] = 0ULL;
    vlSelf->CPU__DOT__snpc = (4ULL + vlSelf->CPU__DOT__pc);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[1U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[2U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[3U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[4U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[5U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[6U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[7U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[8U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[9U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xaU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xbU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xcU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xdU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xeU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xfU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x10U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x11U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x12U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x13U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x14U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x15U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x16U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x17U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x18U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x19U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1aU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1bU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1cU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1dU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1eU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1fU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x20U] 
        = vlSelf->CPU__DOT__pc;
    VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPU__DOT__pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    if ((0x100073U == (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) {
        VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_490 
        = ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x63U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x5063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x7063U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x4063U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x6063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x1063U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_267 
        = ((0x2023U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x1033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x1013U == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x101bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x103bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x2033U == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x2013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x3013U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x3033U == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x4000501bU 
                                             == (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               | ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                  | ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                     | ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                              | ((0x4000003bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                 | ((0x4033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                    | (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))))))))))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_538 
        = ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x7063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x4063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x6063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x1063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x6fU == 
                                          (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x67U == 
                                            (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_376 
        = ((0x1003U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x5003U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x2003U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x6003U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x37U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x2000033U != (0xfe00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x200003bU != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x6033U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x23U == (0x707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x3023U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x1023U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x2023U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_335 
        = ((0x4063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x6063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x1063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x67U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x3003U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x1003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x5003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x2003U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x6003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_619 
        = ((0x2003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 6U : ((0x6003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 2U : ((0x37U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 3U : ((0x2000033U == 
                                       (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 3U : ((0x200003bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 3U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 3U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 1U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 2U
                                                        : 3U))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_562 
        = ((0x1023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x1033U == (0xfe00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x1013U == (0xfc00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x101bU 
                                                == 
                                                (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 6U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 6U
                                                        : 4U))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_109 
        = ((0x4000501bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 0x1cU : ((0x4000503bU == (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                        ? 0x1cU : ((0x5033U == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                    ? 0x1fU : ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0x1fU
                                                : (
                                                   (0x501bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x1eU
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 0xaU
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 3U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 3U
                                                         : 0U))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_196 
        = ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x7063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x4063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x6063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & (0x6fU == 
                                            (0x7fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_13 = ((0xdU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0xfU))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0xfU))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0xfU))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0xfU))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0xfU))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_209 
        = ((0x40005033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x40005013U == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x4000501bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x4000503bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x5033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x5013U == (0xfc00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x501bU == (0xfc00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x503bU != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x40000033U != 
                                    (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x4000003bU 
                                       != (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x4033U != 
                                          (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & (0x4013U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14 = ((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x1fU)))
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 7U)) 
                                                                         << 0xbU)) 
                                                                     | ((0x7e0U 
                                                                         & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x19U)) 
                                                                            << 5U)) 
                                                                        | (0x1eU 
                                                                           & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 8U)) 
                                                                              << 1U)))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_45 = ((0xdU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0x14U))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0x14U))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0x14U))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0x14U))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11 = (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62 = ((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x1fU)))
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 7U)))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2 = (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x1fU)))
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                               >> 0x14U))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_284 
        = ((0x1063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x6fU == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x67U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x3003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x1003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x5003U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x2003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x6003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x37U == 
                                          (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x2000033U 
                                             == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x200003bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               | ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                  | ((0x23U 
                                                      != 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                     & ((0x3023U 
                                                         != 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                        & ((0x1023U 
                                                            != 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                           & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_267))))))))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr = 
        ((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
            & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
               & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_538))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_388 
        = ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x4063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x6063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x1063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x67U != (0x707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((3U != (0x707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x4003U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x3003U 
                                             != (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_376)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_344 
        = ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x5063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x7063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_335))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_630 
        = ((0x7063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 3U : ((0x4063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 3U : ((0x6063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 3U : ((0x1063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 3U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 3U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 3U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 5U
                                                        : 
                                                       ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 1U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_619))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_573 
        = ((0x3003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x1003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x5003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x2003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 4U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 4U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 4U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_562))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_120 
        = ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 5U : ((0x1033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 0xdU : ((0x1013U == (0xfc00707fU 
                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                ? 0xdU : ((0x101bU 
                                           == (0xfc00707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                           ? 0xcU : 
                                          ((0x103bU 
                                            == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                            ? 0xcU : 
                                           ((0x2033U 
                                             == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                             ? 0U : 
                                            ((0x2013U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 0U : 
                                             ((0x3013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0x1dU
                                                     : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_109))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 0xfU)))) ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26
            : ((0x19U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0xfU))))
                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25
                : ((0x18U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                               >> 0xfU))))
                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24
                    : ((0x17U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0xfU))))
                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23
                        : ((0x16U == (0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0xfU))))
                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22
                            : ((0x15U == (0x1fU & (IData)(
                                                          (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                           >> 0xfU))))
                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0xfU))))
                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0xfU))))
                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xfU))))
                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0xfU))))
                                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14
                                                      : CPU__DOT__EXU__DOT__regs__DOT___GEN_13)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_222 
        = ((0x6033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x23U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x3023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x1023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x1033U != (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x1013U == (0xfc00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x101bU == (0xfc00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x103bU != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x2033U != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x2013U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x3013U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x3033U 
                                                != 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_209))))))))))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_58 = ((0x1aU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26
                                               : ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0x14U))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0x14U))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0x14U))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0x14U))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14
                                                              : CPU__DOT__EXU__DOT__regs__DOT___GEN_45)))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_218 = (
                                                   (0x4000501bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0ULL
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                             : 0ULL))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           | ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x3bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x7033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x7013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x63U != (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x5063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x7063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x4063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x6063U 
                                             != (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_284)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth = 
        ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
          ? 3U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                   ? 3U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                            ? 3U : ((0x3bU == (0xfe00707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                     ? 3U : ((0x7033U 
                                              == (0xfe00707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 3U : 
                                             ((0x7013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                               ? 3U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 3U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 3U
                                                     : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_630))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_584 
        = ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x63U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 0U : ((0x5063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 1U : ((0x7063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 2U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 5U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 6U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 7U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 4U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 4U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 4U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 4U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_573))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_131 
        = ((0x1003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 5U : ((0x5003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 5U : ((0x2003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 5U : ((0x6003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 5U : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0U
                                                : (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x11U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0x11U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 2U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 5U
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 5U
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 5U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_120))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 = ((
                                                   (0x33U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                   & ((0x13U 
                                                       != 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                      & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_196)))
                                                   ? vlSelf->CPU__DOT__pc
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                        : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_234 
        = ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x67U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x3003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x1003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x5003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x2003U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x6003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x37U == (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x2000033U 
                                          != (0xfe00707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x200003bU 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_222)))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data 
        = ((0x1fU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 0x14U))))
            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
            : ((0x1eU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0x14U))))
                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                : ((0x1dU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                               >> 0x14U))))
                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                    : ((0x1cU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x14U))))
                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                        : ((0x1bU == (0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x14U))))
                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                            : CPU__DOT__EXU__DOT__regs__DOT___GEN_58)))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_229 = (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_218)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x3bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_584)))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_142 
        = ((0x63U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 0U : ((0x5063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 0U : ((0x7063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 0U : ((0x4063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 0U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0U
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 5U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 5U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 5U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_131))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_240 = (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_229)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 5U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 5U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x3bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 1U
                                                : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_142))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_248 = (
                                                   (0x200503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0ULL
                                                    : 
                                                   ((0x200403bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0x1fU)))
                                                         ? 0xfffffffffffULL
                                                         : 0ULL) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0xcU)) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                            | (0x7feU 
                                                                               & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                           : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_240))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_259 = (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0ULL
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? 0ULL
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_248)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm = 
        ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
          ? 0ULL : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                     : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                         : ((0x3bU == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                             ? 0ULL : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_259))));
    vlSelf->CPU__DOT___pc_T_3 = (vlSelf->CPU__DOT__pc 
                                 + vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 = ((
                                                   (0x33U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                   & ((0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                      | ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                         | ((0x3bU 
                                                             != 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                            & ((0x7033U 
                                                                != 
                                                                (0xfe00707fU 
                                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                               & ((0x7013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                  | ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                     | ((0x63U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                        & ((0x5063U 
                                                                            != 
                                                                            (0x707fU 
                                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                           & ((0x7063U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                              & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                                & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_234))))))))))))))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm
                                                   : vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data);
    VL_EXTEND_WQ(95,64, __Vtemp2, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp3, __Vtemp2, (0x1fU 
                                                & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[0U] 
        = __Vtemp3[0U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[1U] 
        = __Vtemp3[1U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[2U] 
        = (0x7fffffffU & __Vtemp3[2U]);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1), 
                         (0x1fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
        = ((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1) 
           >> (0x1fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           + vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    VL_EXTEND_WQ(128,64, __Vtemp5, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1);
    VL_EXTEND_WQ(128,64, __Vtemp6, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    VL_MUL_W(4, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
        = __Vtemp7[0U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[1U] 
        = __Vtemp7[1U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[2U] 
        = __Vtemp7[2U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[3U] 
        = __Vtemp7[3U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    if (((1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                        >> 0x3fU))) == (1U & (IData)(
                                                     (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 
                                                      >> 0x3fU))))) {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                             >> 0x3fU)));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                             >> 0x3fU)));
    } else {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                             >> 0x3fU)));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 
                             >> 0x3fU)));
    }
    CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_83 
        = ((0x10U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
            ? (((QData)((IData)(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U])))
            : ((0xbU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25
                : ((0xaU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                    ? (((QData)((IData)(((1U & (IData)(
                                                       (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                                                        >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)))
                    : ((9U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                        ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                        : ((8U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14)))
                            : ((5U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4
                                : ((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? (((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4)))
                                    : ((3U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                           ^ vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                        : ((2U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                               | vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                            : ((1U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                                   & vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                                : 0ULL))))))))));
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp = (1U 
                                                  & ((7U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                      ? 
                                                     (0U 
                                                      != vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                       ? (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                        ? 
                                                       (~ (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7))
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                         ? (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                          ? 
                                                         (~ (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7))
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch)) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25))))))))));
    VL_EXTEND_WQ(128,64, __Vtemp8, (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                    >> (0x1fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2))));
    VL_EXTEND_WQ(128,64, __Vtemp9, (((QData)((IData)(
                                                     ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
                                                       >> 0x1fU)
                                                       ? 0xffffffffU
                                                       : 0U))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6))));
    VL_EXTEND_WQ(128,64, __Vtemp10, VL_SHIFTRS_QQI(64,64,5, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1, 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2))));
    VL_EXTEND_WQ(128,64, __Vtemp11, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5))));
    VL_EXTEND_WW(128,95, __Vtemp12, vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37);
    VL_EXTEND_WQ(128,64, __Vtemp13, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[0U] 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[0U]))));
    VL_EXTEND_WQ(128,64, __Vtemp14, CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_83);
    if ((0x1fU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))) {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U] 
            = __Vtemp8[0U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U] 
            = __Vtemp8[1U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[2U] 
            = __Vtemp8[2U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[3U] 
            = __Vtemp8[3U];
    } else {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp9[0U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                   ? __Vtemp10[0U] : 
                                  ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp11[0U]
                                    : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp12[0U]
                                        : ((0xcU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp13[0U]
                                            : ((0x11U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U]
                                                : __Vtemp14[0U]))))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp9[1U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                   ? __Vtemp10[1U] : 
                                  ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp11[1U]
                                    : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp12[1U]
                                        : ((0xcU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp13[1U]
                                            : ((0x11U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[1U]
                                                : __Vtemp14[1U]))))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[2U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp9[2U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                   ? __Vtemp10[2U] : 
                                  ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp11[2U]
                                    : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp12[2U]
                                        : ((0xcU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp13[2U]
                                            : ((0x11U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[2U]
                                                : __Vtemp14[2U]))))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[3U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp9[3U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                   ? __Vtemp10[3U] : 
                                  ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp11[3U]
                                    : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp12[3U]
                                        : ((0xcU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp13[3U]
                                            : ((0x11U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[3U]
                                                : __Vtemp14[3U]))))));
    }
    if (((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_344))) {
        VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (((QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U]))), vlSelf->__Vtask_pmem_read__3__rdata);
        vlSelf->CPU__DOT__EXU__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__3__rdata;
    } else {
        vlSelf->CPU__DOT__EXU__DOT__mem_rdata = 0ULL;
    }
    if (((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
            & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
               & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                  & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                     & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                        & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_388)))))))) {
        VCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (((QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U]))), vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data, 
                                                               ((3U 
                                                                 == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                 ? 0xffU
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                  ? 0xfU
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                   ? 3U
                                                                   : 
                                                                  (0U 
                                                                   == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))))));
    }
    vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data 
        = ((IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr)
            ? (4ULL + vlSelf->CPU__DOT__pc) : (((0x33U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_344))
                                                ? (
                                                   (6U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                   >> 0xfU)))
                                                        ? 0xffffffffffffULL
                                                        : 0ULL) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                    >> 7U)))
                                                         ? 0xffffffffffffffULL
                                                         : 0ULL) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                       ? (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                         : vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))))
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U])))
                                                    : (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp)))));
}

void VCPU___024unit____Vdpiimwrap_get_regs__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &regs);

void VCPU___024root___initial__TOP__3(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___initial__TOP__3\n"); );
    // Body
    VCPU___024unit____Vdpiimwrap_get_regs__Vdpioc2_TOP____024unit(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs);
}

void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VCPU___024root___initial__TOP__3(vlSelf);
}

void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Body
    VCPU___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VCPU___024root___final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___final\n"); );
}

void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__snpc = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT___pc_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_196 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_234 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_344 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_388 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_490 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__EXU__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31);
    VL_RAND_RESET_W(95, vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
