// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08000A84 mode=thumb end=0x08000A98
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

OVL_EXPORT void func_08000A84(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08000A84u);
    /* 08000A84  08000a84 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08000A84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A84 = 1u;
    _cyc_08000A84 = 1u;
    uint32_t _r_08000A84;
    _r_08000A84 = 0x00000001u;
    arm_set_nzc_logic(_r_08000A84, cpsr_c());
    g_cpu.R[0] = _r_08000A84;
    g_cpu.R[15] = 0x08000A86u;
    runtime_tick(_cyc_08000A84);
    /* 08000A86  08000a86 T strb r0,[r2] */
    g_cpu.R[15] = 0x08000A86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A86 = 1u;
    _cyc_08000A86 = 1u;
    uint32_t _base_08000A86 = g_cpu.R[2];
    uint32_t _off_08000A86;
    _off_08000A86 = 0x00000000u;
    uint32_t _ea_08000A86 = _base_08000A86 + _off_08000A86;
    uint32_t _post_08000A86 = _base_08000A86 + _off_08000A86;
    _cyc_08000A86 += runtime_mem_cycles(_ea_08000A86, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08000A86u, _ea_08000A86, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08000A86, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08000A88u;
    runtime_tick(_cyc_08000A86);
    /* 08000A88  08000a88 T movs r3,#0x0 */
    g_cpu.R[15] = 0x08000A88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A88 = 1u;
    _cyc_08000A88 = 1u;
    uint32_t _r_08000A88;
    _r_08000A88 = 0x00000000u;
    arm_set_nzc_logic(_r_08000A88, cpsr_c());
    g_cpu.R[3] = _r_08000A88;
    g_cpu.R[15] = 0x08000A8Au;
    runtime_tick(_cyc_08000A88);
    /* 08000A8A  08000a8a T ldr r0,[r15,#0x34] */
    g_cpu.R[15] = 0x08000A8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A8A = 1u;
    _cyc_08000A8A = 2u;
    uint32_t _base_08000A8A = 0x08000A8Eu & ~3u;
    uint32_t _off_08000A8A;
    _off_08000A8A = 0x00000034u;
    uint32_t _ea_08000A8A = _base_08000A8A + _off_08000A8A;
    uint32_t _post_08000A8A = _base_08000A8A + _off_08000A8A;
    _cyc_08000A8A += runtime_mem_cycles(_ea_08000A8A, 4u, 0u);
    uint32_t _v_08000A8A;
    { uint32_t _w = bus_read_u32(_ea_08000A8A & ~3u); uint32_t _rot = (_ea_08000A8A & 3u) * 8u; _v_08000A8A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08000A8A;
    g_cpu.R[15] = 0x08000A8Cu;
    runtime_tick(_cyc_08000A8A);
    /* 08000A8C  08000a8c T ldrb r1,[r0] */
    g_cpu.R[15] = 0x08000A8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A8C = 1u;
    _cyc_08000A8C = 2u;
    uint32_t _base_08000A8C = g_cpu.R[0];
    uint32_t _off_08000A8C;
    _off_08000A8C = 0x00000000u;
    uint32_t _ea_08000A8C = _base_08000A8C + _off_08000A8C;
    uint32_t _post_08000A8C = _base_08000A8C + _off_08000A8C;
    _cyc_08000A8C += runtime_mem_cycles(_ea_08000A8C, 1u, 0u);
    uint32_t _v_08000A8C;
    _v_08000A8C = bus_read_u8(_ea_08000A8C);
    g_cpu.R[1] = _v_08000A8C;
    g_cpu.R[15] = 0x08000A8Eu;
    runtime_tick(_cyc_08000A8C);
    /* 08000A8E  08000a8e T adds r5,r2,#0x0 */
    g_cpu.R[15] = 0x08000A8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A8E = 1u;
    _cyc_08000A8E = 1u;
    uint32_t _rn_08000A8E = g_cpu.R[2];
    uint32_t _r_08000A8E;
    _r_08000A8E = _rn_08000A8E + 0x00000000u;
    arm_set_nzcv_add(_rn_08000A8E, 0x00000000u, _r_08000A8E);
    g_cpu.R[5] = _r_08000A8E;
    g_cpu.R[15] = 0x08000A90u;
    runtime_tick(_cyc_08000A8E);
    /* 08000A90  08000a90 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x08000A90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A90 = 1u;
    _cyc_08000A90 = 1u;
    uint32_t _rn_08000A90 = g_cpu.R[0];
    uint32_t _r_08000A90;
    _r_08000A90 = _rn_08000A90 + 0x00000000u;
    arm_set_nzcv_add(_rn_08000A90, 0x00000000u, _r_08000A90);
    g_cpu.R[2] = _r_08000A90;
    g_cpu.R[15] = 0x08000A92u;
    runtime_tick(_cyc_08000A90);
    /* 08000A92  08000a92 T cmps r1,#0xff */
    g_cpu.R[15] = 0x08000A92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A92 = 1u;
    _cyc_08000A92 = 1u;
    uint32_t _rn_08000A92 = g_cpu.R[1];
    uint32_t _r_08000A92;
    _r_08000A92 = _rn_08000A92 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08000A92, 0x000000FFu, _r_08000A92);
    g_cpu.R[15] = 0x08000A94u;
    runtime_tick(_cyc_08000A92);
    /* 08000A94  08000a94 T beq 0x08000aac */
    g_cpu.R[15] = 0x08000A94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A94 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08000A94 = 3u;
        g_cpu.R[15] = 0x08000AACu;
        runtime_tick(_cyc_08000A94);
        runtime_dispatch(0x08000AACu);
        return;
    }
    g_cpu.R[15] = 0x08000A96u;
    runtime_tick(_cyc_08000A94);
    /* 08000A96  08000a96 T adds r1,r2,#0x0 */
    g_cpu.R[15] = 0x08000A96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000A96 = 1u;
    _cyc_08000A96 = 1u;
    uint32_t _rn_08000A96 = g_cpu.R[2];
    uint32_t _r_08000A96;
    _r_08000A96 = _rn_08000A96 + 0x00000000u;
    arm_set_nzcv_add(_rn_08000A96, 0x00000000u, _r_08000A96);
    g_cpu.R[1] = _r_08000A96;
    g_cpu.R[15] = 0x08000A98u;
    runtime_tick(_cyc_08000A96);
    /* fall-through to 0x08000A98 */
    g_cpu.R[15] = 0x08000A98u;
    runtime_dispatch(0x08000A98u);
    return;
}
