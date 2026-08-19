// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08003286 mode=thumb end=0x08003298
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

OVL_EXPORT void func_08003286(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08003286u);
    /* 08003286  08003286 T cmps r5,r7 */
    g_cpu.R[15] = 0x08003286u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003286 = 1u;
    _cyc_08003286 = 1u;
    uint32_t _rm_08003286 = g_cpu.R[7];
    uint32_t _op2_08003286;
    uint32_t _co_08003286;
    _op2_08003286 = _rm_08003286;
    _co_08003286 = cpsr_c();
    uint32_t _rn_08003286 = g_cpu.R[5];
    uint32_t _r_08003286;
    _r_08003286 = _rn_08003286 - _op2_08003286;
    arm_set_nzcv_sub(_rn_08003286, _op2_08003286, _r_08003286);
    g_cpu.R[15] = 0x08003288u;
    runtime_tick(_cyc_08003286);
    /* 08003288  08003288 T bge 0x080032f2 */
    g_cpu.R[15] = 0x08003288u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003288 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08003288 = 3u;
        g_cpu.R[15] = 0x080032F2u;
        runtime_tick(_cyc_08003288);
        runtime_dispatch(0x080032F2u);
        return;
    }
    g_cpu.R[15] = 0x0800328Au;
    runtime_tick(_cyc_08003288);
    /* 0800328A  0800328a T ldr r2,[r15,#0x10c] */
    g_cpu.R[15] = 0x0800328Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800328A = 1u;
    _cyc_0800328A = 2u;
    uint32_t _base_0800328A = 0x0800328Eu & ~3u;
    uint32_t _off_0800328A;
    _off_0800328A = 0x0000010Cu;
    uint32_t _ea_0800328A = _base_0800328A + _off_0800328A;
    uint32_t _post_0800328A = _base_0800328A + _off_0800328A;
    _cyc_0800328A += runtime_mem_cycles(_ea_0800328A, 4u, 0u);
    uint32_t _v_0800328A;
    { uint32_t _w = bus_read_u32(_ea_0800328A & ~3u); uint32_t _rot = (_ea_0800328A & 3u) * 8u; _v_0800328A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0800328A;
    g_cpu.R[15] = 0x0800328Cu;
    runtime_tick(_cyc_0800328A);
    /* 0800328C  0800328c T mov r12,r2 */
    g_cpu.R[15] = 0x0800328Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800328C = 1u;
    _cyc_0800328C = 1u;
    uint32_t _rm_0800328C = g_cpu.R[2];
    uint32_t _op2_0800328C;
    uint32_t _co_0800328C;
    _op2_0800328C = _rm_0800328C;
    _co_0800328C = cpsr_c();
    uint32_t _r_0800328C;
    _r_0800328C = _op2_0800328C;
    g_cpu.R[12] = _r_0800328C;
    g_cpu.R[15] = 0x0800328Eu;
    runtime_tick(_cyc_0800328C);
    /* 0800328E  0800328e T movs r3,r0,asr #3 */
    g_cpu.R[15] = 0x0800328Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800328E = 1u;
    _cyc_0800328E = 1u;
    uint32_t _rm_0800328E = g_cpu.R[0];
    uint32_t _op2_0800328E;
    uint32_t _co_0800328E;
    _op2_0800328E = (uint32_t)((int32_t)_rm_0800328E >> 3);
    _co_0800328E = (_rm_0800328E >> 2) & 1u;
    uint32_t _r_0800328E;
    _r_0800328E = _op2_0800328E;
    arm_set_nzc_logic(_r_0800328E, _co_0800328E);
    g_cpu.R[3] = _r_0800328E;
    g_cpu.R[15] = 0x08003290u;
    runtime_tick(_cyc_0800328E);
    /* 08003290  08003290 T mov r9,r3 */
    g_cpu.R[15] = 0x08003290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003290 = 1u;
    _cyc_08003290 = 1u;
    uint32_t _rm_08003290 = g_cpu.R[3];
    uint32_t _op2_08003290;
    uint32_t _co_08003290;
    _op2_08003290 = _rm_08003290;
    _co_08003290 = cpsr_c();
    uint32_t _r_08003290;
    _r_08003290 = _op2_08003290;
    g_cpu.R[9] = _r_08003290;
    g_cpu.R[15] = 0x08003292u;
    runtime_tick(_cyc_08003290);
    /* 08003292  08003292 T movs r0,r0,lsl #29 */
    g_cpu.R[15] = 0x08003292u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003292 = 1u;
    _cyc_08003292 = 1u;
    uint32_t _rm_08003292 = g_cpu.R[0];
    uint32_t _op2_08003292;
    uint32_t _co_08003292;
    _op2_08003292 = _rm_08003292 << 29;
    _co_08003292 = (_rm_08003292 >> 3) & 1u;
    uint32_t _r_08003292;
    _r_08003292 = _op2_08003292;
    arm_set_nzc_logic(_r_08003292, _co_08003292);
    g_cpu.R[0] = _r_08003292;
    g_cpu.R[15] = 0x08003294u;
    runtime_tick(_cyc_08003292);
    /* 08003294  08003294 T movs r0,r0,lsr #27 */
    g_cpu.R[15] = 0x08003294u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003294 = 1u;
    _cyc_08003294 = 1u;
    uint32_t _rm_08003294 = g_cpu.R[0];
    uint32_t _op2_08003294;
    uint32_t _co_08003294;
    _op2_08003294 = _rm_08003294 >> 27;
    _co_08003294 = (_rm_08003294 >> 26) & 1u;
    uint32_t _r_08003294;
    _r_08003294 = _op2_08003294;
    arm_set_nzc_logic(_r_08003294, _co_08003294);
    g_cpu.R[0] = _r_08003294;
    g_cpu.R[15] = 0x08003296u;
    runtime_tick(_cyc_08003294);
    /* 08003296  08003296 T mov r8,r0 */
    g_cpu.R[15] = 0x08003296u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08003296 = 1u;
    _cyc_08003296 = 1u;
    uint32_t _rm_08003296 = g_cpu.R[0];
    uint32_t _op2_08003296;
    uint32_t _co_08003296;
    _op2_08003296 = _rm_08003296;
    _co_08003296 = cpsr_c();
    uint32_t _r_08003296;
    _r_08003296 = _op2_08003296;
    g_cpu.R[8] = _r_08003296;
    g_cpu.R[15] = 0x08003298u;
    runtime_tick(_cyc_08003296);
    /* fall-through to 0x08003298 */
    g_cpu.R[15] = 0x08003298u;
    runtime_dispatch(0x08003298u);
    return;
}
