// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002E88 mode=thumb end=0x08002E96
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

OVL_EXPORT void func_08002E88(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002E88u);
    /* 08002E88  08002e88 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08002E88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E88 = 1u;
    _cyc_08002E88 = 1u;
    uint32_t _rm_08002E88 = g_cpu.R[1];
    uint32_t _op2_08002E88;
    uint32_t _co_08002E88;
    _op2_08002E88 = _rm_08002E88;
    _co_08002E88 = cpsr_c();
    uint32_t _rn_08002E88 = g_cpu.R[0];
    uint32_t _r_08002E88;
    _r_08002E88 = _rn_08002E88 + _op2_08002E88;
    arm_set_nzcv_add(_rn_08002E88, _op2_08002E88, _r_08002E88);
    g_cpu.R[0] = _r_08002E88;
    g_cpu.R[15] = 0x08002E8Au;
    runtime_tick(_cyc_08002E88);
    /* 08002E8A  08002e8a T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08002E8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E8A = 1u;
    _cyc_08002E8A = 1u;
    uint32_t _rm_08002E8A = g_cpu.R[0];
    uint32_t _op2_08002E8A;
    uint32_t _co_08002E8A;
    _op2_08002E8A = _rm_08002E8A << 2;
    _co_08002E8A = (_rm_08002E8A >> 30) & 1u;
    uint32_t _r_08002E8A;
    _r_08002E8A = _op2_08002E8A;
    arm_set_nzc_logic(_r_08002E8A, _co_08002E8A);
    g_cpu.R[0] = _r_08002E8A;
    g_cpu.R[15] = 0x08002E8Cu;
    runtime_tick(_cyc_08002E8A);
    /* 08002E8C  08002e8c T adds r0,r0,r2 */
    g_cpu.R[15] = 0x08002E8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E8C = 1u;
    _cyc_08002E8C = 1u;
    uint32_t _rm_08002E8C = g_cpu.R[2];
    uint32_t _op2_08002E8C;
    uint32_t _co_08002E8C;
    _op2_08002E8C = _rm_08002E8C;
    _co_08002E8C = cpsr_c();
    uint32_t _rn_08002E8C = g_cpu.R[0];
    uint32_t _r_08002E8C;
    _r_08002E8C = _rn_08002E8C + _op2_08002E8C;
    arm_set_nzcv_add(_rn_08002E8C, _op2_08002E8C, _r_08002E8C);
    g_cpu.R[0] = _r_08002E8C;
    g_cpu.R[15] = 0x08002E8Eu;
    runtime_tick(_cyc_08002E8C);
    /* 08002E8E  08002e8e T ldr r1,[r0] */
    g_cpu.R[15] = 0x08002E8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E8E = 1u;
    _cyc_08002E8E = 2u;
    uint32_t _base_08002E8E = g_cpu.R[0];
    uint32_t _off_08002E8E;
    _off_08002E8E = 0x00000000u;
    uint32_t _ea_08002E8E = _base_08002E8E + _off_08002E8E;
    uint32_t _post_08002E8E = _base_08002E8E + _off_08002E8E;
    _cyc_08002E8E += runtime_mem_cycles(_ea_08002E8E, 4u, 0u);
    uint32_t _v_08002E8E;
    { uint32_t _w = bus_read_u32(_ea_08002E8E & ~3u); uint32_t _rot = (_ea_08002E8E & 3u) * 8u; _v_08002E8E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08002E8E;
    g_cpu.R[15] = 0x08002E90u;
    runtime_tick(_cyc_08002E8E);
    /* 08002E90  08002e90 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08002E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E90 = 1u;
    _cyc_08002E90 = 1u;
    uint32_t _rn_08002E90 = g_cpu.R[4];
    uint32_t _r_08002E90;
    _r_08002E90 = _rn_08002E90 + 0x00000000u;
    arm_set_nzcv_add(_rn_08002E90, 0x00000000u, _r_08002E90);
    g_cpu.R[0] = _r_08002E90;
    g_cpu.R[15] = 0x08002E92u;
    runtime_tick(_cyc_08002E90);
    /* 08002E92  08002e92 T bl.hi 0x081e2e96 */
    g_cpu.R[15] = 0x08002E92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E92 = 1u;
    _cyc_08002E92 = 1u;
    g_cpu.R[14] = 0x081E2E96u;
    g_cpu.R[15] = 0x08002E94u;
    runtime_tick(_cyc_08002E92);
    /* 08002E94  08002e94 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08002E94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002E94 = 1u;
    _cyc_08002E94 = 3u;
    uint32_t _blt_08002E94 = (g_cpu.R[14] + 0x00000D16u) & ~1u;
    g_cpu.R[14] = 0x08002E97u;
    g_cpu.R[15] = _blt_08002E94;
    runtime_call_push_return(0x08002E96u);
    runtime_tick(_cyc_08002E94);
    _cyc_08002E94 = 0u;
    runtime_dispatch(_blt_08002E94);
    if (g_cpu.R[15] != 0x08002E96u) { runtime_call_cancel_return(0x08002E96u); return; }
    g_cpu.R[15] = 0x08002E96u;
    runtime_tick(_cyc_08002E94);
    /* fall-through to 0x08002E96 */
    g_cpu.R[15] = 0x08002E96u;
    runtime_dispatch(0x08002E96u);
    return;
}
