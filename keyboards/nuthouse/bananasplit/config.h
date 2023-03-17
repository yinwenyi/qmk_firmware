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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS \
    { C7, C6, B6, B5, B4, D7 }
#define MATRIX_COL_PINS \
    { F0, F1, F4, F5, F6, F7 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define USE_I2C

#define DIODE_DIRECTION COL2ROW

/** SPLIT KEYBOARD CONFIG **/

#define SPLIT_HAND_PIN D6
#define SPLIT_HAND_PIN_LOW_IS_LEFT

// technically I don't need this since atmega has Vbus detection built in...nuke if firmware is too large
// master is whichever side the usb is plugged into
#define SPLIT_USB_DETECT
// maximum timeout when detecting master/slave
#define SPLIT_USB_TIMEOUT 2000
// poll frequency when detecting master/slave
#define SPLIT_USB_TIMEOUT_POLL 10

// max time between forced master to slave sync
#define FORCED_SYNC_THROTTLE_MS 100

// max attempts to detect slave part before assuming disconnected
#define SPLIT_MAX_CONNECTION_ERRORS 5
// How long (in milliseconds) the master part should block all connection attempts to the slave after the communication has been flagged as disconnected
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500

/** STATUS LED CONFIG **/
#define RGB_DI_PIN D5
#define RGBLED_NUM 2
#define RGBLED_SPLIT {1, 1}
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
// make it green
#define RGBLIGHT_DEFAULT_HUE 64

/** KNOB CONFIG **/
#define ENCODERS_PAD_A_RIGHT { B7 }
#define ENCODERS_PAD_B_RIGHT { B0 }
// order is switched for the left side
#define ENCODERS_PAD_A { B0 }
#define ENCODERS_PAD_B { B7 }

// how many pulses the encoder registers between each detent
// schematic part has 24 pulses per full rotation
#define ENCODER_RESOLUTION 4

// Push button pin
#define DIP_SWITCH_PINS_RIGHT { E6 }
#define DIP_SWITCH_PINS { E6 }

/** LED MATRIX CONFIG **/
// #define LED_DRIVER_COUNT 2
// #define LED_DRIVER_ADDR_1 0b1110100
// #define LED_DRIVER_ADDR_2 0b1110111
// #define LED_DRIVER_1_LED_TOTAL 36
// #define LED_DRIVER_2_LED_TOTAL 36
// #define LED_MATRIX_LED_COUNT (LED_DRIVER_1_LED_TOTAL + LED_DRIVER_2_LED_TOTAL)
// /* number of backlight levels */
// //#define BACKLIGHT_LEVELS 3
// //#define LED_BRIGHTNESS_LO       100
// //#define LED_BRIGHTNESS_HI       255
// #define LED_DISABLE_WHEN_USB_SUSPENDED
// #define ENABLE_LED_MATRIX_BAND
