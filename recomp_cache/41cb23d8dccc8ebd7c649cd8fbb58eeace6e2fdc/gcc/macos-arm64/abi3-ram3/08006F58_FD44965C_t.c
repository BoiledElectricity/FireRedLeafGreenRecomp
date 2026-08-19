// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006F58 mode=thumb end=0x08006F78
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

OVL_EXPORT void func_08006F58(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006F58u);
    /* 08006F58  08006f58 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08006F58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F58 = 1u;
    _cyc_08006F58 = 1u;
    uint32_t _rm_08006F58 = g_cpu.R[0];
    uint32_t _op2_08006F58;
    uint32_t _co_08006F58;
    _op2_08006F58 = _rm_08006F58 << 3;
    _co_08006F58 = (_rm_08006F58 >> 29) & 1u;
    uint32_t _r_08006F58;
    _r_08006F58 = _op2_08006F58;
    arm_set_nzc_logic(_r_08006F58, _co_08006F58);
    g_cpu.R[0] = _r_08006F58;
    g_cpu.R[15] = 0x08006F5Au;
    runtime_tick(_cyc_08006F58);
    /* 08006F5A  08006f5a T adds r0,r0,r5 */
    g_cpu.R[15] = 0x08006F5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F5A = 1u;
    _cyc_08006F5A = 1u;
    uint32_t _rm_08006F5A = g_cpu.R[5];
    uint32_t _op2_08006F5A;
    uint32_t _co_08006F5A;
    _op2_08006F5A = _rm_08006F5A;
    _co_08006F5A = cpsr_c();
    uint32_t _rn_08006F5A = g_cpu.R[0];
    uint32_t _r_08006F5A;
    _r_08006F5A = _rn_08006F5A + _op2_08006F5A;
    arm_set_nzcv_add(_rn_08006F5A, _op2_08006F5A, _r_08006F5A);
    g_cpu.R[0] = _r_08006F5A;
    g_cpu.R[15] = 0x08006F5Cu;
    runtime_tick(_cyc_08006F5A);
    /* 08006F5C  08006f5c T str r2,[r0] */
    g_cpu.R[15] = 0x08006F5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F5C = 1u;
    _cyc_08006F5C = 1u;
    uint32_t _base_08006F5C = g_cpu.R[0];
    uint32_t _off_08006F5C;
    _off_08006F5C = 0x00000000u;
    uint32_t _ea_08006F5C = _base_08006F5C + _off_08006F5C;
    uint32_t _post_08006F5C = _base_08006F5C + _off_08006F5C;
    _cyc_08006F5C += runtime_mem_cycles(_ea_08006F5C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006F5Cu, _ea_08006F5C & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08006F5C & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08006F5Eu;
    runtime_tick(_cyc_08006F5C);
    /* 08006F5E  08006f5e T str r3,[r0,#0x4] */
    g_cpu.R[15] = 0x08006F5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F5E = 1u;
    _cyc_08006F5E = 1u;
    uint32_t _base_08006F5E = g_cpu.R[0];
    uint32_t _off_08006F5E;
    _off_08006F5E = 0x00000004u;
    uint32_t _ea_08006F5E = _base_08006F5E + _off_08006F5E;
    uint32_t _post_08006F5E = _base_08006F5E + _off_08006F5E;
    _cyc_08006F5E += runtime_mem_cycles(_ea_08006F5E, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006F5Eu, _ea_08006F5E & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_08006F5E & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x08006F60u;
    runtime_tick(_cyc_08006F5E);
    /* 08006F60  08006f60 T ldrb r0,[r1] */
    g_cpu.R[15] = 0x08006F60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F60 = 1u;
    _cyc_08006F60 = 2u;
    uint32_t _base_08006F60 = g_cpu.R[1];
    uint32_t _off_08006F60;
    _off_08006F60 = 0x00000000u;
    uint32_t _ea_08006F60 = _base_08006F60 + _off_08006F60;
    uint32_t _post_08006F60 = _base_08006F60 + _off_08006F60;
    _cyc_08006F60 += runtime_mem_cycles(_ea_08006F60, 1u, 0u);
    uint32_t _v_08006F60;
    _v_08006F60 = bus_read_u8(_ea_08006F60);
    g_cpu.R[0] = _v_08006F60;
    g_cpu.R[15] = 0x08006F62u;
    runtime_tick(_cyc_08006F60);
    /* 08006F62  08006f62 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08006F62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F62 = 1u;
    _cyc_08006F62 = 1u;
    uint32_t _rn_08006F62 = g_cpu.R[0];
    uint32_t _r_08006F62;
    _r_08006F62 = _rn_08006F62 + 0x00000001u;
    arm_set_nzcv_add(_rn_08006F62, 0x00000001u, _r_08006F62);
    g_cpu.R[0] = _r_08006F62;
    g_cpu.R[15] = 0x08006F64u;
    runtime_tick(_cyc_08006F62);
    /* 08006F64  08006f64 T strb r0,[r1] */
    g_cpu.R[15] = 0x08006F64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F64 = 1u;
    _cyc_08006F64 = 1u;
    uint32_t _base_08006F64 = g_cpu.R[1];
    uint32_t _off_08006F64;
    _off_08006F64 = 0x00000000u;
    uint32_t _ea_08006F64 = _base_08006F64 + _off_08006F64;
    uint32_t _post_08006F64 = _base_08006F64 + _off_08006F64;
    _cyc_08006F64 += runtime_mem_cycles(_ea_08006F64, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08006F64u, _ea_08006F64, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08006F64, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08006F66u;
    runtime_tick(_cyc_08006F64);
    /* 08006F66  08006f66 T movs r0,r0,lsl #24 */
    g_cpu.R[15] = 0x08006F66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F66 = 1u;
    _cyc_08006F66 = 1u;
    uint32_t _rm_08006F66 = g_cpu.R[0];
    uint32_t _op2_08006F66;
    uint32_t _co_08006F66;
    _op2_08006F66 = _rm_08006F66 << 24;
    _co_08006F66 = (_rm_08006F66 >> 8) & 1u;
    uint32_t _r_08006F66;
    _r_08006F66 = _op2_08006F66;
    arm_set_nzc_logic(_r_08006F66, _co_08006F66);
    g_cpu.R[0] = _r_08006F66;
    g_cpu.R[15] = 0x08006F68u;
    runtime_tick(_cyc_08006F66);
    /* 08006F68  08006f68 T movs r0,r0,lsr #24 */
    g_cpu.R[15] = 0x08006F68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F68 = 1u;
    _cyc_08006F68 = 1u;
    uint32_t _rm_08006F68 = g_cpu.R[0];
    uint32_t _op2_08006F68;
    uint32_t _co_08006F68;
    _op2_08006F68 = _rm_08006F68 >> 24;
    _co_08006F68 = (_rm_08006F68 >> 23) & 1u;
    uint32_t _r_08006F68;
    _r_08006F68 = _op2_08006F68;
    arm_set_nzc_logic(_r_08006F68, _co_08006F68);
    g_cpu.R[0] = _r_08006F68;
    g_cpu.R[15] = 0x08006F6Au;
    runtime_tick(_cyc_08006F68);
    /* 08006F6A  08006f6a T ldrb r6,[r4] */
    g_cpu.R[15] = 0x08006F6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F6A = 1u;
    _cyc_08006F6A = 2u;
    uint32_t _base_08006F6A = g_cpu.R[4];
    uint32_t _off_08006F6A;
    _off_08006F6A = 0x00000000u;
    uint32_t _ea_08006F6A = _base_08006F6A + _off_08006F6A;
    uint32_t _post_08006F6A = _base_08006F6A + _off_08006F6A;
    _cyc_08006F6A += runtime_mem_cycles(_ea_08006F6A, 1u, 0u);
    uint32_t _v_08006F6A;
    _v_08006F6A = bus_read_u8(_ea_08006F6A);
    g_cpu.R[6] = _v_08006F6A;
    g_cpu.R[15] = 0x08006F6Cu;
    runtime_tick(_cyc_08006F6A);
    /* 08006F6C  08006f6c T cmps r0,r6 */
    g_cpu.R[15] = 0x08006F6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F6C = 1u;
    _cyc_08006F6C = 1u;
    uint32_t _rm_08006F6C = g_cpu.R[6];
    uint32_t _op2_08006F6C;
    uint32_t _co_08006F6C;
    _op2_08006F6C = _rm_08006F6C;
    _co_08006F6C = cpsr_c();
    uint32_t _rn_08006F6C = g_cpu.R[0];
    uint32_t _r_08006F6C;
    _r_08006F6C = _rn_08006F6C - _op2_08006F6C;
    arm_set_nzcv_sub(_rn_08006F6C, _op2_08006F6C, _r_08006F6C);
    g_cpu.R[15] = 0x08006F6Eu;
    runtime_tick(_cyc_08006F6C);
    /* 08006F6E  08006f6e T bcc 0x08006f56 */
    g_cpu.R[15] = 0x08006F6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F6E = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08006F6E = 3u;
        g_cpu.R[15] = 0x08006F56u;
        runtime_tick(_cyc_08006F6E);
        runtime_dispatch(0x08006F56u);
        return;
    }
    g_cpu.R[15] = 0x08006F70u;
    runtime_tick(_cyc_08006F6E);
    /* 08006F70  08006f70 T add r13,r13,#0x4 */
    g_cpu.R[15] = 0x08006F70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F70 = 1u;
    _cyc_08006F70 = 1u;
    uint32_t _rn_08006F70 = g_cpu.R[13];
    uint32_t _r_08006F70;
    _r_08006F70 = _rn_08006F70 + 0x00000004u;
    g_cpu.R[13] = _r_08006F70;
    g_cpu.R[15] = 0x08006F72u;
    runtime_tick(_cyc_08006F70);
    /* 08006F72  08006f72 T ldm r13!,{r4,r5,r6} */
    g_cpu.R[15] = 0x08006F72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F72 = 1u;
    _cyc_08006F72 = 2u;
    uint32_t _b_08006F72 = g_cpu.R[13];
    uint32_t _a_08006F72 = _b_08006F72;
    uint32_t _fb_08006F72 = _b_08006F72 + 12u;
    _cyc_08006F72 += runtime_mem_cycles(_a_08006F72 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08006F72 & ~3u);
    _a_08006F72 += 4u;
    _cyc_08006F72 += runtime_mem_cycles(_a_08006F72 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08006F72 & ~3u);
    _a_08006F72 += 4u;
    _cyc_08006F72 += runtime_mem_cycles(_a_08006F72 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08006F72 & ~3u);
    _a_08006F72 += 4u;
    g_cpu.R[13] = _fb_08006F72;
    g_cpu.R[15] = 0x08006F74u;
    runtime_tick(_cyc_08006F72);
    /* 08006F74  08006f74 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08006F74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F74 = 1u;
    _cyc_08006F74 = 2u;
    uint32_t _b_08006F74 = g_cpu.R[13];
    uint32_t _a_08006F74 = _b_08006F74;
    uint32_t _fb_08006F74 = _b_08006F74 + 4u;
    _cyc_08006F74 += runtime_mem_cycles(_a_08006F74 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08006F74 & ~3u);
    _a_08006F74 += 4u;
    g_cpu.R[13] = _fb_08006F74;
    g_cpu.R[15] = 0x08006F76u;
    runtime_tick(_cyc_08006F74);
    /* 08006F76  08006f76 T bx r0 */
    g_cpu.R[15] = 0x08006F76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006F76 = 1u;
    _cyc_08006F76 = 3u;
    uint32_t _bxt_08006F76 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08006F76 & ~1u;
    runtime_tick(_cyc_08006F76);
    if (_bxt_08006F76 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08006F76);
    return;
    g_cpu.R[15] = 0x08006F78u;
    runtime_tick(_cyc_08006F76);
    /* fall-through to 0x08006F78 */
    g_cpu.R[15] = 0x08006F78u;
    runtime_dispatch(0x08006F78u);
    return;
}
