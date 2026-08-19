// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006686 mode=thumb end=0x08006694
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

OVL_EXPORT void func_08006686(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006686u);
    /* 08006686  08006686 T strb r4,[r6] */
    g_cpu.R[15] = 0x08006686u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006686 = 1u;
    _cyc_08006686 = 1u;
    uint32_t _base_08006686 = g_cpu.R[6];
    uint32_t _off_08006686;
    _off_08006686 = 0x00000000u;
    uint32_t _ea_08006686 = _base_08006686 + _off_08006686;
    uint32_t _post_08006686 = _base_08006686 + _off_08006686;
    _cyc_08006686 += runtime_mem_cycles(_ea_08006686, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006686u, _ea_08006686, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_08006686, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[15] = 0x08006688u;
    runtime_tick(_cyc_08006686);
    /* 08006688  08006688 T mov r0,r12 */
    g_cpu.R[15] = 0x08006688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006688 = 1u;
    _cyc_08006688 = 1u;
    uint32_t _rm_08006688 = g_cpu.R[12];
    uint32_t _op2_08006688;
    uint32_t _co_08006688;
    _op2_08006688 = _rm_08006688;
    _co_08006688 = cpsr_c();
    uint32_t _r_08006688;
    _r_08006688 = _op2_08006688;
    g_cpu.R[0] = _r_08006688;
    g_cpu.R[15] = 0x0800668Au;
    runtime_tick(_cyc_08006688);
    /* 0800668A  0800668a T strb r5,[r0] */
    g_cpu.R[15] = 0x0800668Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800668A = 1u;
    _cyc_0800668A = 1u;
    uint32_t _base_0800668A = g_cpu.R[0];
    uint32_t _off_0800668A;
    _off_0800668A = 0x00000000u;
    uint32_t _ea_0800668A = _base_0800668A + _off_0800668A;
    uint32_t _post_0800668A = _base_0800668A + _off_0800668A;
    _cyc_0800668A += runtime_mem_cycles(_ea_0800668A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800668Au, _ea_0800668A, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_0800668A, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x0800668Cu;
    runtime_tick(_cyc_0800668A);
    /* 0800668C  0800668c T adds r1,r1,#0x1 */
    g_cpu.R[15] = 0x0800668Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800668C = 1u;
    _cyc_0800668C = 1u;
    uint32_t _rn_0800668C = g_cpu.R[1];
    uint32_t _r_0800668C;
    _r_0800668C = _rn_0800668C + 0x00000001u;
    arm_set_nzcv_add(_rn_0800668C, 0x00000001u, _r_0800668C);
    g_cpu.R[1] = _r_0800668C;
    g_cpu.R[15] = 0x0800668Eu;
    runtime_tick(_cyc_0800668C);
    /* 0800668E  0800668e T cmps r1,#0x7f */
    g_cpu.R[15] = 0x0800668Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800668E = 1u;
    _cyc_0800668E = 1u;
    uint32_t _rn_0800668E = g_cpu.R[1];
    uint32_t _r_0800668E;
    _r_0800668E = _rn_0800668E - 0x0000007Fu;
    arm_set_nzcv_sub(_rn_0800668E, 0x0000007Fu, _r_0800668E);
    g_cpu.R[15] = 0x08006690u;
    runtime_tick(_cyc_0800668E);
    /* 08006690  08006690 T ble 0x08006682 */
    g_cpu.R[15] = 0x08006690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006690 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08006690 = 3u;
        g_cpu.R[15] = 0x08006682u;
        runtime_tick(_cyc_08006690);
        runtime_dispatch(0x08006682u);
        return;
    }
    g_cpu.R[15] = 0x08006692u;
    runtime_tick(_cyc_08006690);
    /* 08006692  08006692 T b 0x080066e4 */
    g_cpu.R[15] = 0x08006692u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006692 = 1u;
    _cyc_08006692 = 3u;
    g_cpu.R[15] = 0x080066E4u;
    runtime_tick(_cyc_08006692);
    runtime_dispatch(0x080066E4u);
    return;
    g_cpu.R[15] = 0x08006694u;
    runtime_tick(_cyc_08006692);
    /* fall-through to 0x08006694 */
    g_cpu.R[15] = 0x08006694u;
    runtime_dispatch(0x08006694u);
    return;
}
