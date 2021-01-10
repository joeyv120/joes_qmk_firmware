#include "rupa.h"

<<<<<<< HEAD
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _QWERTY: (Base Layer) Default Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│~ `│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │Del│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │  Fn  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgU│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │PgD│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
     * │Ctrl│Alt │Gui │        Space           │Fn │Alt│Ctl│ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [_QWERTY] = LAYOUT_65_ansi(
        KC_GESC, KC_1,    KC_2,    KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        RAISE,   KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,  KC_C,  KC_V,  KC_B,    KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LALT, KC_LGUI,                      KC_SPC,                RAISE,   KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Keymap _RAISE: Function Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │LOD│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│  Del  │Hme│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │     │VSN│U_s│U_f│U_m│   │   │uni│   │ ॐ │   │♩ ♪│♫ ♬│★  ☆ │Ins│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │      │   │   │   │   │   │   │   │   │   │   │   │    ✓   │End│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │ RShift │ ⸮ │Rup│Brt│Bls│Blt│   │Mut│V- │V+ │‽ ☭│   McL│M↑ │McR│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
     * │RCtl│RAlt│RGui│                        │   │   │CAP│M← │M↓ │M→ │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [_RAISE] = LAYOUT_65_ansi(
        LOD,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,       KC_F12,      KC_DEL,       KC_HOME,
        _______, VRSN,    U_SCRPT, U_FRACT, U_MONOS, _______, _______, UC_MOD,  _______, X(OM),   _______, XP(M4,M8),    XP(M8B,M16), XP(STB, STW), KC_INS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   X(CHEK),      KC_END,
        OS_RSFT,          X(IRNY), RUPA,    BL_BRTG, BL_STEP, BL_TOGG, _______, KC_MUTE, KC_VOLD, KC_VOLU, XP(IBNG,HAS), KC_BTN1,     KC_MS_U,      KC_BTN2,
        OS_RCTL, OS_RALT, OS_RGUI,                            _______,                   _______, _______, KC_CAPS,      KC_MS_L,     KC_MS_D,      KC_MS_R
    ),
};
=======
#define LAYOUT_65_ansi_wrapper(...) LAYOUT_65_ansi(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_65_ansi_wrapper(
        ____65_QWERTY______________ROW1,
        ____65_QWERTY______________ROW2,
        ____65_QWERTY______________ROW3,
        ____65_QWERTY______________ROW4,
        ____65_QWERTY______________ROW5
    ),
    [_RAISE] = LAYOUT_65_ansi_wrapper(
        ____65_RAISE_______________ROW1,
        ____65_RAISE_______________ROW2,
        ____65_RAISE_______________ROW3,
        ____65_RAISE_______________ROW4,
        ____65_RAISE_______________ROW5
    ),
    [_LOWER] = LAYOUT_65_ansi_wrapper(
        ____65_LOWER_______________ROW1,
        ____65_LOWER_______________ROW2,
        ____65_LOWER_______________ROW3,
        ____65_LOWER_______________ROW4,
        ____65_LOWER_______________ROW5
    ),
    [_ADJUST] = LAYOUT_65_ansi_wrapper(
        ____65_ADJUST______________ROW1,
        ____65_ADJUST___________BL_ROW2,
        ____65_ADJUST______________ROW3,
        ____65_ADJUST______________ROW4,
        ____65_ADJUST______________ROW5
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
