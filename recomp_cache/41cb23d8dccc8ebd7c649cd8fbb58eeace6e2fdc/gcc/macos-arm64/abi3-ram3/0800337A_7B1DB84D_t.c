// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800337A mode=thumb end=0x08003382
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

OVL_EXPORT void func_0800337A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800337Au);
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
