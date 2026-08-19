// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081DD084 mode=thumb end=0x081DD08C
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

OVL_EXPORT void func_081DD084(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081DD084u);
    /* 081DD084  081dd084 T ldr r1,[r15,#0x54] */
    g_cpu.R[15] = 0x081DD084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD084 = 1u;
    _cyc_081DD084 = 2u;
    uint32_t _base_081DD084 = 0x081DD088u & ~3u;
    uint32_t _off_081DD084;
    _off_081DD084 = 0x00000054u;
    uint32_t _ea_081DD084 = _base_081DD084 + _off_081DD084;
    uint32_t _post_081DD084 = _base_081DD084 + _off_081DD084;
    _cyc_081DD084 += runtime_mem_cycles(_ea_081DD084, 4u, 0u);
    uint32_t _v_081DD084;
    { uint32_t _w = bus_read_u32(_ea_081DD084 & ~3u); uint32_t _rot = (_ea_081DD084 & 3u) * 8u; _v_081DD084 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_081DD084;
    g_cpu.R[15] = 0x081DD086u;
    runtime_tick(_cyc_081DD084);
    /* 081DD086  081dd086 T movs r2,#0x34 */
    g_cpu.R[15] = 0x081DD086u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD086 = 1u;
    _cyc_081DD086 = 1u;
    uint32_t _r_081DD086;
    _r_081DD086 = 0x00000034u;
    arm_set_nzc_logic(_r_081DD086, cpsr_c());
    g_cpu.R[2] = _r_081DD086;
    g_cpu.R[15] = 0x081DD088u;
    runtime_tick(_cyc_081DD086);
    /* 081DD088  081dd088 T bl.hi 0x081e508c */
    g_cpu.R[15] = 0x081DD088u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD088 = 1u;
    _cyc_081DD088 = 1u;
    g_cpu.R[14] = 0x081E508Cu;
    g_cpu.R[15] = 0x081DD08Au;
    runtime_tick(_cyc_081DD088);
    /* 081DD08A  081dd08a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x081DD08Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081DD08A = 1u;
    _cyc_081DD08A = 3u;
    uint32_t _blt_081DD08A = (g_cpu.R[14] + 0x00000DECu) & ~1u;
    g_cpu.R[14] = 0x081DD08Du;
    g_cpu.R[15] = _blt_081DD08A;
    runtime_call_push_return(0x081DD08Cu);
    runtime_tick(_cyc_081DD08A);
    _cyc_081DD08A = 0u;
    runtime_dispatch(_blt_081DD08A);
    if (g_cpu.R[15] != 0x081DD08Cu) { runtime_call_cancel_return(0x081DD08Cu); return; }
    g_cpu.R[15] = 0x081DD08Cu;
    runtime_tick(_cyc_081DD08A);
    /* fall-through to 0x081DD08C */
    g_cpu.R[15] = 0x081DD08Cu;
    runtime_dispatch(0x081DD08Cu);
    return;
}
