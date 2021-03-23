#include QMK_KEYBOARD_H
#include <print.h>

#define _QWERTY 0
#define _NAVIGATION 1
#define _FUNCTION 2
#define _ADVANCED 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,           KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,            KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_SPC,  MO(1),                     MO(2),   KC_ENT,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NAVIGATION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_NO,   KC_HOME, KC_UP,   KC_PGUP, KC_BSPC, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_NO,   KC_LEFT, KC_TAB,  KC_RGHT, KC_INS,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_ESC,  KC_DOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_END,  KC_DOWN, KC_PGDN, KC_DEL,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNCTION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                             KC_MINS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_F11,  KC_NO,  KC_NO,    KC_NO,   KC_F12,  KC_NO,            KC_NO,   KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_EQL,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_TRNS, KC_TRNS,                   KC_TRNS, KC_P0,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADVANCED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NLCK, KC_NO,   KC_BRIU, KC_VOLU, RGB_VAI,                            KC_NO,   KC_NO,   KC_LCBR, KC_RCBR, KC_BSLS, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_CAPS, KC_NO,   KC_NO,   KC_MUTE, RGB_TOG,                            KC_APP,  KC_NO,   KC_LPRN, KC_RPRN, KC_QUOT, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_SLCK, KC_NO,   KC_BRID, KC_VOLD, RGB_VAD, KC_NO,            KC_NO,   RESET,   KC_NO,   KC_LBRC, KC_RBRC, KC_GRV,  KC_NO, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_TRNS,                   KC_TRNS,  KC_NO,  KC_NO
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

void keyboard_post_init_user(void) {
  rgblight_enable();
  rgblight_mode(base_mode);
  rgblight_sethsv(128, 255, 128);
  rgblight_disable();
}

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, _FUNCTION, _NAVIGATION, _ADVANCED);
  uint8_t layer = biton32(state);
  xprintf("%d", layer);
  led_t led_state = host_keyboard_led_state();
  switch (layer) {
    case _QWERTY: // Name of my 0-th layer (includes alphas and caps-lock)
      rgblight_sethsv_noeeprom(145, 255, rgblight_get_val());
      if (led_state.caps_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;

    case _NAVIGATION: // Name of my 2st layer (includes 10-key and num-lock)
      rgblight_mode_noeeprom(base_mode);
      rgblight_sethsv_noeeprom(70, 255, rgblight_get_val());
      break;
    
    case _FUNCTION: // Name of my 1st layer (includes 10-key and num-lock)
      rgblight_sethsv_noeeprom(190, 255, rgblight_get_val());
      if (led_state.num_lock) {
        rgblight_mode_noeeprom(lock_mode);
      } else {
        rgblight_mode_noeeprom(base_mode);
      }
      break;
    
    case _ADVANCED: // Name of my 3nd layer (includes hardware related keys)
      rgblight_mode_noeeprom(advn_mode);
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
