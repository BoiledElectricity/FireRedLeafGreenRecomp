// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003044 mode=thumb end=0x0800304A
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

OVL_EXPORT void func_08003044(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003044u);
    /* 08003044  08003044 T cmps r1,r7 */
    g_cpu.R[15] = 0x08003044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003044 = 1u;
    _cyc_08003044 = 1u;
    uint32_t _rm_08003044 = g_cpu.R[7];
    uint32_t _op2_08003044;
    uint32_t _co_08003044;
    _op2_08003044 = _rm_08003044;
    _co_08003044 = cpsr_c();
    uint32_t _rn_08003044 = g_cpu.R[1];
    uint32_t _r_08003044;
    _r_08003044 = _rn_08003044 - _op2_08003044;
    arm_set_nzcv_sub(_rn_08003044, _op2_08003044, _r_08003044);
    g_cpu.R[15] = 0x08003046u;
    runtime_tick(_cyc_08003044);
    /* 08003046  08003046 T bge 0x0800304a */
    g_cpu.R[15] = 0x08003046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003046 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08003046 = 3u;
        g_cpu.R[15] = 0x0800304Au;
        runtime_tick(_cyc_08003046);
        runtime_dispatch(0x0800304Au);
        return;
    }
    g_cpu.R[15] = 0x08003048u;
    runtime_tick(_cyc_08003046);
    /* 08003048  08003048 T adds r7,r1,#0x0 */
    g_cpu.R[15] = 0x08003048u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003048 = 1u;
    _cyc_08003048 = 1u;
    uint32_t _rn_08003048 = g_cpu.R[1];
    uint32_t _r_08003048;
    _r_08003048 = _rn_08003048 + 0x00000000u;
    arm_set_nzcv_add(_rn_08003048, 0x00000000u, _r_08003048);
    g_cpu.R[7] = _r_08003048;
    g_cpu.R[15] = 0x0800304Au;
    runtime_tick(_cyc_08003048);
    /* fall-through to 0x0800304A */
    g_cpu.R[15] = 0x0800304Au;
    runtime_dispatch(0x0800304Au);
    return;
}
