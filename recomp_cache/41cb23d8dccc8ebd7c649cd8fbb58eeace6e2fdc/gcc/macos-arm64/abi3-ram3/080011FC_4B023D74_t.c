// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080011FC mode=thumb end=0x0800121A
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

OVL_EXPORT void func_080011FC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080011FCu);
    /* 080011FC  080011fc T movs r2,r4,lsl #2 */
    g_cpu.R[15] = 0x080011FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080011FC = 1u;
    _cyc_080011FC = 1u;
    uint32_t _rm_080011FC = g_cpu.R[4];
    uint32_t _op2_080011FC;
    uint32_t _co_080011FC;
    _op2_080011FC = _rm_080011FC << 2;
    _co_080011FC = (_rm_080011FC >> 30) & 1u;
    uint32_t _r_080011FC;
    _r_080011FC = _op2_080011FC;
    arm_set_nzc_logic(_r_080011FC, _co_080011FC);
    g_cpu.R[2] = _r_080011FC;
    g_cpu.R[15] = 0x080011FEu;
    runtime_tick(_cyc_080011FC);
    /* 080011FE  080011fe T adds r0,r2,r1 */
    g_cpu.R[15] = 0x080011FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080011FE = 1u;
    _cyc_080011FE = 1u;
    uint32_t _rm_080011FE = g_cpu.R[1];
    uint32_t _op2_080011FE;
    uint32_t _co_080011FE;
    _op2_080011FE = _rm_080011FE;
    _co_080011FE = cpsr_c();
    uint32_t _rn_080011FE = g_cpu.R[2];
    uint32_t _r_080011FE;
    _r_080011FE = _rn_080011FE + _op2_080011FE;
    arm_set_nzcv_add(_rn_080011FE, _op2_080011FE, _r_080011FE);
    g_cpu.R[0] = _r_080011FE;
    g_cpu.R[15] = 0x08001200u;
    runtime_tick(_cyc_080011FE);
    /* 08001200  08001200 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08001200u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001200 = 1u;
    _cyc_08001200 = 2u;
    uint32_t _base_08001200 = g_cpu.R[0];
    uint32_t _off_08001200;
    _off_08001200 = 0x00000000u;
    uint32_t _ea_08001200 = _base_08001200 + _off_08001200;
    uint32_t _post_08001200 = _base_08001200 + _off_08001200;
    _cyc_08001200 += runtime_mem_cycles(_ea_08001200, 1u, 0u);
    uint32_t _v_08001200;
    _v_08001200 = bus_read_u8(_ea_08001200);
    g_cpu.R[0] = _v_08001200;
    g_cpu.R[15] = 0x08001202u;
    runtime_tick(_cyc_08001200);
    /* 08001202  08001202 T movs r0,r0,lsl #31 */
    g_cpu.R[15] = 0x08001202u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001202 = 1u;
    _cyc_08001202 = 1u;
    uint32_t _rm_08001202 = g_cpu.R[0];
    uint32_t _op2_08001202;
    uint32_t _co_08001202;
    _op2_08001202 = _rm_08001202 << 31;
    _co_08001202 = (_rm_08001202 >> 1) & 1u;
    uint32_t _r_08001202;
    _r_08001202 = _op2_08001202;
    arm_set_nzc_logic(_r_08001202, _co_08001202);
    g_cpu.R[0] = _r_08001202;
    g_cpu.R[15] = 0x08001204u;
    runtime_tick(_cyc_08001202);
    /* 08001204  08001204 T adds r3,r1,#0x0 */
    g_cpu.R[15] = 0x08001204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001204 = 1u;
    _cyc_08001204 = 1u;
    uint32_t _rn_08001204 = g_cpu.R[1];
    uint32_t _r_08001204;
    _r_08001204 = _rn_08001204 + 0x00000000u;
    arm_set_nzcv_add(_rn_08001204, 0x00000000u, _r_08001204);
    g_cpu.R[3] = _r_08001204;
    g_cpu.R[15] = 0x08001206u;
    runtime_tick(_cyc_08001204);
    /* 08001206  08001206 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x08001206u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001206 = 1u;
    _cyc_08001206 = 1u;
    uint32_t _rn_08001206 = g_cpu.R[0];
    uint32_t _r_08001206;
    _r_08001206 = _rn_08001206 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08001206, 0x00000000u, _r_08001206);
    g_cpu.R[15] = 0x08001208u;
    runtime_tick(_cyc_08001206);
    /* 08001208  08001208 T beq 0x08001290 */
    g_cpu.R[15] = 0x08001208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001208 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001208 = 3u;
        g_cpu.R[15] = 0x08001290u;
        runtime_tick(_cyc_08001208);
        runtime_dispatch(0x08001290u);
        return;
    }
    g_cpu.R[15] = 0x0800120Au;
    runtime_tick(_cyc_08001208);
    /* 0800120A  0800120a T subs r0,r5,#0x1 */
    g_cpu.R[15] = 0x0800120Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800120A = 1u;
    _cyc_0800120A = 1u;
    uint32_t _rn_0800120A = g_cpu.R[5];
    uint32_t _r_0800120A;
    _r_0800120A = _rn_0800120A - 0x00000001u;
    arm_set_nzcv_sub(_rn_0800120A, 0x00000001u, _r_0800120A);
    g_cpu.R[0] = _r_0800120A;
    g_cpu.R[15] = 0x0800120Cu;
    runtime_tick(_cyc_0800120A);
    /* 0800120C  0800120c T cmps r0,#0x7 */
    g_cpu.R[15] = 0x0800120Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800120C = 1u;
    _cyc_0800120C = 1u;
    uint32_t _rn_0800120C = g_cpu.R[0];
    uint32_t _r_0800120C;
    _r_0800120C = _rn_0800120C - 0x00000007u;
    arm_set_nzcv_sub(_rn_0800120C, 0x00000007u, _r_0800120C);
    g_cpu.R[15] = 0x0800120Eu;
    runtime_tick(_cyc_0800120C);
    /* 0800120E  0800120e T bhi 0x08001290 */
    g_cpu.R[15] = 0x0800120Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800120E = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_0800120E = 3u;
        g_cpu.R[15] = 0x08001290u;
        runtime_tick(_cyc_0800120E);
        runtime_dispatch(0x08001290u);
        return;
    }
    g_cpu.R[15] = 0x08001210u;
    runtime_tick(_cyc_0800120E);
    /* 08001210  08001210 T movs r0,r0,lsl #2 */
    g_cpu.R[15] = 0x08001210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001210 = 1u;
    _cyc_08001210 = 1u;
    uint32_t _rm_08001210 = g_cpu.R[0];
    uint32_t _op2_08001210;
    uint32_t _co_08001210;
    _op2_08001210 = _rm_08001210 << 2;
    _co_08001210 = (_rm_08001210 >> 30) & 1u;
    uint32_t _r_08001210;
    _r_08001210 = _op2_08001210;
    arm_set_nzc_logic(_r_08001210, _co_08001210);
    g_cpu.R[0] = _r_08001210;
    g_cpu.R[15] = 0x08001212u;
    runtime_tick(_cyc_08001210);
    /* 08001212  08001212 T ldr r1,[r15,#0xc] */
    g_cpu.R[15] = 0x08001212u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001212 = 1u;
    _cyc_08001212 = 2u;
    uint32_t _base_08001212 = 0x08001216u & ~3u;
    uint32_t _off_08001212;
    _off_08001212 = 0x0000000Cu;
    uint32_t _ea_08001212 = _base_08001212 + _off_08001212;
    uint32_t _post_08001212 = _base_08001212 + _off_08001212;
    _cyc_08001212 += runtime_mem_cycles(_ea_08001212, 4u, 0u);
    uint32_t _v_08001212;
    { uint32_t _w = bus_read_u32(_ea_08001212 & ~3u); uint32_t _rot = (_ea_08001212 & 3u) * 8u; _v_08001212 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08001212;
    g_cpu.R[15] = 0x08001214u;
    runtime_tick(_cyc_08001212);
    /* 08001214  08001214 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08001214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001214 = 1u;
    _cyc_08001214 = 1u;
    uint32_t _rm_08001214 = g_cpu.R[1];
    uint32_t _op2_08001214;
    uint32_t _co_08001214;
    _op2_08001214 = _rm_08001214;
    _co_08001214 = cpsr_c();
    uint32_t _rn_08001214 = g_cpu.R[0];
    uint32_t _r_08001214;
    _r_08001214 = _rn_08001214 + _op2_08001214;
    arm_set_nzcv_add(_rn_08001214, _op2_08001214, _r_08001214);
    g_cpu.R[0] = _r_08001214;
    g_cpu.R[15] = 0x08001216u;
    runtime_tick(_cyc_08001214);
    /* 08001216  08001216 T ldr r0,[r0] */
    g_cpu.R[15] = 0x08001216u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001216 = 1u;
    _cyc_08001216 = 2u;
    uint32_t _base_08001216 = g_cpu.R[0];
    uint32_t _off_08001216;
    _off_08001216 = 0x00000000u;
    uint32_t _ea_08001216 = _base_08001216 + _off_08001216;
    uint32_t _post_08001216 = _base_08001216 + _off_08001216;
    _cyc_08001216 += runtime_mem_cycles(_ea_08001216, 4u, 0u);
    uint32_t _v_08001216;
    { uint32_t _w = bus_read_u32(_ea_08001216 & ~3u); uint32_t _rot = (_ea_08001216 & 3u) * 8u; _v_08001216 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08001216;
    g_cpu.R[15] = 0x08001218u;
    runtime_tick(_cyc_08001216);
    /* 08001218  08001218 T mov r15,r0 */
    g_cpu.R[15] = 0x08001218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001218 = 1u;
    _cyc_08001218 = 3u;
    uint32_t _rm_08001218 = g_cpu.R[0];
    uint32_t _op2_08001218;
    uint32_t _co_08001218;
    _op2_08001218 = _rm_08001218;
    _co_08001218 = cpsr_c();
    uint32_t _r_08001218;
    _r_08001218 = _op2_08001218;
    uint32_t _pc_08001218 = _r_08001218 & ~1u;
    g_cpu.R[15] = _pc_08001218;
    runtime_tick(_cyc_08001218);
    runtime_dispatch(_pc_08001218);
    return;
    g_cpu.R[15] = 0x0800121Au;
    runtime_tick(_cyc_08001218);
    /* fall-through to 0x0800121A */
    g_cpu.R[15] = 0x0800121Au;
    runtime_dispatch(0x0800121Au);
    return;
}
