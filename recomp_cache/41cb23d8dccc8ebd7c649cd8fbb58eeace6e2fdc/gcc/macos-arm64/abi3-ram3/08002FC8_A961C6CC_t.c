// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002FC8 mode=thumb end=0x08002FCA
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

OVL_EXPORT void func_08002FC8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002FC8u);
    /* 08002FC8  08002fc8 T bx r0 */
    g_cpu.R[15] = 0x08002FC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FC8 = 1u;
    _cyc_08002FC8 = 3u;
    uint32_t _bxt_08002FC8 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08002FC8 & ~1u;
    runtime_tick(_cyc_08002FC8);
    if (_bxt_08002FC8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08002FC8);
    return;
    g_cpu.R[15] = 0x08002FCAu;
    runtime_tick(_cyc_08002FC8);
    /* fall-through to 0x08002FCA */
    g_cpu.R[15] = 0x08002FCAu;
    runtime_dispatch(0x08002FCAu);
    return;
}
