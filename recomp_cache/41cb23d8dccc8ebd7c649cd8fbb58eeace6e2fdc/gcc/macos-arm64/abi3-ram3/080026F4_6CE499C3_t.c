// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080026F4 mode=thumb end=0x08002718
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

OVL_EXPORT void func_080026F4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080026F4u);
    /* 080026F4  080026f4 T ldr r1,[r0] */
    g_cpu.R[15] = 0x080026F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026F4 = 1u;
    _cyc_080026F4 = 2u;
    uint32_t _base_080026F4 = g_cpu.R[0];
    uint32_t _off_080026F4;
    _off_080026F4 = 0x00000000u;
    uint32_t _ea_080026F4 = _base_080026F4 + _off_080026F4;
    uint32_t _post_080026F4 = _base_080026F4 + _off_080026F4;
    _cyc_080026F4 += runtime_mem_cycles(_ea_080026F4, 4u, 0u);
    uint32_t _v_080026F4;
    { uint32_t _w = bus_read_u32(_ea_080026F4 & ~3u); uint32_t _rot = (_ea_080026F4 & 3u) * 8u; _v_080026F4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080026F4;
    g_cpu.R[15] = 0x080026F6u;
    runtime_tick(_cyc_080026F4);
    /* 080026F6  080026f6 T adds r0,r3,r4 */
    g_cpu.R[15] = 0x080026F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026F6 = 1u;
    _cyc_080026F6 = 1u;
    uint32_t _rm_080026F6 = g_cpu.R[4];
    uint32_t _op2_080026F6;
    uint32_t _co_080026F6;
    _op2_080026F6 = _rm_080026F6;
    _co_080026F6 = cpsr_c();
    uint32_t _rn_080026F6 = g_cpu.R[3];
    uint32_t _r_080026F6;
    _r_080026F6 = _rn_080026F6 + _op2_080026F6;
    arm_set_nzcv_add(_rn_080026F6, _op2_080026F6, _r_080026F6);
    g_cpu.R[0] = _r_080026F6;
    g_cpu.R[15] = 0x080026F8u;
    runtime_tick(_cyc_080026F6);
    /* 080026F8  080026f8 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x080026F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026F8 = 1u;
    _cyc_080026F8 = 1u;
    uint32_t _rm_080026F8 = g_cpu.R[0];
    uint32_t _op2_080026F8;
    uint32_t _co_080026F8;
    _op2_080026F8 = _rm_080026F8;
    _co_080026F8 = cpsr_c();
    uint32_t _rn_080026F8 = g_cpu.R[1];
    uint32_t _r_080026F8;
    _r_080026F8 = _rn_080026F8 + _op2_080026F8;
    arm_set_nzcv_add(_rn_080026F8, _op2_080026F8, _r_080026F8);
    g_cpu.R[1] = _r_080026F8;
    g_cpu.R[15] = 0x080026FAu;
    runtime_tick(_cyc_080026F8);
    /* 080026FA  080026fa T ldrh r0,[r2] */
    g_cpu.R[15] = 0x080026FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026FA = 1u;
    _cyc_080026FA = 2u;
    uint32_t _base_080026FA = g_cpu.R[2];
    uint32_t _off_080026FA;
    _off_080026FA = 0x00000000u;
    uint32_t _ea_080026FA = _base_080026FA + _off_080026FA;
    uint32_t _post_080026FA = _base_080026FA + _off_080026FA;
    _cyc_080026FA += runtime_mem_cycles(_ea_080026FA, 2u, 0u);
    uint32_t _v_080026FA;
    { uint32_t _h = bus_read_u16(_ea_080026FA & ~1u); if (_ea_080026FA & 1u) _v_080026FA = ((_h >> 8) | (_h << 24)); else _v_080026FA = _h; }
    g_cpu.R[0] = _v_080026FA;
    g_cpu.R[15] = 0x080026FCu;
    runtime_tick(_cyc_080026FA);
    /* 080026FC  080026fc T strb r0,[r1] */
    g_cpu.R[15] = 0x080026FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026FC = 1u;
    _cyc_080026FC = 1u;
    uint32_t _base_080026FC = g_cpu.R[1];
    uint32_t _off_080026FC;
    _off_080026FC = 0x00000000u;
    uint32_t _ea_080026FC = _base_080026FC + _off_080026FC;
    uint32_t _post_080026FC = _base_080026FC + _off_080026FC;
    _cyc_080026FC += runtime_mem_cycles(_ea_080026FC, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080026FCu, _ea_080026FC, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080026FC, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080026FEu;
    runtime_tick(_cyc_080026FC);
    /* 080026FE  080026fe T ldrh r0,[r2] */
    g_cpu.R[15] = 0x080026FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080026FE = 1u;
    _cyc_080026FE = 2u;
    uint32_t _base_080026FE = g_cpu.R[2];
    uint32_t _off_080026FE;
    _off_080026FE = 0x00000000u;
    uint32_t _ea_080026FE = _base_080026FE + _off_080026FE;
    uint32_t _post_080026FE = _base_080026FE + _off_080026FE;
    _cyc_080026FE += runtime_mem_cycles(_ea_080026FE, 2u, 0u);
    uint32_t _v_080026FE;
    { uint32_t _h = bus_read_u16(_ea_080026FE & ~1u); if (_ea_080026FE & 1u) _v_080026FE = ((_h >> 8) | (_h << 24)); else _v_080026FE = _h; }
    g_cpu.R[0] = _v_080026FE;
    g_cpu.R[15] = 0x08002700u;
    runtime_tick(_cyc_080026FE);
    /* 08002700  08002700 T mov r1,r9 */
    g_cpu.R[15] = 0x08002700u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002700 = 1u;
    _cyc_08002700 = 1u;
    uint32_t _rm_08002700 = g_cpu.R[9];
    uint32_t _op2_08002700;
    uint32_t _co_08002700;
    _op2_08002700 = _rm_08002700;
    _co_08002700 = cpsr_c();
    uint32_t _r_08002700;
    _r_08002700 = _op2_08002700;
    g_cpu.R[1] = _r_08002700;
    g_cpu.R[15] = 0x08002702u;
    runtime_tick(_cyc_08002700);
    /* 08002702  08002702 T ands r1,r1,r0 */
    g_cpu.R[15] = 0x08002702u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002702 = 1u;
    _cyc_08002702 = 1u;
    uint32_t _rm_08002702 = g_cpu.R[0];
    uint32_t _op2_08002702;
    uint32_t _co_08002702;
    _op2_08002702 = _rm_08002702;
    _co_08002702 = cpsr_c();
    uint32_t _rn_08002702 = g_cpu.R[1];
    uint32_t _r_08002702;
    _r_08002702 = _rn_08002702 & _op2_08002702;
    arm_set_nzc_logic(_r_08002702, _co_08002702);
    g_cpu.R[1] = _r_08002702;
    g_cpu.R[15] = 0x08002704u;
    runtime_tick(_cyc_08002702);
    /* 08002704  08002704 T ldr r7,[r13,#0x10] */
    g_cpu.R[15] = 0x08002704u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002704 = 1u;
    _cyc_08002704 = 2u;
    uint32_t _base_08002704 = g_cpu.R[13];
    uint32_t _off_08002704;
    _off_08002704 = 0x00000010u;
    uint32_t _ea_08002704 = _base_08002704 + _off_08002704;
    uint32_t _post_08002704 = _base_08002704 + _off_08002704;
    _cyc_08002704 += runtime_mem_cycles(_ea_08002704, 4u, 0u);
    uint32_t _v_08002704;
    { uint32_t _w = bus_read_u32(_ea_08002704 & ~3u); uint32_t _rot = (_ea_08002704 & 3u) * 8u; _v_08002704 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_08002704;
    g_cpu.R[15] = 0x08002706u;
    runtime_tick(_cyc_08002704);
    /* 08002706  08002706 T adds r0,r0,r7 */
    g_cpu.R[15] = 0x08002706u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002706 = 1u;
    _cyc_08002706 = 1u;
    uint32_t _rm_08002706 = g_cpu.R[7];
    uint32_t _op2_08002706;
    uint32_t _co_08002706;
    _op2_08002706 = _rm_08002706;
    _co_08002706 = cpsr_c();
    uint32_t _rn_08002706 = g_cpu.R[0];
    uint32_t _r_08002706;
    _r_08002706 = _rn_08002706 + _op2_08002706;
    arm_set_nzcv_add(_rn_08002706, _op2_08002706, _r_08002706);
    g_cpu.R[0] = _r_08002706;
    g_cpu.R[15] = 0x08002708u;
    runtime_tick(_cyc_08002706);
    /* 08002708  08002708 T ands r0,r0,r5 */
    g_cpu.R[15] = 0x08002708u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002708 = 1u;
    _cyc_08002708 = 1u;
    uint32_t _rm_08002708 = g_cpu.R[5];
    uint32_t _op2_08002708;
    uint32_t _co_08002708;
    _op2_08002708 = _rm_08002708;
    _co_08002708 = cpsr_c();
    uint32_t _rn_08002708 = g_cpu.R[0];
    uint32_t _r_08002708;
    _r_08002708 = _rn_08002708 & _op2_08002708;
    arm_set_nzc_logic(_r_08002708, _co_08002708);
    g_cpu.R[0] = _r_08002708;
    g_cpu.R[15] = 0x0800270Au;
    runtime_tick(_cyc_08002708);
    /* 0800270A  0800270a T adds r1,r1,r0 */
    g_cpu.R[15] = 0x0800270Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800270A = 1u;
    _cyc_0800270A = 1u;
    uint32_t _rm_0800270A = g_cpu.R[0];
    uint32_t _op2_0800270A;
    uint32_t _co_0800270A;
    _op2_0800270A = _rm_0800270A;
    _co_0800270A = cpsr_c();
    uint32_t _rn_0800270A = g_cpu.R[1];
    uint32_t _r_0800270A;
    _r_0800270A = _rn_0800270A + _op2_0800270A;
    arm_set_nzcv_add(_rn_0800270A, _op2_0800270A, _r_0800270A);
    g_cpu.R[1] = _r_0800270A;
    g_cpu.R[15] = 0x0800270Cu;
    runtime_tick(_cyc_0800270A);
    /* 0800270C  0800270c T strh r1,[r2] */
    g_cpu.R[15] = 0x0800270Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800270C = 1u;
    _cyc_0800270C = 1u;
    uint32_t _base_0800270C = g_cpu.R[2];
    uint32_t _off_0800270C;
    _off_0800270C = 0x00000000u;
    uint32_t _ea_0800270C = _base_0800270C + _off_0800270C;
    uint32_t _post_0800270C = _base_0800270C + _off_0800270C;
    _cyc_0800270C += runtime_mem_cycles(_ea_0800270C, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800270Cu, _ea_0800270C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0800270C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0800270Eu;
    runtime_tick(_cyc_0800270C);
    /* 0800270E  0800270e T adds r0,r4,#0x1 */
    g_cpu.R[15] = 0x0800270Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800270E = 1u;
    _cyc_0800270E = 1u;
    uint32_t _rn_0800270E = g_cpu.R[4];
    uint32_t _r_0800270E;
    _r_0800270E = _rn_0800270E + 0x00000001u;
    arm_set_nzcv_add(_rn_0800270E, 0x00000001u, _r_0800270E);
    g_cpu.R[0] = _r_0800270E;
    g_cpu.R[15] = 0x08002710u;
    runtime_tick(_cyc_0800270E);
    /* 08002710  08002710 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x08002710u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002710 = 1u;
    _cyc_08002710 = 1u;
    uint32_t _rm_08002710 = g_cpu.R[0];
    uint32_t _op2_08002710;
    uint32_t _co_08002710;
    _op2_08002710 = _rm_08002710 << 16;
    _co_08002710 = (_rm_08002710 >> 16) & 1u;
    uint32_t _r_08002710;
    _r_08002710 = _op2_08002710;
    arm_set_nzc_logic(_r_08002710, _co_08002710);
    g_cpu.R[0] = _r_08002710;
    g_cpu.R[15] = 0x08002712u;
    runtime_tick(_cyc_08002710);
    /* 08002712  08002712 T movs r4,r0,lsr #16 */
    g_cpu.R[15] = 0x08002712u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002712 = 1u;
    _cyc_08002712 = 1u;
    uint32_t _rm_08002712 = g_cpu.R[0];
    uint32_t _op2_08002712;
    uint32_t _co_08002712;
    _op2_08002712 = _rm_08002712 >> 16;
    _co_08002712 = (_rm_08002712 >> 15) & 1u;
    uint32_t _r_08002712;
    _r_08002712 = _op2_08002712;
    arm_set_nzc_logic(_r_08002712, _co_08002712);
    g_cpu.R[4] = _r_08002712;
    g_cpu.R[15] = 0x08002714u;
    runtime_tick(_cyc_08002712);
    /* 08002714  08002714 T cmps r4,r6 */
    g_cpu.R[15] = 0x08002714u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002714 = 1u;
    _cyc_08002714 = 1u;
    uint32_t _rm_08002714 = g_cpu.R[6];
    uint32_t _op2_08002714;
    uint32_t _co_08002714;
    _op2_08002714 = _rm_08002714;
    _co_08002714 = cpsr_c();
    uint32_t _rn_08002714 = g_cpu.R[4];
    uint32_t _r_08002714;
    _r_08002714 = _rn_08002714 - _op2_08002714;
    arm_set_nzcv_sub(_rn_08002714, _op2_08002714, _r_08002714);
    g_cpu.R[15] = 0x08002716u;
    runtime_tick(_cyc_08002714);
    /* 08002716  08002716 T blt 0x080026f2 */
    g_cpu.R[15] = 0x08002716u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002716 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08002716 = 3u;
        g_cpu.R[15] = 0x080026F2u;
        runtime_tick(_cyc_08002716);
        runtime_dispatch(0x080026F2u);
        return;
    }
    g_cpu.R[15] = 0x08002718u;
    runtime_tick(_cyc_08002716);
    /* fall-through to 0x08002718 */
    g_cpu.R[15] = 0x08002718u;
    runtime_dispatch(0x08002718u);
    return;
}
