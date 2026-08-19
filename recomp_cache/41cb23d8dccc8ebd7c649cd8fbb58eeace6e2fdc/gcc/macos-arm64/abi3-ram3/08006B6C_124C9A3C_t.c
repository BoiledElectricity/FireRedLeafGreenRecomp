// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006B6C mode=thumb end=0x08006B82
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

OVL_EXPORT void func_08006B6C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006B6Cu);
    /* 08006B6C  08006b6c T adds r5,r4,#0x0 */
    g_cpu.R[15] = 0x08006B6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B6C = 1u;
    _cyc_08006B6C = 1u;
    uint32_t _rn_08006B6C = g_cpu.R[4];
    uint32_t _r_08006B6C;
    _r_08006B6C = _rn_08006B6C + 0x00000000u;
    arm_set_nzcv_add(_rn_08006B6C, 0x00000000u, _r_08006B6C);
    g_cpu.R[5] = _r_08006B6C;
    g_cpu.R[15] = 0x08006B6Eu;
    runtime_tick(_cyc_08006B6C);
    /* 08006B6E  08006b6e T adds r5,r5,#0x3e */
    g_cpu.R[15] = 0x08006B6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B6E = 1u;
    _cyc_08006B6E = 1u;
    uint32_t _rn_08006B6E = g_cpu.R[5];
    uint32_t _r_08006B6E;
    _r_08006B6E = _rn_08006B6E + 0x0000003Eu;
    arm_set_nzcv_add(_rn_08006B6E, 0x0000003Eu, _r_08006B6E);
    g_cpu.R[5] = _r_08006B6E;
    g_cpu.R[15] = 0x08006B70u;
    runtime_tick(_cyc_08006B6E);
    /* 08006B70  08006b70 T ldrb r1,[r5] */
    g_cpu.R[15] = 0x08006B70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B70 = 1u;
    _cyc_08006B70 = 2u;
    uint32_t _base_08006B70 = g_cpu.R[5];
    uint32_t _off_08006B70;
    _off_08006B70 = 0x00000000u;
    uint32_t _ea_08006B70 = _base_08006B70 + _off_08006B70;
    uint32_t _post_08006B70 = _base_08006B70 + _off_08006B70;
    _cyc_08006B70 += runtime_mem_cycles(_ea_08006B70, 1u, 0u);
    uint32_t _v_08006B70;
    _v_08006B70 = bus_read_u8(_ea_08006B70);
    g_cpu.R[1] = _v_08006B70;
    g_cpu.R[15] = 0x08006B72u;
    runtime_tick(_cyc_08006B70);
    /* 08006B72  08006b72 T adds r0,r7,#0x0 */
    g_cpu.R[15] = 0x08006B72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B72 = 1u;
    _cyc_08006B72 = 1u;
    uint32_t _rn_08006B72 = g_cpu.R[7];
    uint32_t _r_08006B72;
    _r_08006B72 = _rn_08006B72 + 0x00000000u;
    arm_set_nzcv_add(_rn_08006B72, 0x00000000u, _r_08006B72);
    g_cpu.R[0] = _r_08006B72;
    g_cpu.R[15] = 0x08006B74u;
    runtime_tick(_cyc_08006B72);
    /* 08006B74  08006b74 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x08006B74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B74 = 1u;
    _cyc_08006B74 = 1u;
    uint32_t _rm_08006B74 = g_cpu.R[1];
    uint32_t _op2_08006B74;
    uint32_t _co_08006B74;
    _op2_08006B74 = _rm_08006B74;
    _co_08006B74 = cpsr_c();
    uint32_t _rn_08006B74 = g_cpu.R[0];
    uint32_t _r_08006B74;
    _r_08006B74 = _rn_08006B74 & _op2_08006B74;
    arm_set_nzc_logic(_r_08006B74, _co_08006B74);
    g_cpu.R[0] = _r_08006B74;
    g_cpu.R[15] = 0x08006B76u;
    runtime_tick(_cyc_08006B74);
    /* 08006B76  08006b76 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08006B76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B76 = 1u;
    _cyc_08006B76 = 1u;
    uint32_t _rn_08006B76 = g_cpu.R[0];
    uint32_t _r_08006B76;
    _r_08006B76 = _rn_08006B76 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08006B76, 0x00000000u, _r_08006B76);
    g_cpu.R[15] = 0x08006B78u;
    runtime_tick(_cyc_08006B76);
    /* 08006B78  08006b78 T beq 0x08006b92 */
    g_cpu.R[15] = 0x08006B78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B78 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08006B78 = 3u;
        g_cpu.R[15] = 0x08006B92u;
        runtime_tick(_cyc_08006B78);
        runtime_dispatch(0x08006B92u);
        return;
    }
    g_cpu.R[15] = 0x08006B7Au;
    runtime_tick(_cyc_08006B78);
    /* 08006B7A  08006b7a T ldr r1,[r4,#0x1c] */
    g_cpu.R[15] = 0x08006B7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B7A = 1u;
    _cyc_08006B7A = 2u;
    uint32_t _base_08006B7A = g_cpu.R[4];
    uint32_t _off_08006B7A;
    _off_08006B7A = 0x0000001Cu;
    uint32_t _ea_08006B7A = _base_08006B7A + _off_08006B7A;
    uint32_t _post_08006B7A = _base_08006B7A + _off_08006B7A;
    _cyc_08006B7A += runtime_mem_cycles(_ea_08006B7A, 4u, 0u);
    uint32_t _v_08006B7A;
    { uint32_t _w = bus_read_u32(_ea_08006B7A & ~3u); uint32_t _rot = (_ea_08006B7A & 3u) * 8u; _v_08006B7A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08006B7A;
    g_cpu.R[15] = 0x08006B7Cu;
    runtime_tick(_cyc_08006B7A);
    /* 08006B7C  08006b7c T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08006B7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B7C = 1u;
    _cyc_08006B7C = 1u;
    uint32_t _rn_08006B7C = g_cpu.R[4];
    uint32_t _r_08006B7C;
    _r_08006B7C = _rn_08006B7C + 0x00000000u;
    arm_set_nzcv_add(_rn_08006B7C, 0x00000000u, _r_08006B7C);
    g_cpu.R[0] = _r_08006B7C;
    g_cpu.R[15] = 0x08006B7Eu;
    runtime_tick(_cyc_08006B7C);
    /* 08006B7E  08006b7e T bl.hi 0x081e3b82 */
    g_cpu.R[15] = 0x08006B7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B7E = 1u;
    _cyc_08006B7E = 1u;
    g_cpu.R[14] = 0x081E3B82u;
    g_cpu.R[15] = 0x08006B80u;
    runtime_tick(_cyc_08006B7E);
    /* 08006B80  08006b80 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08006B80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006B80 = 1u;
    _cyc_08006B80 = 3u;
    uint32_t _blt_08006B80 = (g_cpu.R[14] + 0x0000002Au) & ~1u;
    g_cpu.R[14] = 0x08006B83u;
    g_cpu.R[15] = _blt_08006B80;
    runtime_call_push_return(0x08006B82u);
    runtime_tick(_cyc_08006B80);
    _cyc_08006B80 = 0u;
    runtime_dispatch(_blt_08006B80);
    if (g_cpu.R[15] != 0x08006B82u) { runtime_call_cancel_return(0x08006B82u); return; }
    g_cpu.R[15] = 0x08006B82u;
    runtime_tick(_cyc_08006B80);
    /* fall-through to 0x08006B82 */
    g_cpu.R[15] = 0x08006B82u;
    runtime_dispatch(0x08006B82u);
    return;
}
