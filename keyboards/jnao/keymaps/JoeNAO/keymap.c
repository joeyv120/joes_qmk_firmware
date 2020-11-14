#include QMK_KEYBOARD_H
#include <print.h>

#define _QWERTY 0
#define _NAVIGATION 1
#define _FUNCTION 2
#define _ADVANCED 3

// Tap Dance declarations
enum {
    CPS,
    NMS,
    GAP,
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Left Shift, twice for Caps Lock
    [CPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [NMS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_NLCK),
    [GAP] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, KC_APP),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_4x12(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       TD(CPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX,TD(GAP),  KC_LALT, KC_SPACE,MO(1),    MO(2),   KC_ENT,  KC_BSPC, KC_GESC, XXXXXXX, XXXXXXX
    //└────────┴────────┴────────┴────────┴────────┴────────┴┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
  [_NAVIGATION] = LAYOUT_ortho_4x12(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     XXXXXXX, KC_HOME, KC_UP,   KC_PGUP, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     XXXXXXX, KC_LEFT, XXXXXXX, KC_RGHT, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_END,  KC_DOWN, KC_PGDN, XXXXXXX, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX, _______, _______, _______, _______,  _______, _______, KC_DEL,  _______, XXXXXXX, XXXXXXX
    //└────────┴────────┴────────┴────────┴────────┴────────┴┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
  [_FUNCTION] = LAYOUT_ortho_4x12(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_LCBR,  KC_RCBR, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_PSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       TD(NMS), KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_LBRC,  KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_MINS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LPRN,  KC_RPRN, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX, _______, _______, _______, _______,  _______, KC_P0,   KC_PDOT, _______, XXXXXXX, XXXXXXX
    //└────────┴────────┴────────┴────────┴────────┴────────┴┴────────┴────────┴────────┴────────┴────────┴────────┘
    ),
  [_ADVANCED] = LAYOUT_ortho_4x12(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐
       RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,  XXXXXXX, KC_VOLU, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┤────────┼├────────┼────────┼────────┼────────┼────────┼────────┤
       RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┼┼────────┼────────┼────────┼────────┼────────┼────────┤
       RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,  XXXXXXX, KC_VOLD, KC_BRID, XXXXXXX, XXXXXXX, XXXXXXX,
    //├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    //└────────┴────────┴────────┴────────┴────────┴────────┴┴────────┴────────┴────────┴────────┴────────┴────────┘
    )
};

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, _FUNCTION, _NAVIGATION, _ADVANCED);
  uint8_t layer = biton32(state);
  xprintf("%d", layer);
  return state;
}