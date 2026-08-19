// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006ECC mode=thumb end=0x08006EFC
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

OVL_EXPORT void func_08006ECC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006ECCu);
    /* 08006ECC  08006ecc T strh r0,[r1,#0x3e] */
    g_cpu.R[15] = 0x08006ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ECC = 1u;
    _cyc_08006ECC = 1u;
    uint32_t _base_08006ECC = g_cpu.R[1];
    uint32_t _off_08006ECC;
    _off_08006ECC = 0x0000003Eu;
    uint32_t _ea_08006ECC = _base_08006ECC + _off_08006ECC;
    uint32_t _post_08006ECC = _base_08006ECC + _off_08006ECC;
    _cyc_08006ECC += runtime_mem_cycles(_ea_08006ECC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006ECCu, _ea_08006ECC & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006ECC & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08006ECEu;
    runtime_tick(_cyc_08006ECC);
    /* 08006ECE  08006ece T adds r0,r2,#0x1 */
    g_cpu.R[15] = 0x08006ECEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ECE = 1u;
    _cyc_08006ECE = 1u;
    uint32_t _rn_08006ECE = g_cpu.R[2];
    uint32_t _r_08006ECE;
    _r_08006ECE = _rn_08006ECE + 0x00000001u;
    arm_set_nzcv_add(_rn_08006ECE, 0x00000001u, _r_08006ECE);
    g_cpu.R[0] = _r_08006ECE;
    g_cpu.R[15] = 0x08006ED0u;
    runtime_tick(_cyc_08006ECE);
    /* 08006ED0  08006ed0 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08006ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ED0 = 1u;
    _cyc_08006ED0 = 1u;
    uint32_t _rm_08006ED0 = g_cpu.R[0];
    uint32_t _op2_08006ED0;
    uint32_t _co_08006ED0;
    _op2_08006ED0 = _rm_08006ED0 << 3;
    _co_08006ED0 = (_rm_08006ED0 >> 29) & 1u;
    uint32_t _r_08006ED0;
    _r_08006ED0 = _op2_08006ED0;
    arm_set_nzc_logic(_r_08006ED0, _co_08006ED0);
    g_cpu.R[0] = _r_08006ED0;
    g_cpu.R[15] = 0x08006ED2u;
    runtime_tick(_cyc_08006ED0);
    /* 08006ED2  08006ed2 T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08006ED2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ED2 = 1u;
    _cyc_08006ED2 = 1u;
    uint32_t _rm_08006ED2 = g_cpu.R[5];
    uint32_t _op2_08006ED2;
    uint32_t _co_08006ED2;
    _op2_08006ED2 = _rm_08006ED2;
    _co_08006ED2 = cpsr_c();
    uint32_t _rn_08006ED2 = g_cpu.R[0];
    uint32_t _r_08006ED2;
    _r_08006ED2 = _rn_08006ED2 + _op2_08006ED2;
    arm_set_nzcv_add(_rn_08006ED2, _op2_08006ED2, _r_08006ED2);
    g_cpu.R[0] = _r_08006ED2;
    g_cpu.R[15] = 0x08006ED4u;
    runtime_tick(_cyc_08006ED2);
    /* 08006ED4  08006ed4 T ldrh r1,[r3,#0x2] */
    g_cpu.R[15] = 0x08006ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ED4 = 1u;
    _cyc_08006ED4 = 2u;
    uint32_t _base_08006ED4 = g_cpu.R[3];
    uint32_t _off_08006ED4;
    _off_08006ED4 = 0x00000002u;
    uint32_t _ea_08006ED4 = _base_08006ED4 + _off_08006ED4;
    uint32_t _post_08006ED4 = _base_08006ED4 + _off_08006ED4;
    _cyc_08006ED4 += runtime_mem_cycles(_ea_08006ED4, 2u, 0u);
    uint32_t _v_08006ED4;
    { uint32_t _h = bus_read_u16(_ea_08006ED4 & ~1u); if (_ea_08006ED4 & 1u) _v_08006ED4 = ((_h >> 8) | (_h << 24)); else _v_08006ED4 = _h; }
    g_cpu.R[1] = _v_08006ED4;
    g_cpu.R[15] = 0x08006ED6u;
    runtime_tick(_cyc_08006ED4);
    /* 08006ED6  08006ed6 T strh r1,[r0,#0x3e] */
    g_cpu.R[15] = 0x08006ED6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ED6 = 1u;
    _cyc_08006ED6 = 1u;
    uint32_t _base_08006ED6 = g_cpu.R[0];
    uint32_t _off_08006ED6;
    _off_08006ED6 = 0x0000003Eu;
    uint32_t _ea_08006ED6 = _base_08006ED6 + _off_08006ED6;
    uint32_t _post_08006ED6 = _base_08006ED6 + _off_08006ED6;
    _cyc_08006ED6 += runtime_mem_cycles(_ea_08006ED6, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006ED6u, _ea_08006ED6 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006ED6 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08006ED8u;
    runtime_tick(_cyc_08006ED6);
    /* 08006ED8  08006ed8 T adds r0,r2,#0x2 */
    g_cpu.R[15] = 0x08006ED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006ED8 = 1u;
    _cyc_08006ED8 = 1u;
    uint32_t _rn_08006ED8 = g_cpu.R[2];
    uint32_t _r_08006ED8;
    _r_08006ED8 = _rn_08006ED8 + 0x00000002u;
    arm_set_nzcv_add(_rn_08006ED8, 0x00000002u, _r_08006ED8);
    g_cpu.R[0] = _r_08006ED8;
    g_cpu.R[15] = 0x08006EDAu;
    runtime_tick(_cyc_08006ED8);
    /* 08006EDA  08006eda T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08006EDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EDA = 1u;
    _cyc_08006EDA = 1u;
    uint32_t _rm_08006EDA = g_cpu.R[0];
    uint32_t _op2_08006EDA;
    uint32_t _co_08006EDA;
    _op2_08006EDA = _rm_08006EDA << 3;
    _co_08006EDA = (_rm_08006EDA >> 29) & 1u;
    uint32_t _r_08006EDA;
    _r_08006EDA = _op2_08006EDA;
    arm_set_nzc_logic(_r_08006EDA, _co_08006EDA);
    g_cpu.R[0] = _r_08006EDA;
    g_cpu.R[15] = 0x08006EDCu;
    runtime_tick(_cyc_08006EDA);
    /* 08006EDC  08006edc T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08006EDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EDC = 1u;
    _cyc_08006EDC = 1u;
    uint32_t _rm_08006EDC = g_cpu.R[5];
    uint32_t _op2_08006EDC;
    uint32_t _co_08006EDC;
    _op2_08006EDC = _rm_08006EDC;
    _co_08006EDC = cpsr_c();
    uint32_t _rn_08006EDC = g_cpu.R[0];
    uint32_t _r_08006EDC;
    _r_08006EDC = _rn_08006EDC + _op2_08006EDC;
    arm_set_nzcv_add(_rn_08006EDC, _op2_08006EDC, _r_08006EDC);
    g_cpu.R[0] = _r_08006EDC;
    g_cpu.R[15] = 0x08006EDEu;
    runtime_tick(_cyc_08006EDC);
    /* 08006EDE  08006ede T ldrh r1,[r3,#0x4] */
    g_cpu.R[15] = 0x08006EDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EDE = 1u;
    _cyc_08006EDE = 2u;
    uint32_t _base_08006EDE = g_cpu.R[3];
    uint32_t _off_08006EDE;
    _off_08006EDE = 0x00000004u;
    uint32_t _ea_08006EDE = _base_08006EDE + _off_08006EDE;
    uint32_t _post_08006EDE = _base_08006EDE + _off_08006EDE;
    _cyc_08006EDE += runtime_mem_cycles(_ea_08006EDE, 2u, 0u);
    uint32_t _v_08006EDE;
    { uint32_t _h = bus_read_u16(_ea_08006EDE & ~1u); if (_ea_08006EDE & 1u) _v_08006EDE = ((_h >> 8) | (_h << 24)); else _v_08006EDE = _h; }
    g_cpu.R[1] = _v_08006EDE;
    g_cpu.R[15] = 0x08006EE0u;
    runtime_tick(_cyc_08006EDE);
    /* 08006EE0  08006ee0 T strh r1,[r0,#0x3e] */
    g_cpu.R[15] = 0x08006EE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EE0 = 1u;
    _cyc_08006EE0 = 1u;
    uint32_t _base_08006EE0 = g_cpu.R[0];
    uint32_t _off_08006EE0;
    _off_08006EE0 = 0x0000003Eu;
    uint32_t _ea_08006EE0 = _base_08006EE0 + _off_08006EE0;
    uint32_t _post_08006EE0 = _base_08006EE0 + _off_08006EE0;
    _cyc_08006EE0 += runtime_mem_cycles(_ea_08006EE0, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006EE0u, _ea_08006EE0 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006EE0 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08006EE2u;
    runtime_tick(_cyc_08006EE0);
    /* 08006EE2  08006ee2 T adds r2,r2,#0x3 */
    g_cpu.R[15] = 0x08006EE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EE2 = 1u;
    _cyc_08006EE2 = 1u;
    uint32_t _rn_08006EE2 = g_cpu.R[2];
    uint32_t _r_08006EE2;
    _r_08006EE2 = _rn_08006EE2 + 0x00000003u;
    arm_set_nzcv_add(_rn_08006EE2, 0x00000003u, _r_08006EE2);
    g_cpu.R[2] = _r_08006EE2;
    g_cpu.R[15] = 0x08006EE4u;
    runtime_tick(_cyc_08006EE2);
    /* 08006EE4  08006ee4 T movs r2,r2,lsl #3 */
    g_cpu.R[15] = 0x08006EE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EE4 = 1u;
    _cyc_08006EE4 = 1u;
    uint32_t _rm_08006EE4 = g_cpu.R[2];
    uint32_t _op2_08006EE4;
    uint32_t _co_08006EE4;
    _op2_08006EE4 = _rm_08006EE4 << 3;
    _co_08006EE4 = (_rm_08006EE4 >> 29) & 1u;
    uint32_t _r_08006EE4;
    _r_08006EE4 = _op2_08006EE4;
    arm_set_nzc_logic(_r_08006EE4, _co_08006EE4);
    g_cpu.R[2] = _r_08006EE4;
    g_cpu.R[15] = 0x08006EE6u;
    runtime_tick(_cyc_08006EE4);
    /* 08006EE6  08006ee6 T adds r2,r2,r5 */
    g_cpu.R[15] = 0x08006EE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EE6 = 1u;
    _cyc_08006EE6 = 1u;
    uint32_t _rm_08006EE6 = g_cpu.R[5];
    uint32_t _op2_08006EE6;
    uint32_t _co_08006EE6;
    _op2_08006EE6 = _rm_08006EE6;
    _co_08006EE6 = cpsr_c();
    uint32_t _rn_08006EE6 = g_cpu.R[2];
    uint32_t _r_08006EE6;
    _r_08006EE6 = _rn_08006EE6 + _op2_08006EE6;
    arm_set_nzcv_add(_rn_08006EE6, _op2_08006EE6, _r_08006EE6);
    g_cpu.R[2] = _r_08006EE6;
    g_cpu.R[15] = 0x08006EE8u;
    runtime_tick(_cyc_08006EE6);
    /* 08006EE8  08006ee8 T ldrh r0,[r3,#0x6] */
    g_cpu.R[15] = 0x08006EE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EE8 = 1u;
    _cyc_08006EE8 = 2u;
    uint32_t _base_08006EE8 = g_cpu.R[3];
    uint32_t _off_08006EE8;
    _off_08006EE8 = 0x00000006u;
    uint32_t _ea_08006EE8 = _base_08006EE8 + _off_08006EE8;
    uint32_t _post_08006EE8 = _base_08006EE8 + _off_08006EE8;
    _cyc_08006EE8 += runtime_mem_cycles(_ea_08006EE8, 2u, 0u);
    uint32_t _v_08006EE8;
    { uint32_t _h = bus_read_u16(_ea_08006EE8 & ~1u); if (_ea_08006EE8 & 1u) _v_08006EE8 = ((_h >> 8) | (_h << 24)); else _v_08006EE8 = _h; }
    g_cpu.R[0] = _v_08006EE8;
    g_cpu.R[15] = 0x08006EEAu;
    runtime_tick(_cyc_08006EE8);
    /* 08006EEA  08006eea T strh r0,[r2,#0x3e] */
    g_cpu.R[15] = 0x08006EEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EEA = 1u;
    _cyc_08006EEA = 1u;
    uint32_t _base_08006EEA = g_cpu.R[2];
    uint32_t _off_08006EEA;
    _off_08006EEA = 0x0000003Eu;
    uint32_t _ea_08006EEA = _base_08006EEA + _off_08006EEA;
    uint32_t _post_08006EEA = _base_08006EEA + _off_08006EEA;
    _cyc_08006EEA += runtime_mem_cycles(_ea_08006EEA, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006EEAu, _ea_08006EEA & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08006EEA & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08006EECu;
    runtime_tick(_cyc_08006EEA);
    /* 08006EEC  08006eec T adds r0,r4,#0x1 */
    g_cpu.R[15] = 0x08006EECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EEC = 1u;
    _cyc_08006EEC = 1u;
    uint32_t _rn_08006EEC = g_cpu.R[4];
    uint32_t _r_08006EEC;
    _r_08006EEC = _rn_08006EEC + 0x00000001u;
    arm_set_nzcv_add(_rn_08006EEC, 0x00000001u, _r_08006EEC);
    g_cpu.R[0] = _r_08006EEC;
    g_cpu.R[15] = 0x08006EEEu;
    runtime_tick(_cyc_08006EEC);
    /* 08006EEE  08006eee T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08006EEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EEE = 1u;
    _cyc_08006EEE = 1u;
    uint32_t _rm_08006EEE = g_cpu.R[0];
    uint32_t _op2_08006EEE;
    uint32_t _co_08006EEE;
    _op2_08006EEE = _rm_08006EEE << 24;
    _co_08006EEE = (_rm_08006EEE >> 8) & 1u;
    uint32_t _r_08006EEE;
    _r_08006EEE = _op2_08006EEE;
    arm_set_nzc_logic(_r_08006EEE, _co_08006EEE);
    g_cpu.R[0] = _r_08006EEE;
    g_cpu.R[15] = 0x08006EF0u;
    runtime_tick(_cyc_08006EEE);
    /* 08006EF0  08006ef0 T movs r4,r0,lsr #24 */
    g_cpu.R[15] = 0x08006EF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EF0 = 1u;
    _cyc_08006EF0 = 1u;
    uint32_t _rm_08006EF0 = g_cpu.R[0];
    uint32_t _op2_08006EF0;
    uint32_t _co_08006EF0;
    _op2_08006EF0 = _rm_08006EF0 >> 24;
    _co_08006EF0 = (_rm_08006EF0 >> 23) & 1u;
    uint32_t _r_08006EF0;
    _r_08006EF0 = _op2_08006EF0;
    arm_set_nzc_logic(_r_08006EF0, _co_08006EF0);
    g_cpu.R[4] = _r_08006EF0;
    g_cpu.R[15] = 0x08006EF2u;
    runtime_tick(_cyc_08006EF0);
    /* 08006EF2  08006ef2 T cmps r4,#0x1f */
    g_cpu.R[15] = 0x08006EF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EF2 = 1u;
    _cyc_08006EF2 = 1u;
    uint32_t _rn_08006EF2 = g_cpu.R[4];
    uint32_t _r_08006EF2;
    _r_08006EF2 = _rn_08006EF2 - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_08006EF2, 0x0000001Fu, _r_08006EF2);
    g_cpu.R[15] = 0x08006EF4u;
    runtime_tick(_cyc_08006EF2);
    /* 08006EF4  08006ef4 T bls 0x08006ec0 */
    g_cpu.R[15] = 0x08006EF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EF4 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08006EF4 = 3u;
        g_cpu.R[15] = 0x08006EC0u;
        runtime_tick(_cyc_08006EF4);
        runtime_dispatch(0x08006EC0u);
        return;
    }
    g_cpu.R[15] = 0x08006EF6u;
    runtime_tick(_cyc_08006EF4);
    /* 08006EF6  08006ef6 T ldm r13!,{r4,r5,r6} */
    g_cpu.R[15] = 0x08006EF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EF6 = 1u;
    _cyc_08006EF6 = 2u;
    uint32_t _b_08006EF6 = g_cpu.R[13];
    uint32_t _a_08006EF6 = _b_08006EF6;
    uint32_t _fb_08006EF6 = _b_08006EF6 + 12u;
    _cyc_08006EF6 += runtime_mem_cycles(_a_08006EF6 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08006EF6 & ~3u);
    _a_08006EF6 += 4u;
    _cyc_08006EF6 += runtime_mem_cycles(_a_08006EF6 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08006EF6 & ~3u);
    _a_08006EF6 += 4u;
    _cyc_08006EF6 += runtime_mem_cycles(_a_08006EF6 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08006EF6 & ~3u);
    _a_08006EF6 += 4u;
    g_cpu.R[13] = _fb_08006EF6;
    g_cpu.R[15] = 0x08006EF8u;
    runtime_tick(_cyc_08006EF6);
    /* 08006EF8  08006ef8 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08006EF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EF8 = 1u;
    _cyc_08006EF8 = 2u;
    uint32_t _b_08006EF8 = g_cpu.R[13];
    uint32_t _a_08006EF8 = _b_08006EF8;
    uint32_t _fb_08006EF8 = _b_08006EF8 + 4u;
    _cyc_08006EF8 += runtime_mem_cycles(_a_08006EF8 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08006EF8 & ~3u);
    _a_08006EF8 += 4u;
    g_cpu.R[13] = _fb_08006EF8;
    g_cpu.R[15] = 0x08006EFAu;
    runtime_tick(_cyc_08006EF8);
    /* 08006EFA  08006efa T bx r0 */
    g_cpu.R[15] = 0x08006EFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006EFA = 1u;
    _cyc_08006EFA = 3u;
    uint32_t _bxt_08006EFA = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08006EFA & ~1u;
    runtime_tick(_cyc_08006EFA);
    if (_bxt_08006EFA & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08006EFA);
    return;
    g_cpu.R[15] = 0x08006EFCu;
    runtime_tick(_cyc_08006EFA);
    /* fall-through to 0x08006EFC */
    g_cpu.R[15] = 0x08006EFCu;
    runtime_dispatch(0x08006EFCu);
    return;
}
