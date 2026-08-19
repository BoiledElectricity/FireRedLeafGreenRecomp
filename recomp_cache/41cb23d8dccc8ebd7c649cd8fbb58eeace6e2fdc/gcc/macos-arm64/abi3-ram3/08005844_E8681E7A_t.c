// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08005844 mode=thumb end=0x08005852
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

OVL_EXPORT void func_08005844(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08005844u);
    /* 08005844  08005844 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08005844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005844 = 1u;
    _cyc_08005844 = 1u;
    uint32_t _rn_08005844 = g_cpu.R[0];
    uint32_t _r_08005844;
    _r_08005844 = _rn_08005844 + 0x00000001u;
    arm_set_nzcv_add(_rn_08005844, 0x00000001u, _r_08005844);
    g_cpu.R[0] = _r_08005844;
    g_cpu.R[15] = 0x08005846u;
    runtime_tick(_cyc_08005844);
    /* 08005846  08005846 T str r0,[r6] */
    g_cpu.R[15] = 0x08005846u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005846 = 1u;
    _cyc_08005846 = 1u;
    uint32_t _base_08005846 = g_cpu.R[6];
    uint32_t _off_08005846;
    _off_08005846 = 0x00000000u;
    uint32_t _ea_08005846 = _base_08005846 + _off_08005846;
    uint32_t _post_08005846 = _base_08005846 + _off_08005846;
    _cyc_08005846 += runtime_mem_cycles(_ea_08005846, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08005846u, _ea_08005846 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08005846 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08005848u;
    runtime_tick(_cyc_08005846);
    /* 08005848  08005848 T adds r0,r3,#0x0 */
    g_cpu.R[15] = 0x08005848u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005848 = 1u;
    _cyc_08005848 = 1u;
    uint32_t _rn_08005848 = g_cpu.R[3];
    uint32_t _r_08005848;
    _r_08005848 = _rn_08005848 + 0x00000000u;
    arm_set_nzcv_add(_rn_08005848, 0x00000000u, _r_08005848);
    g_cpu.R[0] = _r_08005848;
    g_cpu.R[15] = 0x0800584Au;
    runtime_tick(_cyc_08005848);
    /* 0800584A  0800584a T subs r0,r0,#0xf8 */
    g_cpu.R[15] = 0x0800584Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800584A = 1u;
    _cyc_0800584A = 1u;
    uint32_t _rn_0800584A = g_cpu.R[0];
    uint32_t _r_0800584A;
    _r_0800584A = _rn_0800584A - 0x000000F8u;
    arm_set_nzcv_sub(_rn_0800584A, 0x000000F8u, _r_0800584A);
    g_cpu.R[0] = _r_0800584A;
    g_cpu.R[15] = 0x0800584Cu;
    runtime_tick(_cyc_0800584A);
    /* 0800584C  0800584c T cmps r0,#0x7 */
    g_cpu.R[15] = 0x0800584Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800584C = 1u;
    _cyc_0800584C = 1u;
    uint32_t _rn_0800584C = g_cpu.R[0];
    uint32_t _r_0800584C;
    _r_0800584C = _rn_0800584C - 0x00000007u;
    arm_set_nzcv_sub(_rn_0800584C, 0x00000007u, _r_0800584C);
    g_cpu.R[15] = 0x0800584Eu;
    runtime_tick(_cyc_0800584C);
    /* 0800584E  0800584e T bls 0x08005852 */
    g_cpu.R[15] = 0x0800584Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800584E = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_0800584E = 3u;
        g_cpu.R[15] = 0x08005852u;
        runtime_tick(_cyc_0800584E);
        runtime_dispatch(0x08005852u);
        return;
    }
    g_cpu.R[15] = 0x08005850u;
    runtime_tick(_cyc_0800584E);
    /* 08005850  08005850 T b 0x08005b6c */
    g_cpu.R[15] = 0x08005850u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005850 = 1u;
    _cyc_08005850 = 3u;
    g_cpu.R[15] = 0x08005B6Cu;
    runtime_tick(_cyc_08005850);
    runtime_dispatch(0x08005B6Cu);
    return;
    g_cpu.R[15] = 0x08005852u;
    runtime_tick(_cyc_08005850);
    /* fall-through to 0x08005852 */
    g_cpu.R[15] = 0x08005852u;
    runtime_dispatch(0x08005852u);
    return;
}
