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

#include "bananasplit.h"

#ifdef LED_MATRIX_ENABLE 
const is31_led PROGMEM g_is31_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *    driver
 *    |  LED address
 *    |  | */
//-----------------------------------------------------------------------------------------
// Left half
//-----------------------------------------------------------------------------------------
//  k00             k01             k02             k03             k04             k05
    { 0, C1_1  },  { 0, C1_2  },  { 0, C1_3  },  { 0, C1_4  },  { 0, C1_5  },  { 0, C1_6  },
//  k10             k11             k12             k13             k14             k15
    { 0, C2_1  },  { 0, C2_2  },  { 0, C2_3  },  { 0, C2_4  },  { 0, C2_5  },  { 0, C2_6  },
//  k20             k21             k22             k23             k24             k25
    { 0, C3_1  },  { 0, C3_2  },  { 0, C3_3  },  { 0, C3_4  },  { 0, C3_5  },  { 0, C3_6  },
//  k30             k31             k32             k33             k34             k35
    { 0, C4_1  },  { 0, C4_2  },  { 0, C4_3  },  { 0, C4_4  },  { 0, C4_5  },  { 0, C4_6  },
//  k40             k41             k42             k43             k44             k45
    { 0, C5_1  },  { 0, C5_2  },  { 0, C5_3  },  { 0, C5_4  },  { 0, C5_5  },  { 0, C5_6  },
//  k50             k51             k52             k53             k54             k55
    { 0, C6_1  },  { 0, C6_2  },  { 0, C6_3  },  { 0, C6_4  },  { 0, C6_5  },  { 0, C6_6  },
//-----------------------------------------------------------------------------------------
// Right half
//-----------------------------------------------------------------------------------------
    { 1, C1_1  },  { 1, C1_2  },  { 1, C1_3  },  { 1, C1_4  },  { 1, C1_5  },  { 1, C1_6  },
    { 1, C2_1  },  { 1, C2_2  },  { 1, C2_3  },  { 1, C2_4  },  { 1, C2_5  },  { 1, C2_6  },
    { 1, C3_1  },  { 1, C3_2  },  { 1, C3_3  },  { 1, C3_4  },  { 1, C3_5  },  { 1, C3_6  },
    { 1, C4_1  },  { 1, C4_2  },  { 1, C4_3  },  { 1, C4_4  },  { 1, C4_5  },  { 1, C4_6  },
    { 1, C5_1  },  { 1, C5_2  },  { 1, C5_3  },  { 1, C5_4  },  { 1, C5_5  },  { 1, C5_6  },
    { 1, C6_1  },  { 1, C6_2  },  { 1, C6_3  },  { 1, C6_4  },  { 1, C6_5  },  { 1, C6_6  }
};
// Key matrix
//    { L05, L04, L03, L02, L01, L00 },
//    { L15, L14, L13, L12, L11, L10 },
//    { L25, L24, L23, L22, L21, L20 },
//    { L35, L34, L33, L32, L31, L30 },
//    { L45, L44, L43, L42, L41, L40 },
//    { L55, L54, L53, L52, L51, L50 },
//    { R05, R04, R03, R02, R01, R00 },
//    { R15, R14, R13, R12, R11, R10 },
//    { R25, R24, R23, R22, R21, R20 },
//    { R35, R34, R33, R32, R31, R30 },
//    { R45, R44, R43, R42, R41, R40 },
//    { R55, R54, R53, R52, R51, R50 }
//}
led_config_t g_led_config = {
    {
        // Key Matrix to LED Index -- needs to be reversed in x axis
        // Left half
        {      5,      4,      3,      2,      1,      0 },
        {     11,     10,      9,      8,      7,      6 },
        {     17,     16,     15,     14,     13,     12 },
        {     23,     22,     21,     20,     19,     18 },
        {     29,     28,     27,     26,     25,     24 },
        {     35,     34,     33,     32,     31,     30 },
        // Right half
        {     41,     40,     39,     38,     37,     36 },
        {     47,     46,     45,     44,     43,     42 },
        {     53,     52,     51,     50,     49,     48 },
        {     59,     58,     57,     56,     55,     54 },
        {     65,     64,     63,     62,     61,     60 },
        {     71,     70,     69,     68,     67,     66 }
    }, {
        // LED Index to Physical Position (assumes a 1U gap between halves)
	// Left half
	{96, 47}, {84, 48}, {73, 50}, {62, 48}, {51, 45}, {40, 45}, 
	{96, 36}, {84, 37}, {73, 39}, {62, 37}, {51, 34}, {40, 34}, 
	{96, 25}, {84, 26}, {73, 28}, {62, 26}, {51, 23}, {40, 23}, 
	{96, 13}, {84, 15}, {73, 16}, {62, 15}, {51, 12}, {40, 12}, 
	{22, 45}, {11, 45}, {0, 45}, {22, 34}, {11, 34}, {0, 34}, 
	{106, 0}, {93, 0}, {11, 23}, {22, 12}, {11, 12}, {0, 12}, 
	// Right half
	{128, 47}, {140, 48}, {151, 50}, {162, 48}, {173, 45}, {184, 45}, 
	{128, 36}, {140, 37}, {151, 39}, {162, 37}, {173, 34}, {184, 34}, 
	{128, 25}, {140, 26}, {151, 28}, {162, 26}, {173, 23}, {184, 23}, 
	{128, 13}, {140, 15}, {151, 16}, {162, 15}, {173, 12}, {184, 12}, 
	{202, 45}, {213, 45}, {224, 45}, {202, 34}, {213, 34}, {224, 34}, 
	{118, 0}, {131, 0}, {213, 23}, {202, 12}, {213, 12}, {224, 12} 
   }, {
        // LED Index to Flag
        // Left half
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        // Right half (mirrored)
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4
   }
};
#endif

//----------------------------------------------------------------------------------------------------
// Encoder
//----------------------------------------------------------------------------------------------------
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
      return false; /* Don't process further events if user function exists and returns false */
    }
    switch (index) {
        case 0:
            if(clockwise){ 
                tap_code_delay(KC_VOLU, 30); 
            } else{ 
                tap_code_delay(KC_VOLD, 30); 
            }
            break;
        case 1:
            // if (clockwise) { tap_code_delay(KC_BRIU, 10); } else { tap_code_delay(KC_BRID, 10); } 
            if(clockwise){ 
                tap_code_delay(KC_VOLU, 30); 
            } else{ 
                tap_code_delay(KC_VOLD, 30); 
            }
            break;
    }
    return true;
}

//----------------------------------------------------------------------------------------------------
// Encoder Dip Switch
//----------------------------------------------------------------------------------------------------
// Both sides keep track of the slave state through this variable
static bool dip_switch_slave_state = false;

// This function is called by dip_switch_read, which is continally invoked on the master side, but has
// to be explicitly called on the slave side
bool dip_switch_update_kb(uint8_t index, bool active) { 
    // If we are on the slave side, then simply update the global variable and return
    if(!is_keyboard_master()){
        dip_switch_slave_state = active;
        return true;
    }
    
    // Otherwise, we are on the master side. Call the user code.
    if(!dip_switch_update_user((uint8_t)isLeftHand, active)){
        return false;
    } 
        
    // Keyboard-level behavior for the dipswitch does nothing
    return true;
}

// This handler on the slave side gets invoked by a transaction intiated from the master's side. 
// It just reads the slave's dip state and sends it over to the master
void keyboard_sync_dip_slave_handler(uint8_t in_buflen, const void* in_data, uint8_t out_buflen, void* out_data){
    dip_switch_read(false);
    *(bool*)out_data = dip_switch_slave_state;
}

void keyboard_post_init_kb(void) {
    // Initialize the communication between master and slave for synchronizing the dip switch state
    transaction_register_rpc(KEYBOARD_SYNC_DIP, keyboard_sync_dip_slave_handler);
    // Initialize the caps lock LED at keyboard startup
    rgblight_disable();
    if(host_keyboard_led_state().caps_lock) {
        rgblight_enable();
    }
    keyboard_post_init_user();
}

// This function is periodically run. The slave dip switch state synchronization is initiated on
// the master's side
void housekeeping_task_kb(void) {
    // Synchronize at most once every 100 ms
    static uint32_t last_sync = 0;
    if(is_keyboard_master() && timer_elapsed32(last_sync) > 100){
        bool received_slave_state = false;
        if(transaction_rpc_recv(KEYBOARD_SYNC_DIP, sizeof(bool), &received_slave_state)){           
            last_sync = timer_read32();
            // Only update the dip switch status on the master side if it's different on the slave side
            if(dip_switch_slave_state != received_slave_state){
                // This code is executed on the master's side, so isLeftHand needs to be negated for the slave
                dip_switch_update_user((uint8_t)!isLeftHand, received_slave_state);
                dip_switch_slave_state = received_slave_state;
            }
        }
    }
}

// Caps lock LED handling
bool led_update_kb(led_t led_state) {
    bool run = led_update_user(led_state);
    if(run) {
        // toggle if current state of led and caps lock are different
        if(led_state.caps_lock != rgblight_is_enabled()) {
            rgblight_toggle();
        }
    }
    return run;
}
