/* Copyright 2023 nuthouse
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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┐      ┌────────┐┌────────┬────────┬────────┬────────┬────────┬────────┐┌────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,    KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤└────────┘      └────────┘├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,    KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
              KC_NO,             KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   KC_NO,             KC_NO,
  //├────────┼────────┼────────┤├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤├────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┘└────────┴────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┴────────┴────────┴────────┘└────────┴────────┴────────┘
                                                                              KC_NO,   KC_NO,            KC_NO,   KC_NO
  //                                                                         └────────┴────────┘        └────────┴────────┘
  )
};

// Default encoder update does nothing
bool encoder_update_user(uint8_t index, bool clockwise) {
    return true;
}

// Default encoder dip switch does nothing
bool dip_switch_update_user(uint8_t index, bool active) { 
   return true;
}