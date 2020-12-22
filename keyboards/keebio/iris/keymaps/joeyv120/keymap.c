#include QMK_KEYBOARD_H
#include <print.h>

#define _QWERTY 0
#define _NAVIGATION 1
#define _FUNCTION 2
#define _ADVANCED 3

// Tap Dance declarations
enum {
    S_CAPS,
    S_NUMS,
    S_GUAP,
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Left Shift, twice for Caps Lock
    [S_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [S_NUMS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_NLCK),
    [S_GUAP] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, KC_APP),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(S_CAPS), KC_A, KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,          XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 TD(S_GUAP), KC_SPACE, TT(1),                    TT(2),   KC_ENT,  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NAVIGATION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               XXXXXXX, KC_HOME, KC_UP,   KC_PGUP, XXXXXXX, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               XXXXXXX, KC_LEFT, XXXXXXX, KC_RGHT, XXXXXXX, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, XXXXXXX, XXXXXXX, XXXXXXX, MO(2),   KC_LALT, XXXXXXX,          XXXXXXX, XXXXXXX, KC_END,  KC_DOWN, KC_PGDN, XXXXXXX, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNCTION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_LCBR,                            KC_RCBR, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_PSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(S_NUMS),KC_F5, KC_F6,   KC_F7,   KC_F8,   KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LPRN, XXXXXXX,          XXXXXXX, KC_RPRN, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_EQL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_P0,   RALT_T(KC_DOT)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADVANCED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,                            XXXXXXX, KC_VOLU, KC_BRIU, XXXXXXX, XXXXXXX, RESET,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, KC_VOLD, KC_BRID, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, _______,                   _______, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

// Links for reference
// https://docs.qmk.fm/#/feature_rgblight
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// https://www.reddit.com/r/olkb/comments/8bzipp/qmk_help_rgb_layers_and_additional_questions/dxdefrh?utm_source=share&utm_medium=web2x
// https://github.com/qmk/qmk_firmware/blob/master/quantum/rgblight_list.h
// https://docs.qmk.fm/#/feature_rgblight
// https://github.com/qmk/qmk_firmware/blob/master/quantum/rgblight.h
uint32_t base_mode = 1; // Unlocked animation (solid)
uint32_t lock_mode = 5; // Locked animation (breathing)
uint32_t advn_mode = 22; // Advanced layer animation (alternating)
// uint16_t hue = 64;
// uint16_t sat = 255;
// uint16_t val = 255;

void keyboard_post_init_user(void) {
  rgblight_enable();
  rgblight_mode(base_mode);
  rgblight_sethsv(128, 255, 128);
}

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, _FUNCTION, _NAVIGATION, _ADVANCED);
  uint8_t layer = biton32(state);
  xprintf("%d", layer);
  led_t led_state = host_keyboard_led_state();
  switch (layer) {
    case _QWERTY: // Name of my 0-th layer (includes alphas and caps-lock)
      // rgblight_mode_noeeprom(base_mode);
      rgblight_sethsv_noeeprom(145, 255, rgblight_get_val());
      // keyboard_post_init_user();
      if (led_state.caps_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;

    case _NAVIGATION: // Name of my 2st layer (includes 10-key and num-lock)
      rgblight_mode_noeeprom(base_mode);
      // rgblight_sethsv(190, 255, 255); // purple
      rgblight_sethsv_noeeprom(70, 255, rgblight_get_val());
      break;
    
    case _FUNCTION: // Name of my 1st layer (includes 10-key and num-lock)
      // rgblight_sethsv(130, 255, 255); // Blue
      rgblight_sethsv_noeeprom(190, 255, rgblight_get_val());
      if (led_state.num_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;
    
    case _ADVANCED: // Name of my 3nd layer (includes hardware related keys)
      rgblight_mode_noeeprom(advn_mode);
      // rgblight_sethsv(0, 255, 255); // red
      rgblight_sethsv_noeeprom(0, 255, rgblight_get_val());
      break;
    }
  return state;
}

bool led_update_user(led_t led_state) { 
    if (led_state.caps_lock & layer_state_is(0)) {
      rgblight_mode_noeeprom(lock_mode);      
    }
    else if (led_state.num_lock & layer_state_is(2)) {
      rgblight_mode_noeeprom(lock_mode);      
    }
    else if (layer_state_is(1)) {
      rgblight_mode_noeeprom(base_mode);
    }
    else if (layer_state_is(3)) {
      rgblight_mode_noeeprom(advn_mode);
    }
    else {
      rgblight_mode_noeeprom(base_mode);
    }
    return true;
}
