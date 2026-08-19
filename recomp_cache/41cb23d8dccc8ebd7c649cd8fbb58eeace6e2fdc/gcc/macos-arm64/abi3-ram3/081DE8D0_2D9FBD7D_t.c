// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081DE8D0 mode=thumb end=0x081DE8DE
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

OVL_EXPORT void func_081DE8D0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081DE8D0u);
    /* 081DE8D0  081de8d0 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x081DE8D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8D0 = 1u;
    _cyc_081DE8D0 = 1u;
    uint32_t _rn_081DE8D0 = g_cpu.R[0];
    uint32_t _r_081DE8D0;
    _r_081DE8D0 = _rn_081DE8D0 - 0x00000000u;
    arm_set_nzcv_sub(_rn_081DE8D0, 0x00000000u, _r_081DE8D0);
    g_cpu.R[15] = 0x081DE8D2u;
    runtime_tick(_cyc_081DE8D0);
    /* 081DE8D2  081de8d2 T bne 0x081de8c8 */
    g_cpu.R[15] = 0x081DE8D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8D2 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081DE8D2 = 3u;
        g_cpu.R[15] = 0x081DE8C8u;
        runtime_tick(_cyc_081DE8D2);
        runtime_dispatch(0x081DE8C8u);
        return;
    }
    g_cpu.R[15] = 0x081DE8D4u;
    runtime_tick(_cyc_081DE8D2);
    /* 081DE8D4  081de8d4 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x081DE8D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8D4 = 1u;
    _cyc_081DE8D4 = 1u;
    uint32_t _rn_081DE8D4 = g_cpu.R[4];
    uint32_t _r_081DE8D4;
    _r_081DE8D4 = _rn_081DE8D4 + 0x00000000u;
    arm_set_nzcv_add(_rn_081DE8D4, 0x00000000u, _r_081DE8D4);
    g_cpu.R[0] = _r_081DE8D4;
    g_cpu.R[15] = 0x081DE8D6u;
    runtime_tick(_cyc_081DE8D4);
    /* 081DE8D6  081de8d6 T add r13,r13,#0x44 */
    g_cpu.R[15] = 0x081DE8D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8D6 = 1u;
    _cyc_081DE8D6 = 1u;
    uint32_t _rn_081DE8D6 = g_cpu.R[13];
    uint32_t _r_081DE8D6;
    _r_081DE8D6 = _rn_081DE8D6 + 0x00000044u;
    g_cpu.R[13] = _r_081DE8D6;
    g_cpu.R[15] = 0x081DE8D8u;
    runtime_tick(_cyc_081DE8D6);
    /* 081DE8D8  081de8d8 T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x081DE8D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8D8 = 1u;
    _cyc_081DE8D8 = 2u;
    uint32_t _b_081DE8D8 = g_cpu.R[13];
    uint32_t _a_081DE8D8 = _b_081DE8D8;
    uint32_t _fb_081DE8D8 = _b_081DE8D8 + 8u;
    _cyc_081DE8D8 += runtime_mem_cycles(_a_081DE8D8 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_081DE8D8 & ~3u);
    _a_081DE8D8 += 4u;
    _cyc_081DE8D8 += runtime_mem_cycles(_a_081DE8D8 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_081DE8D8 & ~3u);
    _a_081DE8D8 += 4u;
    g_cpu.R[13] = _fb_081DE8D8;
    g_cpu.R[15] = 0x081DE8DAu;
    runtime_tick(_cyc_081DE8D8);
    /* 081DE8DA  081de8da T ldm r13!,{r1} */
    g_cpu.R[15] = 0x081DE8DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8DA = 1u;
    _cyc_081DE8DA = 2u;
    uint32_t _b_081DE8DA = g_cpu.R[13];
    uint32_t _a_081DE8DA = _b_081DE8DA;
    uint32_t _fb_081DE8DA = _b_081DE8DA + 4u;
    _cyc_081DE8DA += runtime_mem_cycles(_a_081DE8DA & ~3u, 4u, 0u);
    g_cpu.R[1] = bus_read_u32(_a_081DE8DA & ~3u);
    _a_081DE8DA += 4u;
    g_cpu.R[13] = _fb_081DE8DA;
    g_cpu.R[15] = 0x081DE8DCu;
    runtime_tick(_cyc_081DE8DA);
    /* 081DE8DC  081de8dc T bx r1 */
    g_cpu.R[15] = 0x081DE8DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DE8DC = 1u;
    _cyc_081DE8DC = 3u;
    uint32_t _bxt_081DE8DC = g_cpu.R[1];
    g_cpu.R[15] = _bxt_081DE8DC & ~1u;
    runtime_tick(_cyc_081DE8DC);
    if (_bxt_081DE8DC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_081DE8DC);
    return;
    g_cpu.R[15] = 0x081DE8DEu;
    runtime_tick(_cyc_081DE8DC);
    /* fall-through to 0x081DE8DE */
    g_cpu.R[15] = 0x081DE8DEu;
    runtime_dispatch(0x081DE8DEu);
    return;
}
