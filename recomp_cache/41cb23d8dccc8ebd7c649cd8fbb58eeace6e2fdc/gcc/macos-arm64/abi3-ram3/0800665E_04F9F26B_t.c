// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800665E mode=thumb end=0x08006666
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

OVL_EXPORT void func_0800665E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800665Eu);
    /* 0800665E  0800665e T bne 0x0800669c */
    g_cpu.R[15] = 0x0800665Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800665E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0800665E = 3u;
        g_cpu.R[15] = 0x0800669Cu;
        runtime_tick(_cyc_0800665E);
        runtime_dispatch(0x0800669Cu);
        return;
    }
    g_cpu.R[15] = 0x08006660u;
    runtime_tick(_cyc_0800665E);
    /* 08006660  08006660 T movs r0,#0x2 */
    g_cpu.R[15] = 0x08006660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006660 = 1u;
    _cyc_08006660 = 1u;
    uint32_t _r_08006660;
    _r_08006660 = 0x00000002u;
    arm_set_nzc_logic(_r_08006660, cpsr_c());
    g_cpu.R[0] = _r_08006660;
    g_cpu.R[15] = 0x08006662u;
    runtime_tick(_cyc_08006660);
    /* 08006662  08006662 T bl.hi 0x08002666 */
    g_cpu.R[15] = 0x08006662u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006662 = 1u;
    _cyc_08006662 = 1u;
    g_cpu.R[14] = 0x08002666u;
    g_cpu.R[15] = 0x08006664u;
    runtime_tick(_cyc_08006662);
    /* 08006664  08006664 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08006664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006664 = 1u;
    _cyc_08006664 = 3u;
    uint32_t _blt_08006664 = (g_cpu.R[14] + 0x00000966u) & ~1u;
    g_cpu.R[14] = 0x08006667u;
    g_cpu.R[15] = _blt_08006664;
    runtime_call_push_return(0x08006666u);
    runtime_tick(_cyc_08006664);
    _cyc_08006664 = 0u;
    runtime_dispatch(_blt_08006664);
    if (g_cpu.R[15] != 0x08006666u) { runtime_call_cancel_return(0x08006666u); return; }
    g_cpu.R[15] = 0x08006666u;
    runtime_tick(_cyc_08006664);
    /* fall-through to 0x08006666 */
    g_cpu.R[15] = 0x08006666u;
    runtime_dispatch(0x08006666u);
    return;
}
