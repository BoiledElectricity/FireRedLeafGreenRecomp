// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0800303A mode=thumb end=0x0800304A
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

OVL_EXPORT void func_0800303A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0800303Au);
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
