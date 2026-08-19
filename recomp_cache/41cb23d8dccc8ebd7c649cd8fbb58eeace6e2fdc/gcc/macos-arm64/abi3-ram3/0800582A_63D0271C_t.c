// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800582A mode=thumb end=0x08005838
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

OVL_EXPORT void func_0800582A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800582Au);
    /* 0800582A  0800582a T ldrb r1,[r2] */
    g_cpu.R[15] = 0x0800582Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800582A = 1u;
    _cyc_0800582A = 2u;
    uint32_t _base_0800582A = g_cpu.R[2];
    uint32_t _off_0800582A;
    _off_0800582A = 0x00000000u;
    uint32_t _ea_0800582A = _base_0800582A + _off_0800582A;
    uint32_t _post_0800582A = _base_0800582A + _off_0800582A;
    _cyc_0800582A += runtime_mem_cycles(_ea_0800582A, 1u, 0u);
    uint32_t _v_0800582A;
    _v_0800582A = bus_read_u8(_ea_0800582A);
    g_cpu.R[1] = _v_0800582A;
    g_cpu.R[15] = 0x0800582Cu;
    runtime_tick(_cyc_0800582A);
    /* 0800582C  0800582c T movs r0,#0x4 */
    g_cpu.R[15] = 0x0800582Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800582C = 1u;
    _cyc_0800582C = 1u;
    uint32_t _r_0800582C;
    _r_0800582C = 0x00000004u;
    arm_set_nzc_logic(_r_0800582C, cpsr_c());
    g_cpu.R[0] = _r_0800582C;
    g_cpu.R[15] = 0x0800582Eu;
    runtime_tick(_cyc_0800582C);
    /* 0800582E  0800582e T ands r0,r0,r1 */
    g_cpu.R[15] = 0x0800582Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800582E = 1u;
    _cyc_0800582E = 1u;
    uint32_t _rm_0800582E = g_cpu.R[1];
    uint32_t _op2_0800582E;
    uint32_t _co_0800582E;
    _op2_0800582E = _rm_0800582E;
    _co_0800582E = cpsr_c();
    uint32_t _rn_0800582E = g_cpu.R[0];
    uint32_t _r_0800582E;
    _r_0800582E = _rn_0800582E & _op2_0800582E;
    arm_set_nzc_logic(_r_0800582E, _co_0800582E);
    g_cpu.R[0] = _r_0800582E;
    g_cpu.R[15] = 0x08005830u;
    runtime_tick(_cyc_0800582E);
    /* 08005830  08005830 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08005830u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005830 = 1u;
    _cyc_08005830 = 1u;
    uint32_t _rn_08005830 = g_cpu.R[0];
    uint32_t _r_08005830;
    _r_08005830 = _rn_08005830 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08005830, 0x00000000u, _r_08005830);
    g_cpu.R[15] = 0x08005832u;
    runtime_tick(_cyc_08005830);
    /* 08005832  08005832 T beq 0x0800583c */
    g_cpu.R[15] = 0x08005832u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005832 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08005832 = 3u;
        g_cpu.R[15] = 0x0800583Cu;
        runtime_tick(_cyc_08005832);
        runtime_dispatch(0x0800583Cu);
        return;
    }
    g_cpu.R[15] = 0x08005834u;
    runtime_tick(_cyc_08005832);
    /* 08005834  08005834 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08005834u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005834 = 1u;
    _cyc_08005834 = 1u;
    uint32_t _r_08005834;
    _r_08005834 = 0x00000001u;
    arm_set_nzc_logic(_r_08005834, cpsr_c());
    g_cpu.R[0] = _r_08005834;
    g_cpu.R[15] = 0x08005836u;
    runtime_tick(_cyc_08005834);
    /* 08005836  08005836 T b 0x0800583e */
    g_cpu.R[15] = 0x08005836u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005836 = 1u;
    _cyc_08005836 = 3u;
    g_cpu.R[15] = 0x0800583Eu;
    runtime_tick(_cyc_08005836);
    runtime_dispatch(0x0800583Eu);
    return;
    g_cpu.R[15] = 0x08005838u;
    runtime_tick(_cyc_08005836);
    /* fall-through to 0x08005838 */
    g_cpu.R[15] = 0x08005838u;
    runtime_dispatch(0x08005838u);
    return;
}
