/* Copyright 2023 yinwenyi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _MAIN
//    _LOWER,
//    _RAISE,
};

//#define LOWER MO(_LOWER)
//#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┐      ┌────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┐
     KC_INS,  KC_HOME, KC_PGUP,   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,  KC_MINS, KC_EQL,  KC_GRV,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤└────────┘      └────────┘├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
     KC_DEL,  KC_END,  KC_PGDN,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,   KC_LBRC, KC_RBRC, KC_BSLS,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
               KC_A,              KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_UP,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
     KC_LCTL, KC_LGUI, KC_LALT,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_LEFT, KC_DOWN, KC_RIGHT,
  //└────────┴────────┴────────┘└────────┴────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┴────────┴────────┴────────┘└────────┴────────┴────────┘
                                                                               KC_COPY, KC_SPC,           KC_ENT,  KC_PSTE
  //                                                                         └────────┴────────┘        └────────┴────────┘
  )

//  [_LOWER] = LAYOUT(
//  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┐
//     QK_BOOT, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,  KC_MUTE, KC_VOLD, KC_VOLU,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,  _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,           _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______,  _______, _______,
//  //└────────┴────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┴────────┴────────┴────────┘└────────┴────────┴────────┘
//                                _______, _______, _______, _______,          _______, _______, _______, _______
//  //                           └────────┴────────┴────────┴────────┘        └────────┴────────┴────────┴────────┘
//  ),
//
//  [_RAISE] = LAYOUT(
//  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┐
//     _______, _______, _______, _______, _______, _______,                            _______, KC_PEQL, KC_PSLS, KC_PAST, KC_PMNS, _______,  _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,  _______, _______, _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,           _______,
//  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
//     _______, _______, _______, _______, _______, _______,                            _______, KC_P1,   KC_P2,   KC_P3,   _______, _______, _______,  _______, _______,
//  //└────────┴────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┴────────┴────────┴────────┘└────────┴────────┴────────┘
//                                _______, _______, _______, _______,          _______, _______, KC_P0,   KC_PDOT
//  //                           └────────┴────────┴────────┴────────┘        └────────┴────────┴────────┴────────┘
//  )

};


// Mapped to volume and backlight brightness controls
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
            if (clockwise) {
                tap_code_delay(KC_VOLU, 10);
            } else {
                tap_code_delay(KC_VOLD, 10);
            }
            break;
        case 1:
            if (clockwise) {
//                register_code16(BL_UP);
                tap_code_delay(KC_VOLU, 10);
            } else {
//                register_code16(BL_DOWN);
                tap_code_delay(KC_VOLD, 10);
            } 
            break;
    }
    return false;
}

// The default behavior for the encoder dip switch does notion. The keyboard has setup the dip switch
// such that index = 0 is the right side and index = 1 is the left side
bool dip_switch_update_user(uint8_t index, bool active) { 
   switch(index){
      // Right side
      case 0:{
         if(active){
            register_code(KC_MUTE);
         } else{
            unregister_code(KC_MUTE);
         }
         break;
      }
      // Left side
      case 1:{
//        register_code16(BL_TOGG);
          if(active){
             register_code(KC_CAPS);
          } else{
             unregister_code(KC_CAPS);
          }
          break;
     }
   }

   return true;
}

// Caps lock
// Initialize the LED at keyboard startup
void keyboard_post_init_user(void) {
    rgblight_disable();
    if (host_keyboard_led_state().caps_lock) {
        rgblight_enable();
    }
}
bool led_update_user(led_t led_state) {
    // toggle if current state of led and caps lock are different
    if (led_state.caps_lock != rgblight_is_enabled()) {
        rgblight_toggle();
    }
    return true;
}
