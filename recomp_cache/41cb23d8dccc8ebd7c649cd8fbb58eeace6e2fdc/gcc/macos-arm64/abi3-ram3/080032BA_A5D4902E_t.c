// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080032BA mode=thumb end=0x080032EA
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

OVL_EXPORT void func_080032BA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080032BAu);
    /* 080032BA  080032ba T mov r2,r9 */
    g_cpu.R[15] = 0x080032BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032BA = 1u;
    _cyc_080032BA = 1u;
    uint32_t _rm_080032BA = g_cpu.R[9];
    uint32_t _op2_080032BA;
    uint32_t _co_080032BA;
    _op2_080032BA = _rm_080032BA;
    _co_080032BA = cpsr_c();
    uint32_t _r_080032BA;
    _r_080032BA = _op2_080032BA;
    g_cpu.R[2] = _r_080032BA;
    g_cpu.R[15] = 0x080032BCu;
    runtime_tick(_cyc_080032BA);
    /* 080032BC  080032bc T muls r2,r2,r0 */
    g_cpu.R[15] = 0x080032BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032BC = 1u;
    _cyc_080032BC = 1u;
    _cyc_080032BC += runtime_mul_cycles(g_cpu.R[2], 1u, 0u);
    uint32_t _r_080032BC = g_cpu.R[2] * g_cpu.R[0];
    g_cpu.R[2] = _r_080032BC;
    arm_set_nz(_r_080032BC);
    g_cpu.R[15] = 0x080032BEu;
    runtime_tick(_cyc_080032BC);
    /* 080032BE  080032be T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x080032BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032BE = 1u;
    _cyc_080032BE = 1u;
    uint32_t _rn_080032BE = g_cpu.R[2];
    uint32_t _r_080032BE;
    _r_080032BE = _rn_080032BE + 0x00000000u;
    arm_set_nzcv_add(_rn_080032BE, 0x00000000u, _r_080032BE);
    g_cpu.R[0] = _r_080032BE;
    g_cpu.R[15] = 0x080032C0u;
    runtime_tick(_cyc_080032BE);
    /* 080032C0  080032c0 T movs r0,r0,lsl #5 */
    g_cpu.R[15] = 0x080032C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032C0 = 1u;
    _cyc_080032C0 = 1u;
    uint32_t _rm_080032C0 = g_cpu.R[0];
    uint32_t _op2_080032C0;
    uint32_t _co_080032C0;
    _op2_080032C0 = _rm_080032C0 << 5;
    _co_080032C0 = (_rm_080032C0 >> 27) & 1u;
    uint32_t _r_080032C0;
    _r_080032C0 = _op2_080032C0;
    arm_set_nzc_logic(_r_080032C0, _co_080032C0);
    g_cpu.R[0] = _r_080032C0;
    g_cpu.R[15] = 0x080032C2u;
    runtime_tick(_cyc_080032C0);
    /* 080032C2  080032c2 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x080032C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032C2 = 1u;
    _cyc_080032C2 = 1u;
    uint32_t _rm_080032C2 = g_cpu.R[0];
    uint32_t _op2_080032C2;
    uint32_t _co_080032C2;
    _op2_080032C2 = _rm_080032C2;
    _co_080032C2 = cpsr_c();
    uint32_t _rn_080032C2 = g_cpu.R[1];
    uint32_t _r_080032C2;
    _r_080032C2 = _rn_080032C2 + _op2_080032C2;
    arm_set_nzcv_add(_rn_080032C2, _op2_080032C2, _r_080032C2);
    g_cpu.R[1] = _r_080032C2;
    g_cpu.R[15] = 0x080032C4u;
    runtime_tick(_cyc_080032C2);
    /* 080032C4  080032c4 T mov r0,r8 */
    g_cpu.R[15] = 0x080032C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032C4 = 1u;
    _cyc_080032C4 = 1u;
    uint32_t _rm_080032C4 = g_cpu.R[8];
    uint32_t _op2_080032C4;
    uint32_t _co_080032C4;
    _op2_080032C4 = _rm_080032C4;
    _co_080032C4 = cpsr_c();
    uint32_t _r_080032C4;
    _r_080032C4 = _op2_080032C4;
    g_cpu.R[0] = _r_080032C4;
    g_cpu.R[15] = 0x080032C6u;
    runtime_tick(_cyc_080032C4);
    /* 080032C6  080032c6 T adds r3,r1,r0 */
    g_cpu.R[15] = 0x080032C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032C6 = 1u;
    _cyc_080032C6 = 1u;
    uint32_t _rm_080032C6 = g_cpu.R[0];
    uint32_t _op2_080032C6;
    uint32_t _co_080032C6;
    _op2_080032C6 = _rm_080032C6;
    _co_080032C6 = cpsr_c();
    uint32_t _rn_080032C6 = g_cpu.R[1];
    uint32_t _r_080032C6;
    _r_080032C6 = _rn_080032C6 + _op2_080032C6;
    arm_set_nzcv_add(_rn_080032C6, _op2_080032C6, _r_080032C6);
    g_cpu.R[3] = _r_080032C6;
    g_cpu.R[15] = 0x080032C8u;
    runtime_tick(_cyc_080032C6);
    /* 080032C8  080032c8 T movs r0,r5,lsl #2 */
    g_cpu.R[15] = 0x080032C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032C8 = 1u;
    _cyc_080032C8 = 1u;
    uint32_t _rm_080032C8 = g_cpu.R[5];
    uint32_t _op2_080032C8;
    uint32_t _co_080032C8;
    _op2_080032C8 = _rm_080032C8 << 2;
    _co_080032C8 = (_rm_080032C8 >> 30) & 1u;
    uint32_t _r_080032C8;
    _r_080032C8 = _op2_080032C8;
    arm_set_nzc_logic(_r_080032C8, _co_080032C8);
    g_cpu.R[0] = _r_080032C8;
    g_cpu.R[15] = 0x080032CAu;
    runtime_tick(_cyc_080032C8);
    /* 080032CA  080032ca T mov r2,r10 */
    g_cpu.R[15] = 0x080032CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032CA = 1u;
    _cyc_080032CA = 1u;
    uint32_t _rm_080032CA = g_cpu.R[10];
    uint32_t _op2_080032CA;
    uint32_t _co_080032CA;
    _op2_080032CA = _rm_080032CA;
    _co_080032CA = cpsr_c();
    uint32_t _r_080032CA;
    _r_080032CA = _op2_080032CA;
    g_cpu.R[2] = _r_080032CA;
    g_cpu.R[15] = 0x080032CCu;
    runtime_tick(_cyc_080032CA);
    /* 080032CC  080032cc T movs r2,r2,lsr r0 */
    g_cpu.R[15] = 0x080032CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032CC = 1u;
    _cyc_080032CC = 2u;
    uint32_t _rm_080032CC = g_cpu.R[2];
    uint32_t _op2_080032CC;
    uint32_t _co_080032CC;
    uint32_t _cnt_080032CC = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_080032CC == 0)      { _op2_080032CC = _rm_080032CC; _co_080032CC = cpsr_c(); }
    else if (_cnt_080032CC < 32) { _op2_080032CC = _rm_080032CC >> _cnt_080032CC; _co_080032CC = (_rm_080032CC >> (_cnt_080032CC - 1u)) & 1u; }
    else if (_cnt_080032CC == 32){ _op2_080032CC = 0u; _co_080032CC = (_rm_080032CC >> 31) & 1u; }
    else                                { _op2_080032CC = 0u; _co_080032CC = 0u; }
    uint32_t _r_080032CC;
    _r_080032CC = _op2_080032CC;
    arm_set_nzc_logic(_r_080032CC, _co_080032CC);
    g_cpu.R[2] = _r_080032CC;
    g_cpu.R[15] = 0x080032CEu;
    runtime_tick(_cyc_080032CC);
    /* 080032CE  080032ce T movs r0,#0xf */
    g_cpu.R[15] = 0x080032CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032CE = 1u;
    _cyc_080032CE = 1u;
    uint32_t _r_080032CE;
    _r_080032CE = 0x0000000Fu;
    arm_set_nzc_logic(_r_080032CE, cpsr_c());
    g_cpu.R[0] = _r_080032CE;
    g_cpu.R[15] = 0x080032D0u;
    runtime_tick(_cyc_080032CE);
    /* 080032D0  080032d0 T ands r2,r2,r0 */
    g_cpu.R[15] = 0x080032D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032D0 = 1u;
    _cyc_080032D0 = 1u;
    uint32_t _rm_080032D0 = g_cpu.R[0];
    uint32_t _op2_080032D0;
    uint32_t _co_080032D0;
    _op2_080032D0 = _rm_080032D0;
    _co_080032D0 = cpsr_c();
    uint32_t _rn_080032D0 = g_cpu.R[2];
    uint32_t _r_080032D0;
    _r_080032D0 = _rn_080032D0 & _op2_080032D0;
    arm_set_nzc_logic(_r_080032D0, _co_080032D0);
    g_cpu.R[2] = _r_080032D0;
    g_cpu.R[15] = 0x080032D2u;
    runtime_tick(_cyc_080032D0);
    /* 080032D2  080032d2 T cmps r2,#0x0 */
    g_cpu.R[15] = 0x080032D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032D2 = 1u;
    _cyc_080032D2 = 1u;
    uint32_t _rn_080032D2 = g_cpu.R[2];
    uint32_t _r_080032D2;
    _r_080032D2 = _rn_080032D2 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080032D2, 0x00000000u, _r_080032D2);
    g_cpu.R[15] = 0x080032D4u;
    runtime_tick(_cyc_080032D2);
    /* 080032D4  080032d4 T beq 0x080032ea */
    g_cpu.R[15] = 0x080032D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032D4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080032D4 = 3u;
        g_cpu.R[15] = 0x080032EAu;
        runtime_tick(_cyc_080032D4);
        runtime_dispatch(0x080032EAu);
        return;
    }
    g_cpu.R[15] = 0x080032D6u;
    runtime_tick(_cyc_080032D4);
    /* 080032D6  080032d6 T movs r0,#0x1 */
    g_cpu.R[15] = 0x080032D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032D6 = 1u;
    _cyc_080032D6 = 1u;
    uint32_t _r_080032D6;
    _r_080032D6 = 0x00000001u;
    arm_set_nzc_logic(_r_080032D6, cpsr_c());
    g_cpu.R[0] = _r_080032D6;
    g_cpu.R[15] = 0x080032D8u;
    runtime_tick(_cyc_080032D6);
    /* 080032D8  080032d8 T ands r0,r0,r4 */
    g_cpu.R[15] = 0x080032D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032D8 = 1u;
    _cyc_080032D8 = 1u;
    uint32_t _rm_080032D8 = g_cpu.R[4];
    uint32_t _op2_080032D8;
    uint32_t _co_080032D8;
    _op2_080032D8 = _rm_080032D8;
    _co_080032D8 = cpsr_c();
    uint32_t _rn_080032D8 = g_cpu.R[0];
    uint32_t _r_080032D8;
    _r_080032D8 = _rn_080032D8 & _op2_080032D8;
    arm_set_nzc_logic(_r_080032D8, _co_080032D8);
    g_cpu.R[0] = _r_080032D8;
    g_cpu.R[15] = 0x080032DAu;
    runtime_tick(_cyc_080032D8);
    /* 080032DA  080032da T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x080032DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032DA = 1u;
    _cyc_080032DA = 1u;
    uint32_t _rm_080032DA = g_cpu.R[0];
    uint32_t _op2_080032DA;
    uint32_t _co_080032DA;
    _op2_080032DA = _rm_080032DA << 2;
    _co_080032DA = (_rm_080032DA >> 30) & 1u;
    uint32_t _r_080032DA;
    _r_080032DA = _op2_080032DA;
    arm_set_nzc_logic(_r_080032DA, _co_080032DA);
    g_cpu.R[0] = _r_080032DA;
    g_cpu.R[15] = 0x080032DCu;
    runtime_tick(_cyc_080032DA);
    /* 080032DC  080032dc T movs r2,r2,lsl r0 */
    g_cpu.R[15] = 0x080032DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032DC = 1u;
    _cyc_080032DC = 2u;
    uint32_t _rm_080032DC = g_cpu.R[2];
    uint32_t _op2_080032DC;
    uint32_t _co_080032DC;
    uint32_t _cnt_080032DC = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_080032DC == 0)      { _op2_080032DC = _rm_080032DC; _co_080032DC = cpsr_c(); }
    else if (_cnt_080032DC < 32) { _op2_080032DC = _rm_080032DC << _cnt_080032DC; _co_080032DC = (_rm_080032DC >> (32u - _cnt_080032DC)) & 1u; }
    else if (_cnt_080032DC == 32){ _op2_080032DC = 0u; _co_080032DC = _rm_080032DC & 1u; }
    else                                { _op2_080032DC = 0u; _co_080032DC = 0u; }
    uint32_t _r_080032DC;
    _r_080032DC = _op2_080032DC;
    arm_set_nzc_logic(_r_080032DC, _co_080032DC);
    g_cpu.R[2] = _r_080032DC;
    g_cpu.R[15] = 0x080032DEu;
    runtime_tick(_cyc_080032DC);
    /* 080032DE  080032de T movs r1,#0xf0 */
    g_cpu.R[15] = 0x080032DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032DE = 1u;
    _cyc_080032DE = 1u;
    uint32_t _r_080032DE;
    _r_080032DE = 0x000000F0u;
    arm_set_nzc_logic(_r_080032DE, cpsr_c());
    g_cpu.R[1] = _r_080032DE;
    g_cpu.R[15] = 0x080032E0u;
    runtime_tick(_cyc_080032DE);
    /* 080032E0  080032e0 T movs r1,r1,asr r0 */
    g_cpu.R[15] = 0x080032E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E0 = 1u;
    _cyc_080032E0 = 2u;
    uint32_t _rm_080032E0 = g_cpu.R[1];
    uint32_t _op2_080032E0;
    uint32_t _co_080032E0;
    uint32_t _cnt_080032E0 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_080032E0 == 0)      { _op2_080032E0 = _rm_080032E0; _co_080032E0 = cpsr_c(); }
    else if (_cnt_080032E0 < 32) { _op2_080032E0 = (uint32_t)((int32_t)_rm_080032E0 >> _cnt_080032E0); _co_080032E0 = (_rm_080032E0 >> (_cnt_080032E0 - 1u)) & 1u; }
    else                                { _op2_080032E0 = (_rm_080032E0 & 0x80000000u) ? 0xFFFFFFFFu : 0u; _co_080032E0 = (_rm_080032E0 >> 31) & 1u; }
    uint32_t _r_080032E0;
    _r_080032E0 = _op2_080032E0;
    arm_set_nzc_logic(_r_080032E0, _co_080032E0);
    g_cpu.R[1] = _r_080032E0;
    g_cpu.R[15] = 0x080032E2u;
    runtime_tick(_cyc_080032E0);
    /* 080032E2  080032e2 T ldrb r0,[r3] */
    g_cpu.R[15] = 0x080032E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E2 = 1u;
    _cyc_080032E2 = 2u;
    uint32_t _base_080032E2 = g_cpu.R[3];
    uint32_t _off_080032E2;
    _off_080032E2 = 0x00000000u;
    uint32_t _ea_080032E2 = _base_080032E2 + _off_080032E2;
    uint32_t _post_080032E2 = _base_080032E2 + _off_080032E2;
    _cyc_080032E2 += runtime_mem_cycles(_ea_080032E2, 1u, 0u);
    uint32_t _v_080032E2;
    _v_080032E2 = bus_read_u8(_ea_080032E2);
    g_cpu.R[0] = _v_080032E2;
    g_cpu.R[15] = 0x080032E4u;
    runtime_tick(_cyc_080032E2);
    /* 080032E4  080032e4 T ands r1,r1,r0 */
    g_cpu.R[15] = 0x080032E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E4 = 1u;
    _cyc_080032E4 = 1u;
    uint32_t _rm_080032E4 = g_cpu.R[0];
    uint32_t _op2_080032E4;
    uint32_t _co_080032E4;
    _op2_080032E4 = _rm_080032E4;
    _co_080032E4 = cpsr_c();
    uint32_t _rn_080032E4 = g_cpu.R[1];
    uint32_t _r_080032E4;
    _r_080032E4 = _rn_080032E4 & _op2_080032E4;
    arm_set_nzc_logic(_r_080032E4, _co_080032E4);
    g_cpu.R[1] = _r_080032E4;
    g_cpu.R[15] = 0x080032E6u;
    runtime_tick(_cyc_080032E4);
    /* 080032E6  080032e6 T orrs r2,r2,r1 */
    g_cpu.R[15] = 0x080032E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E6 = 1u;
    _cyc_080032E6 = 1u;
    uint32_t _rm_080032E6 = g_cpu.R[1];
    uint32_t _op2_080032E6;
    uint32_t _co_080032E6;
    _op2_080032E6 = _rm_080032E6;
    _co_080032E6 = cpsr_c();
    uint32_t _rn_080032E6 = g_cpu.R[2];
    uint32_t _r_080032E6;
    _r_080032E6 = _rn_080032E6 | _op2_080032E6;
    arm_set_nzc_logic(_r_080032E6, _co_080032E6);
    g_cpu.R[2] = _r_080032E6;
    g_cpu.R[15] = 0x080032E8u;
    runtime_tick(_cyc_080032E6);
    /* 080032E8  080032e8 T strb r2,[r3] */
    g_cpu.R[15] = 0x080032E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E8 = 1u;
    _cyc_080032E8 = 1u;
    uint32_t _base_080032E8 = g_cpu.R[3];
    uint32_t _off_080032E8;
    _off_080032E8 = 0x00000000u;
    uint32_t _ea_080032E8 = _base_080032E8 + _off_080032E8;
    uint32_t _post_080032E8 = _base_080032E8 + _off_080032E8;
    _cyc_080032E8 += runtime_mem_cycles(_ea_080032E8, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080032E8u, _ea_080032E8, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_080032E8, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x080032EAu;
    runtime_tick(_cyc_080032E8);
    /* fall-through to 0x080032EA */
    g_cpu.R[15] = 0x080032EAu;
    runtime_dispatch(0x080032EAu);
    return;
}
