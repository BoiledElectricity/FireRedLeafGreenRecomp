// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002F92 mode=thumb end=0x08002F96
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

OVL_EXPORT void func_08002F92(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002F92u);
    /* 08002F92  08002f92 T ldr r5,[r15,#0x10] */
    g_cpu.R[15] = 0x08002F92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F92 = 1u;
    _cyc_08002F92 = 2u;
    uint32_t _base_08002F92 = 0x08002F96u & ~3u;
    uint32_t _off_08002F92;
    _off_08002F92 = 0x00000010u;
    uint32_t _ea_08002F92 = _base_08002F92 + _off_08002F92;
    uint32_t _post_08002F92 = _base_08002F92 + _off_08002F92;
    _cyc_08002F92 += runtime_mem_cycles(_ea_08002F92, 4u, 0u);
    uint32_t _v_08002F92;
    { uint32_t _w = bus_read_u32(_ea_08002F92 & ~3u); uint32_t _rot = (_ea_08002F92 & 3u) * 8u; _v_08002F92 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_08002F92;
    g_cpu.R[15] = 0x08002F94u;
    runtime_tick(_cyc_08002F92);
    /* 08002F94  08002f94 T ldr r4,[r15,#0x10] */
    g_cpu.R[15] = 0x08002F94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F94 = 1u;
    _cyc_08002F94 = 2u;
    uint32_t _base_08002F94 = 0x08002F98u & ~3u;
    uint32_t _off_08002F94;
    _off_08002F94 = 0x00000010u;
    uint32_t _ea_08002F94 = _base_08002F94 + _off_08002F94;
    uint32_t _post_08002F94 = _base_08002F94 + _off_08002F94;
    _cyc_08002F94 += runtime_mem_cycles(_ea_08002F94, 4u, 0u);
    uint32_t _v_08002F94;
    { uint32_t _w = bus_read_u32(_ea_08002F94 & ~3u); uint32_t _rot = (_ea_08002F94 & 3u) * 8u; _v_08002F94 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08002F94;
    g_cpu.R[15] = 0x08002F96u;
    runtime_tick(_cyc_08002F94);
    /* fall-through to 0x08002F96 */
    g_cpu.R[15] = 0x08002F96u;
    runtime_dispatch(0x08002F96u);
    return;
}
