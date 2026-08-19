// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002FBC mode=thumb end=0x08002FCA
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

OVL_EXPORT void func_08002FBC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002FBCu);
    /* 08002FBC  08002fbc T adds r1,r1,#0x2 */
    g_cpu.R[15] = 0x08002FBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FBC = 1u;
    _cyc_08002FBC = 1u;
    uint32_t _rn_08002FBC = g_cpu.R[1];
    uint32_t _r_08002FBC;
    _r_08002FBC = _rn_08002FBC + 0x00000002u;
    arm_set_nzcv_add(_rn_08002FBC, 0x00000002u, _r_08002FBC);
    g_cpu.R[1] = _r_08002FBC;
    g_cpu.R[15] = 0x08002FBEu;
    runtime_tick(_cyc_08002FBC);
    /* 08002FBE  08002fbe T adds r3,r3,#0x1 */
    g_cpu.R[15] = 0x08002FBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FBE = 1u;
    _cyc_08002FBE = 1u;
    uint32_t _rn_08002FBE = g_cpu.R[3];
    uint32_t _r_08002FBE;
    _r_08002FBE = _rn_08002FBE + 0x00000001u;
    arm_set_nzcv_add(_rn_08002FBE, 0x00000001u, _r_08002FBE);
    g_cpu.R[3] = _r_08002FBE;
    g_cpu.R[15] = 0x08002FC0u;
    runtime_tick(_cyc_08002FBE);
    /* 08002FC0  08002fc0 T cmps r3,#0xf */
    g_cpu.R[15] = 0x08002FC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FC0 = 1u;
    _cyc_08002FC0 = 1u;
    uint32_t _rn_08002FC0 = g_cpu.R[3];
    uint32_t _r_08002FC0;
    _r_08002FC0 = _rn_08002FC0 - 0x0000000Fu;
    arm_set_nzcv_sub(_rn_08002FC0, 0x0000000Fu, _r_08002FC0);
    g_cpu.R[15] = 0x08002FC2u;
    runtime_tick(_cyc_08002FC0);
    /* 08002FC2  08002fc2 T ble 0x08002f96 */
    g_cpu.R[15] = 0x08002FC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FC2 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08002FC2 = 3u;
        g_cpu.R[15] = 0x08002F96u;
        runtime_tick(_cyc_08002FC2);
        runtime_dispatch(0x08002F96u);
        return;
    }
    g_cpu.R[15] = 0x08002FC4u;
    runtime_tick(_cyc_08002FC2);
    /* 08002FC4  08002fc4 T ldm r13!,{r4,r5} */
    g_cpu.R[15] = 0x08002FC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FC4 = 1u;
    _cyc_08002FC4 = 2u;
    uint32_t _b_08002FC4 = g_cpu.R[13];
    uint32_t _a_08002FC4 = _b_08002FC4;
    uint32_t _fb_08002FC4 = _b_08002FC4 + 8u;
    _cyc_08002FC4 += runtime_mem_cycles(_a_08002FC4 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08002FC4 & ~3u);
    _a_08002FC4 += 4u;
    _cyc_08002FC4 += runtime_mem_cycles(_a_08002FC4 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08002FC4 & ~3u);
    _a_08002FC4 += 4u;
    g_cpu.R[13] = _fb_08002FC4;
    g_cpu.R[15] = 0x08002FC6u;
    runtime_tick(_cyc_08002FC4);
    /* 08002FC6  08002fc6 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08002FC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FC6 = 1u;
    _cyc_08002FC6 = 2u;
    uint32_t _b_08002FC6 = g_cpu.R[13];
    uint32_t _a_08002FC6 = _b_08002FC6;
    uint32_t _fb_08002FC6 = _b_08002FC6 + 4u;
    _cyc_08002FC6 += runtime_mem_cycles(_a_08002FC6 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08002FC6 & ~3u);
    _a_08002FC6 += 4u;
    g_cpu.R[13] = _fb_08002FC6;
    g_cpu.R[15] = 0x08002FC8u;
    runtime_tick(_cyc_08002FC6);
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
