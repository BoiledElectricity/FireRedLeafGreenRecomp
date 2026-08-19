// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002DBE mode=thumb end=0x08002DC6
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

OVL_EXPORT void func_08002DBE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002DBEu);
    /* 08002DBE  08002dbe T ldrb r0,[r0,#0x4] */
    g_cpu.R[15] = 0x08002DBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002DBE = 1u;
    _cyc_08002DBE = 2u;
    uint32_t _base_08002DBE = g_cpu.R[0];
    uint32_t _off_08002DBE;
    _off_08002DBE = 0x00000004u;
    uint32_t _ea_08002DBE = _base_08002DBE + _off_08002DBE;
    uint32_t _post_08002DBE = _base_08002DBE + _off_08002DBE;
    _cyc_08002DBE += runtime_mem_cycles(_ea_08002DBE, 1u, 0u);
    uint32_t _v_08002DBE;
    _v_08002DBE = bus_read_u8(_ea_08002DBE);
    g_cpu.R[0] = _v_08002DBE;
    g_cpu.R[15] = 0x08002DC0u;
    runtime_tick(_cyc_08002DBE);
    /* 08002DC0  08002dc0 T movs r1,#0x2 */
    g_cpu.R[15] = 0x08002DC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002DC0 = 1u;
    _cyc_08002DC0 = 1u;
    uint32_t _r_08002DC0;
    _r_08002DC0 = 0x00000002u;
    arm_set_nzc_logic(_r_08002DC0, cpsr_c());
    g_cpu.R[1] = _r_08002DC0;
    g_cpu.R[15] = 0x08002DC2u;
    runtime_tick(_cyc_08002DC0);
    /* 08002DC2  08002dc2 T bl.hi 0x08003dc6 */
    g_cpu.R[15] = 0x08002DC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002DC2 = 1u;
    _cyc_08002DC2 = 1u;
    g_cpu.R[14] = 0x08003DC6u;
    g_cpu.R[15] = 0x08002DC4u;
    runtime_tick(_cyc_08002DC2);
    /* 08002DC4  08002dc4 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08002DC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002DC4 = 1u;
    _cyc_08002DC4 = 3u;
    uint32_t _blt_08002DC4 = (g_cpu.R[14] + 0x0000015Au) & ~1u;
    g_cpu.R[14] = 0x08002DC7u;
    g_cpu.R[15] = _blt_08002DC4;
    runtime_call_push_return(0x08002DC6u);
    runtime_tick(_cyc_08002DC4);
    _cyc_08002DC4 = 0u;
    runtime_dispatch(_blt_08002DC4);
    if (g_cpu.R[15] != 0x08002DC6u) { runtime_call_cancel_return(0x08002DC6u); return; }
    g_cpu.R[15] = 0x08002DC6u;
    runtime_tick(_cyc_08002DC4);
    /* fall-through to 0x08002DC6 */
    g_cpu.R[15] = 0x08002DC6u;
    runtime_dispatch(0x08002DC6u);
    return;
}
