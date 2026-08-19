// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0805AABC mode=thumb end=0x0805AAC4
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

OVL_EXPORT void func_0805AABC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805AABCu);
    /* 0805AABC  0805aabc T strh r0,[r3] */
    g_cpu.R[15] = 0x0805AABCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AABC = 1u;
    _cyc_0805AABC = 1u;
    uint32_t _base_0805AABC = g_cpu.R[3];
    uint32_t _off_0805AABC;
    _off_0805AABC = 0x00000000u;
    uint32_t _ea_0805AABC = _base_0805AABC + _off_0805AABC;
    uint32_t _post_0805AABC = _base_0805AABC + _off_0805AABC;
    _cyc_0805AABC += runtime_mem_cycles(_ea_0805AABC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805AABCu, _ea_0805AABC & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805AABC & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805AABEu;
    runtime_tick(_cyc_0805AABC);
    /* 0805AABE  0805aabe T movs r0,#0x1 */
    g_cpu.R[15] = 0x0805AABEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AABE = 1u;
    _cyc_0805AABE = 1u;
    uint32_t _r_0805AABE;
    _r_0805AABE = 0x00000001u;
    arm_set_nzc_logic(_r_0805AABE, cpsr_c());
    g_cpu.R[0] = _r_0805AABE;
    g_cpu.R[15] = 0x0805AAC0u;
    runtime_tick(_cyc_0805AABE);
    /* 0805AAC0  0805aac0 T bl.hi 0x080f5ac4 */
    g_cpu.R[15] = 0x0805AAC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAC0 = 1u;
    _cyc_0805AAC0 = 1u;
    g_cpu.R[14] = 0x080F5AC4u;
    g_cpu.R[15] = 0x0805AAC2u;
    runtime_tick(_cyc_0805AAC0);
    /* 0805AAC2  0805aac2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805AAC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAC2 = 1u;
    _cyc_0805AAC2 = 3u;
    uint32_t _blt_0805AAC2 = (g_cpu.R[14] + 0x00000CE0u) & ~1u;
    g_cpu.R[14] = 0x0805AAC5u;
    g_cpu.R[15] = _blt_0805AAC2;
    runtime_call_push_return(0x0805AAC4u);
    runtime_tick(_cyc_0805AAC2);
    _cyc_0805AAC2 = 0u;
    runtime_dispatch(_blt_0805AAC2);
    if (g_cpu.R[15] != 0x0805AAC4u) { runtime_call_cancel_return(0x0805AAC4u); return; }
    g_cpu.R[15] = 0x0805AAC4u;
    runtime_tick(_cyc_0805AAC2);
    /* fall-through to 0x0805AAC4 */
    g_cpu.R[15] = 0x0805AAC4u;
    runtime_dispatch(0x0805AAC4u);
    return;
}
