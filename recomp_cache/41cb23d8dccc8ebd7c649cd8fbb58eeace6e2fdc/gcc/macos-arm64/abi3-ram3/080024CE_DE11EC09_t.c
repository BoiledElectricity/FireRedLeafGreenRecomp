// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080024CE mode=thumb end=0x080024E0
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

OVL_EXPORT void func_080024CE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080024CEu);
    /* 080024CE  080024ce T movs r0,r0,lsl #1 */
    g_cpu.R[15] = 0x080024CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024CE = 1u;
    _cyc_080024CE = 1u;
    uint32_t _rm_080024CE = g_cpu.R[0];
    uint32_t _op2_080024CE;
    uint32_t _co_080024CE;
    _op2_080024CE = _rm_080024CE << 1;
    _co_080024CE = (_rm_080024CE >> 31) & 1u;
    uint32_t _r_080024CE;
    _r_080024CE = _op2_080024CE;
    arm_set_nzc_logic(_r_080024CE, _co_080024CE);
    g_cpu.R[0] = _r_080024CE;
    g_cpu.R[15] = 0x080024D0u;
    runtime_tick(_cyc_080024CE);
    /* 080024D0  080024d0 T adds r0,r0,r4 */
    g_cpu.R[15] = 0x080024D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024D0 = 1u;
    _cyc_080024D0 = 1u;
    uint32_t _rm_080024D0 = g_cpu.R[4];
    uint32_t _op2_080024D0;
    uint32_t _co_080024D0;
    _op2_080024D0 = _rm_080024D0;
    _co_080024D0 = cpsr_c();
    uint32_t _rn_080024D0 = g_cpu.R[0];
    uint32_t _r_080024D0;
    _r_080024D0 = _rn_080024D0 + _op2_080024D0;
    arm_set_nzcv_add(_rn_080024D0, _op2_080024D0, _r_080024D0);
    g_cpu.R[0] = _r_080024D0;
    g_cpu.R[15] = 0x080024D2u;
    runtime_tick(_cyc_080024D0);
    /* 080024D2  080024d2 T mov r5,r8 */
    g_cpu.R[15] = 0x080024D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024D2 = 1u;
    _cyc_080024D2 = 1u;
    uint32_t _rm_080024D2 = g_cpu.R[8];
    uint32_t _op2_080024D2;
    uint32_t _co_080024D2;
    _op2_080024D2 = _rm_080024D2;
    _co_080024D2 = cpsr_c();
    uint32_t _r_080024D2;
    _r_080024D2 = _op2_080024D2;
    g_cpu.R[5] = _r_080024D2;
    g_cpu.R[15] = 0x080024D4u;
    runtime_tick(_cyc_080024D2);
    /* 080024D4  080024d4 T strh r5,[r0] */
    g_cpu.R[15] = 0x080024D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024D4 = 1u;
    _cyc_080024D4 = 1u;
    uint32_t _base_080024D4 = g_cpu.R[0];
    uint32_t _off_080024D4;
    _off_080024D4 = 0x00000000u;
    uint32_t _ea_080024D4 = _base_080024D4 + _off_080024D4;
    uint32_t _post_080024D4 = _base_080024D4 + _off_080024D4;
    _cyc_080024D4 += runtime_mem_cycles(_ea_080024D4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080024D4u, _ea_080024D4 & ~1u, (uint32_t)(g_cpu.R[5] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080024D4 & ~1u, (uint16_t)(g_cpu.R[5] & 0xFFFFu));
    g_cpu.R[15] = 0x080024D6u;
    runtime_tick(_cyc_080024D4);
    /* 080024D6  080024d6 T adds r0,r2,#0x1 */
    g_cpu.R[15] = 0x080024D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024D6 = 1u;
    _cyc_080024D6 = 1u;
    uint32_t _rn_080024D6 = g_cpu.R[2];
    uint32_t _r_080024D6;
    _r_080024D6 = _rn_080024D6 + 0x00000001u;
    arm_set_nzcv_add(_rn_080024D6, 0x00000001u, _r_080024D6);
    g_cpu.R[0] = _r_080024D6;
    g_cpu.R[15] = 0x080024D8u;
    runtime_tick(_cyc_080024D6);
    /* 080024D8  080024d8 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x080024D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024D8 = 1u;
    _cyc_080024D8 = 1u;
    uint32_t _rm_080024D8 = g_cpu.R[0];
    uint32_t _op2_080024D8;
    uint32_t _co_080024D8;
    _op2_080024D8 = _rm_080024D8 << 16;
    _co_080024D8 = (_rm_080024D8 >> 16) & 1u;
    uint32_t _r_080024D8;
    _r_080024D8 = _op2_080024D8;
    arm_set_nzc_logic(_r_080024D8, _co_080024D8);
    g_cpu.R[0] = _r_080024D8;
    g_cpu.R[15] = 0x080024DAu;
    runtime_tick(_cyc_080024D8);
    /* 080024DA  080024da T movs r2,r0,lsr #16 */
    g_cpu.R[15] = 0x080024DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024DA = 1u;
    _cyc_080024DA = 1u;
    uint32_t _rm_080024DA = g_cpu.R[0];
    uint32_t _op2_080024DA;
    uint32_t _co_080024DA;
    _op2_080024DA = _rm_080024DA >> 16;
    _co_080024DA = (_rm_080024DA >> 15) & 1u;
    uint32_t _r_080024DA;
    _r_080024DA = _op2_080024DA;
    arm_set_nzc_logic(_r_080024DA, _co_080024DA);
    g_cpu.R[2] = _r_080024DA;
    g_cpu.R[15] = 0x080024DCu;
    runtime_tick(_cyc_080024DA);
    /* 080024DC  080024dc T cmps r2,r1 */
    g_cpu.R[15] = 0x080024DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024DC = 1u;
    _cyc_080024DC = 1u;
    uint32_t _rm_080024DC = g_cpu.R[1];
    uint32_t _op2_080024DC;
    uint32_t _co_080024DC;
    _op2_080024DC = _rm_080024DC;
    _co_080024DC = cpsr_c();
    uint32_t _rn_080024DC = g_cpu.R[2];
    uint32_t _r_080024DC;
    _r_080024DC = _rn_080024DC - _op2_080024DC;
    arm_set_nzcv_sub(_rn_080024DC, _op2_080024DC, _r_080024DC);
    g_cpu.R[15] = 0x080024DEu;
    runtime_tick(_cyc_080024DC);
    /* 080024DE  080024de T blt 0x080024cc */
    g_cpu.R[15] = 0x080024DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080024DE = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_080024DE = 3u;
        g_cpu.R[15] = 0x080024CCu;
        runtime_tick(_cyc_080024DE);
        runtime_dispatch(0x080024CCu);
        return;
    }
    g_cpu.R[15] = 0x080024E0u;
    runtime_tick(_cyc_080024DE);
    /* fall-through to 0x080024E0 */
    g_cpu.R[15] = 0x080024E0u;
    runtime_dispatch(0x080024E0u);
    return;
}
