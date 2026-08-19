// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08056EC8 mode=thumb end=0x08056EEC
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

OVL_EXPORT void func_08056EC8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08056EC8u);
    /* 08056EC8  08056ec8 T ldr r0,[r1,#0x8] */
    g_cpu.R[15] = 0x08056EC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EC8 = 1u;
    _cyc_08056EC8 = 2u;
    uint32_t _base_08056EC8 = g_cpu.R[1];
    uint32_t _off_08056EC8;
    _off_08056EC8 = 0x00000008u;
    uint32_t _ea_08056EC8 = _base_08056EC8 + _off_08056EC8;
    uint32_t _post_08056EC8 = _base_08056EC8 + _off_08056EC8;
    _cyc_08056EC8 += runtime_mem_cycles(_ea_08056EC8, 4u, 0u);
    uint32_t _v_08056EC8;
    { uint32_t _w = bus_read_u32(_ea_08056EC8 & ~3u); uint32_t _rot = (_ea_08056EC8 & 3u) * 8u; _v_08056EC8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08056EC8;
    g_cpu.R[15] = 0x08056ECAu;
    runtime_tick(_cyc_08056EC8);
    /* 08056ECA  08056eca T adds r2,r2,r5 */
    g_cpu.R[15] = 0x08056ECAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ECA = 1u;
    _cyc_08056ECA = 1u;
    uint32_t _rm_08056ECA = g_cpu.R[5];
    uint32_t _op2_08056ECA;
    uint32_t _co_08056ECA;
    _op2_08056ECA = _rm_08056ECA;
    _co_08056ECA = cpsr_c();
    uint32_t _rn_08056ECA = g_cpu.R[2];
    uint32_t _r_08056ECA;
    _r_08056ECA = _rn_08056ECA + _op2_08056ECA;
    arm_set_nzcv_add(_rn_08056ECA, _op2_08056ECA, _r_08056ECA);
    g_cpu.R[2] = _r_08056ECA;
    g_cpu.R[15] = 0x08056ECCu;
    runtime_tick(_cyc_08056ECA);
    /* 08056ECC  08056ecc T subs r3,r3,r5 */
    g_cpu.R[15] = 0x08056ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ECC = 1u;
    _cyc_08056ECC = 1u;
    uint32_t _rm_08056ECC = g_cpu.R[5];
    uint32_t _op2_08056ECC;
    uint32_t _co_08056ECC;
    _op2_08056ECC = _rm_08056ECC;
    _co_08056ECC = cpsr_c();
    uint32_t _rn_08056ECC = g_cpu.R[3];
    uint32_t _r_08056ECC;
    _r_08056ECC = _rn_08056ECC - _op2_08056ECC;
    arm_set_nzcv_sub(_rn_08056ECC, _op2_08056ECC, _r_08056ECC);
    g_cpu.R[3] = _r_08056ECC;
    g_cpu.R[15] = 0x08056ECEu;
    runtime_tick(_cyc_08056ECC);
    /* 08056ECE  08056ece T cmps r3,r5 */
    g_cpu.R[15] = 0x08056ECEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ECE = 1u;
    _cyc_08056ECE = 1u;
    uint32_t _rm_08056ECE = g_cpu.R[5];
    uint32_t _op2_08056ECE;
    uint32_t _co_08056ECE;
    _op2_08056ECE = _rm_08056ECE;
    _co_08056ECE = cpsr_c();
    uint32_t _rn_08056ECE = g_cpu.R[3];
    uint32_t _r_08056ECE;
    _r_08056ECE = _rn_08056ECE - _op2_08056ECE;
    arm_set_nzcv_sub(_rn_08056ECE, _op2_08056ECE, _r_08056ECE);
    g_cpu.R[15] = 0x08056ED0u;
    runtime_tick(_cyc_08056ECE);
    /* 08056ED0  08056ed0 T bhi 0x08056ebe */
    g_cpu.R[15] = 0x08056ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ED0 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08056ED0 = 3u;
        g_cpu.R[15] = 0x08056EBEu;
        runtime_tick(_cyc_08056ED0);
        runtime_dispatch(0x08056EBEu);
        return;
    }
    g_cpu.R[15] = 0x08056ED2u;
    runtime_tick(_cyc_08056ED0);
    /* 08056ED2  08056ed2 T strh r6,[r4] */
    g_cpu.R[15] = 0x08056ED2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ED2 = 1u;
    _cyc_08056ED2 = 1u;
    uint32_t _base_08056ED2 = g_cpu.R[4];
    uint32_t _off_08056ED2;
    _off_08056ED2 = 0x00000000u;
    uint32_t _ea_08056ED2 = _base_08056ED2 + _off_08056ED2;
    uint32_t _post_08056ED2 = _base_08056ED2 + _off_08056ED2;
    _cyc_08056ED2 += runtime_mem_cycles(_ea_08056ED2, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08056ED2u, _ea_08056ED2 & ~1u, (uint32_t)(g_cpu.R[6] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08056ED2 & ~1u, (uint16_t)(g_cpu.R[6] & 0xFFFFu));
    g_cpu.R[15] = 0x08056ED4u;
    runtime_tick(_cyc_08056ED2);
    /* 08056ED4  08056ed4 T mov r0,r13 */
    g_cpu.R[15] = 0x08056ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ED4 = 1u;
    _cyc_08056ED4 = 1u;
    uint32_t _rm_08056ED4 = g_cpu.R[13];
    uint32_t _op2_08056ED4;
    uint32_t _co_08056ED4;
    _op2_08056ED4 = _rm_08056ED4;
    _co_08056ED4 = cpsr_c();
    uint32_t _r_08056ED4;
    _r_08056ED4 = _op2_08056ED4;
    g_cpu.R[0] = _r_08056ED4;
    g_cpu.R[15] = 0x08056ED6u;
    runtime_tick(_cyc_08056ED4);
    /* 08056ED6  08056ed6 T str r0,[r1] */
    g_cpu.R[15] = 0x08056ED6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ED6 = 1u;
    _cyc_08056ED6 = 1u;
    uint32_t _base_08056ED6 = g_cpu.R[1];
    uint32_t _off_08056ED6;
    _off_08056ED6 = 0x00000000u;
    uint32_t _ea_08056ED6 = _base_08056ED6 + _off_08056ED6;
    uint32_t _post_08056ED6 = _base_08056ED6 + _off_08056ED6;
    _cyc_08056ED6 += runtime_mem_cycles(_ea_08056ED6, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08056ED6u, _ea_08056ED6 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08056ED6 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08056ED8u;
    runtime_tick(_cyc_08056ED6);
    /* 08056ED8  08056ed8 T str r2,[r1,#0x4] */
    g_cpu.R[15] = 0x08056ED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056ED8 = 1u;
    _cyc_08056ED8 = 1u;
    uint32_t _base_08056ED8 = g_cpu.R[1];
    uint32_t _off_08056ED8;
    _off_08056ED8 = 0x00000004u;
    uint32_t _ea_08056ED8 = _base_08056ED8 + _off_08056ED8;
    uint32_t _post_08056ED8 = _base_08056ED8 + _off_08056ED8;
    _cyc_08056ED8 += runtime_mem_cycles(_ea_08056ED8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08056ED8u, _ea_08056ED8 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08056ED8 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08056EDAu;
    runtime_tick(_cyc_08056ED8);
    /* 08056EDA  08056eda T movs r0,r3,lsr #1 */
    g_cpu.R[15] = 0x08056EDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EDA = 1u;
    _cyc_08056EDA = 1u;
    uint32_t _rm_08056EDA = g_cpu.R[3];
    uint32_t _op2_08056EDA;
    uint32_t _co_08056EDA;
    _op2_08056EDA = _rm_08056EDA >> 1;
    _co_08056EDA = (_rm_08056EDA >> 0) & 1u;
    uint32_t _r_08056EDA;
    _r_08056EDA = _op2_08056EDA;
    arm_set_nzc_logic(_r_08056EDA, _co_08056EDA);
    g_cpu.R[0] = _r_08056EDA;
    g_cpu.R[15] = 0x08056EDCu;
    runtime_tick(_cyc_08056EDA);
    /* 08056EDC  08056edc T mov r2,r12 */
    g_cpu.R[15] = 0x08056EDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EDC = 1u;
    _cyc_08056EDC = 1u;
    uint32_t _rm_08056EDC = g_cpu.R[12];
    uint32_t _op2_08056EDC;
    uint32_t _co_08056EDC;
    _op2_08056EDC = _rm_08056EDC;
    _co_08056EDC = cpsr_c();
    uint32_t _r_08056EDC;
    _r_08056EDC = _op2_08056EDC;
    g_cpu.R[2] = _r_08056EDC;
    g_cpu.R[15] = 0x08056EDEu;
    runtime_tick(_cyc_08056EDC);
    /* 08056EDE  08056ede T orrs r0,r0,r2 */
    g_cpu.R[15] = 0x08056EDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EDE = 1u;
    _cyc_08056EDE = 1u;
    uint32_t _rm_08056EDE = g_cpu.R[2];
    uint32_t _op2_08056EDE;
    uint32_t _co_08056EDE;
    _op2_08056EDE = _rm_08056EDE;
    _co_08056EDE = cpsr_c();
    uint32_t _rn_08056EDE = g_cpu.R[0];
    uint32_t _r_08056EDE;
    _r_08056EDE = _rn_08056EDE | _op2_08056EDE;
    arm_set_nzc_logic(_r_08056EDE, _co_08056EDE);
    g_cpu.R[0] = _r_08056EDE;
    g_cpu.R[15] = 0x08056EE0u;
    runtime_tick(_cyc_08056EDE);
    /* 08056EE0  08056ee0 T str r0,[r1,#0x8] */
    g_cpu.R[15] = 0x08056EE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EE0 = 1u;
    _cyc_08056EE0 = 1u;
    uint32_t _base_08056EE0 = g_cpu.R[1];
    uint32_t _off_08056EE0;
    _off_08056EE0 = 0x00000008u;
    uint32_t _ea_08056EE0 = _base_08056EE0 + _off_08056EE0;
    uint32_t _post_08056EE0 = _base_08056EE0 + _off_08056EE0;
    _cyc_08056EE0 += runtime_mem_cycles(_ea_08056EE0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08056EE0u, _ea_08056EE0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08056EE0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08056EE2u;
    runtime_tick(_cyc_08056EE0);
    /* 08056EE2  08056ee2 T ldr r0,[r1,#0x8] */
    g_cpu.R[15] = 0x08056EE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EE2 = 1u;
    _cyc_08056EE2 = 2u;
    uint32_t _base_08056EE2 = g_cpu.R[1];
    uint32_t _off_08056EE2;
    _off_08056EE2 = 0x00000008u;
    uint32_t _ea_08056EE2 = _base_08056EE2 + _off_08056EE2;
    uint32_t _post_08056EE2 = _base_08056EE2 + _off_08056EE2;
    _cyc_08056EE2 += runtime_mem_cycles(_ea_08056EE2, 4u, 0u);
    uint32_t _v_08056EE2;
    { uint32_t _w = bus_read_u32(_ea_08056EE2 & ~3u); uint32_t _rot = (_ea_08056EE2 & 3u) * 8u; _v_08056EE2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08056EE2;
    g_cpu.R[15] = 0x08056EE4u;
    runtime_tick(_cyc_08056EE2);
    /* 08056EE4  08056ee4 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08056EE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EE4 = 1u;
    _cyc_08056EE4 = 1u;
    uint32_t _r_08056EE4;
    _r_08056EE4 = 0x00000000u;
    arm_set_nzc_logic(_r_08056EE4, cpsr_c());
    g_cpu.R[0] = _r_08056EE4;
    g_cpu.R[15] = 0x08056EE6u;
    runtime_tick(_cyc_08056EE4);
    /* 08056EE6  08056ee6 T movs r1,#0x80 */
    g_cpu.R[15] = 0x08056EE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EE6 = 1u;
    _cyc_08056EE6 = 1u;
    uint32_t _r_08056EE6;
    _r_08056EE6 = 0x00000080u;
    arm_set_nzc_logic(_r_08056EE6, cpsr_c());
    g_cpu.R[1] = _r_08056EE6;
    g_cpu.R[15] = 0x08056EE8u;
    runtime_tick(_cyc_08056EE6);
    /* 08056EE8  08056ee8 T bl.hi 0x08006eec */
    g_cpu.R[15] = 0x08056EE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EE8 = 1u;
    _cyc_08056EE8 = 1u;
    g_cpu.R[14] = 0x08006EECu;
    g_cpu.R[15] = 0x08056EEAu;
    runtime_tick(_cyc_08056EE8);
    /* 08056EEA  08056eea T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08056EEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08056EEA = 1u;
    _cyc_08056EEA = 3u;
    uint32_t _blt_08056EEA = (g_cpu.R[14] + 0x000003FCu) & ~1u;
    g_cpu.R[14] = 0x08056EEDu;
    g_cpu.R[15] = _blt_08056EEA;
    runtime_call_push_return(0x08056EECu);
    runtime_tick(_cyc_08056EEA);
    _cyc_08056EEA = 0u;
    runtime_dispatch(_blt_08056EEA);
    if (g_cpu.R[15] != 0x08056EECu) { runtime_call_cancel_return(0x08056EECu); return; }
    g_cpu.R[15] = 0x08056EECu;
    runtime_tick(_cyc_08056EEA);
    /* fall-through to 0x08056EEC */
    g_cpu.R[15] = 0x08056EECu;
    runtime_dispatch(0x08056EECu);
    return;
}
