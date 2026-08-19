// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003340 mode=thumb end=0x08003382
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

OVL_EXPORT void func_08003340(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003340u);
    /* 08003340  08003340 T movs r0,#0x3 */
    g_cpu.R[15] = 0x08003340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003340 = 1u;
    _cyc_08003340 = 1u;
    uint32_t _r_08003340;
    _r_08003340 = 0x00000003u;
    arm_set_nzc_logic(_r_08003340, cpsr_c());
    g_cpu.R[0] = _r_08003340;
    g_cpu.R[15] = 0x08003342u;
    runtime_tick(_cyc_08003340);
    /* 08003342  08003342 T ands r2,r2,r0 */
    g_cpu.R[15] = 0x08003342u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003342 = 1u;
    _cyc_08003342 = 1u;
    uint32_t _rm_08003342 = g_cpu.R[0];
    uint32_t _op2_08003342;
    uint32_t _co_08003342;
    _op2_08003342 = _rm_08003342;
    _co_08003342 = cpsr_c();
    uint32_t _rn_08003342 = g_cpu.R[2];
    uint32_t _r_08003342;
    _r_08003342 = _rn_08003342 & _op2_08003342;
    arm_set_nzc_logic(_r_08003342, _co_08003342);
    g_cpu.R[2] = _r_08003342;
    g_cpu.R[15] = 0x08003344u;
    runtime_tick(_cyc_08003342);
    /* 08003344  08003344 T ldr r1,[r1] */
    g_cpu.R[15] = 0x08003344u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003344 = 1u;
    _cyc_08003344 = 2u;
    uint32_t _base_08003344 = g_cpu.R[1];
    uint32_t _off_08003344;
    _off_08003344 = 0x00000000u;
    uint32_t _ea_08003344 = _base_08003344 + _off_08003344;
    uint32_t _post_08003344 = _base_08003344 + _off_08003344;
    _cyc_08003344 += runtime_mem_cycles(_ea_08003344, 4u, 0u);
    uint32_t _v_08003344;
    { uint32_t _w = bus_read_u32(_ea_08003344 & ~3u); uint32_t _rot = (_ea_08003344 & 3u) * 8u; _v_08003344 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08003344;
    g_cpu.R[15] = 0x08003346u;
    runtime_tick(_cyc_08003344);
    /* 08003346  08003346 T adds r1,r1,r2 */
    g_cpu.R[15] = 0x08003346u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003346 = 1u;
    _cyc_08003346 = 1u;
    uint32_t _rm_08003346 = g_cpu.R[2];
    uint32_t _op2_08003346;
    uint32_t _co_08003346;
    _op2_08003346 = _rm_08003346;
    _co_08003346 = cpsr_c();
    uint32_t _rn_08003346 = g_cpu.R[1];
    uint32_t _r_08003346;
    _r_08003346 = _rn_08003346 + _op2_08003346;
    arm_set_nzcv_add(_rn_08003346, _op2_08003346, _r_08003346);
    g_cpu.R[1] = _r_08003346;
    g_cpu.R[15] = 0x08003348u;
    runtime_tick(_cyc_08003346);
    /* 08003348  08003348 T movs r0,r4,asr #3 */
    g_cpu.R[15] = 0x08003348u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003348 = 1u;
    _cyc_08003348 = 1u;
    uint32_t _rm_08003348 = g_cpu.R[4];
    uint32_t _op2_08003348;
    uint32_t _co_08003348;
    _op2_08003348 = (uint32_t)((int32_t)_rm_08003348 >> 3);
    _co_08003348 = (_rm_08003348 >> 2) & 1u;
    uint32_t _r_08003348;
    _r_08003348 = _op2_08003348;
    arm_set_nzc_logic(_r_08003348, _co_08003348);
    g_cpu.R[0] = _r_08003348;
    g_cpu.R[15] = 0x0800334Au;
    runtime_tick(_cyc_08003348);
    /* 0800334A  0800334a T movs r0,r0,lsl #5 */
    g_cpu.R[15] = 0x0800334Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800334A = 1u;
    _cyc_0800334A = 1u;
    uint32_t _rm_0800334A = g_cpu.R[0];
    uint32_t _op2_0800334A;
    uint32_t _co_0800334A;
    _op2_0800334A = _rm_0800334A << 5;
    _co_0800334A = (_rm_0800334A >> 27) & 1u;
    uint32_t _r_0800334A;
    _r_0800334A = _op2_0800334A;
    arm_set_nzc_logic(_r_0800334A, _co_0800334A);
    g_cpu.R[0] = _r_0800334A;
    g_cpu.R[15] = 0x0800334Cu;
    runtime_tick(_cyc_0800334A);
    /* 0800334C  0800334c T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0800334Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800334C = 1u;
    _cyc_0800334C = 1u;
    uint32_t _rm_0800334C = g_cpu.R[0];
    uint32_t _op2_0800334C;
    uint32_t _co_0800334C;
    _op2_0800334C = _rm_0800334C;
    _co_0800334C = cpsr_c();
    uint32_t _rn_0800334C = g_cpu.R[1];
    uint32_t _r_0800334C;
    _r_0800334C = _rn_0800334C + _op2_0800334C;
    arm_set_nzcv_add(_rn_0800334C, _op2_0800334C, _r_0800334C);
    g_cpu.R[1] = _r_0800334C;
    g_cpu.R[15] = 0x0800334Eu;
    runtime_tick(_cyc_0800334C);
    /* 0800334E  0800334e T add r3,r3,r12 */
    g_cpu.R[15] = 0x0800334Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800334E = 1u;
    _cyc_0800334E = 1u;
    uint32_t _rm_0800334E = g_cpu.R[12];
    uint32_t _op2_0800334E;
    uint32_t _co_0800334E;
    _op2_0800334E = _rm_0800334E;
    _co_0800334E = cpsr_c();
    uint32_t _rn_0800334E = g_cpu.R[3];
    uint32_t _r_0800334E;
    _r_0800334E = _rn_0800334E + _op2_0800334E;
    g_cpu.R[3] = _r_0800334E;
    g_cpu.R[15] = 0x08003350u;
    runtime_tick(_cyc_0800334E);
    /* 08003350  08003350 T ldrb r0,[r3,#0x3] */
    g_cpu.R[15] = 0x08003350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003350 = 1u;
    _cyc_08003350 = 2u;
    uint32_t _base_08003350 = g_cpu.R[3];
    uint32_t _off_08003350;
    _off_08003350 = 0x00000003u;
    uint32_t _ea_08003350 = _base_08003350 + _off_08003350;
    uint32_t _post_08003350 = _base_08003350 + _off_08003350;
    _cyc_08003350 += runtime_mem_cycles(_ea_08003350, 1u, 0u);
    uint32_t _v_08003350;
    _v_08003350 = bus_read_u8(_ea_08003350);
    g_cpu.R[0] = _v_08003350;
    g_cpu.R[15] = 0x08003352u;
    runtime_tick(_cyc_08003350);
    /* 08003352  08003352 T mov r2,r9 */
    g_cpu.R[15] = 0x08003352u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003352 = 1u;
    _cyc_08003352 = 1u;
    uint32_t _rm_08003352 = g_cpu.R[9];
    uint32_t _op2_08003352;
    uint32_t _co_08003352;
    _op2_08003352 = _rm_08003352;
    _co_08003352 = cpsr_c();
    uint32_t _r_08003352;
    _r_08003352 = _op2_08003352;
    g_cpu.R[2] = _r_08003352;
    g_cpu.R[15] = 0x08003354u;
    runtime_tick(_cyc_08003352);
    /* 08003354  08003354 T muls r2,r2,r0 */
    g_cpu.R[15] = 0x08003354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003354 = 1u;
    _cyc_08003354 = 1u;
    _cyc_08003354 += runtime_mul_cycles(g_cpu.R[2], 1u, 0u);
    uint32_t _r_08003354 = g_cpu.R[2] * g_cpu.R[0];
    g_cpu.R[2] = _r_08003354;
    arm_set_nz(_r_08003354);
    g_cpu.R[15] = 0x08003356u;
    runtime_tick(_cyc_08003354);
    /* 08003356  08003356 T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x08003356u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003356 = 1u;
    _cyc_08003356 = 1u;
    uint32_t _rn_08003356 = g_cpu.R[2];
    uint32_t _r_08003356;
    _r_08003356 = _rn_08003356 + 0x00000000u;
    arm_set_nzcv_add(_rn_08003356, 0x00000000u, _r_08003356);
    g_cpu.R[0] = _r_08003356;
    g_cpu.R[15] = 0x08003358u;
    runtime_tick(_cyc_08003356);
    /* 08003358  08003358 T movs r0,r0,lsl #5 */
    g_cpu.R[15] = 0x08003358u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003358 = 1u;
    _cyc_08003358 = 1u;
    uint32_t _rm_08003358 = g_cpu.R[0];
    uint32_t _op2_08003358;
    uint32_t _co_08003358;
    _op2_08003358 = _rm_08003358 << 5;
    _co_08003358 = (_rm_08003358 >> 27) & 1u;
    uint32_t _r_08003358;
    _r_08003358 = _op2_08003358;
    arm_set_nzc_logic(_r_08003358, _co_08003358);
    g_cpu.R[0] = _r_08003358;
    g_cpu.R[15] = 0x0800335Au;
    runtime_tick(_cyc_08003358);
    /* 0800335A  0800335a T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0800335Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800335A = 1u;
    _cyc_0800335A = 1u;
    uint32_t _rm_0800335A = g_cpu.R[0];
    uint32_t _op2_0800335A;
    uint32_t _co_0800335A;
    _op2_0800335A = _rm_0800335A;
    _co_0800335A = cpsr_c();
    uint32_t _rn_0800335A = g_cpu.R[1];
    uint32_t _r_0800335A;
    _r_0800335A = _rn_0800335A + _op2_0800335A;
    arm_set_nzcv_add(_rn_0800335A, _op2_0800335A, _r_0800335A);
    g_cpu.R[1] = _r_0800335A;
    g_cpu.R[15] = 0x0800335Cu;
    runtime_tick(_cyc_0800335A);
    /* 0800335C  0800335c T mov r0,r8 */
    g_cpu.R[15] = 0x0800335Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800335C = 1u;
    _cyc_0800335C = 1u;
    uint32_t _rm_0800335C = g_cpu.R[8];
    uint32_t _op2_0800335C;
    uint32_t _co_0800335C;
    _op2_0800335C = _rm_0800335C;
    _co_0800335C = cpsr_c();
    uint32_t _r_0800335C;
    _r_0800335C = _op2_0800335C;
    g_cpu.R[0] = _r_0800335C;
    g_cpu.R[15] = 0x0800335Eu;
    runtime_tick(_cyc_0800335C);
    /* 0800335E  0800335e T adds r3,r1,r0 */
    g_cpu.R[15] = 0x0800335Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800335E = 1u;
    _cyc_0800335E = 1u;
    uint32_t _rm_0800335E = g_cpu.R[0];
    uint32_t _op2_0800335E;
    uint32_t _co_0800335E;
    _op2_0800335E = _rm_0800335E;
    _co_0800335E = cpsr_c();
    uint32_t _rn_0800335E = g_cpu.R[1];
    uint32_t _r_0800335E;
    _r_0800335E = _rn_0800335E + _op2_0800335E;
    arm_set_nzcv_add(_rn_0800335E, _op2_0800335E, _r_0800335E);
    g_cpu.R[3] = _r_0800335E;
    g_cpu.R[15] = 0x08003360u;
    runtime_tick(_cyc_0800335E);
    /* 08003360  08003360 T movs r0,r5,lsl #2 */
    g_cpu.R[15] = 0x08003360u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003360 = 1u;
    _cyc_08003360 = 1u;
    uint32_t _rm_08003360 = g_cpu.R[5];
    uint32_t _op2_08003360;
    uint32_t _co_08003360;
    _op2_08003360 = _rm_08003360 << 2;
    _co_08003360 = (_rm_08003360 >> 30) & 1u;
    uint32_t _r_08003360;
    _r_08003360 = _op2_08003360;
    arm_set_nzc_logic(_r_08003360, _co_08003360);
    g_cpu.R[0] = _r_08003360;
    g_cpu.R[15] = 0x08003362u;
    runtime_tick(_cyc_08003360);
    /* 08003362  08003362 T mov r2,r10 */
    g_cpu.R[15] = 0x08003362u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003362 = 1u;
    _cyc_08003362 = 1u;
    uint32_t _rm_08003362 = g_cpu.R[10];
    uint32_t _op2_08003362;
    uint32_t _co_08003362;
    _op2_08003362 = _rm_08003362;
    _co_08003362 = cpsr_c();
    uint32_t _r_08003362;
    _r_08003362 = _op2_08003362;
    g_cpu.R[2] = _r_08003362;
    g_cpu.R[15] = 0x08003364u;
    runtime_tick(_cyc_08003362);
    /* 08003364  08003364 T movs r2,r2,lsr r0 */
    g_cpu.R[15] = 0x08003364u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003364 = 1u;
    _cyc_08003364 = 2u;
    uint32_t _rm_08003364 = g_cpu.R[2];
    uint32_t _op2_08003364;
    uint32_t _co_08003364;
    uint32_t _cnt_08003364 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_08003364 == 0)      { _op2_08003364 = _rm_08003364; _co_08003364 = cpsr_c(); }
    else if (_cnt_08003364 < 32) { _op2_08003364 = _rm_08003364 >> _cnt_08003364; _co_08003364 = (_rm_08003364 >> (_cnt_08003364 - 1u)) & 1u; }
    else if (_cnt_08003364 == 32){ _op2_08003364 = 0u; _co_08003364 = (_rm_08003364 >> 31) & 1u; }
    else                                { _op2_08003364 = 0u; _co_08003364 = 0u; }
    uint32_t _r_08003364;
    _r_08003364 = _op2_08003364;
    arm_set_nzc_logic(_r_08003364, _co_08003364);
    g_cpu.R[2] = _r_08003364;
    g_cpu.R[15] = 0x08003366u;
    runtime_tick(_cyc_08003364);
    /* 08003366  08003366 T movs r0,#0xf */
    g_cpu.R[15] = 0x08003366u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003366 = 1u;
    _cyc_08003366 = 1u;
    uint32_t _r_08003366;
    _r_08003366 = 0x0000000Fu;
    arm_set_nzc_logic(_r_08003366, cpsr_c());
    g_cpu.R[0] = _r_08003366;
    g_cpu.R[15] = 0x08003368u;
    runtime_tick(_cyc_08003366);
    /* 08003368  08003368 T ands r2,r2,r0 */
    g_cpu.R[15] = 0x08003368u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003368 = 1u;
    _cyc_08003368 = 1u;
    uint32_t _rm_08003368 = g_cpu.R[0];
    uint32_t _op2_08003368;
    uint32_t _co_08003368;
    _op2_08003368 = _rm_08003368;
    _co_08003368 = cpsr_c();
    uint32_t _rn_08003368 = g_cpu.R[2];
    uint32_t _r_08003368;
    _r_08003368 = _rn_08003368 & _op2_08003368;
    arm_set_nzc_logic(_r_08003368, _co_08003368);
    g_cpu.R[2] = _r_08003368;
    g_cpu.R[15] = 0x0800336Au;
    runtime_tick(_cyc_08003368);
    /* 0800336A  0800336a T cmps r2,#0x0 */
    g_cpu.R[15] = 0x0800336Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800336A = 1u;
    _cyc_0800336A = 1u;
    uint32_t _rn_0800336A = g_cpu.R[2];
    uint32_t _r_0800336A;
    _r_0800336A = _rn_0800336A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0800336A, 0x00000000u, _r_0800336A);
    g_cpu.R[15] = 0x0800336Cu;
    runtime_tick(_cyc_0800336A);
    /* 0800336C  0800336c T beq 0x08003382 */
    g_cpu.R[15] = 0x0800336Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800336C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0800336C = 3u;
        g_cpu.R[15] = 0x08003382u;
        runtime_tick(_cyc_0800336C);
        runtime_dispatch(0x08003382u);
        return;
    }
    g_cpu.R[15] = 0x0800336Eu;
    runtime_tick(_cyc_0800336C);
    /* 0800336E  0800336e T movs r0,#0x1 */
    g_cpu.R[15] = 0x0800336Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800336E = 1u;
    _cyc_0800336E = 1u;
    uint32_t _r_0800336E;
    _r_0800336E = 0x00000001u;
    arm_set_nzc_logic(_r_0800336E, cpsr_c());
    g_cpu.R[0] = _r_0800336E;
    g_cpu.R[15] = 0x08003370u;
    runtime_tick(_cyc_0800336E);
    /* 08003370  08003370 T ands r0,r0,r4 */
    g_cpu.R[15] = 0x08003370u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003370 = 1u;
    _cyc_08003370 = 1u;
    uint32_t _rm_08003370 = g_cpu.R[4];
    uint32_t _op2_08003370;
    uint32_t _co_08003370;
    _op2_08003370 = _rm_08003370;
    _co_08003370 = cpsr_c();
    uint32_t _rn_08003370 = g_cpu.R[0];
    uint32_t _r_08003370;
    _r_08003370 = _rn_08003370 & _op2_08003370;
    arm_set_nzc_logic(_r_08003370, _co_08003370);
    g_cpu.R[0] = _r_08003370;
    g_cpu.R[15] = 0x08003372u;
    runtime_tick(_cyc_08003370);
    /* 08003372  08003372 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08003372u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003372 = 1u;
    _cyc_08003372 = 1u;
    uint32_t _rm_08003372 = g_cpu.R[0];
    uint32_t _op2_08003372;
    uint32_t _co_08003372;
    _op2_08003372 = _rm_08003372 << 2;
    _co_08003372 = (_rm_08003372 >> 30) & 1u;
    uint32_t _r_08003372;
    _r_08003372 = _op2_08003372;
    arm_set_nzc_logic(_r_08003372, _co_08003372);
    g_cpu.R[0] = _r_08003372;
    g_cpu.R[15] = 0x08003374u;
    runtime_tick(_cyc_08003372);
    /* 08003374  08003374 T movs r2,r2,lsl r0 */
    g_cpu.R[15] = 0x08003374u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003374 = 1u;
    _cyc_08003374 = 2u;
    uint32_t _rm_08003374 = g_cpu.R[2];
    uint32_t _op2_08003374;
    uint32_t _co_08003374;
    uint32_t _cnt_08003374 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_08003374 == 0)      { _op2_08003374 = _rm_08003374; _co_08003374 = cpsr_c(); }
    else if (_cnt_08003374 < 32) { _op2_08003374 = _rm_08003374 << _cnt_08003374; _co_08003374 = (_rm_08003374 >> (32u - _cnt_08003374)) & 1u; }
    else if (_cnt_08003374 == 32){ _op2_08003374 = 0u; _co_08003374 = _rm_08003374 & 1u; }
    else                                { _op2_08003374 = 0u; _co_08003374 = 0u; }
    uint32_t _r_08003374;
    _r_08003374 = _op2_08003374;
    arm_set_nzc_logic(_r_08003374, _co_08003374);
    g_cpu.R[2] = _r_08003374;
    g_cpu.R[15] = 0x08003376u;
    runtime_tick(_cyc_08003374);
    /* 08003376  08003376 T movs r1,#0xf0 */
    g_cpu.R[15] = 0x08003376u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003376 = 1u;
    _cyc_08003376 = 1u;
    uint32_t _r_08003376;
    _r_08003376 = 0x000000F0u;
    arm_set_nzc_logic(_r_08003376, cpsr_c());
    g_cpu.R[1] = _r_08003376;
    g_cpu.R[15] = 0x08003378u;
    runtime_tick(_cyc_08003376);
    /* 08003378  08003378 T movs r1,r1,asr r0 */
    g_cpu.R[15] = 0x08003378u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003378 = 1u;
    _cyc_08003378 = 2u;
    uint32_t _rm_08003378 = g_cpu.R[1];
    uint32_t _op2_08003378;
    uint32_t _co_08003378;
    uint32_t _cnt_08003378 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_08003378 == 0)      { _op2_08003378 = _rm_08003378; _co_08003378 = cpsr_c(); }
    else if (_cnt_08003378 < 32) { _op2_08003378 = (uint32_t)((int32_t)_rm_08003378 >> _cnt_08003378); _co_08003378 = (_rm_08003378 >> (_cnt_08003378 - 1u)) & 1u; }
    else                                { _op2_08003378 = (_rm_08003378 & 0x80000000u) ? 0xFFFFFFFFu : 0u; _co_08003378 = (_rm_08003378 >> 31) & 1u; }
    uint32_t _r_08003378;
    _r_08003378 = _op2_08003378;
    arm_set_nzc_logic(_r_08003378, _co_08003378);
    g_cpu.R[1] = _r_08003378;
    g_cpu.R[15] = 0x0800337Au;
    runtime_tick(_cyc_08003378);
    /* 0800337A  0800337a T ldrb r0,[r3] */
    g_cpu.R[15] = 0x0800337Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800337A = 1u;
    _cyc_0800337A = 2u;
    uint32_t _base_0800337A = g_cpu.R[3];
    uint32_t _off_0800337A;
    _off_0800337A = 0x00000000u;
    uint32_t _ea_0800337A = _base_0800337A + _off_0800337A;
    uint32_t _post_0800337A = _base_0800337A + _off_0800337A;
    _cyc_0800337A += runtime_mem_cycles(_ea_0800337A, 1u, 0u);
    uint32_t _v_0800337A;
    _v_0800337A = bus_read_u8(_ea_0800337A);
    g_cpu.R[0] = _v_0800337A;
    g_cpu.R[15] = 0x0800337Cu;
    runtime_tick(_cyc_0800337A);
    /* 0800337C  0800337c T ands r1,r1,r0 */
    g_cpu.R[15] = 0x0800337Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800337C = 1u;
    _cyc_0800337C = 1u;
    uint32_t _rm_0800337C = g_cpu.R[0];
    uint32_t _op2_0800337C;
    uint32_t _co_0800337C;
    _op2_0800337C = _rm_0800337C;
    _co_0800337C = cpsr_c();
    uint32_t _rn_0800337C = g_cpu.R[1];
    uint32_t _r_0800337C;
    _r_0800337C = _rn_0800337C & _op2_0800337C;
    arm_set_nzc_logic(_r_0800337C, _co_0800337C);
    g_cpu.R[1] = _r_0800337C;
    g_cpu.R[15] = 0x0800337Eu;
    runtime_tick(_cyc_0800337C);
    /* 0800337E  0800337e T orrs r2,r2,r1 */
    g_cpu.R[15] = 0x0800337Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800337E = 1u;
    _cyc_0800337E = 1u;
    uint32_t _rm_0800337E = g_cpu.R[1];
    uint32_t _op2_0800337E;
    uint32_t _co_0800337E;
    _op2_0800337E = _rm_0800337E;
    _co_0800337E = cpsr_c();
    uint32_t _rn_0800337E = g_cpu.R[2];
    uint32_t _r_0800337E;
    _r_0800337E = _rn_0800337E | _op2_0800337E;
    arm_set_nzc_logic(_r_0800337E, _co_0800337E);
    g_cpu.R[2] = _r_0800337E;
    g_cpu.R[15] = 0x08003380u;
    runtime_tick(_cyc_0800337E);
    /* 08003380  08003380 T strb r2,[r3] */
    g_cpu.R[15] = 0x08003380u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003380 = 1u;
    _cyc_08003380 = 1u;
    uint32_t _base_08003380 = g_cpu.R[3];
    uint32_t _off_08003380;
    _off_08003380 = 0x00000000u;
    uint32_t _ea_08003380 = _base_08003380 + _off_08003380;
    uint32_t _post_08003380 = _base_08003380 + _off_08003380;
    _cyc_08003380 += runtime_mem_cycles(_ea_08003380, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08003380u, _ea_08003380, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08003380, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x08003382u;
    runtime_tick(_cyc_08003380);
    /* fall-through to 0x08003382 */
    g_cpu.R[15] = 0x08003382u;
    runtime_dispatch(0x08003382u);
    return;
}
