// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081DD754 mode=thumb end=0x081DD760
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

OVL_EXPORT void func_081DD754(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081DD754u);
    /* 081DD754  081dd754 T ldr r0,[r1] */
    g_cpu.R[15] = 0x081DD754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD754 = 1u;
    _cyc_081DD754 = 2u;
    uint32_t _base_081DD754 = g_cpu.R[1];
    uint32_t _off_081DD754;
    _off_081DD754 = 0x00000000u;
    uint32_t _ea_081DD754 = _base_081DD754 + _off_081DD754;
    uint32_t _post_081DD754 = _base_081DD754 + _off_081DD754;
    _cyc_081DD754 += runtime_mem_cycles(_ea_081DD754, 4u, 0u);
    uint32_t _v_081DD754;
    { uint32_t _w = bus_read_u32(_ea_081DD754 & ~3u); uint32_t _rot = (_ea_081DD754 & 3u) * 8u; _v_081DD754 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081DD754;
    g_cpu.R[15] = 0x081DD756u;
    runtime_tick(_cyc_081DD754);
    /* 081DD756  081dd756 T ands r0,r0,r3 */
    g_cpu.R[15] = 0x081DD756u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD756 = 1u;
    _cyc_081DD756 = 1u;
    uint32_t _rm_081DD756 = g_cpu.R[3];
    uint32_t _op2_081DD756;
    uint32_t _co_081DD756;
    _op2_081DD756 = _rm_081DD756;
    _co_081DD756 = cpsr_c();
    uint32_t _rn_081DD756 = g_cpu.R[0];
    uint32_t _r_081DD756;
    _r_081DD756 = _rn_081DD756 & _op2_081DD756;
    arm_set_nzc_logic(_r_081DD756, _co_081DD756);
    g_cpu.R[0] = _r_081DD756;
    g_cpu.R[15] = 0x081DD758u;
    runtime_tick(_cyc_081DD756);
    /* 081DD758  081dd758 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x081DD758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD758 = 1u;
    _cyc_081DD758 = 1u;
    uint32_t _rn_081DD758 = g_cpu.R[0];
    uint32_t _r_081DD758;
    _r_081DD758 = _rn_081DD758 - 0x00000000u;
    arm_set_nzcv_sub(_rn_081DD758, 0x00000000u, _r_081DD758);
    g_cpu.R[15] = 0x081DD75Au;
    runtime_tick(_cyc_081DD758);
    /* 081DD75A  081dd75a T beq 0x081dd760 */
    g_cpu.R[15] = 0x081DD75Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD75A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081DD75A = 3u;
        g_cpu.R[15] = 0x081DD760u;
        runtime_tick(_cyc_081DD75A);
        runtime_dispatch(0x081DD760u);
        return;
    }
    g_cpu.R[15] = 0x081DD75Cu;
    runtime_tick(_cyc_081DD75A);
    /* 081DD75C  081dd75c T ldr r0,[r15,#0x34] */
    g_cpu.R[15] = 0x081DD75Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD75C = 1u;
    _cyc_081DD75C = 2u;
    uint32_t _base_081DD75C = 0x081DD760u & ~3u;
    uint32_t _off_081DD75C;
    _off_081DD75C = 0x00000034u;
    uint32_t _ea_081DD75C = _base_081DD75C + _off_081DD75C;
    uint32_t _post_081DD75C = _base_081DD75C + _off_081DD75C;
    _cyc_081DD75C += runtime_mem_cycles(_ea_081DD75C, 4u, 0u);
    uint32_t _v_081DD75C;
    { uint32_t _w = bus_read_u32(_ea_081DD75C & ~3u); uint32_t _rot = (_ea_081DD75C & 3u) * 8u; _v_081DD75C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081DD75C;
    g_cpu.R[15] = 0x081DD75Eu;
    runtime_tick(_cyc_081DD75C);
    /* 081DD75E  081dd75e T str r0,[r1] */
    g_cpu.R[15] = 0x081DD75Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD75E = 1u;
    _cyc_081DD75E = 1u;
    uint32_t _base_081DD75E = g_cpu.R[1];
    uint32_t _off_081DD75E;
    _off_081DD75E = 0x00000000u;
    uint32_t _ea_081DD75E = _base_081DD75E + _off_081DD75E;
    uint32_t _post_081DD75E = _base_081DD75E + _off_081DD75E;
    _cyc_081DD75E += runtime_mem_cycles(_ea_081DD75E, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081DD75Eu, _ea_081DD75E & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_081DD75E & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x081DD760u;
    runtime_tick(_cyc_081DD75E);
    /* fall-through to 0x081DD760 */
    g_cpu.R[15] = 0x081DD760u;
    runtime_dispatch(0x081DD760u);
    return;
}
