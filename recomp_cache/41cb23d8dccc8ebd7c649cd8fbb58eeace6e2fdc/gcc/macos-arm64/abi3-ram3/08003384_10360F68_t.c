// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003384 mode=thumb end=0x0800338A
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

OVL_EXPORT void func_08003384(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003384u);
    /* 08003384  08003384 T adds r4,r4,#0x1 */
    g_cpu.R[15] = 0x08003384u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003384 = 1u;
    _cyc_08003384 = 1u;
    uint32_t _rn_08003384 = g_cpu.R[4];
    uint32_t _r_08003384;
    _r_08003384 = _rn_08003384 + 0x00000001u;
    arm_set_nzcv_add(_rn_08003384, 0x00000001u, _r_08003384);
    g_cpu.R[4] = _r_08003384;
    g_cpu.R[15] = 0x08003386u;
    runtime_tick(_cyc_08003384);
    /* 08003386  08003386 T cmps r5,r7 */
    g_cpu.R[15] = 0x08003386u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003386 = 1u;
    _cyc_08003386 = 1u;
    uint32_t _rm_08003386 = g_cpu.R[7];
    uint32_t _op2_08003386;
    uint32_t _co_08003386;
    _op2_08003386 = _rm_08003386;
    _co_08003386 = cpsr_c();
    uint32_t _rn_08003386 = g_cpu.R[5];
    uint32_t _r_08003386;
    _r_08003386 = _rn_08003386 - _op2_08003386;
    arm_set_nzcv_sub(_rn_08003386, _op2_08003386, _r_08003386);
    g_cpu.R[15] = 0x08003388u;
    runtime_tick(_cyc_08003386);
    /* 08003388  08003388 T blt 0x08003330 */
    g_cpu.R[15] = 0x08003388u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003388 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08003388 = 3u;
        g_cpu.R[15] = 0x08003330u;
        runtime_tick(_cyc_08003388);
        runtime_dispatch(0x08003330u);
        return;
    }
    g_cpu.R[15] = 0x0800338Au;
    runtime_tick(_cyc_08003388);
    /* fall-through to 0x0800338A */
    g_cpu.R[15] = 0x0800338Au;
    runtime_dispatch(0x0800338Au);
    return;
}
