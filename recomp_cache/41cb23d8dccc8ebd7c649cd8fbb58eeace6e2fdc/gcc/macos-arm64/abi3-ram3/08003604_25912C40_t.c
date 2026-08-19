// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003604 mode=thumb end=0x0800360C
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

OVL_EXPORT void func_08003604(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003604u);
    /* 08003604  08003604 T mov r10,r5 */
    g_cpu.R[15] = 0x08003604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003604 = 1u;
    _cyc_08003604 = 1u;
    uint32_t _rm_08003604 = g_cpu.R[5];
    uint32_t _op2_08003604;
    uint32_t _co_08003604;
    _op2_08003604 = _rm_08003604;
    _co_08003604 = cpsr_c();
    uint32_t _r_08003604;
    _r_08003604 = _op2_08003604;
    g_cpu.R[10] = _r_08003604;
    g_cpu.R[15] = 0x08003606u;
    runtime_tick(_cyc_08003604);
    /* 08003606  08003606 T ldm r13!,{r4,r5,r6,r7} */
    g_cpu.R[15] = 0x08003606u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003606 = 1u;
    _cyc_08003606 = 2u;
    uint32_t _b_08003606 = g_cpu.R[13];
    uint32_t _a_08003606 = _b_08003606;
    uint32_t _fb_08003606 = _b_08003606 + 16u;
    _cyc_08003606 += runtime_mem_cycles(_a_08003606 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08003606 & ~3u);
    _a_08003606 += 4u;
    _cyc_08003606 += runtime_mem_cycles(_a_08003606 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08003606 & ~3u);
    _a_08003606 += 4u;
    _cyc_08003606 += runtime_mem_cycles(_a_08003606 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08003606 & ~3u);
    _a_08003606 += 4u;
    _cyc_08003606 += runtime_mem_cycles(_a_08003606 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08003606 & ~3u);
    _a_08003606 += 4u;
    g_cpu.R[13] = _fb_08003606;
    g_cpu.R[15] = 0x08003608u;
    runtime_tick(_cyc_08003606);
    /* 08003608  08003608 T ldm r13!,{r0} */
    g_cpu.R[15] = 0x08003608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003608 = 1u;
    _cyc_08003608 = 2u;
    uint32_t _b_08003608 = g_cpu.R[13];
    uint32_t _a_08003608 = _b_08003608;
    uint32_t _fb_08003608 = _b_08003608 + 4u;
    _cyc_08003608 += runtime_mem_cycles(_a_08003608 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08003608 & ~3u);
    _a_08003608 += 4u;
    g_cpu.R[13] = _fb_08003608;
    g_cpu.R[15] = 0x0800360Au;
    runtime_tick(_cyc_08003608);
    /* 0800360A  0800360a T bx r0 */
    g_cpu.R[15] = 0x0800360Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800360A = 1u;
    _cyc_0800360A = 3u;
    uint32_t _bxt_0800360A = g_cpu.R[0];
    g_cpu.R[15] = _bxt_0800360A & ~1u;
    runtime_tick(_cyc_0800360A);
    if (_bxt_0800360A & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0800360A);
    return;
    g_cpu.R[15] = 0x0800360Cu;
    runtime_tick(_cyc_0800360A);
    /* fall-through to 0x0800360C */
    g_cpu.R[15] = 0x0800360Cu;
    runtime_dispatch(0x0800360Cu);
    return;
}
