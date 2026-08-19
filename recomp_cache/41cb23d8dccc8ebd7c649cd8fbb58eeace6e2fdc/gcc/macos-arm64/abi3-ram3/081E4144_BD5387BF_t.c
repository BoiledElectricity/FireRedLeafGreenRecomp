// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081E4144 mode=thumb end=0x081E4148
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

OVL_EXPORT void func_081E4144(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081E4144u);
    /* 081E4144  081e4144 T orrs r2,r2,r3 */
    g_cpu.R[15] = 0x081E4144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E4144 = 1u;
    _cyc_081E4144 = 1u;
    uint32_t _rm_081E4144 = g_cpu.R[3];
    uint32_t _op2_081E4144;
    uint32_t _co_081E4144;
    _op2_081E4144 = _rm_081E4144;
    _co_081E4144 = cpsr_c();
    uint32_t _rn_081E4144 = g_cpu.R[2];
    uint32_t _r_081E4144;
    _r_081E4144 = _rn_081E4144 | _op2_081E4144;
    arm_set_nzc_logic(_r_081E4144, _co_081E4144);
    g_cpu.R[2] = _r_081E4144;
    g_cpu.R[15] = 0x081E4146u;
    runtime_tick(_cyc_081E4144);
    /* 081E4146  081e4146 T mov r3,r12 */
    g_cpu.R[15] = 0x081E4146u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E4146 = 1u;
    _cyc_081E4146 = 1u;
    uint32_t _rm_081E4146 = g_cpu.R[12];
    uint32_t _op2_081E4146;
    uint32_t _co_081E4146;
    _op2_081E4146 = _rm_081E4146;
    _co_081E4146 = cpsr_c();
    uint32_t _r_081E4146;
    _r_081E4146 = _op2_081E4146;
    g_cpu.R[3] = _r_081E4146;
    g_cpu.R[15] = 0x081E4148u;
    runtime_tick(_cyc_081E4146);
    /* fall-through to 0x081E4148 */
    g_cpu.R[15] = 0x081E4148u;
    runtime_dispatch(0x081E4148u);
    return;
}
