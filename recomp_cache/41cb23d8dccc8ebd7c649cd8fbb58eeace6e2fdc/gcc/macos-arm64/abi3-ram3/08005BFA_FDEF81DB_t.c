// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08005BFA mode=thumb end=0x08005C1C
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

OVL_EXPORT void func_08005BFA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08005BFAu);
    /* 08005BFA  08005bfa T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08005BFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BFA = 1u;
    _cyc_08005BFA = 1u;
    uint32_t _rn_08005BFA = g_cpu.R[0];
    uint32_t _r_08005BFA;
    _r_08005BFA = _rn_08005BFA - 0x00000000u;
    arm_set_nzcv_sub(_rn_08005BFA, 0x00000000u, _r_08005BFA);
    g_cpu.R[15] = 0x08005BFCu;
    runtime_tick(_cyc_08005BFA);
    /* 08005BFC  08005bfc T beq 0x08005c28 */
    g_cpu.R[15] = 0x08005BFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BFC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08005BFC = 3u;
        g_cpu.R[15] = 0x08005C28u;
        runtime_tick(_cyc_08005BFC);
        runtime_dispatch(0x08005C28u);
        return;
    }
    g_cpu.R[15] = 0x08005BFEu;
    runtime_tick(_cyc_08005BFC);
    /* 08005BFE  08005bfe T ldr r1,[r15,#0x24] */
    g_cpu.R[15] = 0x08005BFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BFE = 1u;
    _cyc_08005BFE = 2u;
    uint32_t _base_08005BFE = 0x08005C02u & ~3u;
    uint32_t _off_08005BFE;
    _off_08005BFE = 0x00000024u;
    uint32_t _ea_08005BFE = _base_08005BFE + _off_08005BFE;
    uint32_t _post_08005BFE = _base_08005BFE + _off_08005BFE;
    _cyc_08005BFE += runtime_mem_cycles(_ea_08005BFE, 4u, 0u);
    uint32_t _v_08005BFE;
    { uint32_t _w = bus_read_u32(_ea_08005BFE & ~3u); uint32_t _rot = (_ea_08005BFE & 3u) * 8u; _v_08005BFE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08005BFE;
    g_cpu.R[15] = 0x08005C00u;
    runtime_tick(_cyc_08005BFE);
    /* 08005C00  08005c00 T adds r1,r1,#0x80 */
    g_cpu.R[15] = 0x08005C00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C00 = 1u;
    _cyc_08005C00 = 1u;
    uint32_t _rn_08005C00 = g_cpu.R[1];
    uint32_t _r_08005C00;
    _r_08005C00 = _rn_08005C00 + 0x00000080u;
    arm_set_nzcv_add(_rn_08005C00, 0x00000080u, _r_08005C00);
    g_cpu.R[1] = _r_08005C00;
    g_cpu.R[15] = 0x08005C02u;
    runtime_tick(_cyc_08005C00);
    /* 08005C02  08005c02 T ldrb r0,[r1] */
    g_cpu.R[15] = 0x08005C02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C02 = 1u;
    _cyc_08005C02 = 2u;
    uint32_t _base_08005C02 = g_cpu.R[1];
    uint32_t _off_08005C02;
    _off_08005C02 = 0x00000000u;
    uint32_t _ea_08005C02 = _base_08005C02 + _off_08005C02;
    uint32_t _post_08005C02 = _base_08005C02 + _off_08005C02;
    _cyc_08005C02 += runtime_mem_cycles(_ea_08005C02, 1u, 0u);
    uint32_t _v_08005C02;
    _v_08005C02 = bus_read_u8(_ea_08005C02);
    g_cpu.R[0] = _v_08005C02;
    g_cpu.R[15] = 0x08005C04u;
    runtime_tick(_cyc_08005C02);
    /* 08005C04  08005c04 T ldrb r3,[r6,#0x8] */
    g_cpu.R[15] = 0x08005C04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C04 = 1u;
    _cyc_08005C04 = 2u;
    uint32_t _base_08005C04 = g_cpu.R[6];
    uint32_t _off_08005C04;
    _off_08005C04 = 0x00000008u;
    uint32_t _ea_08005C04 = _base_08005C04 + _off_08005C04;
    uint32_t _post_08005C04 = _base_08005C04 + _off_08005C04;
    _cyc_08005C04 += runtime_mem_cycles(_ea_08005C04, 1u, 0u);
    uint32_t _v_08005C04;
    _v_08005C04 = bus_read_u8(_ea_08005C04);
    g_cpu.R[3] = _v_08005C04;
    g_cpu.R[15] = 0x08005C06u;
    runtime_tick(_cyc_08005C04);
    /* 08005C06  08005c06 T adds r0,r0,r3 */
    g_cpu.R[15] = 0x08005C06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C06 = 1u;
    _cyc_08005C06 = 1u;
    uint32_t _rm_08005C06 = g_cpu.R[3];
    uint32_t _op2_08005C06;
    uint32_t _co_08005C06;
    _op2_08005C06 = _rm_08005C06;
    _co_08005C06 = cpsr_c();
    uint32_t _rn_08005C06 = g_cpu.R[0];
    uint32_t _r_08005C06;
    _r_08005C06 = _rn_08005C06 + _op2_08005C06;
    arm_set_nzcv_add(_rn_08005C06, _op2_08005C06, _r_08005C06);
    g_cpu.R[0] = _r_08005C06;
    g_cpu.R[15] = 0x08005C08u;
    runtime_tick(_cyc_08005C06);
    /* 08005C08  08005c08 T strb r0,[r6,#0x8] */
    g_cpu.R[15] = 0x08005C08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C08 = 1u;
    _cyc_08005C08 = 1u;
    uint32_t _base_08005C08 = g_cpu.R[6];
    uint32_t _off_08005C08;
    _off_08005C08 = 0x00000008u;
    uint32_t _ea_08005C08 = _base_08005C08 + _off_08005C08;
    uint32_t _post_08005C08 = _base_08005C08 + _off_08005C08;
    _cyc_08005C08 += runtime_mem_cycles(_ea_08005C08, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08005C08u, _ea_08005C08, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08005C08, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08005C0Au;
    runtime_tick(_cyc_08005C08);
    /* 08005C0A  08005c0a T ldrb r2,[r2] */
    g_cpu.R[15] = 0x08005C0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C0A = 1u;
    _cyc_08005C0A = 2u;
    uint32_t _base_08005C0A = g_cpu.R[2];
    uint32_t _off_08005C0A;
    _off_08005C0A = 0x00000000u;
    uint32_t _ea_08005C0A = _base_08005C0A + _off_08005C0A;
    uint32_t _post_08005C0A = _base_08005C0A + _off_08005C0A;
    _cyc_08005C0A += runtime_mem_cycles(_ea_08005C0A, 1u, 0u);
    uint32_t _v_08005C0A;
    _v_08005C0A = bus_read_u8(_ea_08005C0A);
    g_cpu.R[2] = _v_08005C0A;
    g_cpu.R[15] = 0x08005C0Cu;
    runtime_tick(_cyc_08005C0A);
    /* 08005C0C  08005c0c T ldrb r0,[r1] */
    g_cpu.R[15] = 0x08005C0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C0C = 1u;
    _cyc_08005C0C = 2u;
    uint32_t _base_08005C0C = g_cpu.R[1];
    uint32_t _off_08005C0C;
    _off_08005C0C = 0x00000000u;
    uint32_t _ea_08005C0C = _base_08005C0C + _off_08005C0C;
    uint32_t _post_08005C0C = _base_08005C0C + _off_08005C0C;
    _cyc_08005C0C += runtime_mem_cycles(_ea_08005C0C, 1u, 0u);
    uint32_t _v_08005C0C;
    _v_08005C0C = bus_read_u8(_ea_08005C0C);
    g_cpu.R[0] = _v_08005C0C;
    g_cpu.R[15] = 0x08005C0Eu;
    runtime_tick(_cyc_08005C0C);
    /* 08005C0E  08005c0e T subs r4,r2,r0 */
    g_cpu.R[15] = 0x08005C0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C0E = 1u;
    _cyc_08005C0E = 1u;
    uint32_t _rm_08005C0E = g_cpu.R[0];
    uint32_t _op2_08005C0E;
    uint32_t _co_08005C0E;
    _op2_08005C0E = _rm_08005C0E;
    _co_08005C0E = cpsr_c();
    uint32_t _rn_08005C0E = g_cpu.R[2];
    uint32_t _r_08005C0E;
    _r_08005C0E = _rn_08005C0E - _op2_08005C0E;
    arm_set_nzcv_sub(_rn_08005C0E, _op2_08005C0E, _r_08005C0E);
    g_cpu.R[4] = _r_08005C0E;
    g_cpu.R[15] = 0x08005C10u;
    runtime_tick(_cyc_08005C0E);
    /* 08005C10  08005c10 T cmps r4,#0x0 */
    g_cpu.R[15] = 0x08005C10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C10 = 1u;
    _cyc_08005C10 = 1u;
    uint32_t _rn_08005C10 = g_cpu.R[4];
    uint32_t _r_08005C10;
    _r_08005C10 = _rn_08005C10 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08005C10, 0x00000000u, _r_08005C10);
    g_cpu.R[15] = 0x08005C12u;
    runtime_tick(_cyc_08005C10);
    /* 08005C12  08005c12 T ble 0x08005c50 */
    g_cpu.R[15] = 0x08005C12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C12 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08005C12 = 3u;
        g_cpu.R[15] = 0x08005C50u;
        runtime_tick(_cyc_08005C12);
        runtime_dispatch(0x08005C50u);
        return;
    }
    g_cpu.R[15] = 0x08005C14u;
    runtime_tick(_cyc_08005C12);
    /* 08005C14  08005c14 T adds r0,r6,#0x0 */
    g_cpu.R[15] = 0x08005C14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C14 = 1u;
    _cyc_08005C14 = 1u;
    uint32_t _rn_08005C14 = g_cpu.R[6];
    uint32_t _r_08005C14;
    _r_08005C14 = _rn_08005C14 + 0x00000000u;
    arm_set_nzcv_add(_rn_08005C14, 0x00000000u, _r_08005C14);
    g_cpu.R[0] = _r_08005C14;
    g_cpu.R[15] = 0x08005C16u;
    runtime_tick(_cyc_08005C14);
    /* 08005C16  08005c16 T adds r1,r4,#0x0 */
    g_cpu.R[15] = 0x08005C16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C16 = 1u;
    _cyc_08005C16 = 1u;
    uint32_t _rn_08005C16 = g_cpu.R[4];
    uint32_t _r_08005C16;
    _r_08005C16 = _rn_08005C16 + 0x00000000u;
    arm_set_nzcv_add(_rn_08005C16, 0x00000000u, _r_08005C16);
    g_cpu.R[1] = _r_08005C16;
    g_cpu.R[15] = 0x08005C18u;
    runtime_tick(_cyc_08005C16);
    /* 08005C18  08005c18 T bl.hi 0x08002c1c */
    g_cpu.R[15] = 0x08005C18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C18 = 1u;
    _cyc_08005C18 = 1u;
    g_cpu.R[14] = 0x08002C1Cu;
    g_cpu.R[15] = 0x08005C1Au;
    runtime_tick(_cyc_08005C18);
    /* 08005C1A  08005c1a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08005C1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C1A = 1u;
    _cyc_08005C1A = 3u;
    uint32_t _blt_08005C1A = (g_cpu.R[14] + 0x00000F00u) & ~1u;
    g_cpu.R[14] = 0x08005C1Du;
    g_cpu.R[15] = _blt_08005C1A;
    runtime_call_push_return(0x08005C1Cu);
    runtime_tick(_cyc_08005C1A);
    _cyc_08005C1A = 0u;
    runtime_dispatch(_blt_08005C1A);
    if (g_cpu.R[15] != 0x08005C1Cu) { runtime_call_cancel_return(0x08005C1Cu); return; }
    g_cpu.R[15] = 0x08005C1Cu;
    runtime_tick(_cyc_08005C1A);
    /* fall-through to 0x08005C1C */
    g_cpu.R[15] = 0x08005C1Cu;
    runtime_dispatch(0x08005C1Cu);
    return;
}
