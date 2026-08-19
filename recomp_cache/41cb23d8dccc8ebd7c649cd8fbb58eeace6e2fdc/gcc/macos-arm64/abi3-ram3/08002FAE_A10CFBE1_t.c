// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002FAE mode=thumb end=0x08002FB0
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

OVL_EXPORT void func_08002FAE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002FAEu);
    /* 08002FAE  08002fae T movs r0,r0,lsr #8 */
    g_cpu.R[15] = 0x08002FAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FAE = 1u;
    _cyc_08002FAE = 1u;
    uint32_t _rm_08002FAE = g_cpu.R[0];
    uint32_t _op2_08002FAE;
    uint32_t _co_08002FAE;
    _op2_08002FAE = _rm_08002FAE >> 8;
    _co_08002FAE = (_rm_08002FAE >> 7) & 1u;
    uint32_t _r_08002FAE;
    _r_08002FAE = _op2_08002FAE;
    arm_set_nzc_logic(_r_08002FAE, _co_08002FAE);
    g_cpu.R[0] = _r_08002FAE;
    g_cpu.R[15] = 0x08002FB0u;
    runtime_tick(_cyc_08002FAE);
    /* fall-through to 0x08002FB0 */
    g_cpu.R[15] = 0x08002FB0u;
    runtime_dispatch(0x08002FB0u);
    return;
}
