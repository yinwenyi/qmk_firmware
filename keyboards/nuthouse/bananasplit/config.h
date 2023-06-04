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

#pragma once

#include "config_common.h"

// Key matrix size
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { C7, C6, B6, B5, B4, D7 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7 }
#define DIODE_DIRECTION COL2ROW

// Optional debounce
#define DEBOUNCE 5

// Debug
// #define DEBUG_MATRIX_SCAN_RATE

//--------------------------------------------
// Split config
//--------------------------------------------
#define SPLIT_HAND_PIN D6
#define SPLIT_HAND_PIN_LOW_IS_LEFT

// Master is whichever side the usb is plugged into
#define SPLIT_USB_DETECT
// Maximum timeout when detecting master/slave
#define SPLIT_USB_TIMEOUT 2000
// Poll frequency when detecting master/slave
#define SPLIT_USB_TIMEOUT_POLL 10
// Max time between forced master to slave sync
#define FORCED_SYNC_THROTTLE_MS 100
// Communcation interface between master and slave
#define USE_I2C
// max attempts to detect slave part before assuming disconnected
#define SPLIT_MAX_CONNECTION_ERRORS 5
// How long (in milliseconds) the master part should block all connection attempts to the slave after the communication has been flagged as disconnected
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500

//--------------------------------------------
// Status LED config
//--------------------------------------------
#define RGB_DI_PIN D5
#define RGBLED_NUM 2
#define RGBLED_SPLIT {1, 1}
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
// Turn down the brightness (max is 255)
#define RGBLIGHT_LIMIT_VAL 64
// Rainbow cycle effect
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

//--------------------------------------------
// Encoder and dip switch config
//--------------------------------------------
// Encoder hardware
#define ENCODER_RIGHT_PAD_A B7
#define ENCODER_RIGHT_PAD_B B0
#define ENCODER_DETENTS 24

// Push button pin
#define DIP_SWITCH_PIN E6
#define DIP_SWITCH_PINS_RIGHT { DIP_SWITCH_PIN }
#define DIP_SWITCH_PINS { DIP_SWITCH_PIN }

// For split dip switch
#define SPLIT_TRANSACTION_IDS_KB KEYBOARD_SYNC_DIP
#define DIP_SWITCH_DEBOUNCE_MS 50

// DFU mode on dip switch
#define DFU_NUMBER_DIP_SWITCH_PRESSES 3
#define DFU_DIP_SWITCH_TIMEOUT_MS 300

// Synchronization min period
#define SLAVE_HANDLER_MIN_PERIOD_MS 50

//--------------------------------------------
// Backlight LED matrix config
//--------------------------------------------
#define LED_DRIVER_ENABLE_PIN D4
#define LED_DRIVER_COUNT 2
#define LED_DRIVER_ADDR_1 0b1110100
#define LED_DRIVER_ADDR_2 0b1110111
#define LED_DRIVER_1_LED_TOTAL 36
#define LED_DRIVER_2_LED_TOTAL 36
#define LED_MATRIX_LED_COUNT (LED_DRIVER_1_LED_TOTAL + LED_DRIVER_2_LED_TOTAL)
// Step size for each led matrix increase or decrease call. Range is 0-255
#define LED_MATRIX_VAL_STEP 24

// // Turn down the brightness
// #define LED_BRIGHTNESS_LO 100
// #define LED_MATRIX_DEFAULT_VAL LED_BRIGHTNESS_LO
// #define ENABLE_LED_MATRIX_BAND

// Turn off LEDs after computer goes to sleep
#define LED_DISABLE_WHEN_USB_SUSPENDED

// Try to lighten LED processing load by limiting updates to 10fps
#define LED_MATRIX_LED_FLUSH_LIMIT 100
