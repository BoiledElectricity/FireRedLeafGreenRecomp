// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080032E8 mode=thumb end=0x080032EA
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

OVL_EXPORT void func_080032E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080032E8u);
    /* 080032E8  080032e8 T strb r2,[r3] */
    g_cpu.R[15] = 0x080032E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080032E8 = 1u;
    _cyc_080032E8 = 1u;
    uint32_t _base_080032E8 = g_cpu.R[3];
    uint32_t _off_080032E8;
    _off_080032E8 = 0x00000000u;
    uint32_t _ea_080032E8 = _base_080032E8 + _off_080032E8;
    uint32_t _post_080032E8 = _base_080032E8 + _off_080032E8;
    _cyc_080032E8 += runtime_mem_cycles(_ea_080032E8, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080032E8u, _ea_080032E8, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_080032E8, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x080032EAu;
    runtime_tick(_cyc_080032E8);
    /* fall-through to 0x080032EA */
    g_cpu.R[15] = 0x080032EAu;
    runtime_dispatch(0x080032EAu);
    return;
}
