// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08007468 mode=thumb end=0x08007476
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

OVL_EXPORT void func_08007468(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08007468u);
    /* 08007468  08007468 T adds r0,r3,#0x1 */
    g_cpu.R[15] = 0x08007468u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007468 = 1u;
    _cyc_08007468 = 1u;
    uint32_t _rn_08007468 = g_cpu.R[3];
    uint32_t _r_08007468;
    _r_08007468 = _rn_08007468 + 0x00000001u;
    arm_set_nzcv_add(_rn_08007468, 0x00000001u, _r_08007468);
    g_cpu.R[0] = _r_08007468;
    g_cpu.R[15] = 0x0800746Au;
    runtime_tick(_cyc_08007468);
    /* 0800746A  0800746a T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x0800746Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800746A = 1u;
    _cyc_0800746A = 1u;
    uint32_t _rm_0800746A = g_cpu.R[0];
    uint32_t _op2_0800746A;
    uint32_t _co_0800746A;
    _op2_0800746A = _rm_0800746A << 16;
    _co_0800746A = (_rm_0800746A >> 16) & 1u;
    uint32_t _r_0800746A;
    _r_0800746A = _op2_0800746A;
    arm_set_nzc_logic(_r_0800746A, _co_0800746A);
    g_cpu.R[0] = _r_0800746A;
    g_cpu.R[15] = 0x0800746Cu;
    runtime_tick(_cyc_0800746A);
    /* 0800746C  0800746c T movs r3,r0,lsr #16 */
    g_cpu.R[15] = 0x0800746Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800746C = 1u;
    _cyc_0800746C = 1u;
    uint32_t _rm_0800746C = g_cpu.R[0];
    uint32_t _op2_0800746C;
    uint32_t _co_0800746C;
    _op2_0800746C = _rm_0800746C >> 16;
    _co_0800746C = (_rm_0800746C >> 15) & 1u;
    uint32_t _r_0800746C;
    _r_0800746C = _op2_0800746C;
    arm_set_nzc_logic(_r_0800746C, _co_0800746C);
    g_cpu.R[3] = _r_0800746C;
    g_cpu.R[15] = 0x0800746Eu;
    runtime_tick(_cyc_0800746C);
    /* 0800746E  0800746e T cmps r3,r4 */
    g_cpu.R[15] = 0x0800746Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800746E = 1u;
    _cyc_0800746E = 1u;
    uint32_t _rm_0800746E = g_cpu.R[4];
    uint32_t _op2_0800746E;
    uint32_t _co_0800746E;
    _op2_0800746E = _rm_0800746E;
    _co_0800746E = cpsr_c();
    uint32_t _rn_0800746E = g_cpu.R[3];
    uint32_t _r_0800746E;
    _r_0800746E = _rn_0800746E - _op2_0800746E;
    arm_set_nzcv_sub(_rn_0800746E, _op2_0800746E, _r_0800746E);
    g_cpu.R[15] = 0x08007470u;
    runtime_tick(_cyc_0800746E);
    /* 08007470  08007470 T bls 0x08007456 */
    g_cpu.R[15] = 0x08007470u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007470 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08007470 = 3u;
        g_cpu.R[15] = 0x08007456u;
        runtime_tick(_cyc_08007470);
        runtime_dispatch(0x08007456u);
        return;
    }
    g_cpu.R[15] = 0x08007472u;
    runtime_tick(_cyc_08007470);
    /* 08007472  08007472 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08007472u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007472 = 1u;
    _cyc_08007472 = 1u;
    uint32_t _r_08007472;
    _r_08007472 = 0x00000000u;
    arm_set_nzc_logic(_r_08007472, cpsr_c());
    g_cpu.R[0] = _r_08007472;
    g_cpu.R[15] = 0x08007474u;
    runtime_tick(_cyc_08007472);
    /* 08007474  08007474 T b 0x0800753c */
    g_cpu.R[15] = 0x08007474u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007474 = 1u;
    _cyc_08007474 = 3u;
    g_cpu.R[15] = 0x0800753Cu;
    runtime_tick(_cyc_08007474);
    runtime_dispatch(0x0800753Cu);
    return;
    g_cpu.R[15] = 0x08007476u;
    runtime_tick(_cyc_08007474);
    /* fall-through to 0x08007476 */
    g_cpu.R[15] = 0x08007476u;
    runtime_dispatch(0x08007476u);
    return;
}
