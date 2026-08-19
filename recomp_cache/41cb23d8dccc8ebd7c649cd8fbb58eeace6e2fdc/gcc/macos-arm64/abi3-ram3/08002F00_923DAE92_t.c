// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002F00 mode=thumb end=0x08002F04
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

OVL_EXPORT void func_08002F00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002F00u);
    /* 08002F00  08002f00 T adds r2,r0,r1 */
    g_cpu.R[15] = 0x08002F00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F00 = 1u;
    _cyc_08002F00 = 1u;
    uint32_t _rm_08002F00 = g_cpu.R[1];
    uint32_t _op2_08002F00;
    uint32_t _co_08002F00;
    _op2_08002F00 = _rm_08002F00;
    _co_08002F00 = cpsr_c();
    uint32_t _rn_08002F00 = g_cpu.R[0];
    uint32_t _r_08002F00;
    _r_08002F00 = _rn_08002F00 + _op2_08002F00;
    arm_set_nzcv_add(_rn_08002F00, _op2_08002F00, _r_08002F00);
    g_cpu.R[2] = _r_08002F00;
    g_cpu.R[15] = 0x08002F02u;
    runtime_tick(_cyc_08002F00);
    /* 08002F02  08002f02 T movs r3,#0x2 */
    g_cpu.R[15] = 0x08002F02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F02 = 1u;
    _cyc_08002F02 = 1u;
    uint32_t _r_08002F02;
    _r_08002F02 = 0x00000002u;
    arm_set_nzc_logic(_r_08002F02, cpsr_c());
    g_cpu.R[3] = _r_08002F02;
    g_cpu.R[15] = 0x08002F04u;
    runtime_tick(_cyc_08002F02);
    /* fall-through to 0x08002F04 */
    g_cpu.R[15] = 0x08002F04u;
    runtime_dispatch(0x08002F04u);
    return;
}
