// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08004C58 mode=thumb end=0x08004C60
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

OVL_EXPORT void func_08004C58(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08004C58u);
    /* 08004C58  08004c58 T ldrb r1,[r4] */
    g_cpu.R[15] = 0x08004C58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08004C58 = 1u;
    _cyc_08004C58 = 2u;
    uint32_t _base_08004C58 = g_cpu.R[4];
    uint32_t _off_08004C58;
    _off_08004C58 = 0x00000000u;
    uint32_t _ea_08004C58 = _base_08004C58 + _off_08004C58;
    uint32_t _post_08004C58 = _base_08004C58 + _off_08004C58;
    _cyc_08004C58 += runtime_mem_cycles(_ea_08004C58, 1u, 0u);
    uint32_t _v_08004C58;
    _v_08004C58 = bus_read_u8(_ea_08004C58);
    g_cpu.R[1] = _v_08004C58;
    g_cpu.R[15] = 0x08004C5Au;
    runtime_tick(_cyc_08004C58);
    /* 08004C5A  08004c5a T ands r0,r0,r1 */
    g_cpu.R[15] = 0x08004C5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08004C5A = 1u;
    _cyc_08004C5A = 1u;
    uint32_t _rm_08004C5A = g_cpu.R[1];
    uint32_t _op2_08004C5A;
    uint32_t _co_08004C5A;
    _op2_08004C5A = _rm_08004C5A;
    _co_08004C5A = cpsr_c();
    uint32_t _rn_08004C5A = g_cpu.R[0];
    uint32_t _r_08004C5A;
    _r_08004C5A = _rn_08004C5A & _op2_08004C5A;
    arm_set_nzc_logic(_r_08004C5A, _co_08004C5A);
    g_cpu.R[0] = _r_08004C5A;
    g_cpu.R[15] = 0x08004C5Cu;
    runtime_tick(_cyc_08004C5A);
    /* 08004C5C  08004c5c T orrs r2,r2,r0 */
    g_cpu.R[15] = 0x08004C5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08004C5C = 1u;
    _cyc_08004C5C = 1u;
    uint32_t _rm_08004C5C = g_cpu.R[0];
    uint32_t _op2_08004C5C;
    uint32_t _co_08004C5C;
    _op2_08004C5C = _rm_08004C5C;
    _co_08004C5C = cpsr_c();
    uint32_t _rn_08004C5C = g_cpu.R[2];
    uint32_t _r_08004C5C;
    _r_08004C5C = _rn_08004C5C | _op2_08004C5C;
    arm_set_nzc_logic(_r_08004C5C, _co_08004C5C);
    g_cpu.R[2] = _r_08004C5C;
    g_cpu.R[15] = 0x08004C5Eu;
    runtime_tick(_cyc_08004C5C);
    /* 08004C5E  08004c5e T strb r2,[r4] */
    g_cpu.R[15] = 0x08004C5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08004C5E = 1u;
    _cyc_08004C5E = 1u;
    uint32_t _base_08004C5E = g_cpu.R[4];
    uint32_t _off_08004C5E;
    _off_08004C5E = 0x00000000u;
    uint32_t _ea_08004C5E = _base_08004C5E + _off_08004C5E;
    uint32_t _post_08004C5E = _base_08004C5E + _off_08004C5E;
    _cyc_08004C5E += runtime_mem_cycles(_ea_08004C5E, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08004C5Eu, _ea_08004C5E, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08004C5E, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x08004C60u;
    runtime_tick(_cyc_08004C5E);
    /* fall-through to 0x08004C60 */
    g_cpu.R[15] = 0x08004C60u;
    runtime_dispatch(0x08004C60u);
    return;
}
