// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002FB6 mode=thumb end=0x08002FCA
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

OVL_EXPORT void func_08002FB6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002FB6u);
    /* 08002FB6  08002fb6 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08002FB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FB6 = 1u;
    _cyc_08002FB6 = 1u;
    uint32_t _rm_08002FB6 = g_cpu.R[5];
    uint32_t _op2_08002FB6;
    uint32_t _co_08002FB6;
    _op2_08002FB6 = _rm_08002FB6;
    _co_08002FB6 = cpsr_c();
    uint32_t _rn_08002FB6 = g_cpu.R[0];
    uint32_t _r_08002FB6;
    _r_08002FB6 = _rn_08002FB6 + _op2_08002FB6;
    arm_set_nzcv_add(_rn_08002FB6, _op2_08002FB6, _r_08002FB6);
    g_cpu.R[0] = _r_08002FB6;
    g_cpu.R[15] = 0x08002FB8u;
    runtime_tick(_cyc_08002FB6);
    /* 08002FB8  08002fb8 T ldrh r0,[r0] */
    g_cpu.R[15] = 0x08002FB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FB8 = 1u;
    _cyc_08002FB8 = 2u;
    uint32_t _base_08002FB8 = g_cpu.R[0];
    uint32_t _off_08002FB8;
    _off_08002FB8 = 0x00000000u;
    uint32_t _ea_08002FB8 = _base_08002FB8 + _off_08002FB8;
    uint32_t _post_08002FB8 = _base_08002FB8 + _off_08002FB8;
    _cyc_08002FB8 += runtime_mem_cycles(_ea_08002FB8, 2u, 0u);
    uint32_t _v_08002FB8;
    { uint32_t _h = bus_read_u16(_ea_08002FB8 & ~1u); if (_ea_08002FB8 & 1u) _v_08002FB8 = ((_h >> 8) | (_h << 24)); else _v_08002FB8 = _h; }
    g_cpu.R[0] = _v_08002FB8;
    g_cpu.R[15] = 0x08002FBAu;
    runtime_tick(_cyc_08002FB8);
    /* 08002FBA  08002fba T strh r0,[r1] */
    g_cpu.R[15] = 0x08002FBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FBA = 1u;
    _cyc_08002FBA = 1u;
    uint32_t _base_08002FBA = g_cpu.R[1];
    uint32_t _off_08002FBA;
    _off_08002FBA = 0x00000000u;
    uint32_t _ea_08002FBA = _base_08002FBA + _off_08002FBA;
    uint32_t _post_08002FBA = _base_08002FBA + _off_08002FBA;
    _cyc_08002FBA += runtime_mem_cycles(_ea_08002FBA, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002FBAu, _ea_08002FBA & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08002FBA & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08002FBCu;
    runtime_tick(_cyc_08002FBA);
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
