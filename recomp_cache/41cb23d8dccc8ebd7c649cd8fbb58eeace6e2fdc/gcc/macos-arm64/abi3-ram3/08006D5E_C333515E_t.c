// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006D5E mode=thumb end=0x08006D64
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

OVL_EXPORT void func_08006D5E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006D5Eu);
    /* 08006D5E  08006d5e T add r0,r0,r9 */
    g_cpu.R[15] = 0x08006D5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D5E = 1u;
    _cyc_08006D5E = 1u;
    uint32_t _rm_08006D5E = g_cpu.R[9];
    uint32_t _op2_08006D5E;
    uint32_t _co_08006D5E;
    _op2_08006D5E = _rm_08006D5E;
    _co_08006D5E = cpsr_c();
    uint32_t _rn_08006D5E = g_cpu.R[0];
    uint32_t _r_08006D5E;
    _r_08006D5E = _rn_08006D5E + _op2_08006D5E;
    g_cpu.R[0] = _r_08006D5E;
    g_cpu.R[15] = 0x08006D60u;
    runtime_tick(_cyc_08006D5E);
    /* 08006D60  08006d60 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x08006D60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D60 = 1u;
    _cyc_08006D60 = 1u;
    uint32_t _rm_08006D60 = g_cpu.R[0];
    uint32_t _op2_08006D60;
    uint32_t _co_08006D60;
    _op2_08006D60 = _rm_08006D60 << 16;
    _co_08006D60 = (_rm_08006D60 >> 16) & 1u;
    uint32_t _r_08006D60;
    _r_08006D60 = _op2_08006D60;
    arm_set_nzc_logic(_r_08006D60, _co_08006D60);
    g_cpu.R[0] = _r_08006D60;
    g_cpu.R[15] = 0x08006D62u;
    runtime_tick(_cyc_08006D60);
    /* 08006D62  08006d62 T movs r2,r0,lsr #16 */
    g_cpu.R[15] = 0x08006D62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D62 = 1u;
    _cyc_08006D62 = 1u;
    uint32_t _rm_08006D62 = g_cpu.R[0];
    uint32_t _op2_08006D62;
    uint32_t _co_08006D62;
    _op2_08006D62 = _rm_08006D62 >> 16;
    _co_08006D62 = (_rm_08006D62 >> 15) & 1u;
    uint32_t _r_08006D62;
    _r_08006D62 = _op2_08006D62;
    arm_set_nzc_logic(_r_08006D62, _co_08006D62);
    g_cpu.R[2] = _r_08006D62;
    g_cpu.R[15] = 0x08006D64u;
    runtime_tick(_cyc_08006D62);
    /* fall-through to 0x08006D64 */
    g_cpu.R[15] = 0x08006D64u;
    runtime_dispatch(0x08006D64u);
    return;
}
