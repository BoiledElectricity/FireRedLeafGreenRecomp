// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080057E8 mode=thumb end=0x08005804
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

OVL_EXPORT void func_080057E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080057E8u);
    /* 080057E8  080057e8 T cmps r1,#0x0 */
    g_cpu.R[15] = 0x080057E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057E8 = 1u;
    _cyc_080057E8 = 1u;
    uint32_t _rn_080057E8 = g_cpu.R[1];
    uint32_t _r_080057E8;
    _r_080057E8 = _rn_080057E8 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080057E8, 0x00000000u, _r_080057E8);
    g_cpu.R[15] = 0x080057EAu;
    runtime_tick(_cyc_080057E8);
    /* 080057EA  080057ea T beq 0x08005828 */
    g_cpu.R[15] = 0x080057EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057EA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080057EA = 3u;
        g_cpu.R[15] = 0x08005828u;
        runtime_tick(_cyc_080057EA);
        runtime_dispatch(0x08005828u);
        return;
    }
    g_cpu.R[15] = 0x080057ECu;
    runtime_tick(_cyc_080057EA);
    /* 080057EC  080057ec T ldrb r0,[r6,#0x1d] */
    g_cpu.R[15] = 0x080057ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057EC = 1u;
    _cyc_080057EC = 2u;
    uint32_t _base_080057EC = g_cpu.R[6];
    uint32_t _off_080057EC;
    _off_080057EC = 0x0000001Du;
    uint32_t _ea_080057EC = _base_080057EC + _off_080057EC;
    uint32_t _post_080057EC = _base_080057EC + _off_080057EC;
    _cyc_080057EC += runtime_mem_cycles(_ea_080057EC, 1u, 0u);
    uint32_t _v_080057EC;
    _v_080057EC = bus_read_u8(_ea_080057EC);
    g_cpu.R[0] = _v_080057EC;
    g_cpu.R[15] = 0x080057EEu;
    runtime_tick(_cyc_080057EC);
    /* 080057EE  080057ee T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080057EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057EE = 1u;
    _cyc_080057EE = 1u;
    uint32_t _rn_080057EE = g_cpu.R[0];
    uint32_t _r_080057EE;
    _r_080057EE = _rn_080057EE - 0x00000000u;
    arm_set_nzcv_sub(_rn_080057EE, 0x00000000u, _r_080057EE);
    g_cpu.R[15] = 0x080057F0u;
    runtime_tick(_cyc_080057EE);
    /* 080057F0  080057f0 T beq 0x08005828 */
    g_cpu.R[15] = 0x080057F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057F0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080057F0 = 3u;
        g_cpu.R[15] = 0x08005828u;
        runtime_tick(_cyc_080057F0);
        runtime_dispatch(0x08005828u);
        return;
    }
    g_cpu.R[15] = 0x080057F2u;
    runtime_tick(_cyc_080057F0);
    /* 080057F2  080057f2 T subs r0,r1,#0x1 */
    g_cpu.R[15] = 0x080057F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057F2 = 1u;
    _cyc_080057F2 = 1u;
    uint32_t _rn_080057F2 = g_cpu.R[1];
    uint32_t _r_080057F2;
    _r_080057F2 = _rn_080057F2 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080057F2, 0x00000001u, _r_080057F2);
    g_cpu.R[0] = _r_080057F2;
    g_cpu.R[15] = 0x080057F4u;
    runtime_tick(_cyc_080057F2);
    /* 080057F4  080057f4 T strb r0,[r6,#0x1e] */
    g_cpu.R[15] = 0x080057F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057F4 = 1u;
    _cyc_080057F4 = 1u;
    uint32_t _base_080057F4 = g_cpu.R[6];
    uint32_t _off_080057F4;
    _off_080057F4 = 0x0000001Eu;
    uint32_t _ea_080057F4 = _base_080057F4 + _off_080057F4;
    uint32_t _post_080057F4 = _base_080057F4 + _off_080057F4;
    _cyc_080057F4 += runtime_mem_cycles(_ea_080057F4, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080057F4u, _ea_080057F4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080057F4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080057F6u;
    runtime_tick(_cyc_080057F4);
    /* 080057F6  080057f6 T ldr r0,[r15,#0x2c] */
    g_cpu.R[15] = 0x080057F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057F6 = 1u;
    _cyc_080057F6 = 2u;
    uint32_t _base_080057F6 = 0x080057FAu & ~3u;
    uint32_t _off_080057F6;
    _off_080057F6 = 0x0000002Cu;
    uint32_t _ea_080057F6 = _base_080057F6 + _off_080057F6;
    uint32_t _post_080057F6 = _base_080057F6 + _off_080057F6;
    _cyc_080057F6 += runtime_mem_cycles(_ea_080057F6, 4u, 0u);
    uint32_t _v_080057F6;
    { uint32_t _w = bus_read_u32(_ea_080057F6 & ~3u); uint32_t _rot = (_ea_080057F6 & 3u) * 8u; _v_080057F6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080057F6;
    g_cpu.R[15] = 0x080057F8u;
    runtime_tick(_cyc_080057F6);
    /* 080057F8  080057f8 T ldrb r1,[r0] */
    g_cpu.R[15] = 0x080057F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057F8 = 1u;
    _cyc_080057F8 = 2u;
    uint32_t _base_080057F8 = g_cpu.R[0];
    uint32_t _off_080057F8;
    _off_080057F8 = 0x00000000u;
    uint32_t _ea_080057F8 = _base_080057F8 + _off_080057F8;
    uint32_t _post_080057F8 = _base_080057F8 + _off_080057F8;
    _cyc_080057F8 += runtime_mem_cycles(_ea_080057F8, 1u, 0u);
    uint32_t _v_080057F8;
    _v_080057F8 = bus_read_u8(_ea_080057F8);
    g_cpu.R[1] = _v_080057F8;
    g_cpu.R[15] = 0x080057FAu;
    runtime_tick(_cyc_080057F8);
    /* 080057FA  080057fa T movs r0,#0x1 */
    g_cpu.R[15] = 0x080057FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057FA = 1u;
    _cyc_080057FA = 1u;
    uint32_t _r_080057FA;
    _r_080057FA = 0x00000001u;
    arm_set_nzc_logic(_r_080057FA, cpsr_c());
    g_cpu.R[0] = _r_080057FA;
    g_cpu.R[15] = 0x080057FCu;
    runtime_tick(_cyc_080057FA);
    /* 080057FC  080057fc T ands r0,r0,r1 */
    g_cpu.R[15] = 0x080057FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057FC = 1u;
    _cyc_080057FC = 1u;
    uint32_t _rm_080057FC = g_cpu.R[1];
    uint32_t _op2_080057FC;
    uint32_t _co_080057FC;
    _op2_080057FC = _rm_080057FC;
    _co_080057FC = cpsr_c();
    uint32_t _rn_080057FC = g_cpu.R[0];
    uint32_t _r_080057FC;
    _r_080057FC = _rn_080057FC & _op2_080057FC;
    arm_set_nzc_logic(_r_080057FC, _co_080057FC);
    g_cpu.R[0] = _r_080057FC;
    g_cpu.R[15] = 0x080057FEu;
    runtime_tick(_cyc_080057FC);
    /* 080057FE  080057fe T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080057FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057FE = 1u;
    _cyc_080057FE = 1u;
    uint32_t _rn_080057FE = g_cpu.R[0];
    uint32_t _r_080057FE;
    _r_080057FE = _rn_080057FE - 0x00000000u;
    arm_set_nzcv_sub(_rn_080057FE, 0x00000000u, _r_080057FE);
    g_cpu.R[15] = 0x08005800u;
    runtime_tick(_cyc_080057FE);
    /* 08005800  08005800 T bne 0x08005804 */
    g_cpu.R[15] = 0x08005800u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005800 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08005800 = 3u;
        g_cpu.R[15] = 0x08005804u;
        runtime_tick(_cyc_08005800);
        runtime_dispatch(0x08005804u);
        return;
    }
    g_cpu.R[15] = 0x08005802u;
    runtime_tick(_cyc_08005800);
    /* 08005802  08005802 T b 0x08005b30 */
    g_cpu.R[15] = 0x08005802u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005802 = 1u;
    _cyc_08005802 = 3u;
    g_cpu.R[15] = 0x08005B30u;
    runtime_tick(_cyc_08005802);
    runtime_dispatch(0x08005B30u);
    return;
    g_cpu.R[15] = 0x08005804u;
    runtime_tick(_cyc_08005802);
    /* fall-through to 0x08005804 */
    g_cpu.R[15] = 0x08005804u;
    runtime_dispatch(0x08005804u);
    return;
}
