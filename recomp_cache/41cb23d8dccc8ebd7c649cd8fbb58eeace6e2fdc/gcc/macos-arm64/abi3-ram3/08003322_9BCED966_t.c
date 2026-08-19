// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003322 mode=thumb end=0x08003330
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

OVL_EXPORT void func_08003322(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003322u);
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
