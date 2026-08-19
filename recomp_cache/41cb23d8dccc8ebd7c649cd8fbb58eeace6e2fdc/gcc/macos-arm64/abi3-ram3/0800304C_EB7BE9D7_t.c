// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800304C mode=thumb end=0x08003062
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

OVL_EXPORT void func_0800304C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800304Cu);
    /* 0800304C  0800304c T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x0800304Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800304C = 1u;
    _cyc_0800304C = 1u;
    uint32_t _rm_0800304C = g_cpu.R[0];
    uint32_t _op2_0800304C;
    uint32_t _co_0800304C;
    _op2_0800304C = _rm_0800304C << 3;
    _co_0800304C = (_rm_0800304C >> 29) & 1u;
    uint32_t _r_0800304C;
    _r_0800304C = _op2_0800304C;
    arm_set_nzc_logic(_r_0800304C, _co_0800304C);
    g_cpu.R[0] = _r_0800304C;
    g_cpu.R[15] = 0x0800304Eu;
    runtime_tick(_cyc_0800304C);
    /* 0800304E  0800304e T ldrb r4,[r6,#0x9] */
    g_cpu.R[15] = 0x0800304Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800304E = 1u;
    _cyc_0800304E = 2u;
    uint32_t _base_0800304E = g_cpu.R[6];
    uint32_t _off_0800304E;
    _off_0800304E = 0x00000009u;
    uint32_t _ea_0800304E = _base_0800304E + _off_0800304E;
    uint32_t _post_0800304E = _base_0800304E + _off_0800304E;
    _cyc_0800304E += runtime_mem_cycles(_ea_0800304E, 1u, 0u);
    uint32_t _v_0800304E;
    _v_0800304E = bus_read_u8(_ea_0800304E);
    g_cpu.R[4] = _v_0800304E;
    g_cpu.R[15] = 0x08003050u;
    runtime_tick(_cyc_0800304E);
    /* 08003050  08003050 T subs r0,r0,r4 */
    g_cpu.R[15] = 0x08003050u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003050 = 1u;
    _cyc_08003050 = 1u;
    uint32_t _rm_08003050 = g_cpu.R[4];
    uint32_t _op2_08003050;
    uint32_t _co_08003050;
    _op2_08003050 = _rm_08003050;
    _co_08003050 = cpsr_c();
    uint32_t _rn_08003050 = g_cpu.R[0];
    uint32_t _r_08003050;
    _r_08003050 = _rn_08003050 - _op2_08003050;
    arm_set_nzcv_sub(_rn_08003050, _op2_08003050, _r_08003050);
    g_cpu.R[0] = _r_08003050;
    g_cpu.R[15] = 0x08003052u;
    runtime_tick(_cyc_08003050);
    /* 08003052  08003052 T adds r1,r3,#0x0 */
    g_cpu.R[15] = 0x08003052u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003052 = 1u;
    _cyc_08003052 = 1u;
    uint32_t _rn_08003052 = g_cpu.R[3];
    uint32_t _r_08003052;
    _r_08003052 = _rn_08003052 + 0x00000000u;
    arm_set_nzcv_add(_rn_08003052, 0x00000000u, _r_08003052);
    g_cpu.R[1] = _r_08003052;
    g_cpu.R[15] = 0x08003054u;
    runtime_tick(_cyc_08003052);
    /* 08003054  08003054 T adds r1,r1,#0x81 */
    g_cpu.R[15] = 0x08003054u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003054 = 1u;
    _cyc_08003054 = 1u;
    uint32_t _rn_08003054 = g_cpu.R[1];
    uint32_t _r_08003054;
    _r_08003054 = _rn_08003054 + 0x00000081u;
    arm_set_nzcv_add(_rn_08003054, 0x00000081u, _r_08003054);
    g_cpu.R[1] = _r_08003054;
    g_cpu.R[15] = 0x08003056u;
    runtime_tick(_cyc_08003054);
    /* 08003056  08003056 T ldrb r1,[r1] */
    g_cpu.R[15] = 0x08003056u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003056 = 1u;
    _cyc_08003056 = 2u;
    uint32_t _base_08003056 = g_cpu.R[1];
    uint32_t _off_08003056;
    _off_08003056 = 0x00000000u;
    uint32_t _ea_08003056 = _base_08003056 + _off_08003056;
    uint32_t _post_08003056 = _base_08003056 + _off_08003056;
    _cyc_08003056 += runtime_mem_cycles(_ea_08003056, 1u, 0u);
    uint32_t _v_08003056;
    _v_08003056 = bus_read_u8(_ea_08003056);
    g_cpu.R[1] = _v_08003056;
    g_cpu.R[15] = 0x08003058u;
    runtime_tick(_cyc_08003056);
    /* 08003058  08003058 T mov r10,r1 */
    g_cpu.R[15] = 0x08003058u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003058 = 1u;
    _cyc_08003058 = 1u;
    uint32_t _rm_08003058 = g_cpu.R[1];
    uint32_t _op2_08003058;
    uint32_t _co_08003058;
    _op2_08003058 = _rm_08003058;
    _co_08003058 = cpsr_c();
    uint32_t _r_08003058;
    _r_08003058 = _op2_08003058;
    g_cpu.R[10] = _r_08003058;
    g_cpu.R[15] = 0x0800305Au;
    runtime_tick(_cyc_08003058);
    /* 0800305A  0800305a T adds r5,r4,#0x0 */
    g_cpu.R[15] = 0x0800305Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800305A = 1u;
    _cyc_0800305A = 1u;
    uint32_t _rn_0800305A = g_cpu.R[4];
    uint32_t _r_0800305A;
    _r_0800305A = _rn_0800305A + 0x00000000u;
    arm_set_nzcv_add(_rn_0800305A, 0x00000000u, _r_0800305A);
    g_cpu.R[5] = _r_0800305A;
    g_cpu.R[15] = 0x0800305Cu;
    runtime_tick(_cyc_0800305A);
    /* 0800305C  0800305c T cmps r0,r10 */
    g_cpu.R[15] = 0x0800305Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800305C = 1u;
    _cyc_0800305C = 1u;
    uint32_t _rm_0800305C = g_cpu.R[10];
    uint32_t _op2_0800305C;
    uint32_t _co_0800305C;
    _op2_0800305C = _rm_0800305C;
    _co_0800305C = cpsr_c();
    uint32_t _rn_0800305C = g_cpu.R[0];
    uint32_t _r_0800305C;
    _r_0800305C = _rn_0800305C - _op2_0800305C;
    arm_set_nzcv_sub(_rn_0800305C, _op2_0800305C, _r_0800305C);
    g_cpu.R[15] = 0x0800305Eu;
    runtime_tick(_cyc_0800305C);
    /* 0800305E  0800305e T bge 0x08003062 */
    g_cpu.R[15] = 0x0800305Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800305E = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_0800305E = 3u;
        g_cpu.R[15] = 0x08003062u;
        runtime_tick(_cyc_0800305E);
        runtime_dispatch(0x08003062u);
        return;
    }
    g_cpu.R[15] = 0x08003060u;
    runtime_tick(_cyc_0800305E);
    /* 08003060  08003060 T mov r10,r0 */
    g_cpu.R[15] = 0x08003060u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003060 = 1u;
    _cyc_08003060 = 1u;
    uint32_t _rm_08003060 = g_cpu.R[0];
    uint32_t _op2_08003060;
    uint32_t _co_08003060;
    _op2_08003060 = _rm_08003060;
    _co_08003060 = cpsr_c();
    uint32_t _r_08003060;
    _r_08003060 = _op2_08003060;
    g_cpu.R[10] = _r_08003060;
    g_cpu.R[15] = 0x08003062u;
    runtime_tick(_cyc_08003060);
    /* fall-through to 0x08003062 */
    g_cpu.R[15] = 0x08003062u;
    runtime_dispatch(0x08003062u);
    return;
}
