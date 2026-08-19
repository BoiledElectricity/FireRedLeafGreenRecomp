// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800330E mode=thumb end=0x08003330
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

OVL_EXPORT void func_0800330E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800330Eu);
    /* 0800330E  0800330e T mov r10,r3 */
    g_cpu.R[15] = 0x0800330Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800330E = 1u;
    _cyc_0800330E = 1u;
    uint32_t _rm_0800330E = g_cpu.R[3];
    uint32_t _op2_0800330E;
    uint32_t _co_0800330E;
    _op2_0800330E = _rm_0800330E;
    _co_0800330E = cpsr_c();
    uint32_t _r_0800330E;
    _r_0800330E = _op2_0800330E;
    g_cpu.R[10] = _r_0800330E;
    g_cpu.R[15] = 0x08003310u;
    runtime_tick(_cyc_0800330E);
    /* 08003310  08003310 T movs r5,#0x0 */
    g_cpu.R[15] = 0x08003310u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003310 = 1u;
    _cyc_08003310 = 1u;
    uint32_t _r_08003310;
    _r_08003310 = 0x00000000u;
    arm_set_nzc_logic(_r_08003310, cpsr_c());
    g_cpu.R[5] = _r_08003310;
    g_cpu.R[15] = 0x08003312u;
    runtime_tick(_cyc_08003310);
    /* 08003312  08003312 T ldrb r4,[r6,#0x8] */
    g_cpu.R[15] = 0x08003312u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003312 = 1u;
    _cyc_08003312 = 2u;
    uint32_t _base_08003312 = g_cpu.R[6];
    uint32_t _off_08003312;
    _off_08003312 = 0x00000008u;
    uint32_t _ea_08003312 = _base_08003312 + _off_08003312;
    uint32_t _post_08003312 = _base_08003312 + _off_08003312;
    _cyc_08003312 += runtime_mem_cycles(_ea_08003312, 1u, 0u);
    uint32_t _v_08003312;
    _v_08003312 = bus_read_u8(_ea_08003312);
    g_cpu.R[4] = _v_08003312;
    g_cpu.R[15] = 0x08003314u;
    runtime_tick(_cyc_08003312);
    /* 08003314  08003314 T str r2,[r13,#0x1c] */
    g_cpu.R[15] = 0x08003314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003314 = 1u;
    _cyc_08003314 = 1u;
    uint32_t _base_08003314 = g_cpu.R[13];
    uint32_t _off_08003314;
    _off_08003314 = 0x0000001Cu;
    uint32_t _ea_08003314 = _base_08003314 + _off_08003314;
    uint32_t _post_08003314 = _base_08003314 + _off_08003314;
    _cyc_08003314 += runtime_mem_cycles(_ea_08003314, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08003314u, _ea_08003314 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08003314 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08003316u;
    runtime_tick(_cyc_08003314);
    /* 08003316  08003316 T adds r1,r1,#0x1 */
    g_cpu.R[15] = 0x08003316u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003316 = 1u;
    _cyc_08003316 = 1u;
    uint32_t _rn_08003316 = g_cpu.R[1];
    uint32_t _r_08003316;
    _r_08003316 = _rn_08003316 + 0x00000001u;
    arm_set_nzcv_add(_rn_08003316, 0x00000001u, _r_08003316);
    g_cpu.R[1] = _r_08003316;
    g_cpu.R[15] = 0x08003318u;
    runtime_tick(_cyc_08003316);
    /* 08003318  08003318 T str r1,[r13,#0x14] */
    g_cpu.R[15] = 0x08003318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003318 = 1u;
    _cyc_08003318 = 1u;
    uint32_t _base_08003318 = g_cpu.R[13];
    uint32_t _off_08003318;
    _off_08003318 = 0x00000014u;
    uint32_t _ea_08003318 = _base_08003318 + _off_08003318;
    uint32_t _post_08003318 = _base_08003318 + _off_08003318;
    _cyc_08003318 += runtime_mem_cycles(_ea_08003318, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08003318u, _ea_08003318 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_08003318 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x0800331Au;
    runtime_tick(_cyc_08003318);
    /* 0800331A  0800331a T adds r1,r0,#0x1 */
    g_cpu.R[15] = 0x0800331Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800331A = 1u;
    _cyc_0800331A = 1u;
    uint32_t _rn_0800331A = g_cpu.R[0];
    uint32_t _r_0800331A;
    _r_0800331A = _rn_0800331A + 0x00000001u;
    arm_set_nzcv_add(_rn_0800331A, 0x00000001u, _r_0800331A);
    g_cpu.R[1] = _r_0800331A;
    g_cpu.R[15] = 0x0800331Cu;
    runtime_tick(_cyc_0800331A);
    /* 0800331C  0800331c T str r1,[r13,#0x18] */
    g_cpu.R[15] = 0x0800331Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800331C = 1u;
    _cyc_0800331C = 1u;
    uint32_t _base_0800331C = g_cpu.R[13];
    uint32_t _off_0800331C;
    _off_0800331C = 0x00000018u;
    uint32_t _ea_0800331C = _base_0800331C + _off_0800331C;
    uint32_t _post_0800331C = _base_0800331C + _off_0800331C;
    _cyc_0800331C += runtime_mem_cycles(_ea_0800331C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800331Cu, _ea_0800331C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_0800331C & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x0800331Eu;
    runtime_tick(_cyc_0800331C);
    /* 0800331E  0800331e T cmps r5,r7 */
    g_cpu.R[15] = 0x0800331Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800331E = 1u;
    _cyc_0800331E = 1u;
    uint32_t _rm_0800331E = g_cpu.R[7];
    uint32_t _op2_0800331E;
    uint32_t _co_0800331E;
    _op2_0800331E = _rm_0800331E;
    _co_0800331E = cpsr_c();
    uint32_t _rn_0800331E = g_cpu.R[5];
    uint32_t _r_0800331E;
    _r_0800331E = _rn_0800331E - _op2_0800331E;
    arm_set_nzcv_sub(_rn_0800331E, _op2_0800331E, _r_0800331E);
    g_cpu.R[15] = 0x08003320u;
    runtime_tick(_cyc_0800331E);
    /* 08003320  08003320 T bge 0x0800338a */
    g_cpu.R[15] = 0x08003320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003320 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08003320 = 3u;
        g_cpu.R[15] = 0x0800338Au;
        runtime_tick(_cyc_08003320);
        runtime_dispatch(0x0800338Au);
        return;
    }
    g_cpu.R[15] = 0x08003322u;
    runtime_tick(_cyc_08003320);
    /* 08003322  08003322 T ldr r2,[r15,#0x74] */
    g_cpu.R[15] = 0x08003322u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003322 = 1u;
    _cyc_08003322 = 2u;
    uint32_t _base_08003322 = 0x08003326u & ~3u;
    uint32_t _off_08003322;
    _off_08003322 = 0x00000074u;
    uint32_t _ea_08003322 = _base_08003322 + _off_08003322;
    uint32_t _post_08003322 = _base_08003322 + _off_08003322;
    _cyc_08003322 += runtime_mem_cycles(_ea_08003322, 4u, 0u);
    uint32_t _v_08003322;
    { uint32_t _w = bus_read_u32(_ea_08003322 & ~3u); uint32_t _rot = (_ea_08003322 & 3u) * 8u; _v_08003322 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08003322;
    g_cpu.R[15] = 0x08003324u;
    runtime_tick(_cyc_08003322);
    /* 08003324  08003324 T mov r12,r2 */
    g_cpu.R[15] = 0x08003324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003324 = 1u;
    _cyc_08003324 = 1u;
    uint32_t _rm_08003324 = g_cpu.R[2];
    uint32_t _op2_08003324;
    uint32_t _co_08003324;
    _op2_08003324 = _rm_08003324;
    _co_08003324 = cpsr_c();
    uint32_t _r_08003324;
    _r_08003324 = _op2_08003324;
    g_cpu.R[12] = _r_08003324;
    g_cpu.R[15] = 0x08003326u;
    runtime_tick(_cyc_08003324);
    /* 08003326  08003326 T movs r3,r0,asr #3 */
    g_cpu.R[15] = 0x08003326u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003326 = 1u;
    _cyc_08003326 = 1u;
    uint32_t _rm_08003326 = g_cpu.R[0];
    uint32_t _op2_08003326;
    uint32_t _co_08003326;
    _op2_08003326 = (uint32_t)((int32_t)_rm_08003326 >> 3);
    _co_08003326 = (_rm_08003326 >> 2) & 1u;
    uint32_t _r_08003326;
    _r_08003326 = _op2_08003326;
    arm_set_nzc_logic(_r_08003326, _co_08003326);
    g_cpu.R[3] = _r_08003326;
    g_cpu.R[15] = 0x08003328u;
    runtime_tick(_cyc_08003326);
    /* 08003328  08003328 T mov r9,r3 */
    g_cpu.R[15] = 0x08003328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003328 = 1u;
    _cyc_08003328 = 1u;
    uint32_t _rm_08003328 = g_cpu.R[3];
    uint32_t _op2_08003328;
    uint32_t _co_08003328;
    _op2_08003328 = _rm_08003328;
    _co_08003328 = cpsr_c();
    uint32_t _r_08003328;
    _r_08003328 = _op2_08003328;
    g_cpu.R[9] = _r_08003328;
    g_cpu.R[15] = 0x0800332Au;
    runtime_tick(_cyc_08003328);
    /* 0800332A  0800332a T movs r0,r0,lsl #29 */
    g_cpu.R[15] = 0x0800332Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800332A = 1u;
    _cyc_0800332A = 1u;
    uint32_t _rm_0800332A = g_cpu.R[0];
    uint32_t _op2_0800332A;
    uint32_t _co_0800332A;
    _op2_0800332A = _rm_0800332A << 29;
    _co_0800332A = (_rm_0800332A >> 3) & 1u;
    uint32_t _r_0800332A;
    _r_0800332A = _op2_0800332A;
    arm_set_nzc_logic(_r_0800332A, _co_0800332A);
    g_cpu.R[0] = _r_0800332A;
    g_cpu.R[15] = 0x0800332Cu;
    runtime_tick(_cyc_0800332A);
    /* 0800332C  0800332c T movs r0,r0,lsr #27 */
    g_cpu.R[15] = 0x0800332Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800332C = 1u;
    _cyc_0800332C = 1u;
    uint32_t _rm_0800332C = g_cpu.R[0];
    uint32_t _op2_0800332C;
    uint32_t _co_0800332C;
    _op2_0800332C = _rm_0800332C >> 27;
    _co_0800332C = (_rm_0800332C >> 26) & 1u;
    uint32_t _r_0800332C;
    _r_0800332C = _op2_0800332C;
    arm_set_nzc_logic(_r_0800332C, _co_0800332C);
    g_cpu.R[0] = _r_0800332C;
    g_cpu.R[15] = 0x0800332Eu;
    runtime_tick(_cyc_0800332C);
    /* 0800332E  0800332e T mov r8,r0 */
    g_cpu.R[15] = 0x0800332Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800332E = 1u;
    _cyc_0800332E = 1u;
    uint32_t _rm_0800332E = g_cpu.R[0];
    uint32_t _op2_0800332E;
    uint32_t _co_0800332E;
    _op2_0800332E = _rm_0800332E;
    _co_0800332E = cpsr_c();
    uint32_t _r_0800332E;
    _r_0800332E = _op2_0800332E;
    g_cpu.R[8] = _r_0800332E;
    g_cpu.R[15] = 0x08003330u;
    runtime_tick(_cyc_0800332E);
    /* fall-through to 0x08003330 */
    g_cpu.R[15] = 0x08003330u;
    runtime_dispatch(0x08003330u);
    return;
}
