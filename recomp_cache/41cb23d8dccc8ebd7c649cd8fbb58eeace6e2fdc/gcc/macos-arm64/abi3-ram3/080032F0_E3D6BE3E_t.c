// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080032F0 mode=thumb end=0x080032F2
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

OVL_EXPORT void func_080032F0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080032F0u);
    /* 080032F0  080032f0 T blt 0x08003298 */
    g_cpu.R[15] = 0x080032F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032F0 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080032F0 = 3u;
        g_cpu.R[15] = 0x08003298u;
        runtime_tick(_cyc_080032F0);
        runtime_dispatch(0x08003298u);
        return;
    }
    g_cpu.R[15] = 0x080032F2u;
    runtime_tick(_cyc_080032F0);
    /* fall-through to 0x080032F2 */
    g_cpu.R[15] = 0x080032F2u;
    runtime_dispatch(0x080032F2u);
    return;
}
