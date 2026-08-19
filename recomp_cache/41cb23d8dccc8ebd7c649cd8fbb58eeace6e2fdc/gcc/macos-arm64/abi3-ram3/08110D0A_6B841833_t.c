// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08110D0A mode=thumb end=0x08110D2A
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

OVL_EXPORT void func_08110D0A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08110D0Au);
    /* 08110D0A  08110d0a T strb r0,[r4] */
    g_cpu.R[15] = 0x08110D0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D0A = 1u;
    _cyc_08110D0A = 1u;
    uint32_t _base_08110D0A = g_cpu.R[4];
    uint32_t _off_08110D0A;
    _off_08110D0A = 0x00000000u;
    uint32_t _ea_08110D0A = _base_08110D0A + _off_08110D0A;
    uint32_t _post_08110D0A = _base_08110D0A + _off_08110D0A;
    _cyc_08110D0A += runtime_mem_cycles(_ea_08110D0A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08110D0Au, _ea_08110D0A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08110D0A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08110D0Cu;
    runtime_tick(_cyc_08110D0A);
    /* 08110D0C  08110d0c T mov r1,r9 */
    g_cpu.R[15] = 0x08110D0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D0C = 1u;
    _cyc_08110D0C = 1u;
    uint32_t _rm_08110D0C = g_cpu.R[9];
    uint32_t _op2_08110D0C;
    uint32_t _co_08110D0C;
    _op2_08110D0C = _rm_08110D0C;
    _co_08110D0C = cpsr_c();
    uint32_t _r_08110D0C;
    _r_08110D0C = _op2_08110D0C;
    g_cpu.R[1] = _r_08110D0C;
    g_cpu.R[15] = 0x08110D0Eu;
    runtime_tick(_cyc_08110D0C);
    /* 08110D0E  08110d0e T ldr r0,[r1] */
    g_cpu.R[15] = 0x08110D0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D0E = 1u;
    _cyc_08110D0E = 2u;
    uint32_t _base_08110D0E = g_cpu.R[1];
    uint32_t _off_08110D0E;
    _off_08110D0E = 0x00000000u;
    uint32_t _ea_08110D0E = _base_08110D0E + _off_08110D0E;
    uint32_t _post_08110D0E = _base_08110D0E + _off_08110D0E;
    _cyc_08110D0E += runtime_mem_cycles(_ea_08110D0E, 4u, 0u);
    uint32_t _v_08110D0E;
    { uint32_t _w = bus_read_u32(_ea_08110D0E & ~3u); uint32_t _rot = (_ea_08110D0E & 3u) * 8u; _v_08110D0E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08110D0E;
    g_cpu.R[15] = 0x08110D10u;
    runtime_tick(_cyc_08110D0E);
    /* 08110D10  08110d10 T adds r0,r0,r3 */
    g_cpu.R[15] = 0x08110D10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D10 = 1u;
    _cyc_08110D10 = 1u;
    uint32_t _rm_08110D10 = g_cpu.R[3];
    uint32_t _op2_08110D10;
    uint32_t _co_08110D10;
    _op2_08110D10 = _rm_08110D10;
    _co_08110D10 = cpsr_c();
    uint32_t _rn_08110D10 = g_cpu.R[0];
    uint32_t _r_08110D10;
    _r_08110D10 = _rn_08110D10 + _op2_08110D10;
    arm_set_nzcv_add(_rn_08110D10, _op2_08110D10, _r_08110D10);
    g_cpu.R[0] = _r_08110D10;
    g_cpu.R[15] = 0x08110D12u;
    runtime_tick(_cyc_08110D10);
    /* 08110D12  08110d12 T ldr r2,[r15,#0x2c] */
    g_cpu.R[15] = 0x08110D12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D12 = 1u;
    _cyc_08110D12 = 2u;
    uint32_t _base_08110D12 = 0x08110D16u & ~3u;
    uint32_t _off_08110D12;
    _off_08110D12 = 0x0000002Cu;
    uint32_t _ea_08110D12 = _base_08110D12 + _off_08110D12;
    uint32_t _post_08110D12 = _base_08110D12 + _off_08110D12;
    _cyc_08110D12 += runtime_mem_cycles(_ea_08110D12, 4u, 0u);
    uint32_t _v_08110D12;
    { uint32_t _w = bus_read_u32(_ea_08110D12 & ~3u); uint32_t _rot = (_ea_08110D12 & 3u) * 8u; _v_08110D12 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08110D12;
    g_cpu.R[15] = 0x08110D14u;
    runtime_tick(_cyc_08110D12);
    /* 08110D14  08110d14 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x08110D14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D14 = 1u;
    _cyc_08110D14 = 1u;
    uint32_t _rm_08110D14 = g_cpu.R[2];
    uint32_t _op2_08110D14;
    uint32_t _co_08110D14;
    _op2_08110D14 = _rm_08110D14;
    _co_08110D14 = cpsr_c();
    uint32_t _rn_08110D14 = g_cpu.R[0];
    uint32_t _r_08110D14;
    _r_08110D14 = _rn_08110D14 + _op2_08110D14;
    arm_set_nzcv_add(_rn_08110D14, _op2_08110D14, _r_08110D14);
    g_cpu.R[0] = _r_08110D14;
    g_cpu.R[15] = 0x08110D16u;
    runtime_tick(_cyc_08110D14);
    /* 08110D16  08110d16 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08110D16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D16 = 1u;
    _cyc_08110D16 = 2u;
    uint32_t _base_08110D16 = g_cpu.R[0];
    uint32_t _off_08110D16;
    _off_08110D16 = 0x00000000u;
    uint32_t _ea_08110D16 = _base_08110D16 + _off_08110D16;
    uint32_t _post_08110D16 = _base_08110D16 + _off_08110D16;
    _cyc_08110D16 += runtime_mem_cycles(_ea_08110D16, 1u, 0u);
    uint32_t _v_08110D16;
    _v_08110D16 = bus_read_u8(_ea_08110D16);
    g_cpu.R[0] = _v_08110D16;
    g_cpu.R[15] = 0x08110D18u;
    runtime_tick(_cyc_08110D16);
    /* 08110D18  08110d18 T ldr r3,[r15,#0x28] */
    g_cpu.R[15] = 0x08110D18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D18 = 1u;
    _cyc_08110D18 = 2u;
    uint32_t _base_08110D18 = 0x08110D1Cu & ~3u;
    uint32_t _off_08110D18;
    _off_08110D18 = 0x00000028u;
    uint32_t _ea_08110D18 = _base_08110D18 + _off_08110D18;
    uint32_t _post_08110D18 = _base_08110D18 + _off_08110D18;
    _cyc_08110D18 += runtime_mem_cycles(_ea_08110D18, 4u, 0u);
    uint32_t _v_08110D18;
    { uint32_t _w = bus_read_u32(_ea_08110D18 & ~3u); uint32_t _rot = (_ea_08110D18 & 3u) * 8u; _v_08110D18 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08110D18;
    g_cpu.R[15] = 0x08110D1Au;
    runtime_tick(_cyc_08110D18);
    /* 08110D1A  08110d1a T adds r5,r5,r3 */
    g_cpu.R[15] = 0x08110D1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D1A = 1u;
    _cyc_08110D1A = 1u;
    uint32_t _rm_08110D1A = g_cpu.R[3];
    uint32_t _op2_08110D1A;
    uint32_t _co_08110D1A;
    _op2_08110D1A = _rm_08110D1A;
    _co_08110D1A = cpsr_c();
    uint32_t _rn_08110D1A = g_cpu.R[5];
    uint32_t _r_08110D1A;
    _r_08110D1A = _rn_08110D1A + _op2_08110D1A;
    arm_set_nzcv_add(_rn_08110D1A, _op2_08110D1A, _r_08110D1A);
    g_cpu.R[5] = _r_08110D1A;
    g_cpu.R[15] = 0x08110D1Cu;
    runtime_tick(_cyc_08110D1A);
    /* 08110D1C  08110d1c T strb r0,[r5] */
    g_cpu.R[15] = 0x08110D1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D1C = 1u;
    _cyc_08110D1C = 1u;
    uint32_t _base_08110D1C = g_cpu.R[5];
    uint32_t _off_08110D1C;
    _off_08110D1C = 0x00000000u;
    uint32_t _ea_08110D1C = _base_08110D1C + _off_08110D1C;
    uint32_t _post_08110D1C = _base_08110D1C + _off_08110D1C;
    _cyc_08110D1C += runtime_mem_cycles(_ea_08110D1C, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08110D1Cu, _ea_08110D1C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08110D1C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08110D1Eu;
    runtime_tick(_cyc_08110D1C);
    /* 08110D1E  08110d1e T adds r0,r6,#0x1 */
    g_cpu.R[15] = 0x08110D1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D1E = 1u;
    _cyc_08110D1E = 1u;
    uint32_t _rn_08110D1E = g_cpu.R[6];
    uint32_t _r_08110D1E;
    _r_08110D1E = _rn_08110D1E + 0x00000001u;
    arm_set_nzcv_add(_rn_08110D1E, 0x00000001u, _r_08110D1E);
    g_cpu.R[0] = _r_08110D1E;
    g_cpu.R[15] = 0x08110D20u;
    runtime_tick(_cyc_08110D1E);
    /* 08110D20  08110d20 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x08110D20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D20 = 1u;
    _cyc_08110D20 = 1u;
    uint32_t _rm_08110D20 = g_cpu.R[0];
    uint32_t _op2_08110D20;
    uint32_t _co_08110D20;
    _op2_08110D20 = _rm_08110D20 << 16;
    _co_08110D20 = (_rm_08110D20 >> 16) & 1u;
    uint32_t _r_08110D20;
    _r_08110D20 = _op2_08110D20;
    arm_set_nzc_logic(_r_08110D20, _co_08110D20);
    g_cpu.R[0] = _r_08110D20;
    g_cpu.R[15] = 0x08110D22u;
    runtime_tick(_cyc_08110D20);
    /* 08110D22  08110d22 T movs r6,r0,lsr #16 */
    g_cpu.R[15] = 0x08110D22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D22 = 1u;
    _cyc_08110D22 = 1u;
    uint32_t _rm_08110D22 = g_cpu.R[0];
    uint32_t _op2_08110D22;
    uint32_t _co_08110D22;
    _op2_08110D22 = _rm_08110D22 >> 16;
    _co_08110D22 = (_rm_08110D22 >> 15) & 1u;
    uint32_t _r_08110D22;
    _r_08110D22 = _op2_08110D22;
    arm_set_nzc_logic(_r_08110D22, _co_08110D22);
    g_cpu.R[6] = _r_08110D22;
    g_cpu.R[15] = 0x08110D24u;
    runtime_tick(_cyc_08110D22);
    /* 08110D24  08110d24 T cmps r6,#0x3f */
    g_cpu.R[15] = 0x08110D24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D24 = 1u;
    _cyc_08110D24 = 1u;
    uint32_t _rn_08110D24 = g_cpu.R[6];
    uint32_t _r_08110D24;
    _r_08110D24 = _rn_08110D24 - 0x0000003Fu;
    arm_set_nzcv_sub(_rn_08110D24, 0x0000003Fu, _r_08110D24);
    g_cpu.R[15] = 0x08110D26u;
    runtime_tick(_cyc_08110D24);
    /* 08110D26  08110d26 T bhi 0x08110d2a */
    g_cpu.R[15] = 0x08110D26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D26 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08110D26 = 3u;
        g_cpu.R[15] = 0x08110D2Au;
        runtime_tick(_cyc_08110D26);
        runtime_dispatch(0x08110D2Au);
        return;
    }
    g_cpu.R[15] = 0x08110D28u;
    runtime_tick(_cyc_08110D26);
    /* 08110D28  08110d28 T b 0x08110c1c */
    g_cpu.R[15] = 0x08110D28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08110D28 = 1u;
    _cyc_08110D28 = 3u;
    g_cpu.R[15] = 0x08110C1Cu;
    runtime_tick(_cyc_08110D28);
    runtime_dispatch(0x08110C1Cu);
    return;
    g_cpu.R[15] = 0x08110D2Au;
    runtime_tick(_cyc_08110D28);
    /* fall-through to 0x08110D2A */
    g_cpu.R[15] = 0x08110D2Au;
    runtime_dispatch(0x08110D2Au);
    return;
}
