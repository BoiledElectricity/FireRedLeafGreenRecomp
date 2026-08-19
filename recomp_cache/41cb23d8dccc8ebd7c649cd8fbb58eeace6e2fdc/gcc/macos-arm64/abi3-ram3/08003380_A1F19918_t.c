// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003380 mode=thumb end=0x08003382
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

OVL_EXPORT void func_08003380(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003380u);
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
