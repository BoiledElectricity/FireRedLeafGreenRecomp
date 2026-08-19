// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08070A2E mode=thumb end=0x08070A6E
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

OVL_EXPORT void func_08070A2E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08070A2Eu);
    /* 08070A2E  08070a2e T movs r1,r0,lsl #1 */
    g_cpu.R[15] = 0x08070A2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A2E = 1u;
    _cyc_08070A2E = 1u;
    uint32_t _rm_08070A2E = g_cpu.R[0];
    uint32_t _op2_08070A2E;
    uint32_t _co_08070A2E;
    _op2_08070A2E = _rm_08070A2E << 1;
    _co_08070A2E = (_rm_08070A2E >> 31) & 1u;
    uint32_t _r_08070A2E;
    _r_08070A2E = _op2_08070A2E;
    arm_set_nzc_logic(_r_08070A2E, _co_08070A2E);
    g_cpu.R[1] = _r_08070A2E;
    g_cpu.R[15] = 0x08070A30u;
    runtime_tick(_cyc_08070A2E);
    /* 08070A30  08070a30 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x08070A30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A30 = 1u;
    _cyc_08070A30 = 1u;
    uint32_t _rm_08070A30 = g_cpu.R[0];
    uint32_t _op2_08070A30;
    uint32_t _co_08070A30;
    _op2_08070A30 = _rm_08070A30;
    _co_08070A30 = cpsr_c();
    uint32_t _rn_08070A30 = g_cpu.R[1];
    uint32_t _r_08070A30;
    _r_08070A30 = _rn_08070A30 + _op2_08070A30;
    arm_set_nzcv_add(_rn_08070A30, _op2_08070A30, _r_08070A30);
    g_cpu.R[1] = _r_08070A30;
    g_cpu.R[15] = 0x08070A32u;
    runtime_tick(_cyc_08070A30);
    /* 08070A32  08070a32 T movs r1,r1,lsl #2 */
    g_cpu.R[15] = 0x08070A32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A32 = 1u;
    _cyc_08070A32 = 1u;
    uint32_t _rm_08070A32 = g_cpu.R[1];
    uint32_t _op2_08070A32;
    uint32_t _co_08070A32;
    _op2_08070A32 = _rm_08070A32 << 2;
    _co_08070A32 = (_rm_08070A32 >> 30) & 1u;
    uint32_t _r_08070A32;
    _r_08070A32 = _op2_08070A32;
    arm_set_nzc_logic(_r_08070A32, _co_08070A32);
    g_cpu.R[1] = _r_08070A32;
    g_cpu.R[15] = 0x08070A34u;
    runtime_tick(_cyc_08070A32);
    /* 08070A34  08070a34 T adds r1,r1,r2 */
    g_cpu.R[15] = 0x08070A34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A34 = 1u;
    _cyc_08070A34 = 1u;
    uint32_t _rm_08070A34 = g_cpu.R[2];
    uint32_t _op2_08070A34;
    uint32_t _co_08070A34;
    _op2_08070A34 = _rm_08070A34;
    _co_08070A34 = cpsr_c();
    uint32_t _rn_08070A34 = g_cpu.R[1];
    uint32_t _r_08070A34;
    _r_08070A34 = _rn_08070A34 + _op2_08070A34;
    arm_set_nzcv_add(_rn_08070A34, _op2_08070A34, _r_08070A34);
    g_cpu.R[1] = _r_08070A34;
    g_cpu.R[15] = 0x08070A36u;
    runtime_tick(_cyc_08070A34);
    /* 08070A36  08070a36 T ldr r0,[r15,#0x3c] */
    g_cpu.R[15] = 0x08070A36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A36 = 1u;
    _cyc_08070A36 = 2u;
    uint32_t _base_08070A36 = 0x08070A3Au & ~3u;
    uint32_t _off_08070A36;
    _off_08070A36 = 0x0000003Cu;
    uint32_t _ea_08070A36 = _base_08070A36 + _off_08070A36;
    uint32_t _post_08070A36 = _base_08070A36 + _off_08070A36;
    _cyc_08070A36 += runtime_mem_cycles(_ea_08070A36, 4u, 0u);
    uint32_t _v_08070A36;
    { uint32_t _w = bus_read_u32(_ea_08070A36 & ~3u); uint32_t _rot = (_ea_08070A36 & 3u) * 8u; _v_08070A36 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08070A36;
    g_cpu.R[15] = 0x08070A38u;
    runtime_tick(_cyc_08070A36);
    /* 08070A38  08070a38 T str r0,[r1] */
    g_cpu.R[15] = 0x08070A38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A38 = 1u;
    _cyc_08070A38 = 1u;
    uint32_t _base_08070A38 = g_cpu.R[1];
    uint32_t _off_08070A38;
    _off_08070A38 = 0x00000000u;
    uint32_t _ea_08070A38 = _base_08070A38 + _off_08070A38;
    uint32_t _post_08070A38 = _base_08070A38 + _off_08070A38;
    _cyc_08070A38 += runtime_mem_cycles(_ea_08070A38, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A38u, _ea_08070A38 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08070A38 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08070A3Au;
    runtime_tick(_cyc_08070A38);
    /* 08070A3A  08070a3a T ldrb r2,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A3A = 1u;
    _cyc_08070A3A = 2u;
    uint32_t _base_08070A3A = g_cpu.R[1];
    uint32_t _off_08070A3A;
    _off_08070A3A = 0x00000004u;
    uint32_t _ea_08070A3A = _base_08070A3A + _off_08070A3A;
    uint32_t _post_08070A3A = _base_08070A3A + _off_08070A3A;
    _cyc_08070A3A += runtime_mem_cycles(_ea_08070A3A, 1u, 0u);
    uint32_t _v_08070A3A;
    _v_08070A3A = bus_read_u8(_ea_08070A3A);
    g_cpu.R[2] = _v_08070A3A;
    g_cpu.R[15] = 0x08070A3Cu;
    runtime_tick(_cyc_08070A3A);
    /* 08070A3C  08070a3c T movs r0,#0x2 */
    g_cpu.R[15] = 0x08070A3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A3C = 1u;
    _cyc_08070A3C = 1u;
    uint32_t _r_08070A3C;
    _r_08070A3C = 0x00000002u;
    arm_set_nzc_logic(_r_08070A3C, cpsr_c());
    g_cpu.R[0] = _r_08070A3C;
    g_cpu.R[15] = 0x08070A3Eu;
    runtime_tick(_cyc_08070A3C);
    /* 08070A3E  08070a3e T rsbs r0,r0,#0x0 */
    g_cpu.R[15] = 0x08070A3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A3E = 1u;
    _cyc_08070A3E = 1u;
    uint32_t _rn_08070A3E = g_cpu.R[0];
    uint32_t _r_08070A3E;
    _r_08070A3E = 0x00000000u - _rn_08070A3E;
    arm_set_nzcv_sub(0x00000000u, _rn_08070A3E, _r_08070A3E);
    g_cpu.R[0] = _r_08070A3E;
    g_cpu.R[15] = 0x08070A40u;
    runtime_tick(_cyc_08070A3E);
    /* 08070A40  08070a40 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08070A40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A40 = 1u;
    _cyc_08070A40 = 1u;
    uint32_t _rm_08070A40 = g_cpu.R[2];
    uint32_t _op2_08070A40;
    uint32_t _co_08070A40;
    _op2_08070A40 = _rm_08070A40;
    _co_08070A40 = cpsr_c();
    uint32_t _rn_08070A40 = g_cpu.R[0];
    uint32_t _r_08070A40;
    _r_08070A40 = _rn_08070A40 & _op2_08070A40;
    arm_set_nzc_logic(_r_08070A40, _co_08070A40);
    g_cpu.R[0] = _r_08070A40;
    g_cpu.R[15] = 0x08070A42u;
    runtime_tick(_cyc_08070A40);
    /* 08070A42  08070a42 T strb r0,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A42 = 1u;
    _cyc_08070A42 = 1u;
    uint32_t _base_08070A42 = g_cpu.R[1];
    uint32_t _off_08070A42;
    _off_08070A42 = 0x00000004u;
    uint32_t _ea_08070A42 = _base_08070A42 + _off_08070A42;
    uint32_t _post_08070A42 = _base_08070A42 + _off_08070A42;
    _cyc_08070A42 += runtime_mem_cycles(_ea_08070A42, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A42u, _ea_08070A42, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08070A42, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08070A44u;
    runtime_tick(_cyc_08070A42);
    /* 08070A44  08070a44 T ldrh r2,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A44 = 1u;
    _cyc_08070A44 = 2u;
    uint32_t _base_08070A44 = g_cpu.R[1];
    uint32_t _off_08070A44;
    _off_08070A44 = 0x00000004u;
    uint32_t _ea_08070A44 = _base_08070A44 + _off_08070A44;
    uint32_t _post_08070A44 = _base_08070A44 + _off_08070A44;
    _cyc_08070A44 += runtime_mem_cycles(_ea_08070A44, 2u, 0u);
    uint32_t _v_08070A44;
    { uint32_t _h = bus_read_u16(_ea_08070A44 & ~1u); if (_ea_08070A44 & 1u) _v_08070A44 = ((_h >> 8) | (_h << 24)); else _v_08070A44 = _h; }
    g_cpu.R[2] = _v_08070A44;
    g_cpu.R[15] = 0x08070A46u;
    runtime_tick(_cyc_08070A44);
    /* 08070A46  08070a46 T ldr r0,[r15,#0x30] */
    g_cpu.R[15] = 0x08070A46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A46 = 1u;
    _cyc_08070A46 = 2u;
    uint32_t _base_08070A46 = 0x08070A4Au & ~3u;
    uint32_t _off_08070A46;
    _off_08070A46 = 0x00000030u;
    uint32_t _ea_08070A46 = _base_08070A46 + _off_08070A46;
    uint32_t _post_08070A46 = _base_08070A46 + _off_08070A46;
    _cyc_08070A46 += runtime_mem_cycles(_ea_08070A46, 4u, 0u);
    uint32_t _v_08070A46;
    { uint32_t _w = bus_read_u32(_ea_08070A46 & ~3u); uint32_t _rot = (_ea_08070A46 & 3u) * 8u; _v_08070A46 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08070A46;
    g_cpu.R[15] = 0x08070A48u;
    runtime_tick(_cyc_08070A46);
    /* 08070A48  08070a48 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08070A48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A48 = 1u;
    _cyc_08070A48 = 1u;
    uint32_t _rm_08070A48 = g_cpu.R[2];
    uint32_t _op2_08070A48;
    uint32_t _co_08070A48;
    _op2_08070A48 = _rm_08070A48;
    _co_08070A48 = cpsr_c();
    uint32_t _rn_08070A48 = g_cpu.R[0];
    uint32_t _r_08070A48;
    _r_08070A48 = _rn_08070A48 & _op2_08070A48;
    arm_set_nzc_logic(_r_08070A48, _co_08070A48);
    g_cpu.R[0] = _r_08070A48;
    g_cpu.R[15] = 0x08070A4Au;
    runtime_tick(_cyc_08070A48);
    /* 08070A4A  08070a4a T strh r0,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A4A = 1u;
    _cyc_08070A4A = 1u;
    uint32_t _base_08070A4A = g_cpu.R[1];
    uint32_t _off_08070A4A;
    _off_08070A4A = 0x00000004u;
    uint32_t _ea_08070A4A = _base_08070A4A + _off_08070A4A;
    uint32_t _post_08070A4A = _base_08070A4A + _off_08070A4A;
    _cyc_08070A4A += runtime_mem_cycles(_ea_08070A4A, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A4Au, _ea_08070A4A & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08070A4A & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08070A4Cu;
    runtime_tick(_cyc_08070A4A);
    /* 08070A4C  08070a4c T ldr r0,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A4C = 1u;
    _cyc_08070A4C = 2u;
    uint32_t _base_08070A4C = g_cpu.R[1];
    uint32_t _off_08070A4C;
    _off_08070A4C = 0x00000004u;
    uint32_t _ea_08070A4C = _base_08070A4C + _off_08070A4C;
    uint32_t _post_08070A4C = _base_08070A4C + _off_08070A4C;
    _cyc_08070A4C += runtime_mem_cycles(_ea_08070A4C, 4u, 0u);
    uint32_t _v_08070A4C;
    { uint32_t _w = bus_read_u32(_ea_08070A4C & ~3u); uint32_t _rot = (_ea_08070A4C & 3u) * 8u; _v_08070A4C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08070A4C;
    g_cpu.R[15] = 0x08070A4Eu;
    runtime_tick(_cyc_08070A4C);
    /* 08070A4E  08070a4e T ldr r2,[r15,#0x2c] */
    g_cpu.R[15] = 0x08070A4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A4E = 1u;
    _cyc_08070A4E = 2u;
    uint32_t _base_08070A4E = 0x08070A52u & ~3u;
    uint32_t _off_08070A4E;
    _off_08070A4E = 0x0000002Cu;
    uint32_t _ea_08070A4E = _base_08070A4E + _off_08070A4E;
    uint32_t _post_08070A4E = _base_08070A4E + _off_08070A4E;
    _cyc_08070A4E += runtime_mem_cycles(_ea_08070A4E, 4u, 0u);
    uint32_t _v_08070A4E;
    { uint32_t _w = bus_read_u32(_ea_08070A4E & ~3u); uint32_t _rot = (_ea_08070A4E & 3u) * 8u; _v_08070A4E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08070A4E;
    g_cpu.R[15] = 0x08070A50u;
    runtime_tick(_cyc_08070A4E);
    /* 08070A50  08070a50 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08070A50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A50 = 1u;
    _cyc_08070A50 = 1u;
    uint32_t _rm_08070A50 = g_cpu.R[2];
    uint32_t _op2_08070A50;
    uint32_t _co_08070A50;
    _op2_08070A50 = _rm_08070A50;
    _co_08070A50 = cpsr_c();
    uint32_t _rn_08070A50 = g_cpu.R[0];
    uint32_t _r_08070A50;
    _r_08070A50 = _rn_08070A50 & _op2_08070A50;
    arm_set_nzc_logic(_r_08070A50, _co_08070A50);
    g_cpu.R[0] = _r_08070A50;
    g_cpu.R[15] = 0x08070A52u;
    runtime_tick(_cyc_08070A50);
    /* 08070A52  08070a52 T str r0,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A52 = 1u;
    _cyc_08070A52 = 1u;
    uint32_t _base_08070A52 = g_cpu.R[1];
    uint32_t _off_08070A52;
    _off_08070A52 = 0x00000004u;
    uint32_t _ea_08070A52 = _base_08070A52 + _off_08070A52;
    uint32_t _post_08070A52 = _base_08070A52 + _off_08070A52;
    _cyc_08070A52 += runtime_mem_cycles(_ea_08070A52, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A52u, _ea_08070A52 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08070A52 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08070A54u;
    runtime_tick(_cyc_08070A52);
    /* 08070A54  08070a54 T ldrh r2,[r1,#0x6] */
    g_cpu.R[15] = 0x08070A54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A54 = 1u;
    _cyc_08070A54 = 2u;
    uint32_t _base_08070A54 = g_cpu.R[1];
    uint32_t _off_08070A54;
    _off_08070A54 = 0x00000006u;
    uint32_t _ea_08070A54 = _base_08070A54 + _off_08070A54;
    uint32_t _post_08070A54 = _base_08070A54 + _off_08070A54;
    _cyc_08070A54 += runtime_mem_cycles(_ea_08070A54, 2u, 0u);
    uint32_t _v_08070A54;
    { uint32_t _h = bus_read_u16(_ea_08070A54 & ~1u); if (_ea_08070A54 & 1u) _v_08070A54 = ((_h >> 8) | (_h << 24)); else _v_08070A54 = _h; }
    g_cpu.R[2] = _v_08070A54;
    g_cpu.R[15] = 0x08070A56u;
    runtime_tick(_cyc_08070A54);
    /* 08070A56  08070a56 T ldr r0,[r15,#0x28] */
    g_cpu.R[15] = 0x08070A56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A56 = 1u;
    _cyc_08070A56 = 2u;
    uint32_t _base_08070A56 = 0x08070A5Au & ~3u;
    uint32_t _off_08070A56;
    _off_08070A56 = 0x00000028u;
    uint32_t _ea_08070A56 = _base_08070A56 + _off_08070A56;
    uint32_t _post_08070A56 = _base_08070A56 + _off_08070A56;
    _cyc_08070A56 += runtime_mem_cycles(_ea_08070A56, 4u, 0u);
    uint32_t _v_08070A56;
    { uint32_t _w = bus_read_u32(_ea_08070A56 & ~3u); uint32_t _rot = (_ea_08070A56 & 3u) * 8u; _v_08070A56 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08070A56;
    g_cpu.R[15] = 0x08070A58u;
    runtime_tick(_cyc_08070A56);
    /* 08070A58  08070a58 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08070A58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A58 = 1u;
    _cyc_08070A58 = 1u;
    uint32_t _rm_08070A58 = g_cpu.R[2];
    uint32_t _op2_08070A58;
    uint32_t _co_08070A58;
    _op2_08070A58 = _rm_08070A58;
    _co_08070A58 = cpsr_c();
    uint32_t _rn_08070A58 = g_cpu.R[0];
    uint32_t _r_08070A58;
    _r_08070A58 = _rn_08070A58 & _op2_08070A58;
    arm_set_nzc_logic(_r_08070A58, _co_08070A58);
    g_cpu.R[0] = _r_08070A58;
    g_cpu.R[15] = 0x08070A5Au;
    runtime_tick(_cyc_08070A58);
    /* 08070A5A  08070a5a T strh r0,[r1,#0x6] */
    g_cpu.R[15] = 0x08070A5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A5A = 1u;
    _cyc_08070A5A = 1u;
    uint32_t _base_08070A5A = g_cpu.R[1];
    uint32_t _off_08070A5A;
    _off_08070A5A = 0x00000006u;
    uint32_t _ea_08070A5A = _base_08070A5A + _off_08070A5A;
    uint32_t _post_08070A5A = _base_08070A5A + _off_08070A5A;
    _cyc_08070A5A += runtime_mem_cycles(_ea_08070A5A, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A5Au, _ea_08070A5A & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08070A5A & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08070A5Cu;
    runtime_tick(_cyc_08070A5A);
    /* 08070A5C  08070a5c T ldrb r2,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A5C = 1u;
    _cyc_08070A5C = 2u;
    uint32_t _base_08070A5C = g_cpu.R[1];
    uint32_t _off_08070A5C;
    _off_08070A5C = 0x00000004u;
    uint32_t _ea_08070A5C = _base_08070A5C + _off_08070A5C;
    uint32_t _post_08070A5C = _base_08070A5C + _off_08070A5C;
    _cyc_08070A5C += runtime_mem_cycles(_ea_08070A5C, 1u, 0u);
    uint32_t _v_08070A5C;
    _v_08070A5C = bus_read_u8(_ea_08070A5C);
    g_cpu.R[2] = _v_08070A5C;
    g_cpu.R[15] = 0x08070A5Eu;
    runtime_tick(_cyc_08070A5C);
    /* 08070A5E  08070a5e T movs r0,#0x3 */
    g_cpu.R[15] = 0x08070A5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A5E = 1u;
    _cyc_08070A5E = 1u;
    uint32_t _r_08070A5E;
    _r_08070A5E = 0x00000003u;
    arm_set_nzc_logic(_r_08070A5E, cpsr_c());
    g_cpu.R[0] = _r_08070A5E;
    g_cpu.R[15] = 0x08070A60u;
    runtime_tick(_cyc_08070A5E);
    /* 08070A60  08070a60 T rsbs r0,r0,#0x0 */
    g_cpu.R[15] = 0x08070A60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A60 = 1u;
    _cyc_08070A60 = 1u;
    uint32_t _rn_08070A60 = g_cpu.R[0];
    uint32_t _r_08070A60;
    _r_08070A60 = 0x00000000u - _rn_08070A60;
    arm_set_nzcv_sub(0x00000000u, _rn_08070A60, _r_08070A60);
    g_cpu.R[0] = _r_08070A60;
    g_cpu.R[15] = 0x08070A62u;
    runtime_tick(_cyc_08070A60);
    /* 08070A62  08070a62 T ands r0,r0,r2 */
    g_cpu.R[15] = 0x08070A62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A62 = 1u;
    _cyc_08070A62 = 1u;
    uint32_t _rm_08070A62 = g_cpu.R[2];
    uint32_t _op2_08070A62;
    uint32_t _co_08070A62;
    _op2_08070A62 = _rm_08070A62;
    _co_08070A62 = cpsr_c();
    uint32_t _rn_08070A62 = g_cpu.R[0];
    uint32_t _r_08070A62;
    _r_08070A62 = _rn_08070A62 & _op2_08070A62;
    arm_set_nzc_logic(_r_08070A62, _co_08070A62);
    g_cpu.R[0] = _r_08070A62;
    g_cpu.R[15] = 0x08070A64u;
    runtime_tick(_cyc_08070A62);
    /* 08070A64  08070a64 T strb r0,[r1,#0x4] */
    g_cpu.R[15] = 0x08070A64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A64 = 1u;
    _cyc_08070A64 = 1u;
    uint32_t _base_08070A64 = g_cpu.R[1];
    uint32_t _off_08070A64;
    _off_08070A64 = 0x00000004u;
    uint32_t _ea_08070A64 = _base_08070A64 + _off_08070A64;
    uint32_t _post_08070A64 = _base_08070A64 + _off_08070A64;
    _cyc_08070A64 += runtime_mem_cycles(_ea_08070A64, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A64u, _ea_08070A64, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08070A64, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08070A66u;
    runtime_tick(_cyc_08070A64);
    /* 08070A66  08070a66 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08070A66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A66 = 1u;
    _cyc_08070A66 = 1u;
    uint32_t _r_08070A66;
    _r_08070A66 = 0x00000000u;
    arm_set_nzc_logic(_r_08070A66, cpsr_c());
    g_cpu.R[0] = _r_08070A66;
    g_cpu.R[15] = 0x08070A68u;
    runtime_tick(_cyc_08070A66);
    /* 08070A68  08070a68 T strb r0,[r1,#0x8] */
    g_cpu.R[15] = 0x08070A68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A68 = 1u;
    _cyc_08070A68 = 1u;
    uint32_t _base_08070A68 = g_cpu.R[1];
    uint32_t _off_08070A68;
    _off_08070A68 = 0x00000008u;
    uint32_t _ea_08070A68 = _base_08070A68 + _off_08070A68;
    uint32_t _post_08070A68 = _base_08070A68 + _off_08070A68;
    _cyc_08070A68 += runtime_mem_cycles(_ea_08070A68, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A68u, _ea_08070A68, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08070A68, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08070A6Au;
    runtime_tick(_cyc_08070A68);
    /* 08070A6A  08070a6a T strb r0,[r1,#0x9] */
    g_cpu.R[15] = 0x08070A6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A6A = 1u;
    _cyc_08070A6A = 1u;
    uint32_t _base_08070A6A = g_cpu.R[1];
    uint32_t _off_08070A6A;
    _off_08070A6A = 0x00000009u;
    uint32_t _ea_08070A6A = _base_08070A6A + _off_08070A6A;
    uint32_t _post_08070A6A = _base_08070A6A + _off_08070A6A;
    _cyc_08070A6A += runtime_mem_cycles(_ea_08070A6A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08070A6Au, _ea_08070A6A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08070A6A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08070A6Cu;
    runtime_tick(_cyc_08070A6A);
    /* 08070A6C  08070a6c T bx r14 */
    g_cpu.R[15] = 0x08070A6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08070A6C = 1u;
    _cyc_08070A6C = 3u;
    uint32_t _bxt_08070A6C = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08070A6C & ~1u;
    runtime_tick(_cyc_08070A6C);
    if (_bxt_08070A6C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08070A6C);
    return;
    g_cpu.R[15] = 0x08070A6Eu;
    runtime_tick(_cyc_08070A6C);
    /* fall-through to 0x08070A6E */
    g_cpu.R[15] = 0x08070A6Eu;
    runtime_dispatch(0x08070A6Eu);
    return;
}
