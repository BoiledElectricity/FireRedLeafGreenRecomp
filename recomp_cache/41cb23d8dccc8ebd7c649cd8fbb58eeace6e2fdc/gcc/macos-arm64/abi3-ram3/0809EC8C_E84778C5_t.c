// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0809EC8C mode=thumb end=0x0809ECA8
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

OVL_EXPORT void func_0809EC8C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0809EC8Cu);
    /* 0809EC8C  0809ec8c T adds r5,r5,r1 */
    g_cpu.R[15] = 0x0809EC8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC8C = 1u;
    _cyc_0809EC8C = 1u;
    uint32_t _rm_0809EC8C = g_cpu.R[1];
    uint32_t _op2_0809EC8C;
    uint32_t _co_0809EC8C;
    _op2_0809EC8C = _rm_0809EC8C;
    _co_0809EC8C = cpsr_c();
    uint32_t _rn_0809EC8C = g_cpu.R[5];
    uint32_t _r_0809EC8C;
    _r_0809EC8C = _rn_0809EC8C + _op2_0809EC8C;
    arm_set_nzcv_add(_rn_0809EC8C, _op2_0809EC8C, _r_0809EC8C);
    g_cpu.R[5] = _r_0809EC8C;
    g_cpu.R[15] = 0x0809EC8Eu;
    runtime_tick(_cyc_0809EC8C);
    /* 0809EC8E  0809ec8e T movs r2,#0x3c */
    g_cpu.R[15] = 0x0809EC8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC8E = 1u;
    _cyc_0809EC8E = 1u;
    uint32_t _r_0809EC8E;
    _r_0809EC8E = 0x0000003Cu;
    arm_set_nzc_logic(_r_0809EC8E, cpsr_c());
    g_cpu.R[2] = _r_0809EC8E;
    g_cpu.R[15] = 0x0809EC90u;
    runtime_tick(_cyc_0809EC8E);
    /* 0809EC90  0809ec90 T ldrsh r0,[r6,+r2] */
    g_cpu.R[15] = 0x0809EC90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC90 = 1u;
    _cyc_0809EC90 = 2u;
    uint32_t _base_0809EC90 = g_cpu.R[6];
    uint32_t _off_0809EC90;
    uint32_t _morm_0809EC90 = g_cpu.R[2];
    _off_0809EC90 = _morm_0809EC90;
    uint32_t _ea_0809EC90 = _base_0809EC90 + _off_0809EC90;
    uint32_t _post_0809EC90 = _base_0809EC90 + _off_0809EC90;
    _cyc_0809EC90 += runtime_mem_cycles(_ea_0809EC90, 2u, 0u);
    uint32_t _v_0809EC90;
    if (_ea_0809EC90 & 1u) _v_0809EC90 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0809EC90);
    else _v_0809EC90 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0809EC90);
    g_cpu.R[0] = _v_0809EC90;
    g_cpu.R[15] = 0x0809EC92u;
    runtime_tick(_cyc_0809EC90);
    /* 0809EC92  0809ec92 T movs r4,r0,lsl #4 */
    g_cpu.R[15] = 0x0809EC92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC92 = 1u;
    _cyc_0809EC92 = 1u;
    uint32_t _rm_0809EC92 = g_cpu.R[0];
    uint32_t _op2_0809EC92;
    uint32_t _co_0809EC92;
    _op2_0809EC92 = _rm_0809EC92 << 4;
    _co_0809EC92 = (_rm_0809EC92 >> 28) & 1u;
    uint32_t _r_0809EC92;
    _r_0809EC92 = _op2_0809EC92;
    arm_set_nzc_logic(_r_0809EC92, _co_0809EC92);
    g_cpu.R[4] = _r_0809EC92;
    g_cpu.R[15] = 0x0809EC94u;
    runtime_tick(_cyc_0809EC92);
    /* 0809EC94  0809ec94 T adds r4,r4,r0 */
    g_cpu.R[15] = 0x0809EC94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC94 = 1u;
    _cyc_0809EC94 = 1u;
    uint32_t _rm_0809EC94 = g_cpu.R[0];
    uint32_t _op2_0809EC94;
    uint32_t _co_0809EC94;
    _op2_0809EC94 = _rm_0809EC94;
    _co_0809EC94 = cpsr_c();
    uint32_t _rn_0809EC94 = g_cpu.R[4];
    uint32_t _r_0809EC94;
    _r_0809EC94 = _rn_0809EC94 + _op2_0809EC94;
    arm_set_nzcv_add(_rn_0809EC94, _op2_0809EC94, _r_0809EC94);
    g_cpu.R[4] = _r_0809EC94;
    g_cpu.R[15] = 0x0809EC96u;
    runtime_tick(_cyc_0809EC94);
    /* 0809EC96  0809ec96 T movs r4,r4,lsl #2 */
    g_cpu.R[15] = 0x0809EC96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC96 = 1u;
    _cyc_0809EC96 = 1u;
    uint32_t _rm_0809EC96 = g_cpu.R[4];
    uint32_t _op2_0809EC96;
    uint32_t _co_0809EC96;
    _op2_0809EC96 = _rm_0809EC96 << 2;
    _co_0809EC96 = (_rm_0809EC96 >> 30) & 1u;
    uint32_t _r_0809EC96;
    _r_0809EC96 = _op2_0809EC96;
    arm_set_nzc_logic(_r_0809EC96, _co_0809EC96);
    g_cpu.R[4] = _r_0809EC96;
    g_cpu.R[15] = 0x0809EC98u;
    runtime_tick(_cyc_0809EC96);
    /* 0809EC98  0809ec98 T adds r4,r4,r1 */
    g_cpu.R[15] = 0x0809EC98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC98 = 1u;
    _cyc_0809EC98 = 1u;
    uint32_t _rm_0809EC98 = g_cpu.R[1];
    uint32_t _op2_0809EC98;
    uint32_t _co_0809EC98;
    _op2_0809EC98 = _rm_0809EC98;
    _co_0809EC98 = cpsr_c();
    uint32_t _rn_0809EC98 = g_cpu.R[4];
    uint32_t _r_0809EC98;
    _r_0809EC98 = _rn_0809EC98 + _op2_0809EC98;
    arm_set_nzcv_add(_rn_0809EC98, _op2_0809EC98, _r_0809EC98);
    g_cpu.R[4] = _r_0809EC98;
    g_cpu.R[15] = 0x0809EC9Au;
    runtime_tick(_cyc_0809EC98);
    /* 0809EC9A  0809ec9a T ldr r0,[r15,#0x2c] */
    g_cpu.R[15] = 0x0809EC9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC9A = 1u;
    _cyc_0809EC9A = 2u;
    uint32_t _base_0809EC9A = 0x0809EC9Eu & ~3u;
    uint32_t _off_0809EC9A;
    _off_0809EC9A = 0x0000002Cu;
    uint32_t _ea_0809EC9A = _base_0809EC9A + _off_0809EC9A;
    uint32_t _post_0809EC9A = _base_0809EC9A + _off_0809EC9A;
    _cyc_0809EC9A += runtime_mem_cycles(_ea_0809EC9A, 4u, 0u);
    uint32_t _v_0809EC9A;
    { uint32_t _w = bus_read_u32(_ea_0809EC9A & ~3u); uint32_t _rot = (_ea_0809EC9A & 3u) * 8u; _v_0809EC9A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809EC9A;
    g_cpu.R[15] = 0x0809EC9Cu;
    runtime_tick(_cyc_0809EC9A);
    /* 0809EC9C  0809ec9c T ldr r0,[r0] */
    g_cpu.R[15] = 0x0809EC9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC9C = 1u;
    _cyc_0809EC9C = 2u;
    uint32_t _base_0809EC9C = g_cpu.R[0];
    uint32_t _off_0809EC9C;
    _off_0809EC9C = 0x00000000u;
    uint32_t _ea_0809EC9C = _base_0809EC9C + _off_0809EC9C;
    uint32_t _post_0809EC9C = _base_0809EC9C + _off_0809EC9C;
    _cyc_0809EC9C += runtime_mem_cycles(_ea_0809EC9C, 4u, 0u);
    uint32_t _v_0809EC9C;
    { uint32_t _w = bus_read_u32(_ea_0809EC9C & ~3u); uint32_t _rot = (_ea_0809EC9C & 3u) * 8u; _v_0809EC9C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0809EC9C;
    g_cpu.R[15] = 0x0809EC9Eu;
    runtime_tick(_cyc_0809EC9C);
    /* 0809EC9E  0809ec9e T ldr r1,[r15,#0x2c] */
    g_cpu.R[15] = 0x0809EC9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809EC9E = 1u;
    _cyc_0809EC9E = 2u;
    uint32_t _base_0809EC9E = 0x0809ECA2u & ~3u;
    uint32_t _off_0809EC9E;
    _off_0809EC9E = 0x0000002Cu;
    uint32_t _ea_0809EC9E = _base_0809EC9E + _off_0809EC9E;
    uint32_t _post_0809EC9E = _base_0809EC9E + _off_0809EC9E;
    _cyc_0809EC9E += runtime_mem_cycles(_ea_0809EC9E, 4u, 0u);
    uint32_t _v_0809EC9E;
    { uint32_t _w = bus_read_u32(_ea_0809EC9E & ~3u); uint32_t _rot = (_ea_0809EC9E & 3u) * 8u; _v_0809EC9E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0809EC9E;
    g_cpu.R[15] = 0x0809ECA0u;
    runtime_tick(_cyc_0809EC9E);
    /* 0809ECA0  0809eca0 T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0809ECA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809ECA0 = 1u;
    _cyc_0809ECA0 = 1u;
    uint32_t _rm_0809ECA0 = g_cpu.R[1];
    uint32_t _op2_0809ECA0;
    uint32_t _co_0809ECA0;
    _op2_0809ECA0 = _rm_0809ECA0;
    _co_0809ECA0 = cpsr_c();
    uint32_t _rn_0809ECA0 = g_cpu.R[0];
    uint32_t _r_0809ECA0;
    _r_0809ECA0 = _rn_0809ECA0 + _op2_0809ECA0;
    arm_set_nzcv_add(_rn_0809ECA0, _op2_0809ECA0, _r_0809ECA0);
    g_cpu.R[0] = _r_0809ECA0;
    g_cpu.R[15] = 0x0809ECA2u;
    runtime_tick(_cyc_0809ECA0);
    /* 0809ECA2  0809eca2 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x0809ECA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809ECA2 = 1u;
    _cyc_0809ECA2 = 2u;
    uint32_t _base_0809ECA2 = g_cpu.R[0];
    uint32_t _off_0809ECA2;
    _off_0809ECA2 = 0x00000000u;
    uint32_t _ea_0809ECA2 = _base_0809ECA2 + _off_0809ECA2;
    uint32_t _post_0809ECA2 = _base_0809ECA2 + _off_0809ECA2;
    _cyc_0809ECA2 += runtime_mem_cycles(_ea_0809ECA2, 1u, 0u);
    uint32_t _v_0809ECA2;
    _v_0809ECA2 = bus_read_u8(_ea_0809ECA2);
    g_cpu.R[0] = _v_0809ECA2;
    g_cpu.R[15] = 0x0809ECA4u;
    runtime_tick(_cyc_0809ECA2);
    /* 0809ECA4  0809eca4 T bl.hi 0x0809dca8 */
    g_cpu.R[15] = 0x0809ECA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809ECA4 = 1u;
    _cyc_0809ECA4 = 1u;
    g_cpu.R[14] = 0x0809DCA8u;
    g_cpu.R[15] = 0x0809ECA6u;
    runtime_tick(_cyc_0809ECA4);
    /* 0809ECA6  0809eca6 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0809ECA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0809ECA6 = 1u;
    _cyc_0809ECA6 = 3u;
    uint32_t _blt_0809ECA6 = (g_cpu.R[14] + 0x00000178u) & ~1u;
    g_cpu.R[14] = 0x0809ECA9u;
    g_cpu.R[15] = _blt_0809ECA6;
    runtime_call_push_return(0x0809ECA8u);
    runtime_tick(_cyc_0809ECA6);
    _cyc_0809ECA6 = 0u;
    runtime_dispatch(_blt_0809ECA6);
    if (g_cpu.R[15] != 0x0809ECA8u) { runtime_call_cancel_return(0x0809ECA8u); return; }
    g_cpu.R[15] = 0x0809ECA8u;
    runtime_tick(_cyc_0809ECA6);
    /* fall-through to 0x0809ECA8 */
    g_cpu.R[15] = 0x0809ECA8u;
    runtime_dispatch(0x0809ECA8u);
    return;
}
