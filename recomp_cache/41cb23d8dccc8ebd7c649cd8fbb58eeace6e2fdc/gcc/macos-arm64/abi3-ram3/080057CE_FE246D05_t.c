// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x080057CE mode=thumb end=0x080057E6
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

OVL_EXPORT void func_080057CE(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080057CEu);
    /* 080057CE  080057ce T ldrh r1,[r2,#0x2c] */
    g_cpu.R[15] = 0x080057CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057CE = 1u;
    _cyc_080057CE = 2u;
    uint32_t _base_080057CE = g_cpu.R[2];
    uint32_t _off_080057CE;
    _off_080057CE = 0x0000002Cu;
    uint32_t _ea_080057CE = _base_080057CE + _off_080057CE;
    uint32_t _post_080057CE = _base_080057CE + _off_080057CE;
    _cyc_080057CE += runtime_mem_cycles(_ea_080057CE, 2u, 0u);
    uint32_t _v_080057CE;
    { uint32_t _h = bus_read_u16(_ea_080057CE & ~1u); if (_ea_080057CE & 1u) _v_080057CE = ((_h >> 8) | (_h << 24)); else _v_080057CE = _h; }
    g_cpu.R[1] = _v_080057CE;
    g_cpu.R[15] = 0x080057D0u;
    runtime_tick(_cyc_080057CE);
    /* 080057D0  080057d0 T movs r0,#0x3 */
    g_cpu.R[15] = 0x080057D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057D0 = 1u;
    _cyc_080057D0 = 1u;
    uint32_t _r_080057D0;
    _r_080057D0 = 0x00000003u;
    arm_set_nzc_logic(_r_080057D0, cpsr_c());
    g_cpu.R[0] = _r_080057D0;
    g_cpu.R[15] = 0x080057D2u;
    runtime_tick(_cyc_080057D0);
    /* 080057D2  080057d2 T ands r0,r0,r1 */
    g_cpu.R[15] = 0x080057D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057D2 = 1u;
    _cyc_080057D2 = 1u;
    uint32_t _rm_080057D2 = g_cpu.R[1];
    uint32_t _op2_080057D2;
    uint32_t _co_080057D2;
    _op2_080057D2 = _rm_080057D2;
    _co_080057D2 = cpsr_c();
    uint32_t _rn_080057D2 = g_cpu.R[0];
    uint32_t _r_080057D2;
    _r_080057D2 = _rn_080057D2 & _op2_080057D2;
    arm_set_nzc_logic(_r_080057D2, _co_080057D2);
    g_cpu.R[0] = _r_080057D2;
    g_cpu.R[15] = 0x080057D4u;
    runtime_tick(_cyc_080057D2);
    /* 080057D4  080057d4 T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080057D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057D4 = 1u;
    _cyc_080057D4 = 1u;
    uint32_t _rn_080057D4 = g_cpu.R[0];
    uint32_t _r_080057D4;
    _r_080057D4 = _rn_080057D4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080057D4, 0x00000000u, _r_080057D4);
    g_cpu.R[15] = 0x080057D6u;
    runtime_tick(_cyc_080057D4);
    /* 080057D6  080057d6 T beq 0x080057e6 */
    g_cpu.R[15] = 0x080057D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057D6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080057D6 = 3u;
        g_cpu.R[15] = 0x080057E6u;
        runtime_tick(_cyc_080057D6);
        runtime_dispatch(0x080057E6u);
        return;
    }
    g_cpu.R[15] = 0x080057D8u;
    runtime_tick(_cyc_080057D6);
    /* 080057D8  080057d8 T ldrb r1,[r4] */
    g_cpu.R[15] = 0x080057D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057D8 = 1u;
    _cyc_080057D8 = 2u;
    uint32_t _base_080057D8 = g_cpu.R[4];
    uint32_t _off_080057D8;
    _off_080057D8 = 0x00000000u;
    uint32_t _ea_080057D8 = _base_080057D8 + _off_080057D8;
    uint32_t _post_080057D8 = _base_080057D8 + _off_080057D8;
    _cyc_080057D8 += runtime_mem_cycles(_ea_080057D8, 1u, 0u);
    uint32_t _v_080057D8;
    _v_080057D8 = bus_read_u8(_ea_080057D8);
    g_cpu.R[1] = _v_080057D8;
    g_cpu.R[15] = 0x080057DAu;
    runtime_tick(_cyc_080057D8);
    /* 080057DA  080057da T movs r0,#0x10 */
    g_cpu.R[15] = 0x080057DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057DA = 1u;
    _cyc_080057DA = 1u;
    uint32_t _r_080057DA;
    _r_080057DA = 0x00000010u;
    arm_set_nzc_logic(_r_080057DA, cpsr_c());
    g_cpu.R[0] = _r_080057DA;
    g_cpu.R[15] = 0x080057DCu;
    runtime_tick(_cyc_080057DA);
    /* 080057DC  080057dc T ands r0,r0,r1 */
    g_cpu.R[15] = 0x080057DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057DC = 1u;
    _cyc_080057DC = 1u;
    uint32_t _rm_080057DC = g_cpu.R[1];
    uint32_t _op2_080057DC;
    uint32_t _co_080057DC;
    _op2_080057DC = _rm_080057DC;
    _co_080057DC = cpsr_c();
    uint32_t _rn_080057DC = g_cpu.R[0];
    uint32_t _r_080057DC;
    _r_080057DC = _rn_080057DC & _op2_080057DC;
    arm_set_nzc_logic(_r_080057DC, _co_080057DC);
    g_cpu.R[0] = _r_080057DC;
    g_cpu.R[15] = 0x080057DEu;
    runtime_tick(_cyc_080057DC);
    /* 080057DE  080057de T cmps r0,#0x0 */
    g_cpu.R[15] = 0x080057DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057DE = 1u;
    _cyc_080057DE = 1u;
    uint32_t _rn_080057DE = g_cpu.R[0];
    uint32_t _r_080057DE;
    _r_080057DE = _rn_080057DE - 0x00000000u;
    arm_set_nzcv_sub(_rn_080057DE, 0x00000000u, _r_080057DE);
    g_cpu.R[15] = 0x080057E0u;
    runtime_tick(_cyc_080057DE);
    /* 080057E0  080057e0 T beq 0x080057e6 */
    g_cpu.R[15] = 0x080057E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057E0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080057E0 = 3u;
        g_cpu.R[15] = 0x080057E6u;
        runtime_tick(_cyc_080057E0);
        runtime_dispatch(0x080057E6u);
        return;
    }
    g_cpu.R[15] = 0x080057E2u;
    runtime_tick(_cyc_080057E0);
    /* 080057E2  080057e2 T movs r0,#0x0 */
    g_cpu.R[15] = 0x080057E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057E2 = 1u;
    _cyc_080057E2 = 1u;
    uint32_t _r_080057E2;
    _r_080057E2 = 0x00000000u;
    arm_set_nzc_logic(_r_080057E2, cpsr_c());
    g_cpu.R[0] = _r_080057E2;
    g_cpu.R[15] = 0x080057E4u;
    runtime_tick(_cyc_080057E2);
    /* 080057E4  080057e4 T strb r0,[r6,#0x1e] */
    g_cpu.R[15] = 0x080057E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080057E4 = 1u;
    _cyc_080057E4 = 1u;
    uint32_t _base_080057E4 = g_cpu.R[6];
    uint32_t _off_080057E4;
    _off_080057E4 = 0x0000001Eu;
    uint32_t _ea_080057E4 = _base_080057E4 + _off_080057E4;
    uint32_t _post_080057E4 = _base_080057E4 + _off_080057E4;
    _cyc_080057E4 += runtime_mem_cycles(_ea_080057E4, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080057E4u, _ea_080057E4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080057E4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080057E6u;
    runtime_tick(_cyc_080057E4);
    /* fall-through to 0x080057E6 */
    g_cpu.R[15] = 0x080057E6u;
    runtime_dispatch(0x080057E6u);
    return;
}
