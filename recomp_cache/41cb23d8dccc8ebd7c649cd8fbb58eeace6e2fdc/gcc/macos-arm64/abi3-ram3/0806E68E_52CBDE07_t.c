// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0806E68E mode=thumb end=0x0806E6A0
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

OVL_EXPORT void func_0806E68E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0806E68Eu);
    /* 0806E68E  0806e68e T cmps r2,#0x0 */
    g_cpu.R[15] = 0x0806E68Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E68E = 1u;
    _cyc_0806E68E = 1u;
    uint32_t _rn_0806E68E = g_cpu.R[2];
    uint32_t _r_0806E68E;
    _r_0806E68E = _rn_0806E68E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0806E68E, 0x00000000u, _r_0806E68E);
    g_cpu.R[15] = 0x0806E690u;
    runtime_tick(_cyc_0806E68E);
    /* 0806E690  0806e690 T beq 0x0806e6a0 */
    g_cpu.R[15] = 0x0806E690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E690 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0806E690 = 3u;
        g_cpu.R[15] = 0x0806E6A0u;
        runtime_tick(_cyc_0806E690);
        runtime_dispatch(0x0806E6A0u);
        return;
    }
    g_cpu.R[15] = 0x0806E692u;
    runtime_tick(_cyc_0806E690);
    /* 0806E692  0806e692 T movs r0,#0x7 */
    g_cpu.R[15] = 0x0806E692u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E692 = 1u;
    _cyc_0806E692 = 1u;
    uint32_t _r_0806E692;
    _r_0806E692 = 0x00000007u;
    arm_set_nzc_logic(_r_0806E692, cpsr_c());
    g_cpu.R[0] = _r_0806E692;
    g_cpu.R[15] = 0x0806E694u;
    runtime_tick(_cyc_0806E692);
    /* 0806E694  0806e694 T ands r0,r0,r4 */
    g_cpu.R[15] = 0x0806E694u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E694 = 1u;
    _cyc_0806E694 = 1u;
    uint32_t _rm_0806E694 = g_cpu.R[4];
    uint32_t _op2_0806E694;
    uint32_t _co_0806E694;
    _op2_0806E694 = _rm_0806E694;
    _co_0806E694 = cpsr_c();
    uint32_t _rn_0806E694 = g_cpu.R[0];
    uint32_t _r_0806E694;
    _r_0806E694 = _rn_0806E694 & _op2_0806E694;
    arm_set_nzc_logic(_r_0806E694, _co_0806E694);
    g_cpu.R[0] = _r_0806E694;
    g_cpu.R[15] = 0x0806E696u;
    runtime_tick(_cyc_0806E694);
    /* 0806E696  0806e696 T movs r1,#0x1 */
    g_cpu.R[15] = 0x0806E696u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E696 = 1u;
    _cyc_0806E696 = 1u;
    uint32_t _r_0806E696;
    _r_0806E696 = 0x00000001u;
    arm_set_nzc_logic(_r_0806E696, cpsr_c());
    g_cpu.R[1] = _r_0806E696;
    g_cpu.R[15] = 0x0806E698u;
    runtime_tick(_cyc_0806E696);
    /* 0806E698  0806e698 T movs r1,r1,lsl r0 */
    g_cpu.R[15] = 0x0806E698u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E698 = 1u;
    _cyc_0806E698 = 2u;
    uint32_t _rm_0806E698 = g_cpu.R[1];
    uint32_t _op2_0806E698;
    uint32_t _co_0806E698;
    uint32_t _cnt_0806E698 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_0806E698 == 0)      { _op2_0806E698 = _rm_0806E698; _co_0806E698 = cpsr_c(); }
    else if (_cnt_0806E698 < 32) { _op2_0806E698 = _rm_0806E698 << _cnt_0806E698; _co_0806E698 = (_rm_0806E698 >> (32u - _cnt_0806E698)) & 1u; }
    else if (_cnt_0806E698 == 32){ _op2_0806E698 = 0u; _co_0806E698 = _rm_0806E698 & 1u; }
    else                                { _op2_0806E698 = 0u; _co_0806E698 = 0u; }
    uint32_t _r_0806E698;
    _r_0806E698 = _op2_0806E698;
    arm_set_nzc_logic(_r_0806E698, _co_0806E698);
    g_cpu.R[1] = _r_0806E698;
    g_cpu.R[15] = 0x0806E69Au;
    runtime_tick(_cyc_0806E698);
    /* 0806E69A  0806e69a T ldrb r0,[r2] */
    g_cpu.R[15] = 0x0806E69Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E69A = 1u;
    _cyc_0806E69A = 2u;
    uint32_t _base_0806E69A = g_cpu.R[2];
    uint32_t _off_0806E69A;
    _off_0806E69A = 0x00000000u;
    uint32_t _ea_0806E69A = _base_0806E69A + _off_0806E69A;
    uint32_t _post_0806E69A = _base_0806E69A + _off_0806E69A;
    _cyc_0806E69A += runtime_mem_cycles(_ea_0806E69A, 1u, 0u);
    uint32_t _v_0806E69A;
    _v_0806E69A = bus_read_u8(_ea_0806E69A);
    g_cpu.R[0] = _v_0806E69A;
    g_cpu.R[15] = 0x0806E69Cu;
    runtime_tick(_cyc_0806E69A);
    /* 0806E69C  0806e69c T orrs r1,r1,r0 */
    g_cpu.R[15] = 0x0806E69Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E69C = 1u;
    _cyc_0806E69C = 1u;
    uint32_t _rm_0806E69C = g_cpu.R[0];
    uint32_t _op2_0806E69C;
    uint32_t _co_0806E69C;
    _op2_0806E69C = _rm_0806E69C;
    _co_0806E69C = cpsr_c();
    uint32_t _rn_0806E69C = g_cpu.R[1];
    uint32_t _r_0806E69C;
    _r_0806E69C = _rn_0806E69C | _op2_0806E69C;
    arm_set_nzc_logic(_r_0806E69C, _co_0806E69C);
    g_cpu.R[1] = _r_0806E69C;
    g_cpu.R[15] = 0x0806E69Eu;
    runtime_tick(_cyc_0806E69C);
    /* 0806E69E  0806e69e T strb r1,[r2] */
    g_cpu.R[15] = 0x0806E69Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0806E69E = 1u;
    _cyc_0806E69E = 1u;
    uint32_t _base_0806E69E = g_cpu.R[2];
    uint32_t _off_0806E69E;
    _off_0806E69E = 0x00000000u;
    uint32_t _ea_0806E69E = _base_0806E69E + _off_0806E69E;
    uint32_t _post_0806E69E = _base_0806E69E + _off_0806E69E;
    _cyc_0806E69E += runtime_mem_cycles(_ea_0806E69E, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0806E69Eu, _ea_0806E69E, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_0806E69E, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x0806E6A0u;
    runtime_tick(_cyc_0806E69E);
    /* fall-through to 0x0806E6A0 */
    g_cpu.R[15] = 0x0806E6A0u;
    runtime_dispatch(0x0806E6A0u);
    return;
}
