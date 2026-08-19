// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080032EC mode=thumb end=0x080032F2
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

OVL_EXPORT void func_080032EC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080032ECu);
    /* 080032EC  080032ec T adds r4,r4,#0x1 */
    g_cpu.R[15] = 0x080032ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032EC = 1u;
    _cyc_080032EC = 1u;
    uint32_t _rn_080032EC = g_cpu.R[4];
    uint32_t _r_080032EC;
    _r_080032EC = _rn_080032EC + 0x00000001u;
    arm_set_nzcv_add(_rn_080032EC, 0x00000001u, _r_080032EC);
    g_cpu.R[4] = _r_080032EC;
    g_cpu.R[15] = 0x080032EEu;
    runtime_tick(_cyc_080032EC);
    /* 080032EE  080032ee T cmps r5,r7 */
    g_cpu.R[15] = 0x080032EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032EE = 1u;
    _cyc_080032EE = 1u;
    uint32_t _rm_080032EE = g_cpu.R[7];
    uint32_t _op2_080032EE;
    uint32_t _co_080032EE;
    _op2_080032EE = _rm_080032EE;
    _co_080032EE = cpsr_c();
    uint32_t _rn_080032EE = g_cpu.R[5];
    uint32_t _r_080032EE;
    _r_080032EE = _rn_080032EE - _op2_080032EE;
    arm_set_nzcv_sub(_rn_080032EE, _op2_080032EE, _r_080032EE);
    g_cpu.R[15] = 0x080032F0u;
    runtime_tick(_cyc_080032EE);
    /* 080032F0  080032f0 T blt 0x08003298 */
    g_cpu.R[15] = 0x080032F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032F0 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080032F0 = 3u;
        g_cpu.R[15] = 0x08003298u;
        runtime_tick(_cyc_080032F0);
        runtime_dispatch(0x08003298u);
        return;
    }
    g_cpu.R[15] = 0x080032F2u;
    runtime_tick(_cyc_080032F0);
    /* fall-through to 0x080032F2 */
    g_cpu.R[15] = 0x080032F2u;
    runtime_dispatch(0x080032F2u);
    return;
}
