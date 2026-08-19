// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08005C46 mode=thumb end=0x08005C54
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

OVL_EXPORT void func_08005C46(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08005C46u);
    /* 08005C46  08005c46 T adds r0,r0,#0x80 */
    g_cpu.R[15] = 0x08005C46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C46 = 1u;
    _cyc_08005C46 = 1u;
    uint32_t _rn_08005C46 = g_cpu.R[0];
    uint32_t _r_08005C46;
    _r_08005C46 = _rn_08005C46 + 0x00000080u;
    arm_set_nzcv_add(_rn_08005C46, 0x00000080u, _r_08005C46);
    g_cpu.R[0] = _r_08005C46;
    g_cpu.R[15] = 0x08005C48u;
    runtime_tick(_cyc_08005C46);
    /* 08005C48  08005c48 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x08005C48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C48 = 1u;
    _cyc_08005C48 = 2u;
    uint32_t _base_08005C48 = g_cpu.R[0];
    uint32_t _off_08005C48;
    _off_08005C48 = 0x00000000u;
    uint32_t _ea_08005C48 = _base_08005C48 + _off_08005C48;
    uint32_t _post_08005C48 = _base_08005C48 + _off_08005C48;
    _cyc_08005C48 += runtime_mem_cycles(_ea_08005C48, 1u, 0u);
    uint32_t _v_08005C48;
    _v_08005C48 = bus_read_u8(_ea_08005C48);
    g_cpu.R[0] = _v_08005C48;
    g_cpu.R[15] = 0x08005C4Au;
    runtime_tick(_cyc_08005C48);
    /* 08005C4A  08005c4a T ldrb r1,[r6,#0x8] */
    g_cpu.R[15] = 0x08005C4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C4A = 1u;
    _cyc_08005C4A = 2u;
    uint32_t _base_08005C4A = g_cpu.R[6];
    uint32_t _off_08005C4A;
    _off_08005C4A = 0x00000008u;
    uint32_t _ea_08005C4A = _base_08005C4A + _off_08005C4A;
    uint32_t _post_08005C4A = _base_08005C4A + _off_08005C4A;
    _cyc_08005C4A += runtime_mem_cycles(_ea_08005C4A, 1u, 0u);
    uint32_t _v_08005C4A;
    _v_08005C4A = bus_read_u8(_ea_08005C4A);
    g_cpu.R[1] = _v_08005C4A;
    g_cpu.R[15] = 0x08005C4Cu;
    runtime_tick(_cyc_08005C4A);
    /* 08005C4C  08005c4c T adds r0,r0,r1 */
    g_cpu.R[15] = 0x08005C4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C4C = 1u;
    _cyc_08005C4C = 1u;
    uint32_t _rm_08005C4C = g_cpu.R[1];
    uint32_t _op2_08005C4C;
    uint32_t _co_08005C4C;
    _op2_08005C4C = _rm_08005C4C;
    _co_08005C4C = cpsr_c();
    uint32_t _rn_08005C4C = g_cpu.R[0];
    uint32_t _r_08005C4C;
    _r_08005C4C = _rn_08005C4C + _op2_08005C4C;
    arm_set_nzcv_add(_rn_08005C4C, _op2_08005C4C, _r_08005C4C);
    g_cpu.R[0] = _r_08005C4C;
    g_cpu.R[15] = 0x08005C4Eu;
    runtime_tick(_cyc_08005C4C);
    /* 08005C4E  08005c4e T strb r0,[r6,#0x8] */
    g_cpu.R[15] = 0x08005C4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C4E = 1u;
    _cyc_08005C4E = 1u;
    uint32_t _base_08005C4E = g_cpu.R[6];
    uint32_t _off_08005C4E;
    _off_08005C4E = 0x00000008u;
    uint32_t _ea_08005C4E = _base_08005C4E + _off_08005C4E;
    uint32_t _post_08005C4E = _base_08005C4E + _off_08005C4E;
    _cyc_08005C4E += runtime_mem_cycles(_ea_08005C4E, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08005C4Eu, _ea_08005C4E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08005C4E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08005C50u;
    runtime_tick(_cyc_08005C4E);
    /* 08005C50  08005c50 T movs r0,#0x0 */
    g_cpu.R[15] = 0x08005C50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C50 = 1u;
    _cyc_08005C50 = 1u;
    uint32_t _r_08005C50;
    _r_08005C50 = 0x00000000u;
    arm_set_nzc_logic(_r_08005C50, cpsr_c());
    g_cpu.R[0] = _r_08005C50;
    g_cpu.R[15] = 0x08005C52u;
    runtime_tick(_cyc_08005C50);
    /* 08005C52  08005c52 T b 0x08005d6a */
    g_cpu.R[15] = 0x08005C52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08005C52 = 1u;
    _cyc_08005C52 = 3u;
    g_cpu.R[15] = 0x08005D6Au;
    runtime_tick(_cyc_08005C52);
    runtime_dispatch(0x08005D6Au);
    return;
    g_cpu.R[15] = 0x08005C54u;
    runtime_tick(_cyc_08005C52);
    /* fall-through to 0x08005C54 */
    g_cpu.R[15] = 0x08005C54u;
    runtime_dispatch(0x08005C54u);
    return;
}
