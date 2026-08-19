// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08007842 mode=thumb end=0x0800785A
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

OVL_EXPORT void func_08007842(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08007842u);
    /* 08007842  08007842 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08007842u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007842 = 1u;
    _cyc_08007842 = 1u;
    uint32_t _rn_08007842 = g_cpu.R[0];
    uint32_t _r_08007842;
    _r_08007842 = _rn_08007842 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08007842, 0x00000000u, _r_08007842);
    g_cpu.R[15] = 0x08007844u;
    runtime_tick(_cyc_08007842);
    /* 08007844  08007844 T bne 0x0800785a */
    g_cpu.R[15] = 0x08007844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007844 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08007844 = 3u;
        g_cpu.R[15] = 0x0800785Au;
        runtime_tick(_cyc_08007844);
        runtime_dispatch(0x0800785Au);
        return;
    }
    g_cpu.R[15] = 0x08007846u;
    runtime_tick(_cyc_08007844);
    /* 08007846  08007846 T ldr r0,[r15,#0x20] */
    g_cpu.R[15] = 0x08007846u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007846 = 1u;
    _cyc_08007846 = 2u;
    uint32_t _base_08007846 = 0x0800784Au & ~3u;
    uint32_t _off_08007846;
    _off_08007846 = 0x00000020u;
    uint32_t _ea_08007846 = _base_08007846 + _off_08007846;
    uint32_t _post_08007846 = _base_08007846 + _off_08007846;
    _cyc_08007846 += runtime_mem_cycles(_ea_08007846, 4u, 0u);
    uint32_t _v_08007846;
    { uint32_t _w = bus_read_u32(_ea_08007846 & ~3u); uint32_t _rot = (_ea_08007846 & 3u) * 8u; _v_08007846 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08007846;
    g_cpu.R[15] = 0x08007848u;
    runtime_tick(_cyc_08007846);
    /* 08007848  08007848 T ldrb r1,[r5] */
    g_cpu.R[15] = 0x08007848u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007848 = 1u;
    _cyc_08007848 = 2u;
    uint32_t _base_08007848 = g_cpu.R[5];
    uint32_t _off_08007848;
    _off_08007848 = 0x00000000u;
    uint32_t _ea_08007848 = _base_08007848 + _off_08007848;
    uint32_t _post_08007848 = _base_08007848 + _off_08007848;
    _cyc_08007848 += runtime_mem_cycles(_ea_08007848, 1u, 0u);
    uint32_t _v_08007848;
    _v_08007848 = bus_read_u8(_ea_08007848);
    g_cpu.R[1] = _v_08007848;
    g_cpu.R[15] = 0x0800784Au;
    runtime_tick(_cyc_08007848);
    /* 0800784A  0800784a T movs r1,r1,lsl #28 */
    g_cpu.R[15] = 0x0800784Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800784A = 1u;
    _cyc_0800784A = 1u;
    uint32_t _rm_0800784A = g_cpu.R[1];
    uint32_t _op2_0800784A;
    uint32_t _co_0800784A;
    _op2_0800784A = _rm_0800784A << 28;
    _co_0800784A = (_rm_0800784A >> 4) & 1u;
    uint32_t _r_0800784A;
    _r_0800784A = _op2_0800784A;
    arm_set_nzc_logic(_r_0800784A, _co_0800784A);
    g_cpu.R[1] = _r_0800784A;
    g_cpu.R[15] = 0x0800784Cu;
    runtime_tick(_cyc_0800784A);
    /* 0800784C  0800784c T movs r1,r1,lsr #31 */
    g_cpu.R[15] = 0x0800784Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800784C = 1u;
    _cyc_0800784C = 1u;
    uint32_t _rm_0800784C = g_cpu.R[1];
    uint32_t _op2_0800784C;
    uint32_t _co_0800784C;
    _op2_0800784C = _rm_0800784C >> 31;
    _co_0800784C = (_rm_0800784C >> 30) & 1u;
    uint32_t _r_0800784C;
    _r_0800784C = _op2_0800784C;
    arm_set_nzc_logic(_r_0800784C, _co_0800784C);
    g_cpu.R[1] = _r_0800784C;
    g_cpu.R[15] = 0x0800784Eu;
    runtime_tick(_cyc_0800784C);
    /* 0800784E  0800784e T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x0800784Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800784E = 1u;
    _cyc_0800784E = 1u;
    uint32_t _rm_0800784E = g_cpu.R[1];
    uint32_t _op2_0800784E;
    uint32_t _co_0800784E;
    _op2_0800784E = _rm_0800784E << 2;
    _co_0800784E = (_rm_0800784E >> 30) & 1u;
    uint32_t _r_0800784E;
    _r_0800784E = _op2_0800784E;
    arm_set_nzc_logic(_r_0800784E, _co_0800784E);
    g_cpu.R[1] = _r_0800784E;
    g_cpu.R[15] = 0x08007850u;
    runtime_tick(_cyc_0800784E);
    /* 08007850  08007850 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x08007850u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007850 = 1u;
    _cyc_08007850 = 1u;
    uint32_t _rm_08007850 = g_cpu.R[0];
    uint32_t _op2_08007850;
    uint32_t _co_08007850;
    _op2_08007850 = _rm_08007850;
    _co_08007850 = cpsr_c();
    uint32_t _rn_08007850 = g_cpu.R[1];
    uint32_t _r_08007850;
    _r_08007850 = _rn_08007850 + _op2_08007850;
    arm_set_nzcv_add(_rn_08007850, _op2_08007850, _r_08007850);
    g_cpu.R[1] = _r_08007850;
    g_cpu.R[15] = 0x08007852u;
    runtime_tick(_cyc_08007850);
    /* 08007852  08007852 T ldr r1,[r1] */
    g_cpu.R[15] = 0x08007852u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007852 = 1u;
    _cyc_08007852 = 2u;
    uint32_t _base_08007852 = g_cpu.R[1];
    uint32_t _off_08007852;
    _off_08007852 = 0x00000000u;
    uint32_t _ea_08007852 = _base_08007852 + _off_08007852;
    uint32_t _post_08007852 = _base_08007852 + _off_08007852;
    _cyc_08007852 += runtime_mem_cycles(_ea_08007852, 4u, 0u);
    uint32_t _v_08007852;
    { uint32_t _w = bus_read_u32(_ea_08007852 & ~3u); uint32_t _rot = (_ea_08007852 & 3u) * 8u; _v_08007852 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08007852;
    g_cpu.R[15] = 0x08007854u;
    runtime_tick(_cyc_08007852);
    /* 08007854  08007854 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08007854u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007854 = 1u;
    _cyc_08007854 = 1u;
    uint32_t _rn_08007854 = g_cpu.R[4];
    uint32_t _r_08007854;
    _r_08007854 = _rn_08007854 + 0x00000000u;
    arm_set_nzcv_add(_rn_08007854, 0x00000000u, _r_08007854);
    g_cpu.R[0] = _r_08007854;
    g_cpu.R[15] = 0x08007856u;
    runtime_tick(_cyc_08007854);
    /* 08007856  08007856 T bl.hi 0x081e385a */
    g_cpu.R[15] = 0x08007856u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007856 = 1u;
    _cyc_08007856 = 1u;
    g_cpu.R[14] = 0x081E385Au;
    g_cpu.R[15] = 0x08007858u;
    runtime_tick(_cyc_08007856);
    /* 08007858  08007858 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08007858u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08007858 = 1u;
    _cyc_08007858 = 3u;
    uint32_t _blt_08007858 = (g_cpu.R[14] + 0x00000352u) & ~1u;
    g_cpu.R[14] = 0x0800785Bu;
    g_cpu.R[15] = _blt_08007858;
    runtime_call_push_return(0x0800785Au);
    runtime_tick(_cyc_08007858);
    _cyc_08007858 = 0u;
    runtime_dispatch(_blt_08007858);
    if (g_cpu.R[15] != 0x0800785Au) { runtime_call_cancel_return(0x0800785Au); return; }
    g_cpu.R[15] = 0x0800785Au;
    runtime_tick(_cyc_08007858);
    /* fall-through to 0x0800785A */
    g_cpu.R[15] = 0x0800785Au;
    runtime_dispatch(0x0800785Au);
    return;
}
