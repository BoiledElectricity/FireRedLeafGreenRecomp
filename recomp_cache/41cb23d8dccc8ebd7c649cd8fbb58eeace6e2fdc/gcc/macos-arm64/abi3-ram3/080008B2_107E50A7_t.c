// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080008B2 mode=thumb end=0x080008B8
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

OVL_EXPORT void func_080008B2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080008B2u);
    /* 080008B2  080008b2 T beq 0x080008aa */
    g_cpu.R[15] = 0x080008B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080008B2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080008B2 = 3u;
        g_cpu.R[15] = 0x080008AAu;
        runtime_tick(_cyc_080008B2);
        runtime_dispatch(0x080008AAu);
        return;
    }
    g_cpu.R[15] = 0x080008B4u;
    runtime_tick(_cyc_080008B2);
    /* 080008B4  080008b4 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x080008B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080008B4 = 1u;
    _cyc_080008B4 = 2u;
    uint32_t _b_080008B4 = g_cpu.R[13];
    uint32_t _a_080008B4 = _b_080008B4;
    uint32_t _fb_080008B4 = _b_080008B4 + 4u;
    _cyc_080008B4 += runtime_mem_cycles(_a_080008B4 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080008B4 & ~3u);
    _a_080008B4 += 4u;
    g_cpu.R[13] = _fb_080008B4;
    g_cpu.R[15] = 0x080008B6u;
    runtime_tick(_cyc_080008B4);
    /* 080008B6  080008b6 T bx r0 */
    g_cpu.R[15] = 0x080008B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080008B6 = 1u;
    _cyc_080008B6 = 3u;
    uint32_t _bxt_080008B6 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_080008B6 & ~1u;
    runtime_tick(_cyc_080008B6);
    if (_bxt_080008B6 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080008B6);
    return;
    g_cpu.R[15] = 0x080008B8u;
    runtime_tick(_cyc_080008B6);
    /* fall-through to 0x080008B8 */
    g_cpu.R[15] = 0x080008B8u;
    runtime_dispatch(0x080008B8u);
    return;
}
