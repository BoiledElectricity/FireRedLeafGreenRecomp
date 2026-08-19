// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080066A0 mode=thumb end=0x080066AC
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

OVL_EXPORT void func_080066A0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080066A0u);
    /* 080066A0  080066a0 T adds r4,r1,r0 */
    g_cpu.R[15] = 0x080066A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066A0 = 1u;
    _cyc_080066A0 = 1u;
    uint32_t _rm_080066A0 = g_cpu.R[0];
    uint32_t _op2_080066A0;
    uint32_t _co_080066A0;
    _op2_080066A0 = _rm_080066A0;
    _co_080066A0 = cpsr_c();
    uint32_t _rn_080066A0 = g_cpu.R[1];
    uint32_t _r_080066A0;
    _r_080066A0 = _rn_080066A0 + _op2_080066A0;
    arm_set_nzcv_add(_rn_080066A0, _op2_080066A0, _r_080066A0);
    g_cpu.R[4] = _r_080066A0;
    g_cpu.R[15] = 0x080066A2u;
    runtime_tick(_cyc_080066A0);
    /* 080066A2  080066a2 T ldr r5,[r15,#0x4c] */
    g_cpu.R[15] = 0x080066A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066A2 = 1u;
    _cyc_080066A2 = 2u;
    uint32_t _base_080066A2 = 0x080066A6u & ~3u;
    uint32_t _off_080066A2;
    _off_080066A2 = 0x0000004Cu;
    uint32_t _ea_080066A2 = _base_080066A2 + _off_080066A2;
    uint32_t _post_080066A2 = _base_080066A2 + _off_080066A2;
    _cyc_080066A2 += runtime_mem_cycles(_ea_080066A2, 4u, 0u);
    uint32_t _v_080066A2;
    { uint32_t _w = bus_read_u32(_ea_080066A2 & ~3u); uint32_t _rot = (_ea_080066A2 & 3u) * 8u; _v_080066A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_080066A2;
    g_cpu.R[15] = 0x080066A4u;
    runtime_tick(_cyc_080066A2);
    /* 080066A4  080066a4 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x080066A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066A4 = 1u;
    _cyc_080066A4 = 1u;
    uint32_t _rn_080066A4 = g_cpu.R[4];
    uint32_t _r_080066A4;
    _r_080066A4 = _rn_080066A4 + 0x00000000u;
    arm_set_nzcv_add(_rn_080066A4, 0x00000000u, _r_080066A4);
    g_cpu.R[0] = _r_080066A4;
    g_cpu.R[15] = 0x080066A6u;
    runtime_tick(_cyc_080066A4);
    /* 080066A6  080066a6 T adds r1,r5,#0x0 */
    g_cpu.R[15] = 0x080066A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066A6 = 1u;
    _cyc_080066A6 = 1u;
    uint32_t _rn_080066A6 = g_cpu.R[5];
    uint32_t _r_080066A6;
    _r_080066A6 = _rn_080066A6 + 0x00000000u;
    arm_set_nzcv_add(_rn_080066A6, 0x00000000u, _r_080066A6);
    g_cpu.R[1] = _r_080066A6;
    g_cpu.R[15] = 0x080066A8u;
    runtime_tick(_cyc_080066A6);
    /* 080066A8  080066a8 T bl.hi 0x080026ac */
    g_cpu.R[15] = 0x080066A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066A8 = 1u;
    _cyc_080066A8 = 1u;
    g_cpu.R[14] = 0x080026ACu;
    g_cpu.R[15] = 0x080066AAu;
    runtime_tick(_cyc_080066A8);
    /* 080066AA  080066aa T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080066AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080066AA = 1u;
    _cyc_080066AA = 3u;
    uint32_t _blt_080066AA = (g_cpu.R[14] + 0x000008E0u) & ~1u;
    g_cpu.R[14] = 0x080066ADu;
    g_cpu.R[15] = _blt_080066AA;
    runtime_call_push_return(0x080066ACu);
    runtime_tick(_cyc_080066AA);
    _cyc_080066AA = 0u;
    runtime_dispatch(_blt_080066AA);
    if (g_cpu.R[15] != 0x080066ACu) { runtime_call_cancel_return(0x080066ACu); return; }
    g_cpu.R[15] = 0x080066ACu;
    runtime_tick(_cyc_080066AA);
    /* fall-through to 0x080066AC */
    g_cpu.R[15] = 0x080066ACu;
    runtime_dispatch(0x080066ACu);
    return;
}
