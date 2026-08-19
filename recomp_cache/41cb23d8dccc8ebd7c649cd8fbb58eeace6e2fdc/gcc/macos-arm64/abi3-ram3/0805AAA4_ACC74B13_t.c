// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x0805AAA4 mode=thumb end=0x0805AAC4
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

OVL_EXPORT void func_0805AAA4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805AAA4u);
    /* 0805AAA4  0805aaa4 T ldr r0,[r0] */
    g_cpu.R[15] = 0x0805AAA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAA4 = 1u;
    _cyc_0805AAA4 = 2u;
    uint32_t _base_0805AAA4 = g_cpu.R[0];
    uint32_t _off_0805AAA4;
    _off_0805AAA4 = 0x00000000u;
    uint32_t _ea_0805AAA4 = _base_0805AAA4 + _off_0805AAA4;
    uint32_t _post_0805AAA4 = _base_0805AAA4 + _off_0805AAA4;
    _cyc_0805AAA4 += runtime_mem_cycles(_ea_0805AAA4, 4u, 0u);
    uint32_t _v_0805AAA4;
    { uint32_t _w = bus_read_u32(_ea_0805AAA4 & ~3u); uint32_t _rot = (_ea_0805AAA4 & 3u) * 8u; _v_0805AAA4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0805AAA4;
    g_cpu.R[15] = 0x0805AAA6u;
    runtime_tick(_cyc_0805AAA4);
    /* 0805AAA6  0805aaa6 T adds r3,r3,r0 */
    g_cpu.R[15] = 0x0805AAA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAA6 = 1u;
    _cyc_0805AAA6 = 1u;
    uint32_t _rm_0805AAA6 = g_cpu.R[0];
    uint32_t _op2_0805AAA6;
    uint32_t _co_0805AAA6;
    _op2_0805AAA6 = _rm_0805AAA6;
    _co_0805AAA6 = cpsr_c();
    uint32_t _rn_0805AAA6 = g_cpu.R[3];
    uint32_t _r_0805AAA6;
    _r_0805AAA6 = _rn_0805AAA6 + _op2_0805AAA6;
    arm_set_nzcv_add(_rn_0805AAA6, _op2_0805AAA6, _r_0805AAA6);
    g_cpu.R[3] = _r_0805AAA6;
    g_cpu.R[15] = 0x0805AAA8u;
    runtime_tick(_cyc_0805AAA6);
    /* 0805AAA8  0805aaa8 T ldrh r0,[r4,#0x8] */
    g_cpu.R[15] = 0x0805AAA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAA8 = 1u;
    _cyc_0805AAA8 = 2u;
    uint32_t _base_0805AAA8 = g_cpu.R[4];
    uint32_t _off_0805AAA8;
    _off_0805AAA8 = 0x00000008u;
    uint32_t _ea_0805AAA8 = _base_0805AAA8 + _off_0805AAA8;
    uint32_t _post_0805AAA8 = _base_0805AAA8 + _off_0805AAA8;
    _cyc_0805AAA8 += runtime_mem_cycles(_ea_0805AAA8, 2u, 0u);
    uint32_t _v_0805AAA8;
    { uint32_t _h = bus_read_u16(_ea_0805AAA8 & ~1u); if (_ea_0805AAA8 & 1u) _v_0805AAA8 = ((_h >> 8) | (_h << 24)); else _v_0805AAA8 = _h; }
    g_cpu.R[0] = _v_0805AAA8;
    g_cpu.R[15] = 0x0805AAAAu;
    runtime_tick(_cyc_0805AAA8);
    /* 0805AAAA  0805aaaa T strh r0,[r3] */
    g_cpu.R[15] = 0x0805AAAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAAA = 1u;
    _cyc_0805AAAA = 1u;
    uint32_t _base_0805AAAA = g_cpu.R[3];
    uint32_t _off_0805AAAA;
    _off_0805AAAA = 0x00000000u;
    uint32_t _ea_0805AAAA = _base_0805AAAA + _off_0805AAAA;
    uint32_t _post_0805AAAA = _base_0805AAAA + _off_0805AAAA;
    _cyc_0805AAAA += runtime_mem_cycles(_ea_0805AAAA, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805AAAAu, _ea_0805AAAA & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805AAAA & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805AAACu;
    runtime_tick(_cyc_0805AAAA);
    /* 0805AAAC  0805aaac T ldrh r0,[r4,#0xa] */
    g_cpu.R[15] = 0x0805AAACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAAC = 1u;
    _cyc_0805AAAC = 2u;
    uint32_t _base_0805AAAC = g_cpu.R[4];
    uint32_t _off_0805AAAC;
    _off_0805AAAC = 0x0000000Au;
    uint32_t _ea_0805AAAC = _base_0805AAAC + _off_0805AAAC;
    uint32_t _post_0805AAAC = _base_0805AAAC + _off_0805AAAC;
    _cyc_0805AAAC += runtime_mem_cycles(_ea_0805AAAC, 2u, 0u);
    uint32_t _v_0805AAAC;
    { uint32_t _h = bus_read_u16(_ea_0805AAAC & ~1u); if (_ea_0805AAAC & 1u) _v_0805AAAC = ((_h >> 8) | (_h << 24)); else _v_0805AAAC = _h; }
    g_cpu.R[0] = _v_0805AAAC;
    g_cpu.R[15] = 0x0805AAAEu;
    runtime_tick(_cyc_0805AAAC);
    /* 0805AAAE  0805aaae T strh r0,[r3,#0x2] */
    g_cpu.R[15] = 0x0805AAAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAAE = 1u;
    _cyc_0805AAAE = 1u;
    uint32_t _base_0805AAAE = g_cpu.R[3];
    uint32_t _off_0805AAAE;
    _off_0805AAAE = 0x00000002u;
    uint32_t _ea_0805AAAE = _base_0805AAAE + _off_0805AAAE;
    uint32_t _post_0805AAAE = _base_0805AAAE + _off_0805AAAE;
    _cyc_0805AAAE += runtime_mem_cycles(_ea_0805AAAE, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805AAAEu, _ea_0805AAAE & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805AAAE & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805AAB0u;
    runtime_tick(_cyc_0805AAAE);
    /* 0805AAB0  0805aab0 T adds r1,r3,#0x0 */
    g_cpu.R[15] = 0x0805AAB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAB0 = 1u;
    _cyc_0805AAB0 = 1u;
    uint32_t _rn_0805AAB0 = g_cpu.R[3];
    uint32_t _r_0805AAB0;
    _r_0805AAB0 = _rn_0805AAB0 + 0x00000000u;
    arm_set_nzcv_add(_rn_0805AAB0, 0x00000000u, _r_0805AAB0);
    g_cpu.R[1] = _r_0805AAB0;
    g_cpu.R[15] = 0x0805AAB2u;
    runtime_tick(_cyc_0805AAB0);
    /* 0805AAB2  0805aab2 T adds r1,r1,#0x40 */
    g_cpu.R[15] = 0x0805AAB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAB2 = 1u;
    _cyc_0805AAB2 = 1u;
    uint32_t _rn_0805AAB2 = g_cpu.R[1];
    uint32_t _r_0805AAB2;
    _r_0805AAB2 = _rn_0805AAB2 + 0x00000040u;
    arm_set_nzcv_add(_rn_0805AAB2, 0x00000040u, _r_0805AAB2);
    g_cpu.R[1] = _r_0805AAB2;
    g_cpu.R[15] = 0x0805AAB4u;
    runtime_tick(_cyc_0805AAB2);
    /* 0805AAB4  0805aab4 T ldrh r0,[r4,#0xc] */
    g_cpu.R[15] = 0x0805AAB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAB4 = 1u;
    _cyc_0805AAB4 = 2u;
    uint32_t _base_0805AAB4 = g_cpu.R[4];
    uint32_t _off_0805AAB4;
    _off_0805AAB4 = 0x0000000Cu;
    uint32_t _ea_0805AAB4 = _base_0805AAB4 + _off_0805AAB4;
    uint32_t _post_0805AAB4 = _base_0805AAB4 + _off_0805AAB4;
    _cyc_0805AAB4 += runtime_mem_cycles(_ea_0805AAB4, 2u, 0u);
    uint32_t _v_0805AAB4;
    { uint32_t _h = bus_read_u16(_ea_0805AAB4 & ~1u); if (_ea_0805AAB4 & 1u) _v_0805AAB4 = ((_h >> 8) | (_h << 24)); else _v_0805AAB4 = _h; }
    g_cpu.R[0] = _v_0805AAB4;
    g_cpu.R[15] = 0x0805AAB6u;
    runtime_tick(_cyc_0805AAB4);
    /* 0805AAB6  0805aab6 T strh r0,[r1] */
    g_cpu.R[15] = 0x0805AAB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAB6 = 1u;
    _cyc_0805AAB6 = 1u;
    uint32_t _base_0805AAB6 = g_cpu.R[1];
    uint32_t _off_0805AAB6;
    _off_0805AAB6 = 0x00000000u;
    uint32_t _ea_0805AAB6 = _base_0805AAB6 + _off_0805AAB6;
    uint32_t _post_0805AAB6 = _base_0805AAB6 + _off_0805AAB6;
    _cyc_0805AAB6 += runtime_mem_cycles(_ea_0805AAB6, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805AAB6u, _ea_0805AAB6 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805AAB6 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805AAB8u;
    runtime_tick(_cyc_0805AAB6);
    /* 0805AAB8  0805aab8 T adds r3,r3,#0x42 */
    g_cpu.R[15] = 0x0805AAB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAB8 = 1u;
    _cyc_0805AAB8 = 1u;
    uint32_t _rn_0805AAB8 = g_cpu.R[3];
    uint32_t _r_0805AAB8;
    _r_0805AAB8 = _rn_0805AAB8 + 0x00000042u;
    arm_set_nzcv_add(_rn_0805AAB8, 0x00000042u, _r_0805AAB8);
    g_cpu.R[3] = _r_0805AAB8;
    g_cpu.R[15] = 0x0805AABAu;
    runtime_tick(_cyc_0805AAB8);
    /* 0805AABA  0805aaba T ldrh r0,[r4,#0xe] */
    g_cpu.R[15] = 0x0805AABAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AABA = 1u;
    _cyc_0805AABA = 2u;
    uint32_t _base_0805AABA = g_cpu.R[4];
    uint32_t _off_0805AABA;
    _off_0805AABA = 0x0000000Eu;
    uint32_t _ea_0805AABA = _base_0805AABA + _off_0805AABA;
    uint32_t _post_0805AABA = _base_0805AABA + _off_0805AABA;
    _cyc_0805AABA += runtime_mem_cycles(_ea_0805AABA, 2u, 0u);
    uint32_t _v_0805AABA;
    { uint32_t _h = bus_read_u16(_ea_0805AABA & ~1u); if (_ea_0805AABA & 1u) _v_0805AABA = ((_h >> 8) | (_h << 24)); else _v_0805AABA = _h; }
    g_cpu.R[0] = _v_0805AABA;
    g_cpu.R[15] = 0x0805AABCu;
    runtime_tick(_cyc_0805AABA);
    /* 0805AABC  0805aabc T strh r0,[r3] */
    g_cpu.R[15] = 0x0805AABCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AABC = 1u;
    _cyc_0805AABC = 1u;
    uint32_t _base_0805AABC = g_cpu.R[3];
    uint32_t _off_0805AABC;
    _off_0805AABC = 0x00000000u;
    uint32_t _ea_0805AABC = _base_0805AABC + _off_0805AABC;
    uint32_t _post_0805AABC = _base_0805AABC + _off_0805AABC;
    _cyc_0805AABC += runtime_mem_cycles(_ea_0805AABC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805AABCu, _ea_0805AABC & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805AABC & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805AABEu;
    runtime_tick(_cyc_0805AABC);
    /* 0805AABE  0805aabe T movs r0,#0x1 */
    g_cpu.R[15] = 0x0805AABEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AABE = 1u;
    _cyc_0805AABE = 1u;
    uint32_t _r_0805AABE;
    _r_0805AABE = 0x00000001u;
    arm_set_nzc_logic(_r_0805AABE, cpsr_c());
    g_cpu.R[0] = _r_0805AABE;
    g_cpu.R[15] = 0x0805AAC0u;
    runtime_tick(_cyc_0805AABE);
    /* 0805AAC0  0805aac0 T bl.hi 0x080f5ac4 */
    g_cpu.R[15] = 0x0805AAC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAC0 = 1u;
    _cyc_0805AAC0 = 1u;
    g_cpu.R[14] = 0x080F5AC4u;
    g_cpu.R[15] = 0x0805AAC2u;
    runtime_tick(_cyc_0805AAC0);
    /* 0805AAC2  0805aac2 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x0805AAC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805AAC2 = 1u;
    _cyc_0805AAC2 = 3u;
    uint32_t _blt_0805AAC2 = (g_cpu.R[14] + 0x00000CE0u) & ~1u;
    g_cpu.R[14] = 0x0805AAC5u;
    g_cpu.R[15] = _blt_0805AAC2;
    runtime_call_push_return(0x0805AAC4u);
    runtime_tick(_cyc_0805AAC2);
    _cyc_0805AAC2 = 0u;
    runtime_dispatch(_blt_0805AAC2);
    if (g_cpu.R[15] != 0x0805AAC4u) { runtime_call_cancel_return(0x0805AAC4u); return; }
    g_cpu.R[15] = 0x0805AAC4u;
    runtime_tick(_cyc_0805AAC2);
    /* fall-through to 0x0805AAC4 */
    g_cpu.R[15] = 0x0805AAC4u;
    runtime_dispatch(0x0805AAC4u);
    return;
}
