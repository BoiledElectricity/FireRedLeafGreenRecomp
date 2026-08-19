// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003390 mode=thumb end=0x08003398
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

OVL_EXPORT void func_08003390(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003390u);
    /* 08003390  08003390 T ldr r3,[r13,#0x68] */
    g_cpu.R[15] = 0x08003390u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003390 = 1u;
    _cyc_08003390 = 2u;
    uint32_t _base_08003390 = g_cpu.R[13];
    uint32_t _off_08003390;
    _off_08003390 = 0x00000068u;
    uint32_t _ea_08003390 = _base_08003390 + _off_08003390;
    uint32_t _post_08003390 = _base_08003390 + _off_08003390;
    _cyc_08003390 += runtime_mem_cycles(_ea_08003390, 4u, 0u);
    uint32_t _v_08003390;
    { uint32_t _w = bus_read_u32(_ea_08003390 & ~3u); uint32_t _rot = (_ea_08003390 & 3u) * 8u; _v_08003390 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08003390;
    g_cpu.R[15] = 0x08003392u;
    runtime_tick(_cyc_08003390);
    /* 08003392  08003392 T cmps r1,r3 */
    g_cpu.R[15] = 0x08003392u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003392 = 1u;
    _cyc_08003392 = 1u;
    uint32_t _rm_08003392 = g_cpu.R[3];
    uint32_t _op2_08003392;
    uint32_t _co_08003392;
    _op2_08003392 = _rm_08003392;
    _co_08003392 = cpsr_c();
    uint32_t _rn_08003392 = g_cpu.R[1];
    uint32_t _r_08003392;
    _r_08003392 = _rn_08003392 - _op2_08003392;
    arm_set_nzcv_sub(_rn_08003392, _op2_08003392, _r_08003392);
    g_cpu.R[15] = 0x08003394u;
    runtime_tick(_cyc_08003392);
    /* 08003394  08003394 T blt 0x0800330c */
    g_cpu.R[15] = 0x08003394u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003394 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08003394 = 3u;
        g_cpu.R[15] = 0x0800330Cu;
        runtime_tick(_cyc_08003394);
        runtime_dispatch(0x0800330Cu);
        return;
    }
    g_cpu.R[15] = 0x08003396u;
    runtime_tick(_cyc_08003394);
    /* 08003396  08003396 T b 0x080035fc */
    g_cpu.R[15] = 0x08003396u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003396 = 1u;
    _cyc_08003396 = 3u;
    g_cpu.R[15] = 0x080035FCu;
    runtime_tick(_cyc_08003396);
    runtime_dispatch(0x080035FCu);
    return;
    g_cpu.R[15] = 0x08003398u;
    runtime_tick(_cyc_08003396);
    /* fall-through to 0x08003398 */
    g_cpu.R[15] = 0x08003398u;
    runtime_dispatch(0x08003398u);
    return;
}
