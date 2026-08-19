// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002D28 mode=thumb end=0x08002D5C
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

OVL_EXPORT void func_08002D28(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002D28u);
    /* 08002D28  08002d28 T subs r0,r0,#0x1 */
    g_cpu.R[15] = 0x08002D28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D28 = 1u;
    _cyc_08002D28 = 1u;
    uint32_t _rn_08002D28 = g_cpu.R[0];
    uint32_t _r_08002D28;
    _r_08002D28 = _rn_08002D28 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08002D28, 0x00000001u, _r_08002D28);
    g_cpu.R[0] = _r_08002D28;
    g_cpu.R[15] = 0x08002D2Au;
    runtime_tick(_cyc_08002D28);
    /* 08002D2A  08002d2a T subs r1,r1,#0x1 */
    g_cpu.R[15] = 0x08002D2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D2A = 1u;
    _cyc_08002D2A = 1u;
    uint32_t _rn_08002D2A = g_cpu.R[1];
    uint32_t _r_08002D2A;
    _r_08002D2A = _rn_08002D2A - 0x00000001u;
    arm_set_nzcv_sub(_rn_08002D2A, 0x00000001u, _r_08002D2A);
    g_cpu.R[1] = _r_08002D2A;
    g_cpu.R[15] = 0x08002D2Cu;
    runtime_tick(_cyc_08002D2A);
    /* 08002D2C  08002d2c T cmps r1,#0x0 */
    g_cpu.R[15] = 0x08002D2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D2C = 1u;
    _cyc_08002D2C = 1u;
    uint32_t _rn_08002D2C = g_cpu.R[1];
    uint32_t _r_08002D2C;
    _r_08002D2C = _rn_08002D2C - 0x00000000u;
    arm_set_nzcv_sub(_rn_08002D2C, 0x00000000u, _r_08002D2C);
    g_cpu.R[15] = 0x08002D2Eu;
    runtime_tick(_cyc_08002D2C);
    /* 08002D2E  08002d2e T bge 0x08002d26 */
    g_cpu.R[15] = 0x08002D2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D2E = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08002D2E = 3u;
        g_cpu.R[15] = 0x08002D26u;
        runtime_tick(_cyc_08002D2E);
        runtime_dispatch(0x08002D26u);
        return;
    }
    g_cpu.R[15] = 0x08002D30u;
    runtime_tick(_cyc_08002D2E);
    /* 08002D30  08002d30 T adds r1,r4,#0x0 */
    g_cpu.R[15] = 0x08002D30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D30 = 1u;
    _cyc_08002D30 = 1u;
    uint32_t _rn_08002D30 = g_cpu.R[4];
    uint32_t _r_08002D30;
    _r_08002D30 = _rn_08002D30 + 0x00000000u;
    arm_set_nzcv_add(_rn_08002D30, 0x00000000u, _r_08002D30);
    g_cpu.R[1] = _r_08002D30;
    g_cpu.R[15] = 0x08002D32u;
    runtime_tick(_cyc_08002D30);
    /* 08002D32  08002d32 T adds r0,r6,#0x0 */
    g_cpu.R[15] = 0x08002D32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D32 = 1u;
    _cyc_08002D32 = 1u;
    uint32_t _rn_08002D32 = g_cpu.R[6];
    uint32_t _r_08002D32;
    _r_08002D32 = _rn_08002D32 + 0x00000000u;
    arm_set_nzcv_add(_rn_08002D32, 0x00000000u, _r_08002D32);
    g_cpu.R[0] = _r_08002D32;
    g_cpu.R[15] = 0x08002D34u;
    runtime_tick(_cyc_08002D32);
    /* 08002D34  08002d34 T ldm r0!,{r2,r3,r7} */
    g_cpu.R[15] = 0x08002D34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D34 = 1u;
    _cyc_08002D34 = 2u;
    uint32_t _b_08002D34 = g_cpu.R[0];
    uint32_t _a_08002D34 = _b_08002D34;
    uint32_t _fb_08002D34 = _b_08002D34 + 12u;
    _cyc_08002D34 += runtime_mem_cycles(_a_08002D34 & ~3u, 4u, 0u);
    g_cpu.R[2] = bus_read_u32(_a_08002D34 & ~3u);
    _a_08002D34 += 4u;
    _cyc_08002D34 += runtime_mem_cycles(_a_08002D34 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_08002D34 & ~3u);
    _a_08002D34 += 4u;
    _cyc_08002D34 += runtime_mem_cycles(_a_08002D34 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08002D34 & ~3u);
    _a_08002D34 += 4u;
    g_cpu.R[0] = _fb_08002D34;
    g_cpu.R[15] = 0x08002D36u;
    runtime_tick(_cyc_08002D34);
    /* 08002D36  08002d36 T stm r1!,{r2,r3,r7} */
    g_cpu.R[15] = 0x08002D36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D36 = 1u;
    _cyc_08002D36 = 1u;
    uint32_t _b_08002D36 = g_cpu.R[1];
    uint32_t _a_08002D36 = _b_08002D36;
    uint32_t _fb_08002D36 = _b_08002D36 + 12u;
    _cyc_08002D36 += runtime_mem_cycles(_a_08002D36 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D36u, _a_08002D36 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_08002D36 & ~3u, g_cpu.R[2]);
    _a_08002D36 += 4u;
    _cyc_08002D36 += runtime_mem_cycles(_a_08002D36 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D36u, _a_08002D36 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_08002D36 & ~3u, g_cpu.R[3]);
    _a_08002D36 += 4u;
    _cyc_08002D36 += runtime_mem_cycles(_a_08002D36 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D36u, _a_08002D36 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08002D36 & ~3u, g_cpu.R[7]);
    _a_08002D36 += 4u;
    g_cpu.R[1] = _fb_08002D36;
    g_cpu.R[15] = 0x08002D38u;
    runtime_tick(_cyc_08002D36);
    /* 08002D38  08002d38 T ldr r0,[r0] */
    g_cpu.R[15] = 0x08002D38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D38 = 1u;
    _cyc_08002D38 = 2u;
    uint32_t _base_08002D38 = g_cpu.R[0];
    uint32_t _off_08002D38;
    _off_08002D38 = 0x00000000u;
    uint32_t _ea_08002D38 = _base_08002D38 + _off_08002D38;
    uint32_t _post_08002D38 = _base_08002D38 + _off_08002D38;
    _cyc_08002D38 += runtime_mem_cycles(_ea_08002D38, 4u, 0u);
    uint32_t _v_08002D38;
    { uint32_t _w = bus_read_u32(_ea_08002D38 & ~3u); uint32_t _rot = (_ea_08002D38 & 3u) * 8u; _v_08002D38 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08002D38;
    g_cpu.R[15] = 0x08002D3Au;
    runtime_tick(_cyc_08002D38);
    /* 08002D3A  08002d3a T str r0,[r1] */
    g_cpu.R[15] = 0x08002D3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D3A = 1u;
    _cyc_08002D3A = 1u;
    uint32_t _base_08002D3A = g_cpu.R[1];
    uint32_t _off_08002D3A;
    _off_08002D3A = 0x00000000u;
    uint32_t _ea_08002D3A = _base_08002D3A + _off_08002D3A;
    uint32_t _post_08002D3A = _base_08002D3A + _off_08002D3A;
    _cyc_08002D3A += runtime_mem_cycles(_ea_08002D3A, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D3Au, _ea_08002D3A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08002D3A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08002D3Cu;
    runtime_tick(_cyc_08002D3A);
    /* 08002D3C  08002d3c T mov r0,r12 */
    g_cpu.R[15] = 0x08002D3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D3C = 1u;
    _cyc_08002D3C = 1u;
    uint32_t _rm_08002D3C = g_cpu.R[12];
    uint32_t _op2_08002D3C;
    uint32_t _co_08002D3C;
    _op2_08002D3C = _rm_08002D3C;
    _co_08002D3C = cpsr_c();
    uint32_t _r_08002D3C;
    _r_08002D3C = _op2_08002D3C;
    g_cpu.R[0] = _r_08002D3C;
    g_cpu.R[15] = 0x08002D3Eu;
    runtime_tick(_cyc_08002D3C);
    /* 08002D3E  08002d3e T str r0,[r4,#0x10] */
    g_cpu.R[15] = 0x08002D3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D3E = 1u;
    _cyc_08002D3E = 1u;
    uint32_t _base_08002D3E = g_cpu.R[4];
    uint32_t _off_08002D3E;
    _off_08002D3E = 0x00000010u;
    uint32_t _ea_08002D3E = _base_08002D3E + _off_08002D3E;
    uint32_t _post_08002D3E = _base_08002D3E + _off_08002D3E;
    _cyc_08002D3E += runtime_mem_cycles(_ea_08002D3E, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D3Eu, _ea_08002D3E & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08002D3E & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08002D40u;
    runtime_tick(_cyc_08002D3E);
    /* 08002D40  08002d40 T adds r0,r4,#0x0 */
    g_cpu.R[15] = 0x08002D40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D40 = 1u;
    _cyc_08002D40 = 1u;
    uint32_t _rn_08002D40 = g_cpu.R[4];
    uint32_t _r_08002D40;
    _r_08002D40 = _rn_08002D40 + 0x00000000u;
    arm_set_nzcv_add(_rn_08002D40, 0x00000000u, _r_08002D40);
    g_cpu.R[0] = _r_08002D40;
    g_cpu.R[15] = 0x08002D42u;
    runtime_tick(_cyc_08002D40);
    /* 08002D42  08002d42 T adds r0,r0,#0x20 */
    g_cpu.R[15] = 0x08002D42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D42 = 1u;
    _cyc_08002D42 = 1u;
    uint32_t _rn_08002D42 = g_cpu.R[0];
    uint32_t _r_08002D42;
    _r_08002D42 = _rn_08002D42 + 0x00000020u;
    arm_set_nzcv_add(_rn_08002D42, 0x00000020u, _r_08002D42);
    g_cpu.R[0] = _r_08002D42;
    g_cpu.R[15] = 0x08002D44u;
    runtime_tick(_cyc_08002D42);
    /* 08002D44  08002d44 T movs r1,#0x0 */
    g_cpu.R[15] = 0x08002D44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D44 = 1u;
    _cyc_08002D44 = 1u;
    uint32_t _r_08002D44;
    _r_08002D44 = 0x00000000u;
    arm_set_nzc_logic(_r_08002D44, cpsr_c());
    g_cpu.R[1] = _r_08002D44;
    g_cpu.R[15] = 0x08002D46u;
    runtime_tick(_cyc_08002D44);
    /* 08002D46  08002d46 T strb r1,[r0] */
    g_cpu.R[15] = 0x08002D46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D46 = 1u;
    _cyc_08002D46 = 1u;
    uint32_t _base_08002D46 = g_cpu.R[0];
    uint32_t _off_08002D46;
    _off_08002D46 = 0x00000000u;
    uint32_t _ea_08002D46 = _base_08002D46 + _off_08002D46;
    uint32_t _post_08002D46 = _base_08002D46 + _off_08002D46;
    _cyc_08002D46 += runtime_mem_cycles(_ea_08002D46, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D46u, _ea_08002D46, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08002D46, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08002D48u;
    runtime_tick(_cyc_08002D46);
    /* 08002D48  08002d48 T adds r0,r0,#0x1 */
    g_cpu.R[15] = 0x08002D48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D48 = 1u;
    _cyc_08002D48 = 1u;
    uint32_t _rn_08002D48 = g_cpu.R[0];
    uint32_t _r_08002D48;
    _r_08002D48 = _rn_08002D48 + 0x00000001u;
    arm_set_nzcv_add(_rn_08002D48, 0x00000001u, _r_08002D48);
    g_cpu.R[0] = _r_08002D48;
    g_cpu.R[15] = 0x08002D4Au;
    runtime_tick(_cyc_08002D48);
    /* 08002D4A  08002d4a T strb r1,[r0] */
    g_cpu.R[15] = 0x08002D4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D4A = 1u;
    _cyc_08002D4A = 1u;
    uint32_t _base_08002D4A = g_cpu.R[0];
    uint32_t _off_08002D4A;
    _off_08002D4A = 0x00000000u;
    uint32_t _ea_08002D4A = _base_08002D4A + _off_08002D4A;
    uint32_t _post_08002D4A = _base_08002D4A + _off_08002D4A;
    _cyc_08002D4A += runtime_mem_cycles(_ea_08002D4A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002D4Au, _ea_08002D4A, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08002D4A, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08002D4Cu;
    runtime_tick(_cyc_08002D4A);
    /* 08002D4C  08002d4c T ldrb r0,[r6,#0xc] */
    g_cpu.R[15] = 0x08002D4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D4C = 1u;
    _cyc_08002D4C = 2u;
    uint32_t _base_08002D4C = g_cpu.R[6];
    uint32_t _off_08002D4C;
    _off_08002D4C = 0x0000000Cu;
    uint32_t _ea_08002D4C = _base_08002D4C + _off_08002D4C;
    uint32_t _post_08002D4C = _base_08002D4C + _off_08002D4C;
    _cyc_08002D4C += runtime_mem_cycles(_ea_08002D4C, 1u, 0u);
    uint32_t _v_08002D4C;
    _v_08002D4C = bus_read_u8(_ea_08002D4C);
    g_cpu.R[0] = _v_08002D4C;
    g_cpu.R[15] = 0x08002D4Eu;
    runtime_tick(_cyc_08002D4C);
    /* 08002D4E  08002d4e T movs r0,r0,lsr #4 */
    g_cpu.R[15] = 0x08002D4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D4E = 1u;
    _cyc_08002D4E = 1u;
    uint32_t _rm_08002D4E = g_cpu.R[0];
    uint32_t _op2_08002D4E;
    uint32_t _co_08002D4E;
    _op2_08002D4E = _rm_08002D4E >> 4;
    _co_08002D4E = (_rm_08002D4E >> 3) & 1u;
    uint32_t _r_08002D4E;
    _r_08002D4E = _op2_08002D4E;
    arm_set_nzc_logic(_r_08002D4E, _co_08002D4E);
    g_cpu.R[0] = _r_08002D4E;
    g_cpu.R[15] = 0x08002D50u;
    runtime_tick(_cyc_08002D4E);
    /* 08002D50  08002d50 T ldrb r2,[r6,#0xd] */
    g_cpu.R[15] = 0x08002D50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D50 = 1u;
    _cyc_08002D50 = 2u;
    uint32_t _base_08002D50 = g_cpu.R[6];
    uint32_t _off_08002D50;
    _off_08002D50 = 0x0000000Du;
    uint32_t _ea_08002D50 = _base_08002D50 + _off_08002D50;
    uint32_t _post_08002D50 = _base_08002D50 + _off_08002D50;
    _cyc_08002D50 += runtime_mem_cycles(_ea_08002D50, 1u, 0u);
    uint32_t _v_08002D50;
    _v_08002D50 = bus_read_u8(_ea_08002D50);
    g_cpu.R[2] = _v_08002D50;
    g_cpu.R[15] = 0x08002D52u;
    runtime_tick(_cyc_08002D50);
    /* 08002D52  08002d52 T movs r1,r2,lsl #28 */
    g_cpu.R[15] = 0x08002D52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D52 = 1u;
    _cyc_08002D52 = 1u;
    uint32_t _rm_08002D52 = g_cpu.R[2];
    uint32_t _op2_08002D52;
    uint32_t _co_08002D52;
    _op2_08002D52 = _rm_08002D52 << 28;
    _co_08002D52 = (_rm_08002D52 >> 4) & 1u;
    uint32_t _r_08002D52;
    _r_08002D52 = _op2_08002D52;
    arm_set_nzc_logic(_r_08002D52, _co_08002D52);
    g_cpu.R[1] = _r_08002D52;
    g_cpu.R[15] = 0x08002D54u;
    runtime_tick(_cyc_08002D52);
    /* 08002D54  08002d54 T movs r1,r1,lsr #28 */
    g_cpu.R[15] = 0x08002D54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D54 = 1u;
    _cyc_08002D54 = 1u;
    uint32_t _rm_08002D54 = g_cpu.R[1];
    uint32_t _op2_08002D54;
    uint32_t _co_08002D54;
    _op2_08002D54 = _rm_08002D54 >> 28;
    _co_08002D54 = (_rm_08002D54 >> 27) & 1u;
    uint32_t _r_08002D54;
    _r_08002D54 = _op2_08002D54;
    arm_set_nzc_logic(_r_08002D54, _co_08002D54);
    g_cpu.R[1] = _r_08002D54;
    g_cpu.R[15] = 0x08002D56u;
    runtime_tick(_cyc_08002D54);
    /* 08002D56  08002d56 T movs r2,r2,lsr #4 */
    g_cpu.R[15] = 0x08002D56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D56 = 1u;
    _cyc_08002D56 = 1u;
    uint32_t _rm_08002D56 = g_cpu.R[2];
    uint32_t _op2_08002D56;
    uint32_t _co_08002D56;
    _op2_08002D56 = _rm_08002D56 >> 4;
    _co_08002D56 = (_rm_08002D56 >> 3) & 1u;
    uint32_t _r_08002D56;
    _r_08002D56 = _op2_08002D56;
    arm_set_nzc_logic(_r_08002D56, _co_08002D56);
    g_cpu.R[2] = _r_08002D56;
    g_cpu.R[15] = 0x08002D58u;
    runtime_tick(_cyc_08002D56);
    /* 08002D58  08002d58 T bl.hi 0x08002d5c */
    g_cpu.R[15] = 0x08002D58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D58 = 1u;
    _cyc_08002D58 = 1u;
    g_cpu.R[14] = 0x08002D5Cu;
    g_cpu.R[15] = 0x08002D5Au;
    runtime_tick(_cyc_08002D58);
    /* 08002D5A  08002d5a T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08002D5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002D5A = 1u;
    _cyc_08002D5A = 3u;
    uint32_t _blt_08002D5A = (g_cpu.R[14] + 0x0000014Cu) & ~1u;
    g_cpu.R[14] = 0x08002D5Du;
    g_cpu.R[15] = _blt_08002D5A;
    runtime_call_push_return(0x08002D5Cu);
    runtime_tick(_cyc_08002D5A);
    _cyc_08002D5A = 0u;
    runtime_dispatch(_blt_08002D5A);
    if (g_cpu.R[15] != 0x08002D5Cu) { runtime_call_cancel_return(0x08002D5Cu); return; }
    g_cpu.R[15] = 0x08002D5Cu;
    runtime_tick(_cyc_08002D5A);
    /* fall-through to 0x08002D5C */
    g_cpu.R[15] = 0x08002D5Cu;
    runtime_dispatch(0x08002D5Cu);
    return;
}
