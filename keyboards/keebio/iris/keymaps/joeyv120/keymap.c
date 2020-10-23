#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _FUNCTION 1
#define _NAVIGATION 2
#define _ADVANCED 3

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   LOWER,
//   RAISE,
//   ADJUST,
// };

// Tap Dance declarations
enum {
    S_CAPS,
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Left Shift, twice for Caps Lock
    [S_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(S_CAPS), KC_A, KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,          KC_APP,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_SPACE, TT(1),                    TT(2),   KC_ENT,  KC_BSPC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNCTION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_LABK,                            KC_RABK, KC_NLCK, KC_PSLS, KC_PAST, KC_MINS, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_LCBR,                            KC_RCBR, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_EQL,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, KC_LPRN, _______,          _______, KC_RPRN, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, TO(0),                     TO(2),   KC_P0,   KC_PDOT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NAVIGATION] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_HOME, KC_UP,   KC_PGUP, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_LEFT, XXXXXXX, KC_RGHT, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_END,  KC_DOWN, KC_PGDN, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, TO(0),                     TO(3),   _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADVANCED] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,                            KC_BRIU, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,                            KC_BRID, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_M_P, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    XXXXXXX, XXXXXXX, TO(0),                     XXXXXXX, XXXXXXX, XXXXXXX
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_FUNCTION);
//         update_tri_layer(_FUNCTION, _ADVANCED, _ADJUST);
//       } else {
//         layer_off(_FUNCTION);
//         update_tri_layer(_FUNCTION, _ADVANCED, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_ADVANCED);
//         update_tri_layer(_FUNCTION, _ADVANCED, _ADJUST);
//       } else {
//         layer_off(_ADVANCED);
//         update_tri_layer(_FUNCTION, _ADVANCED, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//       if (record->event.pressed) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       return false;
//       break;
//   }
//   return true;
// }

// // Rotary Encoder
// void encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) {
//         if (clockwise) {
//             tap_code(KC_VOLU);
//         } else {
//             tap_code(KC_VOLD);
//         }
//     }
//     else if (index == 1) {
//         if (clockwise) {
//             tap_code(KC_PGDN);
//         } else {
//             tap_code(KC_PGUP);
//         }
//     }
// }

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

// Eroviaa: Just a quick note, the matrix_init_user might work in this example, but that's not guaranteed. keyboard_post_init_user is the recommended as when it's called, all HW features are already initialized.
void keyboard_post_init_user(void) {
  rgblight_enable();
  rgblight_mode(base_mode);
  rgblight_sethsv(128, 255, 255);
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
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
    
    case _FUNCTION: // Name of my 1st layer (includes 10-key and num-lock)
      // rgblight_sethsv(130, 255, 255); // Blue
      rgblight_sethsv_noeeprom(190, 255, rgblight_get_val());
      if (led_state.num_lock) {
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
    else if (led_state.num_lock & layer_state_is(1)) {
      rgblight_mode_noeeprom(lock_mode);      
    }
    else if (layer_state_is(2)) {
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
