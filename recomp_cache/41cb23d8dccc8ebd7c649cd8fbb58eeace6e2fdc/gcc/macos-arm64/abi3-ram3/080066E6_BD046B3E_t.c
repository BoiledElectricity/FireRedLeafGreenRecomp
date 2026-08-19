// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080066E6 mode=thumb end=0x080066EA
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

OVL_EXPORT void func_080066E6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080066E6u);
    /* 080066E6  080066e6 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x080066E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066E6 = 1u;
    _cyc_080066E6 = 2u;
    uint32_t _b_080066E6 = g_cpu.R[13];
    uint32_t _a_080066E6 = _b_080066E6;
    uint32_t _fb_080066E6 = _b_080066E6 + 4u;
    _cyc_080066E6 += runtime_mem_cycles(_a_080066E6 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080066E6 & ~3u);
    _a_080066E6 += 4u;
    g_cpu.R[13] = _fb_080066E6;
    g_cpu.R[15] = 0x080066E8u;
    runtime_tick(_cyc_080066E6);
    /* 080066E8  080066e8 T bx r0 */
    g_cpu.R[15] = 0x080066E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066E8 = 1u;
    _cyc_080066E8 = 3u;
    uint32_t _bxt_080066E8 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_080066E8 & ~1u;
    runtime_tick(_cyc_080066E8);
    if (_bxt_080066E8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080066E8);
    return;
    g_cpu.R[15] = 0x080066EAu;
    runtime_tick(_cyc_080066E8);
    /* fall-through to 0x080066EA */
    g_cpu.R[15] = 0x080066EAu;
    runtime_dispatch(0x080066EAu);
    return;
}
