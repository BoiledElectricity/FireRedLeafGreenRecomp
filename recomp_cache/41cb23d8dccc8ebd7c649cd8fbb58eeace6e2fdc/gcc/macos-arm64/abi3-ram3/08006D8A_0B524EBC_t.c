// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006D8A mode=thumb end=0x08006D9E
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

OVL_EXPORT void func_08006D8A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006D8Au);
    /* 08006D8A  08006d8a T mov r3,r8 */
    g_cpu.R[15] = 0x08006D8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D8A = 1u;
    _cyc_08006D8A = 1u;
    uint32_t _rm_08006D8A = g_cpu.R[8];
    uint32_t _op2_08006D8A;
    uint32_t _co_08006D8A;
    _op2_08006D8A = _rm_08006D8A;
    _co_08006D8A = cpsr_c();
    uint32_t _r_08006D8A;
    _r_08006D8A = _op2_08006D8A;
    g_cpu.R[3] = _r_08006D8A;
    g_cpu.R[15] = 0x08006D8Cu;
    runtime_tick(_cyc_08006D8A);
    /* 08006D8C  08006d8c T ands r0,r0,r3 */
    g_cpu.R[15] = 0x08006D8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D8C = 1u;
    _cyc_08006D8C = 1u;
    uint32_t _rm_08006D8C = g_cpu.R[3];
    uint32_t _op2_08006D8C;
    uint32_t _co_08006D8C;
    _op2_08006D8C = _rm_08006D8C;
    _co_08006D8C = cpsr_c();
    uint32_t _rn_08006D8C = g_cpu.R[0];
    uint32_t _r_08006D8C;
    _r_08006D8C = _rn_08006D8C & _op2_08006D8C;
    arm_set_nzc_logic(_r_08006D8C, _co_08006D8C);
    g_cpu.R[0] = _r_08006D8C;
    g_cpu.R[15] = 0x08006D8Eu;
    runtime_tick(_cyc_08006D8C);
    /* 08006D8E  08006d8e T cmps r0,r8 */
    g_cpu.R[15] = 0x08006D8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D8E = 1u;
    _cyc_08006D8E = 1u;
    uint32_t _rm_08006D8E = g_cpu.R[8];
    uint32_t _op2_08006D8E;
    uint32_t _co_08006D8E;
    _op2_08006D8E = _rm_08006D8E;
    _co_08006D8E = cpsr_c();
    uint32_t _rn_08006D8E = g_cpu.R[0];
    uint32_t _r_08006D8E;
    _r_08006D8E = _rn_08006D8E - _op2_08006D8E;
    arm_set_nzcv_sub(_rn_08006D8E, _op2_08006D8E, _r_08006D8E);
    g_cpu.R[15] = 0x08006D90u;
    runtime_tick(_cyc_08006D8E);
    /* 08006D90  08006d90 T bne 0x08006dac */
    g_cpu.R[15] = 0x08006D90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D90 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08006D90 = 3u;
        g_cpu.R[15] = 0x08006DACu;
        runtime_tick(_cyc_08006D90);
        runtime_dispatch(0x08006DACu);
        return;
    }
    g_cpu.R[15] = 0x08006D92u;
    runtime_tick(_cyc_08006D90);
    /* 08006D92  08006d92 T ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x08006D92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D92 = 1u;
    _cyc_08006D92 = 2u;
    uint32_t _base_08006D92 = g_cpu.R[4];
    uint32_t _off_08006D92;
    _off_08006D92 = 0x00000001u;
    uint32_t _ea_08006D92 = _base_08006D92 + _off_08006D92;
    uint32_t _post_08006D92 = _base_08006D92 + _off_08006D92;
    _cyc_08006D92 += runtime_mem_cycles(_ea_08006D92, 1u, 0u);
    uint32_t _v_08006D92;
    _v_08006D92 = bus_read_u8(_ea_08006D92);
    g_cpu.R[0] = _v_08006D92;
    g_cpu.R[15] = 0x08006D94u;
    runtime_tick(_cyc_08006D92);
    /* 08006D94  08006d94 T movs r0,r0,lsr #6 */
    g_cpu.R[15] = 0x08006D94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D94 = 1u;
    _cyc_08006D94 = 1u;
    uint32_t _rm_08006D94 = g_cpu.R[0];
    uint32_t _op2_08006D94;
    uint32_t _co_08006D94;
    _op2_08006D94 = _rm_08006D94 >> 6;
    _co_08006D94 = (_rm_08006D94 >> 5) & 1u;
    uint32_t _r_08006D94;
    _r_08006D94 = _op2_08006D94;
    arm_set_nzc_logic(_r_08006D94, _co_08006D94);
    g_cpu.R[0] = _r_08006D94;
    g_cpu.R[15] = 0x08006D96u;
    runtime_tick(_cyc_08006D94);
    /* 08006D96  08006d96 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08006D96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D96 = 1u;
    _cyc_08006D96 = 1u;
    uint32_t _rn_08006D96 = g_cpu.R[0];
    uint32_t _r_08006D96;
    _r_08006D96 = _rn_08006D96 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08006D96, 0x00000000u, _r_08006D96);
    g_cpu.R[15] = 0x08006D98u;
    runtime_tick(_cyc_08006D96);
    /* 08006D98  08006d98 T beq 0x08006d9e */
    g_cpu.R[15] = 0x08006D98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D98 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08006D98 = 3u;
        g_cpu.R[15] = 0x08006D9Eu;
        runtime_tick(_cyc_08006D98);
        runtime_dispatch(0x08006D9Eu);
        return;
    }
    g_cpu.R[15] = 0x08006D9Au;
    runtime_tick(_cyc_08006D98);
    /* 08006D9A  08006d9a T cmps r0,#0x2 */
    g_cpu.R[15] = 0x08006D9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D9A = 1u;
    _cyc_08006D9A = 1u;
    uint32_t _rn_08006D9A = g_cpu.R[0];
    uint32_t _r_08006D9A;
    _r_08006D9A = _rn_08006D9A - 0x00000002u;
    arm_set_nzcv_sub(_rn_08006D9A, 0x00000002u, _r_08006D9A);
    g_cpu.R[15] = 0x08006D9Cu;
    runtime_tick(_cyc_08006D9A);
    /* 08006D9C  08006d9c T bne 0x08006dac */
    g_cpu.R[15] = 0x08006D9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D9C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08006D9C = 3u;
        g_cpu.R[15] = 0x08006DACu;
        runtime_tick(_cyc_08006D9C);
        runtime_dispatch(0x08006DACu);
        return;
    }
    g_cpu.R[15] = 0x08006D9Eu;
    runtime_tick(_cyc_08006D9C);
    /* fall-through to 0x08006D9E */
    g_cpu.R[15] = 0x08006D9Eu;
    runtime_dispatch(0x08006D9Eu);
    return;
}
