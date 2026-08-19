// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003302 mode=thumb end=0x0800330C
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

OVL_EXPORT void func_08003302(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003302u);
    /* 08003302  08003302 T adds r0,r0,#0x8 */
    g_cpu.R[15] = 0x08003302u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003302 = 1u;
    _cyc_08003302 = 1u;
    uint32_t _rn_08003302 = g_cpu.R[0];
    uint32_t _r_08003302;
    _r_08003302 = _rn_08003302 + 0x00000008u;
    arm_set_nzcv_add(_rn_08003302, 0x00000008u, _r_08003302);
    g_cpu.R[0] = _r_08003302;
    g_cpu.R[15] = 0x08003304u;
    runtime_tick(_cyc_08003302);
    /* 08003304  08003304 T ldr r3,[r13,#0x68] */
    g_cpu.R[15] = 0x08003304u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003304 = 1u;
    _cyc_08003304 = 2u;
    uint32_t _base_08003304 = g_cpu.R[13];
    uint32_t _off_08003304;
    _off_08003304 = 0x00000068u;
    uint32_t _ea_08003304 = _base_08003304 + _off_08003304;
    uint32_t _post_08003304 = _base_08003304 + _off_08003304;
    _cyc_08003304 += runtime_mem_cycles(_ea_08003304, 4u, 0u);
    uint32_t _v_08003304;
    { uint32_t _w = bus_read_u32(_ea_08003304 & ~3u); uint32_t _rot = (_ea_08003304 & 3u) * 8u; _v_08003304 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08003304;
    g_cpu.R[15] = 0x08003306u;
    runtime_tick(_cyc_08003304);
    /* 08003306  08003306 T cmps r1,r3 */
    g_cpu.R[15] = 0x08003306u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003306 = 1u;
    _cyc_08003306 = 1u;
    uint32_t _rm_08003306 = g_cpu.R[3];
    uint32_t _op2_08003306;
    uint32_t _co_08003306;
    _op2_08003306 = _rm_08003306;
    _co_08003306 = cpsr_c();
    uint32_t _rn_08003306 = g_cpu.R[1];
    uint32_t _r_08003306;
    _r_08003306 = _rn_08003306 - _op2_08003306;
    arm_set_nzcv_sub(_rn_08003306, _op2_08003306, _r_08003306);
    g_cpu.R[15] = 0x08003308u;
    runtime_tick(_cyc_08003306);
    /* 08003308  08003308 T blt 0x0800330c */
    g_cpu.R[15] = 0x08003308u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003308 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08003308 = 3u;
        g_cpu.R[15] = 0x0800330Cu;
        runtime_tick(_cyc_08003308);
        runtime_dispatch(0x0800330Cu);
        return;
    }
    g_cpu.R[15] = 0x0800330Au;
    runtime_tick(_cyc_08003308);
    /* 0800330A  0800330a T b 0x080035fc */
    g_cpu.R[15] = 0x0800330Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800330A = 1u;
    _cyc_0800330A = 3u;
    g_cpu.R[15] = 0x080035FCu;
    runtime_tick(_cyc_0800330A);
    runtime_dispatch(0x080035FCu);
    return;
    g_cpu.R[15] = 0x0800330Cu;
    runtime_tick(_cyc_0800330A);
    /* fall-through to 0x0800330C */
    g_cpu.R[15] = 0x0800330Cu;
    runtime_dispatch(0x0800330Cu);
    return;
}
