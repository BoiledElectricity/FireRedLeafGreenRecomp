// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x081E5E96 mode=thumb end=0x081E5EAC
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

OVL_EXPORT void func_081E5E96(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081E5E96u);
    /* 081E5E96  081e5e96 T ldm r3!,{r0} */
    g_cpu.R[15] = 0x081E5E96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5E96 = 1u;
    _cyc_081E5E96 = 2u;
    uint32_t _b_081E5E96 = g_cpu.R[3];
    uint32_t _a_081E5E96 = _b_081E5E96;
    uint32_t _fb_081E5E96 = _b_081E5E96 + 4u;
    _cyc_081E5E96 += runtime_mem_cycles(_a_081E5E96 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_081E5E96 & ~3u);
    _a_081E5E96 += 4u;
    g_cpu.R[3] = _fb_081E5E96;
    g_cpu.R[15] = 0x081E5E98u;
    runtime_tick(_cyc_081E5E96);
    /* 081E5E98  081e5e98 T stm r1!,{r0} */
    g_cpu.R[15] = 0x081E5E98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5E98 = 1u;
    _cyc_081E5E98 = 1u;
    uint32_t _b_081E5E98 = g_cpu.R[1];
    uint32_t _a_081E5E98 = _b_081E5E98;
    uint32_t _fb_081E5E98 = _b_081E5E98 + 4u;
    _cyc_081E5E98 += runtime_mem_cycles(_a_081E5E98 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081E5E98u, _a_081E5E98 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_081E5E98 & ~3u, g_cpu.R[0]);
    _a_081E5E98 += 4u;
    g_cpu.R[1] = _fb_081E5E98;
    g_cpu.R[15] = 0x081E5E9Au;
    runtime_tick(_cyc_081E5E98);
    /* 081E5E9A  081e5e9a T ldm r3!,{r0} */
    g_cpu.R[15] = 0x081E5E9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5E9A = 1u;
    _cyc_081E5E9A = 2u;
    uint32_t _b_081E5E9A = g_cpu.R[3];
    uint32_t _a_081E5E9A = _b_081E5E9A;
    uint32_t _fb_081E5E9A = _b_081E5E9A + 4u;
    _cyc_081E5E9A += runtime_mem_cycles(_a_081E5E9A & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_081E5E9A & ~3u);
    _a_081E5E9A += 4u;
    g_cpu.R[3] = _fb_081E5E9A;
    g_cpu.R[15] = 0x081E5E9Cu;
    runtime_tick(_cyc_081E5E9A);
    /* 081E5E9C  081e5e9c T stm r1!,{r0} */
    g_cpu.R[15] = 0x081E5E9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5E9C = 1u;
    _cyc_081E5E9C = 1u;
    uint32_t _b_081E5E9C = g_cpu.R[1];
    uint32_t _a_081E5E9C = _b_081E5E9C;
    uint32_t _fb_081E5E9C = _b_081E5E9C + 4u;
    _cyc_081E5E9C += runtime_mem_cycles(_a_081E5E9C & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081E5E9Cu, _a_081E5E9C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_081E5E9C & ~3u, g_cpu.R[0]);
    _a_081E5E9C += 4u;
    g_cpu.R[1] = _fb_081E5E9C;
    g_cpu.R[15] = 0x081E5E9Eu;
    runtime_tick(_cyc_081E5E9C);
    /* 081E5E9E  081e5e9e T ldm r3!,{r0} */
    g_cpu.R[15] = 0x081E5E9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5E9E = 1u;
    _cyc_081E5E9E = 2u;
    uint32_t _b_081E5E9E = g_cpu.R[3];
    uint32_t _a_081E5E9E = _b_081E5E9E;
    uint32_t _fb_081E5E9E = _b_081E5E9E + 4u;
    _cyc_081E5E9E += runtime_mem_cycles(_a_081E5E9E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_081E5E9E & ~3u);
    _a_081E5E9E += 4u;
    g_cpu.R[3] = _fb_081E5E9E;
    g_cpu.R[15] = 0x081E5EA0u;
    runtime_tick(_cyc_081E5E9E);
    /* 081E5EA0  081e5ea0 T stm r1!,{r0} */
    g_cpu.R[15] = 0x081E5EA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EA0 = 1u;
    _cyc_081E5EA0 = 1u;
    uint32_t _b_081E5EA0 = g_cpu.R[1];
    uint32_t _a_081E5EA0 = _b_081E5EA0;
    uint32_t _fb_081E5EA0 = _b_081E5EA0 + 4u;
    _cyc_081E5EA0 += runtime_mem_cycles(_a_081E5EA0 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081E5EA0u, _a_081E5EA0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_081E5EA0 & ~3u, g_cpu.R[0]);
    _a_081E5EA0 += 4u;
    g_cpu.R[1] = _fb_081E5EA0;
    g_cpu.R[15] = 0x081E5EA2u;
    runtime_tick(_cyc_081E5EA0);
    /* 081E5EA2  081e5ea2 T subs r2,r2,#0x10 */
    g_cpu.R[15] = 0x081E5EA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EA2 = 1u;
    _cyc_081E5EA2 = 1u;
    uint32_t _rn_081E5EA2 = g_cpu.R[2];
    uint32_t _r_081E5EA2;
    _r_081E5EA2 = _rn_081E5EA2 - 0x00000010u;
    arm_set_nzcv_sub(_rn_081E5EA2, 0x00000010u, _r_081E5EA2);
    g_cpu.R[2] = _r_081E5EA2;
    g_cpu.R[15] = 0x081E5EA4u;
    runtime_tick(_cyc_081E5EA2);
    /* 081E5EA4  081e5ea4 T cmps r2,#0xf */
    g_cpu.R[15] = 0x081E5EA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EA4 = 1u;
    _cyc_081E5EA4 = 1u;
    uint32_t _rn_081E5EA4 = g_cpu.R[2];
    uint32_t _r_081E5EA4;
    _r_081E5EA4 = _rn_081E5EA4 - 0x0000000Fu;
    arm_set_nzcv_sub(_rn_081E5EA4, 0x0000000Fu, _r_081E5EA4);
    g_cpu.R[15] = 0x081E5EA6u;
    runtime_tick(_cyc_081E5EA4);
    /* 081E5EA6  081e5ea6 T bhi 0x081e5e92 */
    g_cpu.R[15] = 0x081E5EA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EA6 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_081E5EA6 = 3u;
        g_cpu.R[15] = 0x081E5E92u;
        runtime_tick(_cyc_081E5EA6);
        runtime_dispatch(0x081E5E92u);
        return;
    }
    g_cpu.R[15] = 0x081E5EA8u;
    runtime_tick(_cyc_081E5EA6);
    /* 081E5EA8  081e5ea8 T cmps r2,#0x3 */
    g_cpu.R[15] = 0x081E5EA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EA8 = 1u;
    _cyc_081E5EA8 = 1u;
    uint32_t _rn_081E5EA8 = g_cpu.R[2];
    uint32_t _r_081E5EA8;
    _r_081E5EA8 = _rn_081E5EA8 - 0x00000003u;
    arm_set_nzcv_sub(_rn_081E5EA8, 0x00000003u, _r_081E5EA8);
    g_cpu.R[15] = 0x081E5EAAu;
    runtime_tick(_cyc_081E5EA8);
    /* 081E5EAA  081e5eaa T bls 0x081e5eb6 */
    g_cpu.R[15] = 0x081E5EAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081E5EAA = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_081E5EAA = 3u;
        g_cpu.R[15] = 0x081E5EB6u;
        runtime_tick(_cyc_081E5EAA);
        runtime_dispatch(0x081E5EB6u);
        return;
    }
    g_cpu.R[15] = 0x081E5EACu;
    runtime_tick(_cyc_081E5EAA);
    /* fall-through to 0x081E5EAC */
    g_cpu.R[15] = 0x081E5EACu;
    runtime_dispatch(0x081E5EACu);
    return;
}
