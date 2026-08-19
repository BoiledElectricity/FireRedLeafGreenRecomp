// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800197E mode=thumb end=0x08001996
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

OVL_EXPORT void func_0800197E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800197Eu);
    /* 0800197E  0800197e T movs r2,r2,lsr #22 */
    g_cpu.R[15] = 0x0800197Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800197E = 1u;
    _cyc_0800197E = 1u;
    uint32_t _rm_0800197E = g_cpu.R[2];
    uint32_t _op2_0800197E;
    uint32_t _co_0800197E;
    _op2_0800197E = _rm_0800197E >> 22;
    _co_0800197E = (_rm_0800197E >> 21) & 1u;
    uint32_t _r_0800197E;
    _r_0800197E = _op2_0800197E;
    arm_set_nzc_logic(_r_0800197E, _co_0800197E);
    g_cpu.R[2] = _r_0800197E;
    g_cpu.R[15] = 0x08001980u;
    runtime_tick(_cyc_0800197E);
    /* 08001980  08001980 T adds r4,r2,r1 */
    g_cpu.R[15] = 0x08001980u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001980 = 1u;
    _cyc_08001980 = 1u;
    uint32_t _rm_08001980 = g_cpu.R[1];
    uint32_t _op2_08001980;
    uint32_t _co_08001980;
    _op2_08001980 = _rm_08001980;
    _co_08001980 = cpsr_c();
    uint32_t _rn_08001980 = g_cpu.R[2];
    uint32_t _r_08001980;
    _r_08001980 = _rn_08001980 + _op2_08001980;
    arm_set_nzcv_add(_rn_08001980, _op2_08001980, _r_08001980);
    g_cpu.R[4] = _r_08001980;
    g_cpu.R[15] = 0x08001982u;
    runtime_tick(_cyc_08001980);
    /* 08001982  08001982 T movs r6,#0x1 */
    g_cpu.R[15] = 0x08001982u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001982 = 1u;
    _cyc_08001982 = 1u;
    uint32_t _r_08001982;
    _r_08001982 = 0x00000001u;
    arm_set_nzc_logic(_r_08001982, cpsr_c());
    g_cpu.R[6] = _r_08001982;
    g_cpu.R[15] = 0x08001984u;
    runtime_tick(_cyc_08001982);
    /* 08001984  08001984 T movs r6,r6,lsl r0 */
    g_cpu.R[15] = 0x08001984u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001984 = 1u;
    _cyc_08001984 = 2u;
    uint32_t _rm_08001984 = g_cpu.R[6];
    uint32_t _op2_08001984;
    uint32_t _co_08001984;
    uint32_t _cnt_08001984 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_08001984 == 0)      { _op2_08001984 = _rm_08001984; _co_08001984 = cpsr_c(); }
    else if (_cnt_08001984 < 32) { _op2_08001984 = _rm_08001984 << _cnt_08001984; _co_08001984 = (_rm_08001984 >> (32u - _cnt_08001984)) & 1u; }
    else if (_cnt_08001984 == 32){ _op2_08001984 = 0u; _co_08001984 = _rm_08001984 & 1u; }
    else                                { _op2_08001984 = 0u; _co_08001984 = 0u; }
    uint32_t _r_08001984;
    _r_08001984 = _op2_08001984;
    arm_set_nzc_logic(_r_08001984, _co_08001984);
    g_cpu.R[6] = _r_08001984;
    g_cpu.R[15] = 0x08001986u;
    runtime_tick(_cyc_08001984);
    /* 08001986  08001986 T ldr r0,[r4] */
    g_cpu.R[15] = 0x08001986u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001986 = 1u;
    _cyc_08001986 = 2u;
    uint32_t _base_08001986 = g_cpu.R[4];
    uint32_t _off_08001986;
    _off_08001986 = 0x00000000u;
    uint32_t _ea_08001986 = _base_08001986 + _off_08001986;
    uint32_t _post_08001986 = _base_08001986 + _off_08001986;
    _cyc_08001986 += runtime_mem_cycles(_ea_08001986, 4u, 0u);
    uint32_t _v_08001986;
    { uint32_t _w = bus_read_u32(_ea_08001986 & ~3u); uint32_t _rot = (_ea_08001986 & 3u) * 8u; _v_08001986 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08001986;
    g_cpu.R[15] = 0x08001988u;
    runtime_tick(_cyc_08001986);
    /* 08001988  08001988 T ands r0,r0,r6 */
    g_cpu.R[15] = 0x08001988u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001988 = 1u;
    _cyc_08001988 = 1u;
    uint32_t _rm_08001988 = g_cpu.R[6];
    uint32_t _op2_08001988;
    uint32_t _co_08001988;
    _op2_08001988 = _rm_08001988;
    _co_08001988 = cpsr_c();
    uint32_t _rn_08001988 = g_cpu.R[0];
    uint32_t _r_08001988;
    _r_08001988 = _rn_08001988 & _op2_08001988;
    arm_set_nzc_logic(_r_08001988, _co_08001988);
    g_cpu.R[0] = _r_08001988;
    g_cpu.R[15] = 0x0800198Au;
    runtime_tick(_cyc_08001988);
    /* 0800198A  0800198a T cmps r0,#0x0 */
    g_cpu.R[15] = 0x0800198Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198A = 1u;
    _cyc_0800198A = 1u;
    uint32_t _rn_0800198A = g_cpu.R[0];
    uint32_t _r_0800198A;
    _r_0800198A = _rn_0800198A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0800198A, 0x00000000u, _r_0800198A);
    g_cpu.R[15] = 0x0800198Cu;
    runtime_tick(_cyc_0800198A);
    /* 0800198C  0800198c T beq 0x080019ae */
    g_cpu.R[15] = 0x0800198Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0800198C = 3u;
        g_cpu.R[15] = 0x080019AEu;
        runtime_tick(_cyc_0800198C);
        runtime_dispatch(0x080019AEu);
        return;
    }
    g_cpu.R[15] = 0x0800198Eu;
    runtime_tick(_cyc_0800198C);
    /* 0800198E  0800198e T movs r0,r5,lsl #16 */
    g_cpu.R[15] = 0x0800198Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800198E = 1u;
    _cyc_0800198E = 1u;
    uint32_t _rm_0800198E = g_cpu.R[5];
    uint32_t _op2_0800198E;
    uint32_t _co_0800198E;
    _op2_0800198E = _rm_0800198E << 16;
    _co_0800198E = (_rm_0800198E >> 16) & 1u;
    uint32_t _r_0800198E;
    _r_0800198E = _op2_0800198E;
    arm_set_nzc_logic(_r_0800198E, _co_0800198E);
    g_cpu.R[0] = _r_0800198E;
    g_cpu.R[15] = 0x08001990u;
    runtime_tick(_cyc_0800198E);
    /* 08001990  08001990 T movs r0,r0,asr #16 */
    g_cpu.R[15] = 0x08001990u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001990 = 1u;
    _cyc_08001990 = 1u;
    uint32_t _rm_08001990 = g_cpu.R[0];
    uint32_t _op2_08001990;
    uint32_t _co_08001990;
    _op2_08001990 = (uint32_t)((int32_t)_rm_08001990 >> 16);
    _co_08001990 = (_rm_08001990 >> 15) & 1u;
    uint32_t _r_08001990;
    _r_08001990 = _op2_08001990;
    arm_set_nzc_logic(_r_08001990, _co_08001990);
    g_cpu.R[0] = _r_08001990;
    g_cpu.R[15] = 0x08001992u;
    runtime_tick(_cyc_08001990);
    /* 08001992  08001992 T bl.hi 0x08000996 */
    g_cpu.R[15] = 0x08001992u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001992 = 1u;
    _cyc_08001992 = 1u;
    g_cpu.R[14] = 0x08000996u;
    g_cpu.R[15] = 0x08001994u;
    runtime_tick(_cyc_08001992);
    /* 08001994  08001994 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08001994u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001994 = 1u;
    _cyc_08001994 = 3u;
    uint32_t _blt_08001994 = (g_cpu.R[14] + 0x00000652u) & ~1u;
    g_cpu.R[14] = 0x08001997u;
    g_cpu.R[15] = _blt_08001994;
    runtime_call_push_return(0x08001996u);
    runtime_tick(_cyc_08001994);
    _cyc_08001994 = 0u;
    runtime_dispatch(_blt_08001994);
    if (g_cpu.R[15] != 0x08001996u) { runtime_call_cancel_return(0x08001996u); return; }
    g_cpu.R[15] = 0x08001996u;
    runtime_tick(_cyc_08001994);
    /* fall-through to 0x08001996 */
    g_cpu.R[15] = 0x08001996u;
    runtime_dispatch(0x08001996u);
    return;
}
