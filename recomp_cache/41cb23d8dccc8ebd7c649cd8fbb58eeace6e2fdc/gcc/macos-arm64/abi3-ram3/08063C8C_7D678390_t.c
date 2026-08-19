// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08063C8C mode=thumb end=0x08063C9E
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

OVL_EXPORT void func_08063C8C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08063C8Cu);
    /* 08063C8C  08063c8c T ldrb r0,[r1] */
    g_cpu.R[15] = 0x08063C8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C8C = 1u;
    _cyc_08063C8C = 2u;
    uint32_t _base_08063C8C = g_cpu.R[1];
    uint32_t _off_08063C8C;
    _off_08063C8C = 0x00000000u;
    uint32_t _ea_08063C8C = _base_08063C8C + _off_08063C8C;
    uint32_t _post_08063C8C = _base_08063C8C + _off_08063C8C;
    _cyc_08063C8C += runtime_mem_cycles(_ea_08063C8C, 1u, 0u);
    uint32_t _v_08063C8C;
    _v_08063C8C = bus_read_u8(_ea_08063C8C);
    g_cpu.R[0] = _v_08063C8C;
    g_cpu.R[15] = 0x08063C8Eu;
    runtime_tick(_cyc_08063C8C);
    /* 08063C8E  08063c8e T movs r0,r0,lsl #25 */
    g_cpu.R[15] = 0x08063C8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C8E = 1u;
    _cyc_08063C8E = 1u;
    uint32_t _rm_08063C8E = g_cpu.R[0];
    uint32_t _op2_08063C8E;
    uint32_t _co_08063C8E;
    _op2_08063C8E = _rm_08063C8E << 25;
    _co_08063C8E = (_rm_08063C8E >> 7) & 1u;
    uint32_t _r_08063C8E;
    _r_08063C8E = _op2_08063C8E;
    arm_set_nzc_logic(_r_08063C8E, _co_08063C8E);
    g_cpu.R[0] = _r_08063C8E;
    g_cpu.R[15] = 0x08063C90u;
    runtime_tick(_cyc_08063C8E);
    /* 08063C90  08063c90 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08063C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C90 = 1u;
    _cyc_08063C90 = 1u;
    uint32_t _rn_08063C90 = g_cpu.R[0];
    uint32_t _r_08063C90;
    _r_08063C90 = _rn_08063C90 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08063C90, 0x00000000u, _r_08063C90);
    g_cpu.R[15] = 0x08063C92u;
    runtime_tick(_cyc_08063C90);
    /* 08063C92  08063c92 T bge 0x08063c9e */
    g_cpu.R[15] = 0x08063C92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C92 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08063C92 = 3u;
        g_cpu.R[15] = 0x08063C9Eu;
        runtime_tick(_cyc_08063C92);
        runtime_dispatch(0x08063C9Eu);
        return;
    }
    g_cpu.R[15] = 0x08063C94u;
    runtime_tick(_cyc_08063C92);
    /* 08063C94  08063c94 T ldrb r0,[r1,#0x1c] */
    g_cpu.R[15] = 0x08063C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C94 = 1u;
    _cyc_08063C94 = 2u;
    uint32_t _base_08063C94 = g_cpu.R[1];
    uint32_t _off_08063C94;
    _off_08063C94 = 0x0000001Cu;
    uint32_t _ea_08063C94 = _base_08063C94 + _off_08063C94;
    uint32_t _post_08063C94 = _base_08063C94 + _off_08063C94;
    _cyc_08063C94 += runtime_mem_cycles(_ea_08063C94, 1u, 0u);
    uint32_t _v_08063C94;
    _v_08063C94 = bus_read_u8(_ea_08063C94);
    g_cpu.R[0] = _v_08063C94;
    g_cpu.R[15] = 0x08063C96u;
    runtime_tick(_cyc_08063C94);
    /* 08063C96  08063c96 T cmps r0,#0xff */
    g_cpu.R[15] = 0x08063C96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C96 = 1u;
    _cyc_08063C96 = 1u;
    uint32_t _rn_08063C96 = g_cpu.R[0];
    uint32_t _r_08063C96;
    _r_08063C96 = _rn_08063C96 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08063C96, 0x000000FFu, _r_08063C96);
    g_cpu.R[15] = 0x08063C98u;
    runtime_tick(_cyc_08063C96);
    /* 08063C98  08063c98 T beq 0x08063c9e */
    g_cpu.R[15] = 0x08063C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C98 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08063C98 = 3u;
        g_cpu.R[15] = 0x08063C9Eu;
        runtime_tick(_cyc_08063C98);
        runtime_dispatch(0x08063C9Eu);
        return;
    }
    g_cpu.R[15] = 0x08063C9Au;
    runtime_tick(_cyc_08063C98);
    /* 08063C9A  08063c9a T movs r0,#0x1 */
    g_cpu.R[15] = 0x08063C9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C9A = 1u;
    _cyc_08063C9A = 1u;
    uint32_t _r_08063C9A;
    _r_08063C9A = 0x00000001u;
    arm_set_nzc_logic(_r_08063C9A, cpsr_c());
    g_cpu.R[0] = _r_08063C9A;
    g_cpu.R[15] = 0x08063C9Cu;
    runtime_tick(_cyc_08063C9A);
    /* 08063C9C  08063c9c T b 0x08063ca0 */
    g_cpu.R[15] = 0x08063C9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08063C9C = 1u;
    _cyc_08063C9C = 3u;
    g_cpu.R[15] = 0x08063CA0u;
    runtime_tick(_cyc_08063C9C);
    runtime_dispatch(0x08063CA0u);
    return;
    g_cpu.R[15] = 0x08063C9Eu;
    runtime_tick(_cyc_08063C9C);
    /* fall-through to 0x08063C9E */
    g_cpu.R[15] = 0x08063C9Eu;
    runtime_dispatch(0x08063C9Eu);
    return;
}
