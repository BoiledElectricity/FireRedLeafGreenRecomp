// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003024 mode=thumb end=0x0800304A
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

OVL_EXPORT void func_08003024(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003024u);
    /* 08003024  08003024 T mov r9,r0 */
    g_cpu.R[15] = 0x08003024u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003024 = 1u;
    _cyc_08003024 = 1u;
    uint32_t _rm_08003024 = g_cpu.R[0];
    uint32_t _op2_08003024;
    uint32_t _co_08003024;
    _op2_08003024 = _rm_08003024;
    _co_08003024 = cpsr_c();
    uint32_t _r_08003024;
    _r_08003024 = _op2_08003024;
    g_cpu.R[9] = _r_08003024;
    g_cpu.R[15] = 0x08003026u;
    runtime_tick(_cyc_08003024);
    /* 08003026  08003026 T ldrb r1,[r6,#0x4] */
    g_cpu.R[15] = 0x08003026u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003026 = 1u;
    _cyc_08003026 = 2u;
    uint32_t _base_08003026 = g_cpu.R[6];
    uint32_t _off_08003026;
    _off_08003026 = 0x00000004u;
    uint32_t _ea_08003026 = _base_08003026 + _off_08003026;
    uint32_t _post_08003026 = _base_08003026 + _off_08003026;
    _cyc_08003026 += runtime_mem_cycles(_ea_08003026, 1u, 0u);
    uint32_t _v_08003026;
    _v_08003026 = bus_read_u8(_ea_08003026);
    g_cpu.R[1] = _v_08003026;
    g_cpu.R[15] = 0x08003028u;
    runtime_tick(_cyc_08003026);
    /* 08003028  08003028 T movs r0,r1,lsl #1 */
    g_cpu.R[15] = 0x08003028u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003028 = 1u;
    _cyc_08003028 = 1u;
    uint32_t _rm_08003028 = g_cpu.R[1];
    uint32_t _op2_08003028;
    uint32_t _co_08003028;
    _op2_08003028 = _rm_08003028 << 1;
    _co_08003028 = (_rm_08003028 >> 31) & 1u;
    uint32_t _r_08003028;
    _r_08003028 = _op2_08003028;
    arm_set_nzc_logic(_r_08003028, _co_08003028);
    g_cpu.R[0] = _r_08003028;
    g_cpu.R[15] = 0x0800302Au;
    runtime_tick(_cyc_08003028);
    /* 0800302A  0800302a T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0800302Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800302A = 1u;
    _cyc_0800302A = 1u;
    uint32_t _rm_0800302A = g_cpu.R[1];
    uint32_t _op2_0800302A;
    uint32_t _co_0800302A;
    _op2_0800302A = _rm_0800302A;
    _co_0800302A = cpsr_c();
    uint32_t _rn_0800302A = g_cpu.R[0];
    uint32_t _r_0800302A;
    _r_0800302A = _rn_0800302A + _op2_0800302A;
    arm_set_nzcv_add(_rn_0800302A, _op2_0800302A, _r_0800302A);
    g_cpu.R[0] = _r_0800302A;
    g_cpu.R[15] = 0x0800302Cu;
    runtime_tick(_cyc_0800302A);
    /* 0800302C  0800302c T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x0800302Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800302C = 1u;
    _cyc_0800302C = 1u;
    uint32_t _rm_0800302C = g_cpu.R[0];
    uint32_t _op2_0800302C;
    uint32_t _co_0800302C;
    _op2_0800302C = _rm_0800302C << 2;
    _co_0800302C = (_rm_0800302C >> 30) & 1u;
    uint32_t _r_0800302C;
    _r_0800302C = _op2_0800302C;
    arm_set_nzc_logic(_r_0800302C, _co_0800302C);
    g_cpu.R[0] = _r_0800302C;
    g_cpu.R[15] = 0x0800302Eu;
    runtime_tick(_cyc_0800302C);
    /* 0800302E  0800302e T mov r1,r9 */
    g_cpu.R[15] = 0x0800302Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800302E = 1u;
    _cyc_0800302E = 1u;
    uint32_t _rm_0800302E = g_cpu.R[9];
    uint32_t _op2_0800302E;
    uint32_t _co_0800302E;
    _op2_0800302E = _rm_0800302E;
    _co_0800302E = cpsr_c();
    uint32_t _r_0800302E;
    _r_0800302E = _op2_0800302E;
    g_cpu.R[1] = _r_0800302E;
    g_cpu.R[15] = 0x08003030u;
    runtime_tick(_cyc_0800302E);
    /* 08003030  08003030 T adds r2,r0,r1 */
    g_cpu.R[15] = 0x08003030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003030 = 1u;
    _cyc_08003030 = 1u;
    uint32_t _rm_08003030 = g_cpu.R[1];
    uint32_t _op2_08003030;
    uint32_t _co_08003030;
    _op2_08003030 = _rm_08003030;
    _co_08003030 = cpsr_c();
    uint32_t _rn_08003030 = g_cpu.R[0];
    uint32_t _r_08003030;
    _r_08003030 = _rn_08003030 + _op2_08003030;
    arm_set_nzcv_add(_rn_08003030, _op2_08003030, _r_08003030);
    g_cpu.R[2] = _r_08003030;
    g_cpu.R[15] = 0x08003032u;
    runtime_tick(_cyc_08003030);
    /* 08003032  08003032 T ldrb r0,[r2,#0x3] */
    g_cpu.R[15] = 0x08003032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003032 = 1u;
    _cyc_08003032 = 2u;
    uint32_t _base_08003032 = g_cpu.R[2];
    uint32_t _off_08003032;
    _off_08003032 = 0x00000003u;
    uint32_t _ea_08003032 = _base_08003032 + _off_08003032;
    uint32_t _post_08003032 = _base_08003032 + _off_08003032;
    _cyc_08003032 += runtime_mem_cycles(_ea_08003032, 1u, 0u);
    uint32_t _v_08003032;
    _v_08003032 = bus_read_u8(_ea_08003032);
    g_cpu.R[0] = _v_08003032;
    g_cpu.R[15] = 0x08003034u;
    runtime_tick(_cyc_08003032);
    /* 08003034  08003034 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08003034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003034 = 1u;
    _cyc_08003034 = 1u;
    uint32_t _rm_08003034 = g_cpu.R[0];
    uint32_t _op2_08003034;
    uint32_t _co_08003034;
    _op2_08003034 = _rm_08003034 << 3;
    _co_08003034 = (_rm_08003034 >> 29) & 1u;
    uint32_t _r_08003034;
    _r_08003034 = _op2_08003034;
    arm_set_nzc_logic(_r_08003034, _co_08003034);
    g_cpu.R[0] = _r_08003034;
    g_cpu.R[15] = 0x08003036u;
    runtime_tick(_cyc_08003034);
    /* 08003036  08003036 T ldrb r1,[r6,#0x8] */
    g_cpu.R[15] = 0x08003036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003036 = 1u;
    _cyc_08003036 = 2u;
    uint32_t _base_08003036 = g_cpu.R[6];
    uint32_t _off_08003036;
    _off_08003036 = 0x00000008u;
    uint32_t _ea_08003036 = _base_08003036 + _off_08003036;
    uint32_t _post_08003036 = _base_08003036 + _off_08003036;
    _cyc_08003036 += runtime_mem_cycles(_ea_08003036, 1u, 0u);
    uint32_t _v_08003036;
    _v_08003036 = bus_read_u8(_ea_08003036);
    g_cpu.R[1] = _v_08003036;
    g_cpu.R[15] = 0x08003038u;
    runtime_tick(_cyc_08003036);
    /* 08003038  08003038 T subs r1,r0,r1 */
    g_cpu.R[15] = 0x08003038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003038 = 1u;
    _cyc_08003038 = 1u;
    uint32_t _rm_08003038 = g_cpu.R[1];
    uint32_t _op2_08003038;
    uint32_t _co_08003038;
    _op2_08003038 = _rm_08003038;
    _co_08003038 = cpsr_c();
    uint32_t _rn_08003038 = g_cpu.R[0];
    uint32_t _r_08003038;
    _r_08003038 = _rn_08003038 - _op2_08003038;
    arm_set_nzcv_sub(_rn_08003038, _op2_08003038, _r_08003038);
    g_cpu.R[1] = _r_08003038;
    g_cpu.R[15] = 0x0800303Au;
    runtime_tick(_cyc_08003038);
    /* 0800303A  0800303a T ldr r3,[r15,#0x4c] */
    g_cpu.R[15] = 0x0800303Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800303A = 1u;
    _cyc_0800303A = 2u;
    uint32_t _base_0800303A = 0x0800303Eu & ~3u;
    uint32_t _off_0800303A;
    _off_0800303A = 0x0000004Cu;
    uint32_t _ea_0800303A = _base_0800303A + _off_0800303A;
    uint32_t _post_0800303A = _base_0800303A + _off_0800303A;
    _cyc_0800303A += runtime_mem_cycles(_ea_0800303A, 4u, 0u);
    uint32_t _v_0800303A;
    { uint32_t _w = bus_read_u32(_ea_0800303A & ~3u); uint32_t _rot = (_ea_0800303A & 3u) * 8u; _v_0800303A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0800303A;
    g_cpu.R[15] = 0x0800303Cu;
    runtime_tick(_cyc_0800303A);
    /* 0800303C  0800303c T mov r8,r3 */
    g_cpu.R[15] = 0x0800303Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800303C = 1u;
    _cyc_0800303C = 1u;
    uint32_t _rm_0800303C = g_cpu.R[3];
    uint32_t _op2_0800303C;
    uint32_t _co_0800303C;
    _op2_0800303C = _rm_0800303C;
    _co_0800303C = cpsr_c();
    uint32_t _r_0800303C;
    _r_0800303C = _op2_0800303C;
    g_cpu.R[8] = _r_0800303C;
    g_cpu.R[15] = 0x0800303Eu;
    runtime_tick(_cyc_0800303C);
    /* 0800303E  0800303e T mov r0,r8 */
    g_cpu.R[15] = 0x0800303Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800303E = 1u;
    _cyc_0800303E = 1u;
    uint32_t _rm_0800303E = g_cpu.R[8];
    uint32_t _op2_0800303E;
    uint32_t _co_0800303E;
    _op2_0800303E = _rm_0800303E;
    _co_0800303E = cpsr_c();
    uint32_t _r_0800303E;
    _r_0800303E = _op2_0800303E;
    g_cpu.R[0] = _r_0800303E;
    g_cpu.R[15] = 0x08003040u;
    runtime_tick(_cyc_0800303E);
    /* 08003040  08003040 T adds r0,r0,#0x80 */
    g_cpu.R[15] = 0x08003040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003040 = 1u;
    _cyc_08003040 = 1u;
    uint32_t _rn_08003040 = g_cpu.R[0];
    uint32_t _r_08003040;
    _r_08003040 = _rn_08003040 + 0x00000080u;
    arm_set_nzcv_add(_rn_08003040, 0x00000080u, _r_08003040);
    g_cpu.R[0] = _r_08003040;
    g_cpu.R[15] = 0x08003042u;
    runtime_tick(_cyc_08003040);
    /* 08003042  08003042 T ldrb r7,[r0] */
    g_cpu.R[15] = 0x08003042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003042 = 1u;
    _cyc_08003042 = 2u;
    uint32_t _base_08003042 = g_cpu.R[0];
    uint32_t _off_08003042;
    _off_08003042 = 0x00000000u;
    uint32_t _ea_08003042 = _base_08003042 + _off_08003042;
    uint32_t _post_08003042 = _base_08003042 + _off_08003042;
    _cyc_08003042 += runtime_mem_cycles(_ea_08003042, 1u, 0u);
    uint32_t _v_08003042;
    _v_08003042 = bus_read_u8(_ea_08003042);
    g_cpu.R[7] = _v_08003042;
    g_cpu.R[15] = 0x08003044u;
    runtime_tick(_cyc_08003042);
    /* 08003044  08003044 T cmps r1,r7 */
    g_cpu.R[15] = 0x08003044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003044 = 1u;
    _cyc_08003044 = 1u;
    uint32_t _rm_08003044 = g_cpu.R[7];
    uint32_t _op2_08003044;
    uint32_t _co_08003044;
    _op2_08003044 = _rm_08003044;
    _co_08003044 = cpsr_c();
    uint32_t _rn_08003044 = g_cpu.R[1];
    uint32_t _r_08003044;
    _r_08003044 = _rn_08003044 - _op2_08003044;
    arm_set_nzcv_sub(_rn_08003044, _op2_08003044, _r_08003044);
    g_cpu.R[15] = 0x08003046u;
    runtime_tick(_cyc_08003044);
    /* 08003046  08003046 T bge 0x0800304a */
    g_cpu.R[15] = 0x08003046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003046 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08003046 = 3u;
        g_cpu.R[15] = 0x0800304Au;
        runtime_tick(_cyc_08003046);
        runtime_dispatch(0x0800304Au);
        return;
    }
    g_cpu.R[15] = 0x08003048u;
    runtime_tick(_cyc_08003046);
    /* 08003048  08003048 T adds r7,r1,#0x0 */
    g_cpu.R[15] = 0x08003048u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003048 = 1u;
    _cyc_08003048 = 1u;
    uint32_t _rn_08003048 = g_cpu.R[1];
    uint32_t _r_08003048;
    _r_08003048 = _rn_08003048 + 0x00000000u;
    arm_set_nzcv_add(_rn_08003048, 0x00000000u, _r_08003048);
    g_cpu.R[7] = _r_08003048;
    g_cpu.R[15] = 0x0800304Au;
    runtime_tick(_cyc_08003048);
    /* fall-through to 0x0800304A */
    g_cpu.R[15] = 0x0800304Au;
    runtime_dispatch(0x0800304Au);
    return;
}
