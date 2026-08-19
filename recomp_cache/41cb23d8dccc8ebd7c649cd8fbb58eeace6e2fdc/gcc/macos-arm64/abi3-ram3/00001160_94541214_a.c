// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x00001160 mode=arm end=0x0000116C
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

OVL_EXPORT void func_00001160(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x00001160u);
    /* 00001160  00001160 A orr r5,r6,r12 */
    g_cpu.R[15] = 0x00001160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001160 = 1u;
    _cyc_00001160 = 1u;
    uint32_t _rm_00001160 = g_cpu.R[12];
    uint32_t _op2_00001160;
    uint32_t _co_00001160;
    _op2_00001160 = _rm_00001160;
    _co_00001160 = cpsr_c();
    uint32_t _rn_00001160 = g_cpu.R[6];
    uint32_t _r_00001160;
    _r_00001160 = _rn_00001160 | _op2_00001160;
    g_cpu.R[5] = _r_00001160;
    g_cpu.R[15] = 0x00001164u;
    runtime_tick(_cyc_00001160);
    /* 00001164  00001164 A add r12,r5,#0x1 */
    g_cpu.R[15] = 0x00001164u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001164 = 1u;
    _cyc_00001164 = 1u;
    uint32_t _rn_00001164 = g_cpu.R[5];
    uint32_t _r_00001164;
    _r_00001164 = _rn_00001164 + 0x00000001u;
    g_cpu.R[12] = _r_00001164;
    g_cpu.R[15] = 0x00001168u;
    runtime_tick(_cyc_00001164);
    /* 00001168  00001168 A sub r2,r2,r3 */
    g_cpu.R[15] = 0x00001168u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_00001168 = 1u;
    _cyc_00001168 = 1u;
    uint32_t _rm_00001168 = g_cpu.R[3];
    uint32_t _op2_00001168;
    uint32_t _co_00001168;
    _op2_00001168 = _rm_00001168;
    _co_00001168 = cpsr_c();
    uint32_t _rn_00001168 = g_cpu.R[2];
    uint32_t _r_00001168;
    _r_00001168 = _rn_00001168 - _op2_00001168;
    g_cpu.R[2] = _r_00001168;
    g_cpu.R[15] = 0x0000116Cu;
    runtime_tick(_cyc_00001168);
    /* fall-through to 0x0000116C */
    g_cpu.R[15] = 0x0000116Cu;
    runtime_dispatch(0x0000116Cu);
    return;
}
