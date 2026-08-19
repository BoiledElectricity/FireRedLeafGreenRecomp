// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006F1C mode=thumb end=0x08006F34
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

OVL_EXPORT void func_08006F1C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006F1Cu);
    /* 08006F1C  08006f1c T adds r2,r0,r1 */
    g_cpu.R[15] = 0x08006F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F1C = 1u;
    _cyc_08006F1C = 1u;
    uint32_t _rm_08006F1C = g_cpu.R[1];
    uint32_t _op2_08006F1C;
    uint32_t _co_08006F1C;
    _op2_08006F1C = _rm_08006F1C;
    _co_08006F1C = cpsr_c();
    uint32_t _rn_08006F1C = g_cpu.R[0];
    uint32_t _r_08006F1C;
    _r_08006F1C = _rn_08006F1C + _op2_08006F1C;
    arm_set_nzcv_add(_rn_08006F1C, _op2_08006F1C, _r_08006F1C);
    g_cpu.R[2] = _r_08006F1C;
    g_cpu.R[15] = 0x08006F1Eu;
    runtime_tick(_cyc_08006F1C);
    /* 08006F1E  08006f1e T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x08006F1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F1E = 1u;
    _cyc_08006F1E = 1u;
    uint32_t _rn_08006F1E = g_cpu.R[2];
    uint32_t _r_08006F1E;
    _r_08006F1E = _rn_08006F1E + 0x00000000u;
    arm_set_nzcv_add(_rn_08006F1E, 0x00000000u, _r_08006F1E);
    g_cpu.R[0] = _r_08006F1E;
    g_cpu.R[15] = 0x08006F20u;
    runtime_tick(_cyc_08006F1E);
    /* 08006F20  08006f20 T adds r0,r0,#0x3e */
    g_cpu.R[15] = 0x08006F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F20 = 1u;
    _cyc_08006F20 = 1u;
    uint32_t _rn_08006F20 = g_cpu.R[0];
    uint32_t _r_08006F20;
    _r_08006F20 = _rn_08006F20 + 0x0000003Eu;
    arm_set_nzcv_add(_rn_08006F20, 0x0000003Eu, _r_08006F20);
    g_cpu.R[0] = _r_08006F20;
    g_cpu.R[15] = 0x08006F22u;
    runtime_tick(_cyc_08006F20);
    /* 08006F22  08006f22 T ldrb r1,[r0] */
    g_cpu.R[15] = 0x08006F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F22 = 1u;
    _cyc_08006F22 = 2u;
    uint32_t _base_08006F22 = g_cpu.R[0];
    uint32_t _off_08006F22;
    _off_08006F22 = 0x00000000u;
    uint32_t _ea_08006F22 = _base_08006F22 + _off_08006F22;
    uint32_t _post_08006F22 = _base_08006F22 + _off_08006F22;
    _cyc_08006F22 += runtime_mem_cycles(_ea_08006F22, 1u, 0u);
    uint32_t _v_08006F22;
    _v_08006F22 = bus_read_u8(_ea_08006F22);
    g_cpu.R[1] = _v_08006F22;
    g_cpu.R[15] = 0x08006F24u;
    runtime_tick(_cyc_08006F22);
    /* 08006F24  08006f24 T movs r0,#0x5 */
    g_cpu.R[15] = 0x08006F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F24 = 1u;
    _cyc_08006F24 = 1u;
    uint32_t _r_08006F24;
    _r_08006F24 = 0x00000005u;
    arm_set_nzc_logic(_r_08006F24, cpsr_c());
    g_cpu.R[0] = _r_08006F24;
    g_cpu.R[15] = 0x08006F26u;
    runtime_tick(_cyc_08006F24);
    /* 08006F26  08006f26 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x08006F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F26 = 1u;
    _cyc_08006F26 = 1u;
    uint32_t _rm_08006F26 = g_cpu.R[1];
    uint32_t _op2_08006F26;
    uint32_t _co_08006F26;
    _op2_08006F26 = _rm_08006F26;
    _co_08006F26 = cpsr_c();
    uint32_t _rn_08006F26 = g_cpu.R[0];
    uint32_t _r_08006F26;
    _r_08006F26 = _rn_08006F26 & _op2_08006F26;
    arm_set_nzc_logic(_r_08006F26, _co_08006F26);
    g_cpu.R[0] = _r_08006F26;
    g_cpu.R[15] = 0x08006F28u;
    runtime_tick(_cyc_08006F26);
    /* 08006F28  08006f28 T cmps r0,#0x1 */
    g_cpu.R[15] = 0x08006F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F28 = 1u;
    _cyc_08006F28 = 1u;
    uint32_t _rn_08006F28 = g_cpu.R[0];
    uint32_t _r_08006F28;
    _r_08006F28 = _rn_08006F28 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08006F28, 0x00000001u, _r_08006F28);
    g_cpu.R[15] = 0x08006F2Au;
    runtime_tick(_cyc_08006F28);
    /* 08006F2A  08006f2a T bne 0x08006f3a */
    g_cpu.R[15] = 0x08006F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F2A = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08006F2A = 3u;
        g_cpu.R[15] = 0x08006F3Au;
        runtime_tick(_cyc_08006F2A);
        runtime_dispatch(0x08006F3Au);
        return;
    }
    g_cpu.R[15] = 0x08006F2Cu;
    runtime_tick(_cyc_08006F2A);
    /* 08006F2C  08006f2c T adds r0,r2,#0x0 */
    g_cpu.R[15] = 0x08006F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F2C = 1u;
    _cyc_08006F2C = 1u;
    uint32_t _rn_08006F2C = g_cpu.R[2];
    uint32_t _r_08006F2C;
    _r_08006F2C = _rn_08006F2C + 0x00000000u;
    arm_set_nzcv_add(_rn_08006F2C, 0x00000000u, _r_08006F2C);
    g_cpu.R[0] = _r_08006F2C;
    g_cpu.R[15] = 0x08006F2Eu;
    runtime_tick(_cyc_08006F2C);
    /* 08006F2E  08006f2e T mov r1,r13 */
    g_cpu.R[15] = 0x08006F2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F2E = 1u;
    _cyc_08006F2E = 1u;
    uint32_t _rm_08006F2E = g_cpu.R[13];
    uint32_t _op2_08006F2E;
    uint32_t _co_08006F2E;
    _op2_08006F2E = _rm_08006F2E;
    _co_08006F2E = cpsr_c();
    uint32_t _r_08006F2E;
    _r_08006F2E = _op2_08006F2E;
    g_cpu.R[1] = _r_08006F2E;
    g_cpu.R[15] = 0x08006F30u;
    runtime_tick(_cyc_08006F2E);
    /* 08006F30  08006f30 T bl.hi 0x08007f34 */
    g_cpu.R[15] = 0x08006F30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F30 = 1u;
    _cyc_08006F30 = 1u;
    g_cpu.R[14] = 0x08007F34u;
    g_cpu.R[15] = 0x08006F32u;
    runtime_tick(_cyc_08006F30);
    /* 08006F32  08006f32 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08006F32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F32 = 1u;
    _cyc_08006F32 = 3u;
    uint32_t _blt_08006F32 = (g_cpu.R[14] + 0x00000B30u) & ~1u;
    g_cpu.R[14] = 0x08006F35u;
    g_cpu.R[15] = _blt_08006F32;
    runtime_call_push_return(0x08006F34u);
    runtime_tick(_cyc_08006F32);
    _cyc_08006F32 = 0u;
    runtime_dispatch(_blt_08006F32);
    if (g_cpu.R[15] != 0x08006F34u) { runtime_call_cancel_return(0x08006F34u); return; }
    g_cpu.R[15] = 0x08006F34u;
    runtime_tick(_cyc_08006F32);
    /* fall-through to 0x08006F34 */
    g_cpu.R[15] = 0x08006F34u;
    runtime_dispatch(0x08006F34u);
    return;
}
