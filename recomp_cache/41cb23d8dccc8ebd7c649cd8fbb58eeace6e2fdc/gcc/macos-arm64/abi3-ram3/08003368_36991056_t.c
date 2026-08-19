// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003368 mode=thumb end=0x08003382
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

OVL_EXPORT void func_08003368(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003368u);
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
