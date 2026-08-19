// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002F12 mode=thumb end=0x08002F4C
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

OVL_EXPORT void func_08002F12(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002F12u);
    /* 08002F12  08002f12 T movs r0,r0,lsl #4 */
    g_cpu.R[15] = 0x08002F12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F12 = 1u;
    _cyc_08002F12 = 1u;
    uint32_t _rm_08002F12 = g_cpu.R[0];
    uint32_t _op2_08002F12;
    uint32_t _co_08002F12;
    _op2_08002F12 = _rm_08002F12 << 4;
    _co_08002F12 = (_rm_08002F12 >> 28) & 1u;
    uint32_t _r_08002F12;
    _r_08002F12 = _op2_08002F12;
    arm_set_nzc_logic(_r_08002F12, _co_08002F12);
    g_cpu.R[0] = _r_08002F12;
    g_cpu.R[15] = 0x08002F14u;
    runtime_tick(_cyc_08002F12);
    /* 08002F14  08002f14 T orrs r1,r1,r0 */
    g_cpu.R[15] = 0x08002F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F14 = 1u;
    _cyc_08002F14 = 1u;
    uint32_t _rm_08002F14 = g_cpu.R[0];
    uint32_t _op2_08002F14;
    uint32_t _co_08002F14;
    _op2_08002F14 = _rm_08002F14;
    _co_08002F14 = cpsr_c();
    uint32_t _rn_08002F14 = g_cpu.R[1];
    uint32_t _r_08002F14;
    _r_08002F14 = _rn_08002F14 | _op2_08002F14;
    arm_set_nzc_logic(_r_08002F14, _co_08002F14);
    g_cpu.R[1] = _r_08002F14;
    g_cpu.R[15] = 0x08002F16u;
    runtime_tick(_cyc_08002F14);
    /* 08002F16  08002f16 T mov r7,r8 */
    g_cpu.R[15] = 0x08002F16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F16 = 1u;
    _cyc_08002F16 = 1u;
    uint32_t _rm_08002F16 = g_cpu.R[8];
    uint32_t _op2_08002F16;
    uint32_t _co_08002F16;
    _op2_08002F16 = _rm_08002F16;
    _co_08002F16 = cpsr_c();
    uint32_t _r_08002F16;
    _r_08002F16 = _op2_08002F16;
    g_cpu.R[7] = _r_08002F16;
    g_cpu.R[15] = 0x08002F18u;
    runtime_tick(_cyc_08002F16);
    /* 08002F18  08002f18 T ldr r0,[r7] */
    g_cpu.R[15] = 0x08002F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F18 = 1u;
    _cyc_08002F18 = 2u;
    uint32_t _base_08002F18 = g_cpu.R[7];
    uint32_t _off_08002F18;
    _off_08002F18 = 0x00000000u;
    uint32_t _ea_08002F18 = _base_08002F18 + _off_08002F18;
    uint32_t _post_08002F18 = _base_08002F18 + _off_08002F18;
    _cyc_08002F18 += runtime_mem_cycles(_ea_08002F18, 4u, 0u);
    uint32_t _v_08002F18;
    { uint32_t _w = bus_read_u32(_ea_08002F18 & ~3u); uint32_t _rot = (_ea_08002F18 & 3u) * 8u; _v_08002F18 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08002F18;
    g_cpu.R[15] = 0x08002F1Au;
    runtime_tick(_cyc_08002F18);
    /* 08002F1A  08002f1a T orrs r0,r0,r1 */
    g_cpu.R[15] = 0x08002F1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F1A = 1u;
    _cyc_08002F1A = 1u;
    uint32_t _rm_08002F1A = g_cpu.R[1];
    uint32_t _op2_08002F1A;
    uint32_t _co_08002F1A;
    _op2_08002F1A = _rm_08002F1A;
    _co_08002F1A = cpsr_c();
    uint32_t _rn_08002F1A = g_cpu.R[0];
    uint32_t _r_08002F1A;
    _r_08002F1A = _rn_08002F1A | _op2_08002F1A;
    arm_set_nzc_logic(_r_08002F1A, _co_08002F1A);
    g_cpu.R[0] = _r_08002F1A;
    g_cpu.R[15] = 0x08002F1Cu;
    runtime_tick(_cyc_08002F1A);
    /* 08002F1C  08002f1c T strh r0,[r2] */
    g_cpu.R[15] = 0x08002F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F1C = 1u;
    _cyc_08002F1C = 1u;
    uint32_t _base_08002F1C = g_cpu.R[2];
    uint32_t _off_08002F1C;
    _off_08002F1C = 0x00000000u;
    uint32_t _ea_08002F1C = _base_08002F1C + _off_08002F1C;
    uint32_t _post_08002F1C = _base_08002F1C + _off_08002F1C;
    _cyc_08002F1C += runtime_mem_cycles(_ea_08002F1C, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08002F1Cu, _ea_08002F1C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08002F1C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08002F1Eu;
    runtime_tick(_cyc_08002F1C);
    /* 08002F1E  08002f1e T adds r2,r2,#0x2 */
    g_cpu.R[15] = 0x08002F1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F1E = 1u;
    _cyc_08002F1E = 1u;
    uint32_t _rn_08002F1E = g_cpu.R[2];
    uint32_t _r_08002F1E;
    _r_08002F1E = _rn_08002F1E + 0x00000002u;
    arm_set_nzcv_add(_rn_08002F1E, 0x00000002u, _r_08002F1E);
    g_cpu.R[2] = _r_08002F1E;
    g_cpu.R[15] = 0x08002F20u;
    runtime_tick(_cyc_08002F1E);
    /* 08002F20  08002f20 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08002F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F20 = 1u;
    _cyc_08002F20 = 1u;
    uint32_t _r_08002F20;
    _r_08002F20 = 0x00000001u;
    arm_set_nzc_logic(_r_08002F20, cpsr_c());
    g_cpu.R[0] = _r_08002F20;
    g_cpu.R[15] = 0x08002F22u;
    runtime_tick(_cyc_08002F20);
    /* 08002F22  08002f22 T add r12,r12,r0 */
    g_cpu.R[15] = 0x08002F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F22 = 1u;
    _cyc_08002F22 = 1u;
    uint32_t _rm_08002F22 = g_cpu.R[0];
    uint32_t _op2_08002F22;
    uint32_t _co_08002F22;
    _op2_08002F22 = _rm_08002F22;
    _co_08002F22 = cpsr_c();
    uint32_t _rn_08002F22 = g_cpu.R[12];
    uint32_t _r_08002F22;
    _r_08002F22 = _rn_08002F22 + _op2_08002F22;
    g_cpu.R[12] = _r_08002F22;
    g_cpu.R[15] = 0x08002F24u;
    runtime_tick(_cyc_08002F22);
    /* 08002F24  08002f24 T subs r3,r3,#0x1 */
    g_cpu.R[15] = 0x08002F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F24 = 1u;
    _cyc_08002F24 = 1u;
    uint32_t _rn_08002F24 = g_cpu.R[3];
    uint32_t _r_08002F24;
    _r_08002F24 = _rn_08002F24 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08002F24, 0x00000001u, _r_08002F24);
    g_cpu.R[3] = _r_08002F24;
    g_cpu.R[15] = 0x08002F26u;
    runtime_tick(_cyc_08002F24);
    /* 08002F26  08002f26 T cmps r3,#0x0 */
    g_cpu.R[15] = 0x08002F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F26 = 1u;
    _cyc_08002F26 = 1u;
    uint32_t _rn_08002F26 = g_cpu.R[3];
    uint32_t _r_08002F26;
    _r_08002F26 = _rn_08002F26 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08002F26, 0x00000000u, _r_08002F26);
    g_cpu.R[15] = 0x08002F28u;
    runtime_tick(_cyc_08002F26);
    /* 08002F28  08002f28 T bge 0x08002f04 */
    g_cpu.R[15] = 0x08002F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F28 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08002F28 = 3u;
        g_cpu.R[15] = 0x08002F04u;
        runtime_tick(_cyc_08002F28);
        runtime_dispatch(0x08002F04u);
        return;
    }
    g_cpu.R[15] = 0x08002F2Au;
    runtime_tick(_cyc_08002F28);
    /* 08002F2A  08002f2a T adds r1,r6,#0x0 */
    g_cpu.R[15] = 0x08002F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F2A = 1u;
    _cyc_08002F2A = 1u;
    uint32_t _rn_08002F2A = g_cpu.R[6];
    uint32_t _r_08002F2A;
    _r_08002F2A = _rn_08002F2A + 0x00000000u;
    arm_set_nzcv_add(_rn_08002F2A, 0x00000000u, _r_08002F2A);
    g_cpu.R[1] = _r_08002F2A;
    g_cpu.R[15] = 0x08002F2Cu;
    runtime_tick(_cyc_08002F2A);
    /* 08002F2C  08002f2c T cmps r1,#0x2 */
    g_cpu.R[15] = 0x08002F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F2C = 1u;
    _cyc_08002F2C = 1u;
    uint32_t _rn_08002F2C = g_cpu.R[1];
    uint32_t _r_08002F2C;
    _r_08002F2C = _rn_08002F2C - 0x00000002u;
    arm_set_nzcv_sub(_rn_08002F2C, 0x00000002u, _r_08002F2C);
    g_cpu.R[15] = 0x08002F2Eu;
    runtime_tick(_cyc_08002F2C);
    /* 08002F2E  08002f2e T ble 0x08002ef0 */
    g_cpu.R[15] = 0x08002F2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F2E = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08002F2E = 3u;
        g_cpu.R[15] = 0x08002EF0u;
        runtime_tick(_cyc_08002F2E);
        runtime_dispatch(0x08002EF0u);
        return;
    }
    g_cpu.R[15] = 0x08002F30u;
    runtime_tick(_cyc_08002F2E);
    /* 08002F30  08002f30 T mov r2,r9 */
    g_cpu.R[15] = 0x08002F30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F30 = 1u;
    _cyc_08002F30 = 1u;
    uint32_t _rm_08002F30 = g_cpu.R[9];
    uint32_t _op2_08002F30;
    uint32_t _co_08002F30;
    _op2_08002F30 = _rm_08002F30;
    _co_08002F30 = cpsr_c();
    uint32_t _r_08002F30;
    _r_08002F30 = _op2_08002F30;
    g_cpu.R[2] = _r_08002F30;
    g_cpu.R[15] = 0x08002F32u;
    runtime_tick(_cyc_08002F30);
    /* 08002F32  08002f32 T cmps r2,#0x2 */
    g_cpu.R[15] = 0x08002F32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F32 = 1u;
    _cyc_08002F32 = 1u;
    uint32_t _rn_08002F32 = g_cpu.R[2];
    uint32_t _r_08002F32;
    _r_08002F32 = _rn_08002F32 - 0x00000002u;
    arm_set_nzcv_sub(_rn_08002F32, 0x00000002u, _r_08002F32);
    g_cpu.R[15] = 0x08002F34u;
    runtime_tick(_cyc_08002F32);
    /* 08002F34  08002f34 T ble 0x08002ee4 */
    g_cpu.R[15] = 0x08002F34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F34 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08002F34 = 3u;
        g_cpu.R[15] = 0x08002EE4u;
        runtime_tick(_cyc_08002F34);
        runtime_dispatch(0x08002EE4u);
        return;
    }
    g_cpu.R[15] = 0x08002F36u;
    runtime_tick(_cyc_08002F34);
    /* 08002F36  08002f36 T mov r1,r10 */
    g_cpu.R[15] = 0x08002F36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F36 = 1u;
    _cyc_08002F36 = 1u;
    uint32_t _rm_08002F36 = g_cpu.R[10];
    uint32_t _op2_08002F36;
    uint32_t _co_08002F36;
    _op2_08002F36 = _rm_08002F36;
    _co_08002F36 = cpsr_c();
    uint32_t _r_08002F36;
    _r_08002F36 = _op2_08002F36;
    g_cpu.R[1] = _r_08002F36;
    g_cpu.R[15] = 0x08002F38u;
    runtime_tick(_cyc_08002F36);
    /* 08002F38  08002f38 T cmps r1,#0x2 */
    g_cpu.R[15] = 0x08002F38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F38 = 1u;
    _cyc_08002F38 = 1u;
    uint32_t _rn_08002F38 = g_cpu.R[1];
    uint32_t _r_08002F38;
    _r_08002F38 = _rn_08002F38 - 0x00000002u;
    arm_set_nzcv_sub(_rn_08002F38, 0x00000002u, _r_08002F38);
    g_cpu.R[15] = 0x08002F3Au;
    runtime_tick(_cyc_08002F38);
    /* 08002F3A  08002f3a T ble 0x08002ed8 */
    g_cpu.R[15] = 0x08002F3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F3A = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08002F3A = 3u;
        g_cpu.R[15] = 0x08002ED8u;
        runtime_tick(_cyc_08002F3A);
        runtime_dispatch(0x08002ED8u);
        return;
    }
    g_cpu.R[15] = 0x08002F3Cu;
    runtime_tick(_cyc_08002F3A);
    /* 08002F3C  08002f3c T add r13,r13,#0x10 */
    g_cpu.R[15] = 0x08002F3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F3C = 1u;
    _cyc_08002F3C = 1u;
    uint32_t _rn_08002F3C = g_cpu.R[13];
    uint32_t _r_08002F3C;
    _r_08002F3C = _rn_08002F3C + 0x00000010u;
    g_cpu.R[13] = _r_08002F3C;
    g_cpu.R[15] = 0x08002F3Eu;
    runtime_tick(_cyc_08002F3C);
    /* 08002F3E  08002f3e T ldm r13!,{r3,r4,r5} */
    g_cpu.R[15] = 0x08002F3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F3E = 1u;
    _cyc_08002F3E = 2u;
    uint32_t _b_08002F3E = g_cpu.R[13];
    uint32_t _a_08002F3E = _b_08002F3E;
    uint32_t _fb_08002F3E = _b_08002F3E + 12u;
    _cyc_08002F3E += runtime_mem_cycles(_a_08002F3E & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_08002F3E & ~3u);
    _a_08002F3E += 4u;
    _cyc_08002F3E += runtime_mem_cycles(_a_08002F3E & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_08002F3E & ~3u);
    _a_08002F3E += 4u;
    _cyc_08002F3E += runtime_mem_cycles(_a_08002F3E & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08002F3E & ~3u);
    _a_08002F3E += 4u;
    g_cpu.R[13] = _fb_08002F3E;
    g_cpu.R[15] = 0x08002F40u;
    runtime_tick(_cyc_08002F3E);
    /* 08002F40  08002f40 T mov r8,r3 */
    g_cpu.R[15] = 0x08002F40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F40 = 1u;
    _cyc_08002F40 = 1u;
    uint32_t _rm_08002F40 = g_cpu.R[3];
    uint32_t _op2_08002F40;
    uint32_t _co_08002F40;
    _op2_08002F40 = _rm_08002F40;
    _co_08002F40 = cpsr_c();
    uint32_t _r_08002F40;
    _r_08002F40 = _op2_08002F40;
    g_cpu.R[8] = _r_08002F40;
    g_cpu.R[15] = 0x08002F42u;
    runtime_tick(_cyc_08002F40);
    /* 08002F42  08002f42 T mov r9,r4 */
    g_cpu.R[15] = 0x08002F42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F42 = 1u;
    _cyc_08002F42 = 1u;
    uint32_t _rm_08002F42 = g_cpu.R[4];
    uint32_t _op2_08002F42;
    uint32_t _co_08002F42;
    _op2_08002F42 = _rm_08002F42;
    _co_08002F42 = cpsr_c();
    uint32_t _r_08002F42;
    _r_08002F42 = _op2_08002F42;
    g_cpu.R[9] = _r_08002F42;
    g_cpu.R[15] = 0x08002F44u;
    runtime_tick(_cyc_08002F42);
    /* 08002F44  08002f44 T mov r10,r5 */
    g_cpu.R[15] = 0x08002F44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F44 = 1u;
    _cyc_08002F44 = 1u;
    uint32_t _rm_08002F44 = g_cpu.R[5];
    uint32_t _op2_08002F44;
    uint32_t _co_08002F44;
    _op2_08002F44 = _rm_08002F44;
    _co_08002F44 = cpsr_c();
    uint32_t _r_08002F44;
    _r_08002F44 = _op2_08002F44;
    g_cpu.R[10] = _r_08002F44;
    g_cpu.R[15] = 0x08002F46u;
    runtime_tick(_cyc_08002F44);
    /* 08002F46  08002f46 T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x08002F46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F46 = 1u;
    _cyc_08002F46 = 2u;
    uint32_t _b_08002F46 = g_cpu.R[13];
    uint32_t _a_08002F46 = _b_08002F46;
    uint32_t _fb_08002F46 = _b_08002F46 + 16u;
    _cyc_08002F46 += runtime_mem_cycles(_a_08002F46 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08002F46 & ~3u);
    _a_08002F46 += 4u;
    _cyc_08002F46 += runtime_mem_cycles(_a_08002F46 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08002F46 & ~3u);
    _a_08002F46 += 4u;
    _cyc_08002F46 += runtime_mem_cycles(_a_08002F46 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08002F46 & ~3u);
    _a_08002F46 += 4u;
    _cyc_08002F46 += runtime_mem_cycles(_a_08002F46 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08002F46 & ~3u);
    _a_08002F46 += 4u;
    g_cpu.R[13] = _fb_08002F46;
    g_cpu.R[15] = 0x08002F48u;
    runtime_tick(_cyc_08002F46);
    /* 08002F48  08002f48 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08002F48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F48 = 1u;
    _cyc_08002F48 = 2u;
    uint32_t _b_08002F48 = g_cpu.R[13];
    uint32_t _a_08002F48 = _b_08002F48;
    uint32_t _fb_08002F48 = _b_08002F48 + 4u;
    _cyc_08002F48 += runtime_mem_cycles(_a_08002F48 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08002F48 & ~3u);
    _a_08002F48 += 4u;
    g_cpu.R[13] = _fb_08002F48;
    g_cpu.R[15] = 0x08002F4Au;
    runtime_tick(_cyc_08002F48);
    /* 08002F4A  08002f4a T bx r0 */
    g_cpu.R[15] = 0x08002F4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F4A = 1u;
    _cyc_08002F4A = 3u;
    uint32_t _bxt_08002F4A = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08002F4A & ~1u;
    runtime_tick(_cyc_08002F4A);
    if (_bxt_08002F4A & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08002F4A);
    return;
    g_cpu.R[15] = 0x08002F4Cu;
    runtime_tick(_cyc_08002F4A);
    /* fall-through to 0x08002F4C */
    g_cpu.R[15] = 0x08002F4Cu;
    runtime_dispatch(0x08002F4Cu);
    return;
}
