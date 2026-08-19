// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081E3500 mode=thumb end=0x081E3514
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

OVL_EXPORT void func_081E3500(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081E3500u);
    /* 081E3500  081e3500 T bls 0x081e34fc */
    g_cpu.R[15] = 0x081E3500u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3500 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_081E3500 = 3u;
        g_cpu.R[15] = 0x081E34FCu;
        runtime_tick(_cyc_081E3500);
        runtime_dispatch(0x081E34FCu);
        return;
    }
    g_cpu.R[15] = 0x081E3502u;
    runtime_tick(_cyc_081E3500);
    /* 081E3502  081e3502 T strh r7,[r4,#0x2] */
    g_cpu.R[15] = 0x081E3502u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3502 = 1u;
    _cyc_081E3502 = 1u;
    uint32_t _base_081E3502 = g_cpu.R[4];
    uint32_t _off_081E3502;
    _off_081E3502 = 0x00000002u;
    uint32_t _ea_081E3502 = _base_081E3502 + _off_081E3502;
    uint32_t _post_081E3502 = _base_081E3502 + _off_081E3502;
    _cyc_081E3502 += runtime_mem_cycles(_ea_081E3502, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081E3502u, _ea_081E3502 & ~1u, (uint32_t)(g_cpu.R[7] & 0xFFFFu), 2u);
    bus_write_u16(_ea_081E3502 & ~1u, (uint16_t)(g_cpu.R[7] & 0xFFFFu));
    g_cpu.R[15] = 0x081E3504u;
    runtime_tick(_cyc_081E3502);
    /* 081E3504  081e3504 T strh r7,[r4] */
    g_cpu.R[15] = 0x081E3504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3504 = 1u;
    _cyc_081E3504 = 1u;
    uint32_t _base_081E3504 = g_cpu.R[4];
    uint32_t _off_081E3504;
    _off_081E3504 = 0x00000000u;
    uint32_t _ea_081E3504 = _base_081E3504 + _off_081E3504;
    uint32_t _post_081E3504 = _base_081E3504 + _off_081E3504;
    _cyc_081E3504 += runtime_mem_cycles(_ea_081E3504, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081E3504u, _ea_081E3504 & ~1u, (uint32_t)(g_cpu.R[7] & 0xFFFFu), 2u);
    bus_write_u16(_ea_081E3504 & ~1u, (uint16_t)(g_cpu.R[7] & 0xFFFFu));
    g_cpu.R[15] = 0x081E3506u;
    runtime_tick(_cyc_081E3504);
    /* 081E3506  081e3506 T subs r0,r5,#0x1 */
    g_cpu.R[15] = 0x081E3506u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3506 = 1u;
    _cyc_081E3506 = 1u;
    uint32_t _rn_081E3506 = g_cpu.R[5];
    uint32_t _r_081E3506;
    _r_081E3506 = _rn_081E3506 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081E3506, 0x00000001u, _r_081E3506);
    g_cpu.R[0] = _r_081E3506;
    g_cpu.R[15] = 0x081E3508u;
    runtime_tick(_cyc_081E3506);
    /* 081E3508  081e3508 T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x081E3508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3508 = 1u;
    _cyc_081E3508 = 1u;
    uint32_t _rm_081E3508 = g_cpu.R[0];
    uint32_t _op2_081E3508;
    uint32_t _co_081E3508;
    _op2_081E3508 = _rm_081E3508 << 24;
    _co_081E3508 = (_rm_081E3508 >> 8) & 1u;
    uint32_t _r_081E3508;
    _r_081E3508 = _op2_081E3508;
    arm_set_nzc_logic(_r_081E3508, _co_081E3508);
    g_cpu.R[0] = _r_081E3508;
    g_cpu.R[15] = 0x081E350Au;
    runtime_tick(_cyc_081E3508);
    /* 081E350A  081e350a T movs r5,r0,lsr #24 */
    g_cpu.R[15] = 0x081E350Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E350A = 1u;
    _cyc_081E350A = 1u;
    uint32_t _rm_081E350A = g_cpu.R[0];
    uint32_t _op2_081E350A;
    uint32_t _co_081E350A;
    _op2_081E350A = _rm_081E350A >> 24;
    _co_081E350A = (_rm_081E350A >> 23) & 1u;
    uint32_t _r_081E350A;
    _r_081E350A = _op2_081E350A;
    arm_set_nzc_logic(_r_081E350A, _co_081E350A);
    g_cpu.R[5] = _r_081E350A;
    g_cpu.R[15] = 0x081E350Cu;
    runtime_tick(_cyc_081E350A);
    /* 081E350C  081e350c T cmps r5,#0xff */
    g_cpu.R[15] = 0x081E350Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E350C = 1u;
    _cyc_081E350C = 1u;
    uint32_t _rn_081E350C = g_cpu.R[5];
    uint32_t _r_081E350C;
    _r_081E350C = _rn_081E350C - 0x000000FFu;
    arm_set_nzcv_sub(_rn_081E350C, 0x000000FFu, _r_081E350C);
    g_cpu.R[15] = 0x081E350Eu;
    runtime_tick(_cyc_081E350C);
    /* 081E350E  081e350e T beq 0x081e351a */
    g_cpu.R[15] = 0x081E350Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E350E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081E350E = 3u;
        g_cpu.R[15] = 0x081E351Au;
        runtime_tick(_cyc_081E350E);
        runtime_dispatch(0x081E351Au);
        return;
    }
    g_cpu.R[15] = 0x081E3510u;
    runtime_tick(_cyc_081E350E);
    /* 081E3510  081e3510 T bl.hi 0x081e3514 */
    g_cpu.R[15] = 0x081E3510u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3510 = 1u;
    _cyc_081E3510 = 1u;
    g_cpu.R[14] = 0x081E3514u;
    g_cpu.R[15] = 0x081E3512u;
    runtime_tick(_cyc_081E3510);
    /* 081E3512  081e3512 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x081E3512u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E3512 = 1u;
    _cyc_081E3512 = 3u;
    uint32_t _blt_081E3512 = (g_cpu.R[14] + 0x000000B0u) & ~1u;
    g_cpu.R[14] = 0x081E3515u;
    g_cpu.R[15] = _blt_081E3512;
    runtime_call_push_return(0x081E3514u);
    runtime_tick(_cyc_081E3512);
    _cyc_081E3512 = 0u;
    runtime_dispatch(_blt_081E3512);
    if (g_cpu.R[15] != 0x081E3514u) { runtime_call_cancel_return(0x081E3514u); return; }
    g_cpu.R[15] = 0x081E3514u;
    runtime_tick(_cyc_081E3512);
    /* fall-through to 0x081E3514 */
    g_cpu.R[15] = 0x081E3514u;
    runtime_dispatch(0x081E3514u);
    return;
}
