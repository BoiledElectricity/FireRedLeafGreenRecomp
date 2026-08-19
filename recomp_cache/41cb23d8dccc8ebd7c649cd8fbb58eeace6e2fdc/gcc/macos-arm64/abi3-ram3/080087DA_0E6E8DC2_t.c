// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080087DA mode=thumb end=0x080087F8
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

OVL_EXPORT void func_080087DA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080087DAu);
    /* 080087DA  080087da T orrs r0,r0,r6 */
    g_cpu.R[15] = 0x080087DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087DA = 1u;
    _cyc_080087DA = 1u;
    uint32_t _rm_080087DA = g_cpu.R[6];
    uint32_t _op2_080087DA;
    uint32_t _co_080087DA;
    _op2_080087DA = _rm_080087DA;
    _co_080087DA = cpsr_c();
    uint32_t _rn_080087DA = g_cpu.R[0];
    uint32_t _r_080087DA;
    _r_080087DA = _rn_080087DA | _op2_080087DA;
    arm_set_nzc_logic(_r_080087DA, _co_080087DA);
    g_cpu.R[0] = _r_080087DA;
    g_cpu.R[15] = 0x080087DCu;
    runtime_tick(_cyc_080087DA);
    /* 080087DC  080087dc T strh r0,[r1] */
    g_cpu.R[15] = 0x080087DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087DC = 1u;
    _cyc_080087DC = 1u;
    uint32_t _base_080087DC = g_cpu.R[1];
    uint32_t _off_080087DC;
    _off_080087DC = 0x00000000u;
    uint32_t _ea_080087DC = _base_080087DC + _off_080087DC;
    uint32_t _post_080087DC = _base_080087DC + _off_080087DC;
    _cyc_080087DC += runtime_mem_cycles(_ea_080087DC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080087DCu, _ea_080087DC & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080087DC & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x080087DEu;
    runtime_tick(_cyc_080087DC);
    /* 080087DE  080087de T movs r1,r2,lsl #2 */
    g_cpu.R[15] = 0x080087DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087DE = 1u;
    _cyc_080087DE = 1u;
    uint32_t _rm_080087DE = g_cpu.R[2];
    uint32_t _op2_080087DE;
    uint32_t _co_080087DE;
    _op2_080087DE = _rm_080087DE << 2;
    _co_080087DE = (_rm_080087DE >> 30) & 1u;
    uint32_t _r_080087DE;
    _r_080087DE = _op2_080087DE;
    arm_set_nzc_logic(_r_080087DE, _co_080087DE);
    g_cpu.R[1] = _r_080087DE;
    g_cpu.R[15] = 0x080087E0u;
    runtime_tick(_cyc_080087DE);
    /* 080087E0  080087e0 T adds r0,r1,r4 */
    g_cpu.R[15] = 0x080087E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087E0 = 1u;
    _cyc_080087E0 = 1u;
    uint32_t _rm_080087E0 = g_cpu.R[4];
    uint32_t _op2_080087E0;
    uint32_t _co_080087E0;
    _op2_080087E0 = _rm_080087E0;
    _co_080087E0 = cpsr_c();
    uint32_t _rn_080087E0 = g_cpu.R[1];
    uint32_t _r_080087E0;
    _r_080087E0 = _rn_080087E0 + _op2_080087E0;
    arm_set_nzcv_add(_rn_080087E0, _op2_080087E0, _r_080087E0);
    g_cpu.R[0] = _r_080087E0;
    g_cpu.R[15] = 0x080087E2u;
    runtime_tick(_cyc_080087E0);
    /* 080087E2  080087e2 T strh r3,[r0] */
    g_cpu.R[15] = 0x080087E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087E2 = 1u;
    _cyc_080087E2 = 1u;
    uint32_t _base_080087E2 = g_cpu.R[0];
    uint32_t _off_080087E2;
    _off_080087E2 = 0x00000000u;
    uint32_t _ea_080087E2 = _base_080087E2 + _off_080087E2;
    uint32_t _post_080087E2 = _base_080087E2 + _off_080087E2;
    _cyc_080087E2 += runtime_mem_cycles(_ea_080087E2, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080087E2u, _ea_080087E2 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080087E2 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x080087E4u;
    runtime_tick(_cyc_080087E2);
    /* 080087E4  080087e4 T adds r1,r1,r5 */
    g_cpu.R[15] = 0x080087E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087E4 = 1u;
    _cyc_080087E4 = 1u;
    uint32_t _rm_080087E4 = g_cpu.R[5];
    uint32_t _op2_080087E4;
    uint32_t _co_080087E4;
    _op2_080087E4 = _rm_080087E4;
    _co_080087E4 = cpsr_c();
    uint32_t _rn_080087E4 = g_cpu.R[1];
    uint32_t _r_080087E4;
    _r_080087E4 = _rn_080087E4 + _op2_080087E4;
    arm_set_nzcv_add(_rn_080087E4, _op2_080087E4, _r_080087E4);
    g_cpu.R[1] = _r_080087E4;
    g_cpu.R[15] = 0x080087E6u;
    runtime_tick(_cyc_080087E4);
    /* 080087E6  080087e6 T strh r3,[r1] */
    g_cpu.R[15] = 0x080087E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087E6 = 1u;
    _cyc_080087E6 = 1u;
    uint32_t _base_080087E6 = g_cpu.R[1];
    uint32_t _off_080087E6;
    _off_080087E6 = 0x00000000u;
    uint32_t _ea_080087E6 = _base_080087E6 + _off_080087E6;
    uint32_t _post_080087E6 = _base_080087E6 + _off_080087E6;
    _cyc_080087E6 += runtime_mem_cycles(_ea_080087E6, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080087E6u, _ea_080087E6 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080087E6 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x080087E8u;
    runtime_tick(_cyc_080087E6);
    /* 080087E8  080087e8 T adds r0,r2,#0x1 */
    g_cpu.R[15] = 0x080087E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087E8 = 1u;
    _cyc_080087E8 = 1u;
    uint32_t _rn_080087E8 = g_cpu.R[2];
    uint32_t _r_080087E8;
    _r_080087E8 = _rn_080087E8 + 0x00000001u;
    arm_set_nzcv_add(_rn_080087E8, 0x00000001u, _r_080087E8);
    g_cpu.R[0] = _r_080087E8;
    g_cpu.R[15] = 0x080087EAu;
    runtime_tick(_cyc_080087E8);
    /* 080087EA  080087ea T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x080087EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087EA = 1u;
    _cyc_080087EA = 1u;
    uint32_t _rm_080087EA = g_cpu.R[0];
    uint32_t _op2_080087EA;
    uint32_t _co_080087EA;
    _op2_080087EA = _rm_080087EA << 24;
    _co_080087EA = (_rm_080087EA >> 8) & 1u;
    uint32_t _r_080087EA;
    _r_080087EA = _op2_080087EA;
    arm_set_nzc_logic(_r_080087EA, _co_080087EA);
    g_cpu.R[0] = _r_080087EA;
    g_cpu.R[15] = 0x080087ECu;
    runtime_tick(_cyc_080087EA);
    /* 080087EC  080087ec T movs r2,r0,lsr #24 */
    g_cpu.R[15] = 0x080087ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087EC = 1u;
    _cyc_080087EC = 1u;
    uint32_t _rm_080087EC = g_cpu.R[0];
    uint32_t _op2_080087EC;
    uint32_t _co_080087EC;
    _op2_080087EC = _rm_080087EC >> 24;
    _co_080087EC = (_rm_080087EC >> 23) & 1u;
    uint32_t _r_080087EC;
    _r_080087EC = _op2_080087EC;
    arm_set_nzc_logic(_r_080087EC, _co_080087EC);
    g_cpu.R[2] = _r_080087EC;
    g_cpu.R[15] = 0x080087EEu;
    runtime_tick(_cyc_080087EC);
    /* 080087EE  080087ee T cmps r2,#0x3f */
    g_cpu.R[15] = 0x080087EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087EE = 1u;
    _cyc_080087EE = 1u;
    uint32_t _rn_080087EE = g_cpu.R[2];
    uint32_t _r_080087EE;
    _r_080087EE = _rn_080087EE - 0x0000003Fu;
    arm_set_nzcv_sub(_rn_080087EE, 0x0000003Fu, _r_080087EE);
    g_cpu.R[15] = 0x080087F0u;
    runtime_tick(_cyc_080087EE);
    /* 080087F0  080087f0 T bls 0x080087d4 */
    g_cpu.R[15] = 0x080087F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087F0 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080087F0 = 3u;
        g_cpu.R[15] = 0x080087D4u;
        runtime_tick(_cyc_080087F0);
        runtime_dispatch(0x080087D4u);
        return;
    }
    g_cpu.R[15] = 0x080087F2u;
    runtime_tick(_cyc_080087F0);
    /* 080087F2  080087f2 T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x080087F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087F2 = 1u;
    _cyc_080087F2 = 2u;
    uint32_t _b_080087F2 = g_cpu.R[13];
    uint32_t _a_080087F2 = _b_080087F2;
    uint32_t _fb_080087F2 = _b_080087F2 + 16u;
    _cyc_080087F2 += runtime_mem_cycles(_a_080087F2 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_080087F2 & ~3u);
    _a_080087F2 += 4u;
    _cyc_080087F2 += runtime_mem_cycles(_a_080087F2 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_080087F2 & ~3u);
    _a_080087F2 += 4u;
    _cyc_080087F2 += runtime_mem_cycles(_a_080087F2 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080087F2 & ~3u);
    _a_080087F2 += 4u;
    _cyc_080087F2 += runtime_mem_cycles(_a_080087F2 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080087F2 & ~3u);
    _a_080087F2 += 4u;
    g_cpu.R[13] = _fb_080087F2;
    g_cpu.R[15] = 0x080087F4u;
    runtime_tick(_cyc_080087F2);
    /* 080087F4  080087f4 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x080087F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087F4 = 1u;
    _cyc_080087F4 = 2u;
    uint32_t _b_080087F4 = g_cpu.R[13];
    uint32_t _a_080087F4 = _b_080087F4;
    uint32_t _fb_080087F4 = _b_080087F4 + 4u;
    _cyc_080087F4 += runtime_mem_cycles(_a_080087F4 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080087F4 & ~3u);
    _a_080087F4 += 4u;
    g_cpu.R[13] = _fb_080087F4;
    g_cpu.R[15] = 0x080087F6u;
    runtime_tick(_cyc_080087F4);
    /* 080087F6  080087f6 T bx r0 */
    g_cpu.R[15] = 0x080087F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080087F6 = 1u;
    _cyc_080087F6 = 3u;
    uint32_t _bxt_080087F6 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_080087F6 & ~1u;
    runtime_tick(_cyc_080087F6);
    if (_bxt_080087F6 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080087F6);
    return;
    g_cpu.R[15] = 0x080087F8u;
    runtime_tick(_cyc_080087F6);
    /* fall-through to 0x080087F8 */
    g_cpu.R[15] = 0x080087F8u;
    runtime_dispatch(0x080087F8u);
    return;
}
