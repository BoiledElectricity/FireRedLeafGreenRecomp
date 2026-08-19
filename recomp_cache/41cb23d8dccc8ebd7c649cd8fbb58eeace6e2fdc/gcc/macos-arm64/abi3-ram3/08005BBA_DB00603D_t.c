// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08005BBA mode=thumb end=0x08005BC4
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

OVL_EXPORT void func_08005BBA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08005BBAu);
    /* 08005BBA  08005bba T adds r0,r0,#0x21 */
    g_cpu.R[15] = 0x08005BBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BBA = 1u;
    _cyc_08005BBA = 1u;
    uint32_t _rn_08005BBA = g_cpu.R[0];
    uint32_t _r_08005BBA;
    _r_08005BBA = _rn_08005BBA + 0x00000021u;
    arm_set_nzcv_add(_rn_08005BBA, 0x00000021u, _r_08005BBA);
    g_cpu.R[0] = _r_08005BBA;
    g_cpu.R[15] = 0x08005BBCu;
    runtime_tick(_cyc_08005BBA);
    /* 08005BBC  08005bbc T ldrb r1,[r0] */
    g_cpu.R[15] = 0x08005BBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BBC = 1u;
    _cyc_08005BBC = 2u;
    uint32_t _base_08005BBC = g_cpu.R[0];
    uint32_t _off_08005BBC;
    _off_08005BBC = 0x00000000u;
    uint32_t _ea_08005BBC = _base_08005BBC + _off_08005BBC;
    uint32_t _post_08005BBC = _base_08005BBC + _off_08005BBC;
    _cyc_08005BBC += runtime_mem_cycles(_ea_08005BBC, 1u, 0u);
    uint32_t _v_08005BBC;
    _v_08005BBC = bus_read_u8(_ea_08005BBC);
    g_cpu.R[1] = _v_08005BBC;
    g_cpu.R[15] = 0x08005BBEu;
    runtime_tick(_cyc_08005BBC);
    /* 08005BBE  08005bbe T adds r0,r3,#0x0 */
    g_cpu.R[15] = 0x08005BBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BBE = 1u;
    _cyc_08005BBE = 1u;
    uint32_t _rn_08005BBE = g_cpu.R[3];
    uint32_t _r_08005BBE;
    _r_08005BBE = _rn_08005BBE + 0x00000000u;
    arm_set_nzcv_add(_rn_08005BBE, 0x00000000u, _r_08005BBE);
    g_cpu.R[0] = _r_08005BBE;
    g_cpu.R[15] = 0x08005BC0u;
    runtime_tick(_cyc_08005BBE);
    /* 08005BC0  08005bc0 T bl.hi 0x08005bc4 */
    g_cpu.R[15] = 0x08005BC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BC0 = 1u;
    _cyc_08005BC0 = 1u;
    g_cpu.R[14] = 0x08005BC4u;
    g_cpu.R[15] = 0x08005BC2u;
    runtime_tick(_cyc_08005BC0);
    /* 08005BC2  08005bc2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08005BC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005BC2 = 1u;
    _cyc_08005BC2 = 3u;
    uint32_t _blt_08005BC2 = (g_cpu.R[14] + 0x000009F4u) & ~1u;
    g_cpu.R[14] = 0x08005BC5u;
    g_cpu.R[15] = _blt_08005BC2;
    runtime_call_push_return(0x08005BC4u);
    runtime_tick(_cyc_08005BC2);
    _cyc_08005BC2 = 0u;
    runtime_dispatch(_blt_08005BC2);
    if (g_cpu.R[15] != 0x08005BC4u) { runtime_call_cancel_return(0x08005BC4u); return; }
    g_cpu.R[15] = 0x08005BC4u;
    runtime_tick(_cyc_08005BC2);
    /* fall-through to 0x08005BC4 */
    g_cpu.R[15] = 0x08005BC4u;
    runtime_dispatch(0x08005BC4u);
    return;
}
