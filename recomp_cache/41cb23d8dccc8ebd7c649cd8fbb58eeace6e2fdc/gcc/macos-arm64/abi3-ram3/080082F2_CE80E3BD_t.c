// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080082F2 mode=thumb end=0x08008346
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

OVL_EXPORT void func_080082F2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080082F2u);
    /* 080082F2  080082f2 T ldr r0,[r1,#0x10] */
    g_cpu.R[15] = 0x080082F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082F2 = 1u;
    _cyc_080082F2 = 2u;
    uint32_t _base_080082F2 = g_cpu.R[1];
    uint32_t _off_080082F2;
    _off_080082F2 = 0x00000010u;
    uint32_t _ea_080082F2 = _base_080082F2 + _off_080082F2;
    uint32_t _post_080082F2 = _base_080082F2 + _off_080082F2;
    _cyc_080082F2 += runtime_mem_cycles(_ea_080082F2, 4u, 0u);
    uint32_t _v_080082F2;
    { uint32_t _w = bus_read_u32(_ea_080082F2 & ~3u); uint32_t _rot = (_ea_080082F2 & 3u) * 8u; _v_080082F2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080082F2;
    g_cpu.R[15] = 0x080082F4u;
    runtime_tick(_cyc_080082F2);
    /* 080082F4  080082f4 T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x080082F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082F4 = 1u;
    _cyc_080082F4 = 1u;
    uint32_t _rm_080082F4 = g_cpu.R[3];
    uint32_t _op2_080082F4;
    uint32_t _co_080082F4;
    _op2_080082F4 = _rm_080082F4 << 2;
    _co_080082F4 = (_rm_080082F4 >> 30) & 1u;
    uint32_t _r_080082F4;
    _r_080082F4 = _op2_080082F4;
    arm_set_nzc_logic(_r_080082F4, _co_080082F4);
    g_cpu.R[3] = _r_080082F4;
    g_cpu.R[15] = 0x080082F6u;
    runtime_tick(_cyc_080082F4);
    /* 080082F6  080082f6 T adds r3,r3,r0 */
    g_cpu.R[15] = 0x080082F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082F6 = 1u;
    _cyc_080082F6 = 1u;
    uint32_t _rm_080082F6 = g_cpu.R[0];
    uint32_t _op2_080082F6;
    uint32_t _co_080082F6;
    _op2_080082F6 = _rm_080082F6;
    _co_080082F6 = cpsr_c();
    uint32_t _rn_080082F6 = g_cpu.R[3];
    uint32_t _r_080082F6;
    _r_080082F6 = _rn_080082F6 + _op2_080082F6;
    arm_set_nzcv_add(_rn_080082F6, _op2_080082F6, _r_080082F6);
    g_cpu.R[3] = _r_080082F6;
    g_cpu.R[15] = 0x080082F8u;
    runtime_tick(_cyc_080082F6);
    /* 080082F8  080082f8 T ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x080082F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082F8 = 1u;
    _cyc_080082F8 = 2u;
    uint32_t _base_080082F8 = g_cpu.R[4];
    uint32_t _off_080082F8;
    _off_080082F8 = 0x00000001u;
    uint32_t _ea_080082F8 = _base_080082F8 + _off_080082F8;
    uint32_t _post_080082F8 = _base_080082F8 + _off_080082F8;
    _cyc_080082F8 += runtime_mem_cycles(_ea_080082F8, 1u, 0u);
    uint32_t _v_080082F8;
    _v_080082F8 = bus_read_u8(_ea_080082F8);
    g_cpu.R[0] = _v_080082F8;
    g_cpu.R[15] = 0x080082FAu;
    runtime_tick(_cyc_080082F8);
    /* 080082FA  080082fa T ldr r3,[r3] */
    g_cpu.R[15] = 0x080082FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082FA = 1u;
    _cyc_080082FA = 2u;
    uint32_t _base_080082FA = g_cpu.R[3];
    uint32_t _off_080082FA;
    _off_080082FA = 0x00000000u;
    uint32_t _ea_080082FA = _base_080082FA + _off_080082FA;
    uint32_t _post_080082FA = _base_080082FA + _off_080082FA;
    _cyc_080082FA += runtime_mem_cycles(_ea_080082FA, 4u, 0u);
    uint32_t _v_080082FA;
    { uint32_t _w = bus_read_u32(_ea_080082FA & ~3u); uint32_t _rot = (_ea_080082FA & 3u) * 8u; _v_080082FA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080082FA;
    g_cpu.R[15] = 0x080082FCu;
    runtime_tick(_cyc_080082FA);
    /* 080082FC  080082fc T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x080082FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082FC = 1u;
    _cyc_080082FC = 1u;
    uint32_t _rm_080082FC = g_cpu.R[0];
    uint32_t _op2_080082FC;
    uint32_t _co_080082FC;
    _op2_080082FC = _rm_080082FC << 3;
    _co_080082FC = (_rm_080082FC >> 29) & 1u;
    uint32_t _r_080082FC;
    _r_080082FC = _op2_080082FC;
    arm_set_nzc_logic(_r_080082FC, _co_080082FC);
    g_cpu.R[0] = _r_080082FC;
    g_cpu.R[15] = 0x080082FEu;
    runtime_tick(_cyc_080082FC);
    /* 080082FE  080082fe T adds r0,r0,r3 */
    g_cpu.R[15] = 0x080082FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080082FE = 1u;
    _cyc_080082FE = 1u;
    uint32_t _rm_080082FE = g_cpu.R[3];
    uint32_t _op2_080082FE;
    uint32_t _co_080082FE;
    _op2_080082FE = _rm_080082FE;
    _co_080082FE = cpsr_c();
    uint32_t _rn_080082FE = g_cpu.R[0];
    uint32_t _r_080082FE;
    _r_080082FE = _rn_080082FE + _op2_080082FE;
    arm_set_nzcv_add(_rn_080082FE, _op2_080082FE, _r_080082FE);
    g_cpu.R[0] = _r_080082FE;
    g_cpu.R[15] = 0x08008300u;
    runtime_tick(_cyc_080082FE);
    /* 08008300  08008300 T ldrh r0,[r0] */
    g_cpu.R[15] = 0x08008300u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008300 = 1u;
    _cyc_08008300 = 2u;
    uint32_t _base_08008300 = g_cpu.R[0];
    uint32_t _off_08008300;
    _off_08008300 = 0x00000000u;
    uint32_t _ea_08008300 = _base_08008300 + _off_08008300;
    uint32_t _post_08008300 = _base_08008300 + _off_08008300;
    _cyc_08008300 += runtime_mem_cycles(_ea_08008300, 2u, 0u);
    uint32_t _v_08008300;
    { uint32_t _h = bus_read_u16(_ea_08008300 & ~1u); if (_ea_08008300 & 1u) _v_08008300 = ((_h >> 8) | (_h << 24)); else _v_08008300 = _h; }
    g_cpu.R[0] = _v_08008300;
    g_cpu.R[15] = 0x08008302u;
    runtime_tick(_cyc_08008300);
    /* 08008302  08008302 T strh r0,[r2] */
    g_cpu.R[15] = 0x08008302u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008302 = 1u;
    _cyc_08008302 = 1u;
    uint32_t _base_08008302 = g_cpu.R[2];
    uint32_t _off_08008302;
    _off_08008302 = 0x00000000u;
    uint32_t _ea_08008302 = _base_08008302 + _off_08008302;
    uint32_t _post_08008302 = _base_08008302 + _off_08008302;
    _cyc_08008302 += runtime_mem_cycles(_ea_08008302, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008302u, _ea_08008302 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008302 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08008304u;
    runtime_tick(_cyc_08008302);
    /* 08008304  08008304 T ldrb r3,[r4] */
    g_cpu.R[15] = 0x08008304u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008304 = 1u;
    _cyc_08008304 = 2u;
    uint32_t _base_08008304 = g_cpu.R[4];
    uint32_t _off_08008304;
    _off_08008304 = 0x00000000u;
    uint32_t _ea_08008304 = _base_08008304 + _off_08008304;
    uint32_t _post_08008304 = _base_08008304 + _off_08008304;
    _cyc_08008304 += runtime_mem_cycles(_ea_08008304, 1u, 0u);
    uint32_t _v_08008304;
    _v_08008304 = bus_read_u8(_ea_08008304);
    g_cpu.R[3] = _v_08008304;
    g_cpu.R[15] = 0x08008306u;
    runtime_tick(_cyc_08008304);
    /* 08008306  08008306 T ldr r0,[r1,#0x10] */
    g_cpu.R[15] = 0x08008306u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008306 = 1u;
    _cyc_08008306 = 2u;
    uint32_t _base_08008306 = g_cpu.R[1];
    uint32_t _off_08008306;
    _off_08008306 = 0x00000010u;
    uint32_t _ea_08008306 = _base_08008306 + _off_08008306;
    uint32_t _post_08008306 = _base_08008306 + _off_08008306;
    _cyc_08008306 += runtime_mem_cycles(_ea_08008306, 4u, 0u);
    uint32_t _v_08008306;
    { uint32_t _w = bus_read_u32(_ea_08008306 & ~3u); uint32_t _rot = (_ea_08008306 & 3u) * 8u; _v_08008306 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08008306;
    g_cpu.R[15] = 0x08008308u;
    runtime_tick(_cyc_08008306);
    /* 08008308  08008308 T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x08008308u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008308 = 1u;
    _cyc_08008308 = 1u;
    uint32_t _rm_08008308 = g_cpu.R[3];
    uint32_t _op2_08008308;
    uint32_t _co_08008308;
    _op2_08008308 = _rm_08008308 << 2;
    _co_08008308 = (_rm_08008308 >> 30) & 1u;
    uint32_t _r_08008308;
    _r_08008308 = _op2_08008308;
    arm_set_nzc_logic(_r_08008308, _co_08008308);
    g_cpu.R[3] = _r_08008308;
    g_cpu.R[15] = 0x0800830Au;
    runtime_tick(_cyc_08008308);
    /* 0800830A  0800830a T adds r3,r3,r0 */
    g_cpu.R[15] = 0x0800830Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800830A = 1u;
    _cyc_0800830A = 1u;
    uint32_t _rm_0800830A = g_cpu.R[0];
    uint32_t _op2_0800830A;
    uint32_t _co_0800830A;
    _op2_0800830A = _rm_0800830A;
    _co_0800830A = cpsr_c();
    uint32_t _rn_0800830A = g_cpu.R[3];
    uint32_t _r_0800830A;
    _r_0800830A = _rn_0800830A + _op2_0800830A;
    arm_set_nzcv_add(_rn_0800830A, _op2_0800830A, _r_0800830A);
    g_cpu.R[3] = _r_0800830A;
    g_cpu.R[15] = 0x0800830Cu;
    runtime_tick(_cyc_0800830A);
    /* 0800830C  0800830c T ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x0800830Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800830C = 1u;
    _cyc_0800830C = 2u;
    uint32_t _base_0800830C = g_cpu.R[4];
    uint32_t _off_0800830C;
    _off_0800830C = 0x00000001u;
    uint32_t _ea_0800830C = _base_0800830C + _off_0800830C;
    uint32_t _post_0800830C = _base_0800830C + _off_0800830C;
    _cyc_0800830C += runtime_mem_cycles(_ea_0800830C, 1u, 0u);
    uint32_t _v_0800830C;
    _v_0800830C = bus_read_u8(_ea_0800830C);
    g_cpu.R[0] = _v_0800830C;
    g_cpu.R[15] = 0x0800830Eu;
    runtime_tick(_cyc_0800830C);
    /* 0800830E  0800830e T ldr r3,[r3] */
    g_cpu.R[15] = 0x0800830Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800830E = 1u;
    _cyc_0800830E = 2u;
    uint32_t _base_0800830E = g_cpu.R[3];
    uint32_t _off_0800830E;
    _off_0800830E = 0x00000000u;
    uint32_t _ea_0800830E = _base_0800830E + _off_0800830E;
    uint32_t _post_0800830E = _base_0800830E + _off_0800830E;
    _cyc_0800830E += runtime_mem_cycles(_ea_0800830E, 4u, 0u);
    uint32_t _v_0800830E;
    { uint32_t _w = bus_read_u32(_ea_0800830E & ~3u); uint32_t _rot = (_ea_0800830E & 3u) * 8u; _v_0800830E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0800830E;
    g_cpu.R[15] = 0x08008310u;
    runtime_tick(_cyc_0800830E);
    /* 08008310  08008310 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08008310u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008310 = 1u;
    _cyc_08008310 = 1u;
    uint32_t _rm_08008310 = g_cpu.R[0];
    uint32_t _op2_08008310;
    uint32_t _co_08008310;
    _op2_08008310 = _rm_08008310 << 3;
    _co_08008310 = (_rm_08008310 >> 29) & 1u;
    uint32_t _r_08008310;
    _r_08008310 = _op2_08008310;
    arm_set_nzc_logic(_r_08008310, _co_08008310);
    g_cpu.R[0] = _r_08008310;
    g_cpu.R[15] = 0x08008312u;
    runtime_tick(_cyc_08008310);
    /* 08008312  08008312 T adds r0,r0,r3 */
    g_cpu.R[15] = 0x08008312u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008312 = 1u;
    _cyc_08008312 = 1u;
    uint32_t _rm_08008312 = g_cpu.R[3];
    uint32_t _op2_08008312;
    uint32_t _co_08008312;
    _op2_08008312 = _rm_08008312;
    _co_08008312 = cpsr_c();
    uint32_t _rn_08008312 = g_cpu.R[0];
    uint32_t _r_08008312;
    _r_08008312 = _rn_08008312 + _op2_08008312;
    arm_set_nzcv_add(_rn_08008312, _op2_08008312, _r_08008312);
    g_cpu.R[0] = _r_08008312;
    g_cpu.R[15] = 0x08008314u;
    runtime_tick(_cyc_08008312);
    /* 08008314  08008314 T ldrh r0,[r0,#0x2] */
    g_cpu.R[15] = 0x08008314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008314 = 1u;
    _cyc_08008314 = 2u;
    uint32_t _base_08008314 = g_cpu.R[0];
    uint32_t _off_08008314;
    _off_08008314 = 0x00000002u;
    uint32_t _ea_08008314 = _base_08008314 + _off_08008314;
    uint32_t _post_08008314 = _base_08008314 + _off_08008314;
    _cyc_08008314 += runtime_mem_cycles(_ea_08008314, 2u, 0u);
    uint32_t _v_08008314;
    { uint32_t _h = bus_read_u16(_ea_08008314 & ~1u); if (_ea_08008314 & 1u) _v_08008314 = ((_h >> 8) | (_h << 24)); else _v_08008314 = _h; }
    g_cpu.R[0] = _v_08008314;
    g_cpu.R[15] = 0x08008316u;
    runtime_tick(_cyc_08008314);
    /* 08008316  08008316 T strh r0,[r2,#0x2] */
    g_cpu.R[15] = 0x08008316u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008316 = 1u;
    _cyc_08008316 = 1u;
    uint32_t _base_08008316 = g_cpu.R[2];
    uint32_t _off_08008316;
    _off_08008316 = 0x00000002u;
    uint32_t _ea_08008316 = _base_08008316 + _off_08008316;
    uint32_t _post_08008316 = _base_08008316 + _off_08008316;
    _cyc_08008316 += runtime_mem_cycles(_ea_08008316, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08008316u, _ea_08008316 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08008316 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08008318u;
    runtime_tick(_cyc_08008316);
    /* 08008318  08008318 T ldrb r3,[r4] */
    g_cpu.R[15] = 0x08008318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008318 = 1u;
    _cyc_08008318 = 2u;
    uint32_t _base_08008318 = g_cpu.R[4];
    uint32_t _off_08008318;
    _off_08008318 = 0x00000000u;
    uint32_t _ea_08008318 = _base_08008318 + _off_08008318;
    uint32_t _post_08008318 = _base_08008318 + _off_08008318;
    _cyc_08008318 += runtime_mem_cycles(_ea_08008318, 1u, 0u);
    uint32_t _v_08008318;
    _v_08008318 = bus_read_u8(_ea_08008318);
    g_cpu.R[3] = _v_08008318;
    g_cpu.R[15] = 0x0800831Au;
    runtime_tick(_cyc_08008318);
    /* 0800831A  0800831a T ldr r0,[r1,#0x10] */
    g_cpu.R[15] = 0x0800831Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800831A = 1u;
    _cyc_0800831A = 2u;
    uint32_t _base_0800831A = g_cpu.R[1];
    uint32_t _off_0800831A;
    _off_0800831A = 0x00000010u;
    uint32_t _ea_0800831A = _base_0800831A + _off_0800831A;
    uint32_t _post_0800831A = _base_0800831A + _off_0800831A;
    _cyc_0800831A += runtime_mem_cycles(_ea_0800831A, 4u, 0u);
    uint32_t _v_0800831A;
    { uint32_t _w = bus_read_u32(_ea_0800831A & ~3u); uint32_t _rot = (_ea_0800831A & 3u) * 8u; _v_0800831A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0800831A;
    g_cpu.R[15] = 0x0800831Cu;
    runtime_tick(_cyc_0800831A);
    /* 0800831C  0800831c T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x0800831Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800831C = 1u;
    _cyc_0800831C = 1u;
    uint32_t _rm_0800831C = g_cpu.R[3];
    uint32_t _op2_0800831C;
    uint32_t _co_0800831C;
    _op2_0800831C = _rm_0800831C << 2;
    _co_0800831C = (_rm_0800831C >> 30) & 1u;
    uint32_t _r_0800831C;
    _r_0800831C = _op2_0800831C;
    arm_set_nzc_logic(_r_0800831C, _co_0800831C);
    g_cpu.R[3] = _r_0800831C;
    g_cpu.R[15] = 0x0800831Eu;
    runtime_tick(_cyc_0800831C);
    /* 0800831E  0800831e T adds r3,r3,r0 */
    g_cpu.R[15] = 0x0800831Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800831E = 1u;
    _cyc_0800831E = 1u;
    uint32_t _rm_0800831E = g_cpu.R[0];
    uint32_t _op2_0800831E;
    uint32_t _co_0800831E;
    _op2_0800831E = _rm_0800831E;
    _co_0800831E = cpsr_c();
    uint32_t _rn_0800831E = g_cpu.R[3];
    uint32_t _r_0800831E;
    _r_0800831E = _rn_0800831E + _op2_0800831E;
    arm_set_nzcv_add(_rn_0800831E, _op2_0800831E, _r_0800831E);
    g_cpu.R[3] = _r_0800831E;
    g_cpu.R[15] = 0x08008320u;
    runtime_tick(_cyc_0800831E);
    /* 08008320  08008320 T ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x08008320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008320 = 1u;
    _cyc_08008320 = 2u;
    uint32_t _base_08008320 = g_cpu.R[4];
    uint32_t _off_08008320;
    _off_08008320 = 0x00000001u;
    uint32_t _ea_08008320 = _base_08008320 + _off_08008320;
    uint32_t _post_08008320 = _base_08008320 + _off_08008320;
    _cyc_08008320 += runtime_mem_cycles(_ea_08008320, 1u, 0u);
    uint32_t _v_08008320;
    _v_08008320 = bus_read_u8(_ea_08008320);
    g_cpu.R[0] = _v_08008320;
    g_cpu.R[15] = 0x08008322u;
    runtime_tick(_cyc_08008320);
    /* 08008322  08008322 T ldr r3,[r3] */
    g_cpu.R[15] = 0x08008322u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008322 = 1u;
    _cyc_08008322 = 2u;
    uint32_t _base_08008322 = g_cpu.R[3];
    uint32_t _off_08008322;
    _off_08008322 = 0x00000000u;
    uint32_t _ea_08008322 = _base_08008322 + _off_08008322;
    uint32_t _post_08008322 = _base_08008322 + _off_08008322;
    _cyc_08008322 += runtime_mem_cycles(_ea_08008322, 4u, 0u);
    uint32_t _v_08008322;
    { uint32_t _w = bus_read_u32(_ea_08008322 & ~3u); uint32_t _rot = (_ea_08008322 & 3u) * 8u; _v_08008322 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08008322;
    g_cpu.R[15] = 0x08008324u;
    runtime_tick(_cyc_08008322);
    /* 08008324  08008324 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08008324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008324 = 1u;
    _cyc_08008324 = 1u;
    uint32_t _rm_08008324 = g_cpu.R[0];
    uint32_t _op2_08008324;
    uint32_t _co_08008324;
    _op2_08008324 = _rm_08008324 << 3;
    _co_08008324 = (_rm_08008324 >> 29) & 1u;
    uint32_t _r_08008324;
    _r_08008324 = _op2_08008324;
    arm_set_nzc_logic(_r_08008324, _co_08008324);
    g_cpu.R[0] = _r_08008324;
    g_cpu.R[15] = 0x08008326u;
    runtime_tick(_cyc_08008324);
    /* 08008326  08008326 T adds r0,r0,r3 */
    g_cpu.R[15] = 0x08008326u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008326 = 1u;
    _cyc_08008326 = 1u;
    uint32_t _rm_08008326 = g_cpu.R[3];
    uint32_t _op2_08008326;
    uint32_t _co_08008326;
    _op2_08008326 = _rm_08008326;
    _co_08008326 = cpsr_c();
    uint32_t _rn_08008326 = g_cpu.R[0];
    uint32_t _r_08008326;
    _r_08008326 = _rn_08008326 + _op2_08008326;
    arm_set_nzcv_add(_rn_08008326, _op2_08008326, _r_08008326);
    g_cpu.R[0] = _r_08008326;
    g_cpu.R[15] = 0x08008328u;
    runtime_tick(_cyc_08008326);
    /* 08008328  08008328 T ldrb r0,[r0,#0x4] */
    g_cpu.R[15] = 0x08008328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008328 = 1u;
    _cyc_08008328 = 2u;
    uint32_t _base_08008328 = g_cpu.R[0];
    uint32_t _off_08008328;
    _off_08008328 = 0x00000004u;
    uint32_t _ea_08008328 = _base_08008328 + _off_08008328;
    uint32_t _post_08008328 = _base_08008328 + _off_08008328;
    _cyc_08008328 += runtime_mem_cycles(_ea_08008328, 1u, 0u);
    uint32_t _v_08008328;
    _v_08008328 = bus_read_u8(_ea_08008328);
    g_cpu.R[0] = _v_08008328;
    g_cpu.R[15] = 0x0800832Au;
    runtime_tick(_cyc_08008328);
    /* 0800832A  0800832a T strb r0,[r2,#0x4] */
    g_cpu.R[15] = 0x0800832Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800832A = 1u;
    _cyc_0800832A = 1u;
    uint32_t _base_0800832A = g_cpu.R[2];
    uint32_t _off_0800832A;
    _off_0800832A = 0x00000004u;
    uint32_t _ea_0800832A = _base_0800832A + _off_0800832A;
    uint32_t _post_0800832A = _base_0800832A + _off_0800832A;
    _cyc_0800832A += runtime_mem_cycles(_ea_0800832A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800832Au, _ea_0800832A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0800832A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0800832Cu;
    runtime_tick(_cyc_0800832A);
    /* 0800832C  0800832c T ldrb r3,[r4] */
    g_cpu.R[15] = 0x0800832Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800832C = 1u;
    _cyc_0800832C = 2u;
    uint32_t _base_0800832C = g_cpu.R[4];
    uint32_t _off_0800832C;
    _off_0800832C = 0x00000000u;
    uint32_t _ea_0800832C = _base_0800832C + _off_0800832C;
    uint32_t _post_0800832C = _base_0800832C + _off_0800832C;
    _cyc_0800832C += runtime_mem_cycles(_ea_0800832C, 1u, 0u);
    uint32_t _v_0800832C;
    _v_0800832C = bus_read_u8(_ea_0800832C);
    g_cpu.R[3] = _v_0800832C;
    g_cpu.R[15] = 0x0800832Eu;
    runtime_tick(_cyc_0800832C);
    /* 0800832E  0800832e T ldr r0,[r1,#0x10] */
    g_cpu.R[15] = 0x0800832Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800832E = 1u;
    _cyc_0800832E = 2u;
    uint32_t _base_0800832E = g_cpu.R[1];
    uint32_t _off_0800832E;
    _off_0800832E = 0x00000010u;
    uint32_t _ea_0800832E = _base_0800832E + _off_0800832E;
    uint32_t _post_0800832E = _base_0800832E + _off_0800832E;
    _cyc_0800832E += runtime_mem_cycles(_ea_0800832E, 4u, 0u);
    uint32_t _v_0800832E;
    { uint32_t _w = bus_read_u32(_ea_0800832E & ~3u); uint32_t _rot = (_ea_0800832E & 3u) * 8u; _v_0800832E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0800832E;
    g_cpu.R[15] = 0x08008330u;
    runtime_tick(_cyc_0800832E);
    /* 08008330  08008330 T movs r3,r3,lsl #2 */
    g_cpu.R[15] = 0x08008330u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008330 = 1u;
    _cyc_08008330 = 1u;
    uint32_t _rm_08008330 = g_cpu.R[3];
    uint32_t _op2_08008330;
    uint32_t _co_08008330;
    _op2_08008330 = _rm_08008330 << 2;
    _co_08008330 = (_rm_08008330 >> 30) & 1u;
    uint32_t _r_08008330;
    _r_08008330 = _op2_08008330;
    arm_set_nzc_logic(_r_08008330, _co_08008330);
    g_cpu.R[3] = _r_08008330;
    g_cpu.R[15] = 0x08008332u;
    runtime_tick(_cyc_08008330);
    /* 08008332  08008332 T adds r3,r3,r0 */
    g_cpu.R[15] = 0x08008332u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008332 = 1u;
    _cyc_08008332 = 1u;
    uint32_t _rm_08008332 = g_cpu.R[0];
    uint32_t _op2_08008332;
    uint32_t _co_08008332;
    _op2_08008332 = _rm_08008332;
    _co_08008332 = cpsr_c();
    uint32_t _rn_08008332 = g_cpu.R[3];
    uint32_t _r_08008332;
    _r_08008332 = _rn_08008332 + _op2_08008332;
    arm_set_nzcv_add(_rn_08008332, _op2_08008332, _r_08008332);
    g_cpu.R[3] = _r_08008332;
    g_cpu.R[15] = 0x08008334u;
    runtime_tick(_cyc_08008332);
    /* 08008334  08008334 T ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x08008334u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008334 = 1u;
    _cyc_08008334 = 2u;
    uint32_t _base_08008334 = g_cpu.R[4];
    uint32_t _off_08008334;
    _off_08008334 = 0x00000001u;
    uint32_t _ea_08008334 = _base_08008334 + _off_08008334;
    uint32_t _post_08008334 = _base_08008334 + _off_08008334;
    _cyc_08008334 += runtime_mem_cycles(_ea_08008334, 1u, 0u);
    uint32_t _v_08008334;
    _v_08008334 = bus_read_u8(_ea_08008334);
    g_cpu.R[0] = _v_08008334;
    g_cpu.R[15] = 0x08008336u;
    runtime_tick(_cyc_08008334);
    /* 08008336  08008336 T ldr r1,[r3] */
    g_cpu.R[15] = 0x08008336u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008336 = 1u;
    _cyc_08008336 = 2u;
    uint32_t _base_08008336 = g_cpu.R[3];
    uint32_t _off_08008336;
    _off_08008336 = 0x00000000u;
    uint32_t _ea_08008336 = _base_08008336 + _off_08008336;
    uint32_t _post_08008336 = _base_08008336 + _off_08008336;
    _cyc_08008336 += runtime_mem_cycles(_ea_08008336, 4u, 0u);
    uint32_t _v_08008336;
    { uint32_t _w = bus_read_u32(_ea_08008336 & ~3u); uint32_t _rot = (_ea_08008336 & 3u) * 8u; _v_08008336 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08008336;
    g_cpu.R[15] = 0x08008338u;
    runtime_tick(_cyc_08008336);
    /* 08008338  08008338 T movs r0,r0,lsl #3 */
    g_cpu.R[15] = 0x08008338u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008338 = 1u;
    _cyc_08008338 = 1u;
    uint32_t _rm_08008338 = g_cpu.R[0];
    uint32_t _op2_08008338;
    uint32_t _co_08008338;
    _op2_08008338 = _rm_08008338 << 3;
    _co_08008338 = (_rm_08008338 >> 29) & 1u;
    uint32_t _r_08008338;
    _r_08008338 = _op2_08008338;
    arm_set_nzc_logic(_r_08008338, _co_08008338);
    g_cpu.R[0] = _r_08008338;
    g_cpu.R[15] = 0x0800833Au;
    runtime_tick(_cyc_08008338);
    /* 0800833A  0800833a T adds r0,r0,r1 */
    g_cpu.R[15] = 0x0800833Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800833A = 1u;
    _cyc_0800833A = 1u;
    uint32_t _rm_0800833A = g_cpu.R[1];
    uint32_t _op2_0800833A;
    uint32_t _co_0800833A;
    _op2_0800833A = _rm_0800833A;
    _co_0800833A = cpsr_c();
    uint32_t _rn_0800833A = g_cpu.R[0];
    uint32_t _r_0800833A;
    _r_0800833A = _rn_0800833A + _op2_0800833A;
    arm_set_nzcv_add(_rn_0800833A, _op2_0800833A, _r_0800833A);
    g_cpu.R[0] = _r_0800833A;
    g_cpu.R[15] = 0x0800833Cu;
    runtime_tick(_cyc_0800833A);
    /* 0800833C  0800833c T ldrb r0,[r0,#0x5] */
    g_cpu.R[15] = 0x0800833Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800833C = 1u;
    _cyc_0800833C = 2u;
    uint32_t _base_0800833C = g_cpu.R[0];
    uint32_t _off_0800833C;
    _off_0800833C = 0x00000005u;
    uint32_t _ea_0800833C = _base_0800833C + _off_0800833C;
    uint32_t _post_0800833C = _base_0800833C + _off_0800833C;
    _cyc_0800833C += runtime_mem_cycles(_ea_0800833C, 1u, 0u);
    uint32_t _v_0800833C;
    _v_0800833C = bus_read_u8(_ea_0800833C);
    g_cpu.R[0] = _v_0800833C;
    g_cpu.R[15] = 0x0800833Eu;
    runtime_tick(_cyc_0800833C);
    /* 0800833E  0800833e T strb r0,[r2,#0x5] */
    g_cpu.R[15] = 0x0800833Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800833E = 1u;
    _cyc_0800833E = 1u;
    uint32_t _base_0800833E = g_cpu.R[2];
    uint32_t _off_0800833E;
    _off_0800833E = 0x00000005u;
    uint32_t _ea_0800833E = _base_0800833E + _off_0800833E;
    uint32_t _post_0800833E = _base_0800833E + _off_0800833E;
    _cyc_0800833E += runtime_mem_cycles(_ea_0800833E, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800833Eu, _ea_0800833E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0800833E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08008340u;
    runtime_tick(_cyc_0800833E);
    /* 08008340  08008340 T ldm r13!,{r4} */
    g_cpu.R[15] = 0x08008340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008340 = 1u;
    _cyc_08008340 = 2u;
    uint32_t _b_08008340 = g_cpu.R[13];
    uint32_t _a_08008340 = _b_08008340;
    uint32_t _fb_08008340 = _b_08008340 + 4u;
    _cyc_08008340 += runtime_mem_cycles(_a_08008340 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08008340 & ~3u);
    _a_08008340 += 4u;
    g_cpu.R[13] = _fb_08008340;
    g_cpu.R[15] = 0x08008342u;
    runtime_tick(_cyc_08008340);
    /* 08008342  08008342 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08008342u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008342 = 1u;
    _cyc_08008342 = 2u;
    uint32_t _b_08008342 = g_cpu.R[13];
    uint32_t _a_08008342 = _b_08008342;
    uint32_t _fb_08008342 = _b_08008342 + 4u;
    _cyc_08008342 += runtime_mem_cycles(_a_08008342 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08008342 & ~3u);
    _a_08008342 += 4u;
    g_cpu.R[13] = _fb_08008342;
    g_cpu.R[15] = 0x08008344u;
    runtime_tick(_cyc_08008342);
    /* 08008344  08008344 T bx r0 */
    g_cpu.R[15] = 0x08008344u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08008344 = 1u;
    _cyc_08008344 = 3u;
    uint32_t _bxt_08008344 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08008344 & ~1u;
    runtime_tick(_cyc_08008344);
    if (_bxt_08008344 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08008344);
    return;
    g_cpu.R[15] = 0x08008346u;
    runtime_tick(_cyc_08008344);
    /* fall-through to 0x08008346 */
    g_cpu.R[15] = 0x08008346u;
    runtime_dispatch(0x08008346u);
    return;
}
