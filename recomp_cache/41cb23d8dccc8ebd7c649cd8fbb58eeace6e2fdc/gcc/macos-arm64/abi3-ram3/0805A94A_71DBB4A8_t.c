// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0805A94A mode=thumb end=0x0805A962
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

OVL_EXPORT void func_0805A94A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805A94Au);
    /* 0805A94A  0805a94a T mov r7,r8 */
    g_cpu.R[15] = 0x0805A94Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A94A = 1u;
    _cyc_0805A94A = 1u;
    uint32_t _rm_0805A94A = g_cpu.R[8];
    uint32_t _op2_0805A94A;
    uint32_t _co_0805A94A;
    _op2_0805A94A = _rm_0805A94A;
    _co_0805A94A = cpsr_c();
    uint32_t _r_0805A94A;
    _r_0805A94A = _op2_0805A94A;
    g_cpu.R[7] = _r_0805A94A;
    g_cpu.R[15] = 0x0805A94Cu;
    runtime_tick(_cyc_0805A94A);
    /* 0805A94C  0805a94c T stm r13!,{r7} */
    g_cpu.R[15] = 0x0805A94Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A94C = 1u;
    _cyc_0805A94C = 1u;
    uint32_t _b_0805A94C = g_cpu.R[13];
    uint32_t _a_0805A94C = _b_0805A94C - 4u;
    uint32_t _fb_0805A94C = _b_0805A94C - 4u;
    _cyc_0805A94C += runtime_mem_cycles(_a_0805A94C & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805A94Cu, _a_0805A94C & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_0805A94C & ~3u, g_cpu.R[7]);
    _a_0805A94C += 4u;
    g_cpu.R[13] = _fb_0805A94C;
    g_cpu.R[15] = 0x0805A94Eu;
    runtime_tick(_cyc_0805A94C);
    /* 0805A94E  0805a94e T adds r5,r0,#0x0 */
    g_cpu.R[15] = 0x0805A94Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A94E = 1u;
    _cyc_0805A94E = 1u;
    uint32_t _rn_0805A94E = g_cpu.R[0];
    uint32_t _r_0805A94E;
    _r_0805A94E = _rn_0805A94E + 0x00000000u;
    arm_set_nzcv_add(_rn_0805A94E, 0x00000000u, _r_0805A94E);
    g_cpu.R[5] = _r_0805A94E;
    g_cpu.R[15] = 0x0805A950u;
    runtime_tick(_cyc_0805A94E);
    /* 0805A950  0805a950 T adds r6,r2,#0x0 */
    g_cpu.R[15] = 0x0805A950u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A950 = 1u;
    _cyc_0805A950 = 1u;
    uint32_t _rn_0805A950 = g_cpu.R[2];
    uint32_t _r_0805A950;
    _r_0805A950 = _rn_0805A950 + 0x00000000u;
    arm_set_nzcv_add(_rn_0805A950, 0x00000000u, _r_0805A950);
    g_cpu.R[6] = _r_0805A950;
    g_cpu.R[15] = 0x0805A952u;
    runtime_tick(_cyc_0805A950);
    /* 0805A952  0805a952 T adds r7,r3,#0x0 */
    g_cpu.R[15] = 0x0805A952u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A952 = 1u;
    _cyc_0805A952 = 1u;
    uint32_t _rn_0805A952 = g_cpu.R[3];
    uint32_t _r_0805A952;
    _r_0805A952 = _rn_0805A952 + 0x00000000u;
    arm_set_nzcv_add(_rn_0805A952, 0x00000000u, _r_0805A952);
    g_cpu.R[7] = _r_0805A952;
    g_cpu.R[15] = 0x0805A954u;
    runtime_tick(_cyc_0805A952);
    /* 0805A954  0805a954 T movs r1,r1,lsl #16 */
    g_cpu.R[15] = 0x0805A954u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A954 = 1u;
    _cyc_0805A954 = 1u;
    uint32_t _rm_0805A954 = g_cpu.R[1];
    uint32_t _op2_0805A954;
    uint32_t _co_0805A954;
    _op2_0805A954 = _rm_0805A954 << 16;
    _co_0805A954 = (_rm_0805A954 >> 16) & 1u;
    uint32_t _r_0805A954;
    _r_0805A954 = _op2_0805A954;
    arm_set_nzc_logic(_r_0805A954, _co_0805A954);
    g_cpu.R[1] = _r_0805A954;
    g_cpu.R[15] = 0x0805A956u;
    runtime_tick(_cyc_0805A954);
    /* 0805A956  0805a956 T movs r1,r1,lsr #16 */
    g_cpu.R[15] = 0x0805A956u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A956 = 1u;
    _cyc_0805A956 = 1u;
    uint32_t _rm_0805A956 = g_cpu.R[1];
    uint32_t _op2_0805A956;
    uint32_t _co_0805A956;
    _op2_0805A956 = _rm_0805A956 >> 16;
    _co_0805A956 = (_rm_0805A956 >> 15) & 1u;
    uint32_t _r_0805A956;
    _r_0805A956 = _op2_0805A956;
    arm_set_nzc_logic(_r_0805A956, _co_0805A956);
    g_cpu.R[1] = _r_0805A956;
    g_cpu.R[15] = 0x0805A958u;
    runtime_tick(_cyc_0805A956);
    /* 0805A958  0805a958 T mov r8,r1 */
    g_cpu.R[15] = 0x0805A958u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A958 = 1u;
    _cyc_0805A958 = 1u;
    uint32_t _rm_0805A958 = g_cpu.R[1];
    uint32_t _op2_0805A958;
    uint32_t _co_0805A958;
    _op2_0805A958 = _rm_0805A958;
    _co_0805A958 = cpsr_c();
    uint32_t _r_0805A958;
    _r_0805A958 = _op2_0805A958;
    g_cpu.R[8] = _r_0805A958;
    g_cpu.R[15] = 0x0805A95Au;
    runtime_tick(_cyc_0805A958);
    /* 0805A95A  0805a95a T adds r0,r6,#0x0 */
    g_cpu.R[15] = 0x0805A95Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A95A = 1u;
    _cyc_0805A95A = 1u;
    uint32_t _rn_0805A95A = g_cpu.R[6];
    uint32_t _r_0805A95A;
    _r_0805A95A = _rn_0805A95A + 0x00000000u;
    arm_set_nzcv_add(_rn_0805A95A, 0x00000000u, _r_0805A95A);
    g_cpu.R[0] = _r_0805A95A;
    g_cpu.R[15] = 0x0805A95Cu;
    runtime_tick(_cyc_0805A95A);
    /* 0805A95C  0805a95c T adds r1,r7,#0x0 */
    g_cpu.R[15] = 0x0805A95Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A95C = 1u;
    _cyc_0805A95C = 1u;
    uint32_t _rn_0805A95C = g_cpu.R[7];
    uint32_t _r_0805A95C;
    _r_0805A95C = _rn_0805A95C + 0x00000000u;
    arm_set_nzcv_add(_rn_0805A95C, 0x00000000u, _r_0805A95C);
    g_cpu.R[1] = _r_0805A95C;
    g_cpu.R[15] = 0x0805A95Eu;
    runtime_tick(_cyc_0805A95C);
    /* 0805A95E  0805a95e T bl.hi 0x08058962 */
    g_cpu.R[15] = 0x0805A95Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A95E = 1u;
    _cyc_0805A95E = 1u;
    g_cpu.R[14] = 0x08058962u;
    g_cpu.R[15] = 0x0805A960u;
    runtime_tick(_cyc_0805A95E);
    /* 0805A960  0805a960 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805A960u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805A960 = 1u;
    _cyc_0805A960 = 3u;
    uint32_t _blt_0805A960 = (g_cpu.R[14] + 0x000004E6u) & ~1u;
    g_cpu.R[14] = 0x0805A963u;
    g_cpu.R[15] = _blt_0805A960;
    runtime_call_push_return(0x0805A962u);
    runtime_tick(_cyc_0805A960);
    _cyc_0805A960 = 0u;
    runtime_dispatch(_blt_0805A960);
    if (g_cpu.R[15] != 0x0805A962u) { runtime_call_cancel_return(0x0805A962u); return; }
    g_cpu.R[15] = 0x0805A962u;
    runtime_tick(_cyc_0805A960);
    /* fall-through to 0x0805A962 */
    g_cpu.R[15] = 0x0805A962u;
    runtime_dispatch(0x0805A962u);
    return;
}
