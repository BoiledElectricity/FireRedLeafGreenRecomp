// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08002F9A mode=thumb end=0x08002FA2
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

OVL_EXPORT void func_08002F9A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002F9Au);
    /* 08002F9A  08002f9a T beq 0x08002fac */
    g_cpu.R[15] = 0x08002F9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F9A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08002F9A = 3u;
        g_cpu.R[15] = 0x08002FACu;
        runtime_tick(_cyc_08002F9A);
        runtime_dispatch(0x08002FACu);
        return;
    }
    g_cpu.R[15] = 0x08002F9Cu;
    runtime_tick(_cyc_08002F9A);
    /* 08002F9C  08002f9c T ldrb r0,[r2] */
    g_cpu.R[15] = 0x08002F9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F9C = 1u;
    _cyc_08002F9C = 2u;
    uint32_t _base_08002F9C = g_cpu.R[2];
    uint32_t _off_08002F9C;
    _off_08002F9C = 0x00000000u;
    uint32_t _ea_08002F9C = _base_08002F9C + _off_08002F9C;
    uint32_t _post_08002F9C = _base_08002F9C + _off_08002F9C;
    _cyc_08002F9C += runtime_mem_cycles(_ea_08002F9C, 1u, 0u);
    uint32_t _v_08002F9C;
    _v_08002F9C = bus_read_u8(_ea_08002F9C);
    g_cpu.R[0] = _v_08002F9C;
    g_cpu.R[15] = 0x08002F9Eu;
    runtime_tick(_cyc_08002F9C);
    /* 08002F9E  08002f9e T adds r2,r2,#0x2 */
    g_cpu.R[15] = 0x08002F9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002F9E = 1u;
    _cyc_08002F9E = 1u;
    uint32_t _rn_08002F9E = g_cpu.R[2];
    uint32_t _r_08002F9E;
    _r_08002F9E = _rn_08002F9E + 0x00000002u;
    arm_set_nzcv_add(_rn_08002F9E, 0x00000002u, _r_08002F9E);
    g_cpu.R[2] = _r_08002F9E;
    g_cpu.R[15] = 0x08002FA0u;
    runtime_tick(_cyc_08002F9E);
    /* 08002FA0  08002fa0 T b 0x08002fb0 */
    g_cpu.R[15] = 0x08002FA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002FA0 = 1u;
    _cyc_08002FA0 = 3u;
    g_cpu.R[15] = 0x08002FB0u;
    runtime_tick(_cyc_08002FA0);
    runtime_dispatch(0x08002FB0u);
    return;
    g_cpu.R[15] = 0x08002FA2u;
    runtime_tick(_cyc_08002FA0);
    /* fall-through to 0x08002FA2 */
    g_cpu.R[15] = 0x08002FA2u;
    runtime_dispatch(0x08002FA2u);
    return;
}
