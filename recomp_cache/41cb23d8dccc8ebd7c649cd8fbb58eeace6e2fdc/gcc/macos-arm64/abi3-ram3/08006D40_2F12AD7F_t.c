// AUTO-GENERATED Stage-2 self-heal overlay. Do not edit.
// function 0x08006D40 mode=thumb end=0x08006D56
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

OVL_EXPORT void func_08006D40(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08006D40u);
    /* 08006D40  08006d40 T movs r1,r1,lsl #1 */
    g_cpu.R[15] = 0x08006D40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D40 = 1u;
    _cyc_08006D40 = 1u;
    uint32_t _rm_08006D40 = g_cpu.R[1];
    uint32_t _op2_08006D40;
    uint32_t _co_08006D40;
    _op2_08006D40 = _rm_08006D40 << 1;
    _co_08006D40 = (_rm_08006D40 >> 31) & 1u;
    uint32_t _r_08006D40;
    _r_08006D40 = _op2_08006D40;
    arm_set_nzc_logic(_r_08006D40, _co_08006D40);
    g_cpu.R[1] = _r_08006D40;
    g_cpu.R[15] = 0x08006D42u;
    runtime_tick(_cyc_08006D40);
    /* 08006D42  08006d42 T adds r1,r1,r0 */
    g_cpu.R[15] = 0x08006D42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D42 = 1u;
    _cyc_08006D42 = 1u;
    uint32_t _rm_08006D42 = g_cpu.R[0];
    uint32_t _op2_08006D42;
    uint32_t _co_08006D42;
    _op2_08006D42 = _rm_08006D42;
    _co_08006D42 = cpsr_c();
    uint32_t _rn_08006D42 = g_cpu.R[1];
    uint32_t _r_08006D42;
    _r_08006D42 = _rn_08006D42 + _op2_08006D42;
    arm_set_nzcv_add(_rn_08006D42, _op2_08006D42, _r_08006D42);
    g_cpu.R[1] = _r_08006D42;
    g_cpu.R[15] = 0x08006D44u;
    runtime_tick(_cyc_08006D42);
    /* 08006D44  08006d44 T ldrh r6,[r1] */
    g_cpu.R[15] = 0x08006D44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D44 = 1u;
    _cyc_08006D44 = 2u;
    uint32_t _base_08006D44 = g_cpu.R[1];
    uint32_t _off_08006D44;
    _off_08006D44 = 0x00000000u;
    uint32_t _ea_08006D44 = _base_08006D44 + _off_08006D44;
    uint32_t _post_08006D44 = _base_08006D44 + _off_08006D44;
    _cyc_08006D44 += runtime_mem_cycles(_ea_08006D44, 2u, 0u);
    uint32_t _v_08006D44;
    { uint32_t _h = bus_read_u16(_ea_08006D44 & ~1u); if (_ea_08006D44 & 1u) _v_08006D44 = ((_h >> 8) | (_h << 24)); else _v_08006D44 = _h; }
    g_cpu.R[6] = _v_08006D44;
    g_cpu.R[15] = 0x08006D46u;
    runtime_tick(_cyc_08006D44);
    /* 08006D46  08006d46 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x08006D46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D46 = 1u;
    _cyc_08006D46 = 2u;
    uint32_t _base_08006D46 = g_cpu.R[3];
    uint32_t _off_08006D46;
    _off_08006D46 = 0x00000000u;
    uint32_t _ea_08006D46 = _base_08006D46 + _off_08006D46;
    uint32_t _post_08006D46 = _base_08006D46 + _off_08006D46;
    _cyc_08006D46 += runtime_mem_cycles(_ea_08006D46, 1u, 0u);
    uint32_t _v_08006D46;
    _v_08006D46 = bus_read_u8(_ea_08006D46);
    g_cpu.R[1] = _v_08006D46;
    g_cpu.R[15] = 0x08006D48u;
    runtime_tick(_cyc_08006D46);
    /* 08006D48  08006d48 T ldrb r2,[r4] */
    g_cpu.R[15] = 0x08006D48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D48 = 1u;
    _cyc_08006D48 = 2u;
    uint32_t _base_08006D48 = g_cpu.R[4];
    uint32_t _off_08006D48;
    _off_08006D48 = 0x00000000u;
    uint32_t _ea_08006D48 = _base_08006D48 + _off_08006D48;
    uint32_t _post_08006D48 = _base_08006D48 + _off_08006D48;
    _cyc_08006D48 += runtime_mem_cycles(_ea_08006D48, 1u, 0u);
    uint32_t _v_08006D48;
    _v_08006D48 = bus_read_u8(_ea_08006D48);
    g_cpu.R[2] = _v_08006D48;
    g_cpu.R[15] = 0x08006D4Au;
    runtime_tick(_cyc_08006D48);
    /* 08006D4A  08006d4a T adds r0,r1,#0x0 */
    g_cpu.R[15] = 0x08006D4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D4A = 1u;
    _cyc_08006D4A = 1u;
    uint32_t _rn_08006D4A = g_cpu.R[1];
    uint32_t _r_08006D4A;
    _r_08006D4A = _rn_08006D4A + 0x00000000u;
    arm_set_nzcv_add(_rn_08006D4A, 0x00000000u, _r_08006D4A);
    g_cpu.R[0] = _r_08006D4A;
    g_cpu.R[15] = 0x08006D4Cu;
    runtime_tick(_cyc_08006D4A);
    /* 08006D4C  08006d4c T cmps r0,#0x9f */
    g_cpu.R[15] = 0x08006D4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D4C = 1u;
    _cyc_08006D4C = 1u;
    uint32_t _rn_08006D4C = g_cpu.R[0];
    uint32_t _r_08006D4C;
    _r_08006D4C = _rn_08006D4C - 0x0000009Fu;
    arm_set_nzcv_sub(_rn_08006D4C, 0x0000009Fu, _r_08006D4C);
    g_cpu.R[15] = 0x08006D4Eu;
    runtime_tick(_cyc_08006D4C);
    /* 08006D4E  08006d4e T ble 0x08006d56 */
    g_cpu.R[15] = 0x08006D4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D4E = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08006D4E = 3u;
        g_cpu.R[15] = 0x08006D56u;
        runtime_tick(_cyc_08006D4E);
        runtime_dispatch(0x08006D56u);
        return;
    }
    g_cpu.R[15] = 0x08006D50u;
    runtime_tick(_cyc_08006D4E);
    /* 08006D50  08006d50 T add r0,r0,r9 */
    g_cpu.R[15] = 0x08006D50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D50 = 1u;
    _cyc_08006D50 = 1u;
    uint32_t _rm_08006D50 = g_cpu.R[9];
    uint32_t _op2_08006D50;
    uint32_t _co_08006D50;
    _op2_08006D50 = _rm_08006D50;
    _co_08006D50 = cpsr_c();
    uint32_t _rn_08006D50 = g_cpu.R[0];
    uint32_t _r_08006D50;
    _r_08006D50 = _rn_08006D50 + _op2_08006D50;
    g_cpu.R[0] = _r_08006D50;
    g_cpu.R[15] = 0x08006D52u;
    runtime_tick(_cyc_08006D50);
    /* 08006D52  08006d52 T movs r0,r0,lsl #16 */
    g_cpu.R[15] = 0x08006D52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D52 = 1u;
    _cyc_08006D52 = 1u;
    uint32_t _rm_08006D52 = g_cpu.R[0];
    uint32_t _op2_08006D52;
    uint32_t _co_08006D52;
    _op2_08006D52 = _rm_08006D52 << 16;
    _co_08006D52 = (_rm_08006D52 >> 16) & 1u;
    uint32_t _r_08006D52;
    _r_08006D52 = _op2_08006D52;
    arm_set_nzc_logic(_r_08006D52, _co_08006D52);
    g_cpu.R[0] = _r_08006D52;
    g_cpu.R[15] = 0x08006D54u;
    runtime_tick(_cyc_08006D52);
    /* 08006D54  08006d54 T movs r1,r0,lsr #16 */
    g_cpu.R[15] = 0x08006D54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08006D54 = 1u;
    _cyc_08006D54 = 1u;
    uint32_t _rm_08006D54 = g_cpu.R[0];
    uint32_t _op2_08006D54;
    uint32_t _co_08006D54;
    _op2_08006D54 = _rm_08006D54 >> 16;
    _co_08006D54 = (_rm_08006D54 >> 15) & 1u;
    uint32_t _r_08006D54;
    _r_08006D54 = _op2_08006D54;
    arm_set_nzc_logic(_r_08006D54, _co_08006D54);
    g_cpu.R[1] = _r_08006D54;
    g_cpu.R[15] = 0x08006D56u;
    runtime_tick(_cyc_08006D54);
    /* fall-through to 0x08006D56 */
    g_cpu.R[15] = 0x08006D56u;
    runtime_dispatch(0x08006D56u);
    return;
}
