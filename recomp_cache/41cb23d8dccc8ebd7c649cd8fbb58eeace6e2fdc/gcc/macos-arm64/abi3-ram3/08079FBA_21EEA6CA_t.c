// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08079FBA mode=thumb end=0x08079FCE
#include "overlay_runtime_arm.h"

#ifdef _WIN32
#define OVL_DLLEXPORT __declspec(dllexport)
#else
#define OVL_DLLEXPORT __attribute__((visibility("default")))
#endif
#ifdef __cplusplus
#define OVL_EXPORT extern "C" OVL_DLLEXPORT
#else
#define OVL_EXPORT OVL_DLLEXPORT
#endif

const GbaOverlayCallbacks* g_ovl = 0;
OVL_EXPORT uint32_t overlay_abi(void) { return 3u; }
OVL_EXPORT void overlay_init(const GbaOverlayCallbacks* cb) { g_ovl = cb; }

OVL_EXPORT void func_08079FBA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08079FBAu);
    /* 08079FBA  08079fba T movs r1,r1,lsl #16 */
    g_cpu.R[15] = 0x08079FBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FBA = 1u;
    _cyc_08079FBA = 1u;
    uint32_t _rm_08079FBA = g_cpu.R[1];
    uint32_t _op2_08079FBA;
    uint32_t _co_08079FBA;
    _op2_08079FBA = _rm_08079FBA << 16;
    _co_08079FBA = (_rm_08079FBA >> 16) & 1u;
    uint32_t _r_08079FBA;
    _r_08079FBA = _op2_08079FBA;
    arm_set_nzc_logic(_r_08079FBA, _co_08079FBA);
    g_cpu.R[1] = _r_08079FBA;
    g_cpu.R[15] = 0x08079FBCu;
    runtime_tick(_cyc_08079FBA);
    /* 08079FBC  08079fbc T movs r2,r1,lsr #16 */
    g_cpu.R[15] = 0x08079FBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FBC = 1u;
    _cyc_08079FBC = 1u;
    uint32_t _rm_08079FBC = g_cpu.R[1];
    uint32_t _op2_08079FBC;
    uint32_t _co_08079FBC;
    _op2_08079FBC = _rm_08079FBC >> 16;
    _co_08079FBC = (_rm_08079FBC >> 15) & 1u;
    uint32_t _r_08079FBC;
    _r_08079FBC = _op2_08079FBC;
    arm_set_nzc_logic(_r_08079FBC, _co_08079FBC);
    g_cpu.R[2] = _r_08079FBC;
    g_cpu.R[15] = 0x08079FBEu;
    runtime_tick(_cyc_08079FBC);
    /* 08079FBE  08079fbe T movs r0,r3,lsl #5 */
    g_cpu.R[15] = 0x08079FBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FBE = 1u;
    _cyc_08079FBE = 1u;
    uint32_t _rm_08079FBE = g_cpu.R[3];
    uint32_t _op2_08079FBE;
    uint32_t _co_08079FBE;
    _op2_08079FBE = _rm_08079FBE << 5;
    _co_08079FBE = (_rm_08079FBE >> 27) & 1u;
    uint32_t _r_08079FBE;
    _r_08079FBE = _op2_08079FBE;
    arm_set_nzc_logic(_r_08079FBE, _co_08079FBE);
    g_cpu.R[0] = _r_08079FBE;
    g_cpu.R[15] = 0x08079FC0u;
    runtime_tick(_cyc_08079FBE);
    /* 08079FC0  08079fc0 T adds r0,r0,r7 */
    g_cpu.R[15] = 0x08079FC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FC0 = 1u;
    _cyc_08079FC0 = 1u;
    uint32_t _rm_08079FC0 = g_cpu.R[7];
    uint32_t _op2_08079FC0;
    uint32_t _co_08079FC0;
    _op2_08079FC0 = _rm_08079FC0;
    _co_08079FC0 = cpsr_c();
    uint32_t _rn_08079FC0 = g_cpu.R[0];
    uint32_t _r_08079FC0;
    _r_08079FC0 = _rn_08079FC0 + _op2_08079FC0;
    arm_set_nzcv_add(_rn_08079FC0, _op2_08079FC0, _r_08079FC0);
    g_cpu.R[0] = _r_08079FC0;
    g_cpu.R[15] = 0x08079FC2u;
    runtime_tick(_cyc_08079FC0);
    /* 08079FC2  08079fc2 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08079FC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FC2 = 1u;
    _cyc_08079FC2 = 1u;
    uint32_t _rm_08079FC2 = g_cpu.R[5];
    uint32_t _op2_08079FC2;
    uint32_t _co_08079FC2;
    _op2_08079FC2 = _rm_08079FC2;
    _co_08079FC2 = cpsr_c();
    uint32_t _rn_08079FC2 = g_cpu.R[0];
    uint32_t _r_08079FC2;
    _r_08079FC2 = _rn_08079FC2 + _op2_08079FC2;
    arm_set_nzcv_add(_rn_08079FC2, _op2_08079FC2, _r_08079FC2);
    g_cpu.R[0] = _r_08079FC2;
    g_cpu.R[15] = 0x08079FC4u;
    runtime_tick(_cyc_08079FC2);
    /* 08079FC4  08079fc4 T movs r1,r1,lsr #24 */
    g_cpu.R[15] = 0x08079FC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FC4 = 1u;
    _cyc_08079FC4 = 1u;
    uint32_t _rm_08079FC4 = g_cpu.R[1];
    uint32_t _op2_08079FC4;
    uint32_t _co_08079FC4;
    _op2_08079FC4 = _rm_08079FC4 >> 24;
    _co_08079FC4 = (_rm_08079FC4 >> 23) & 1u;
    uint32_t _r_08079FC4;
    _r_08079FC4 = _op2_08079FC4;
    arm_set_nzc_logic(_r_08079FC4, _co_08079FC4);
    g_cpu.R[1] = _r_08079FC4;
    g_cpu.R[15] = 0x08079FC6u;
    runtime_tick(_cyc_08079FC4);
    /* 08079FC6  08079fc6 T strb r1,[r0] */
    g_cpu.R[15] = 0x08079FC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FC6 = 1u;
    _cyc_08079FC6 = 1u;
    uint32_t _base_08079FC6 = g_cpu.R[0];
    uint32_t _off_08079FC6;
    _off_08079FC6 = 0x00000000u;
    uint32_t _ea_08079FC6 = _base_08079FC6 + _off_08079FC6;
    uint32_t _post_08079FC6 = _base_08079FC6 + _off_08079FC6;
    _cyc_08079FC6 += runtime_mem_cycles(_ea_08079FC6, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08079FC6u, _ea_08079FC6, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08079FC6, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08079FC8u;
    runtime_tick(_cyc_08079FC6);
    /* 08079FC8  08079fc8 T cmps r1,#0x1f */
    g_cpu.R[15] = 0x08079FC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FC8 = 1u;
    _cyc_08079FC8 = 1u;
    uint32_t _rn_08079FC8 = g_cpu.R[1];
    uint32_t _r_08079FC8;
    _r_08079FC8 = _rn_08079FC8 - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_08079FC8, 0x0000001Fu, _r_08079FC8);
    g_cpu.R[15] = 0x08079FCAu;
    runtime_tick(_cyc_08079FC8);
    /* 08079FCA  08079fca T bls 0x08079fce */
    g_cpu.R[15] = 0x08079FCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FCA = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08079FCA = 3u;
        g_cpu.R[15] = 0x08079FCEu;
        runtime_tick(_cyc_08079FCA);
        runtime_dispatch(0x08079FCEu);
        return;
    }
    g_cpu.R[15] = 0x08079FCCu;
    runtime_tick(_cyc_08079FCA);
    /* 08079FCC  08079fcc T strb r6,[r0] */
    g_cpu.R[15] = 0x08079FCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08079FCC = 1u;
    _cyc_08079FCC = 1u;
    uint32_t _base_08079FCC = g_cpu.R[0];
    uint32_t _off_08079FCC;
    _off_08079FCC = 0x00000000u;
    uint32_t _ea_08079FCC = _base_08079FCC + _off_08079FCC;
    uint32_t _post_08079FCC = _base_08079FCC + _off_08079FCC;
    _cyc_08079FCC += runtime_mem_cycles(_ea_08079FCC, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08079FCCu, _ea_08079FCC, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_08079FCC, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x08079FCEu;
    runtime_tick(_cyc_08079FCC);
    /* fall-through to 0x08079FCE */
    g_cpu.R[15] = 0x08079FCEu;
    runtime_dispatch(0x08079FCEu);
    return;
}
