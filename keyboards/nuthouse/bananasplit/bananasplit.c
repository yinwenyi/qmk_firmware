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
// left half
// K42, K41, K40,        K05, K04, K03, K02, K01, K00
// K45, K44, K43,        K15, K14, K13, K12, K11, K10
//      K52,             K25, K24, K23, K22, K21, K20
// K55, K54, K53         K35, K34, K33, K32, K31, K30
//        	    	                               K51, K50
    { 0, C1_1  }, // k00 
    { 0, C1_2  }, // k01
    { 0, C1_3  }, // k02
    { 0, C1_4  }, // k03
    { 0, C1_5  }, // k04
    { 0, C1_6  }, // k05
    { 0, C2_1  }, // k10
    { 0, C2_2  }, // k11
    { 0, C2_3  }, // k12
    { 0, C2_4  }, // k13
    { 0, C2_5  }, // k14
    { 0, C2_6  }, // k15
    { 0, C3_1  }, // k20
    { 0, C3_2  }, // k21
    { 0, C3_3  }, // k22
    { 0, C3_4  }, // k23
    { 0, C3_5  }, // k24
    { 0, C3_6  }, // k25
    { 0, C4_1  }, // k30
    { 0, C4_2  }, // k31
    { 0, C4_3  }, // k32
    { 0, C4_4  }, // k33
    { 0, C4_5  }, // k34
    { 0, C4_6  }, // k35
    { 0, C5_1  }, // k40
    { 0, C5_2  }, // k41
    { 0, C5_3  }, // k42
    { 0, C5_4  }, // k43
    { 0, C5_5  }, // k44
    { 0, C5_6  }, // k45
    { 0, C6_1  }, // k50
    { 0, C6_2  }, // k51
    { 0, C6_3  }, // k52
    { 0, C6_4  }, // k53
    { 0, C6_5  }, // k54
    { 0, C6_6  }, // k55
// right half
    { 1, C1_1  }, // k00 
    { 1, C1_2  }, // k01
    { 1, C1_3  }, // k02
    { 1, C1_4  }, // k03
    { 1, C1_5  }, // k04
    { 1, C1_6  }, // k05
    { 1, C2_1  }, // k10
    { 1, C2_2  }, // k11
    { 1, C2_3  }, // k12
    { 1, C2_4  }, // k13
    { 1, C2_5  }, // k14
    { 1, C2_6  }, // k15
    { 1, C3_1  }, // k20
    { 1, C3_2  }, // k21
    { 1, C3_3  }, // k22
    { 1, C3_4  }, // k23
    { 1, C3_5  }, // k24
    { 1, C3_6  }, // k25
    { 1, C4_1  }, // k30
    { 1, C4_2  }, // k31
    { 1, C4_3  }, // k32
    { 1, C4_4  }, // k33
    { 1, C4_5  }, // k34
    { 1, C4_6  }, // k35
    { 1, C5_1  }, // k40
    { 1, C5_2  }, // k41
    { 1, C5_3  }, // k42
    { 1, C5_4  }, // k43
    { 1, C5_5  }, // k44
    { 1, C5_6  }, // k45
    { 1, C6_1  }, // k50
    { 1, C6_2  }, // k51
    { 1, C6_3  }, // k52
    { 1, C6_4  }, // k53
    { 1, C6_5  }, // k54
    { 1, C6_6  }, // k55
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
	//Right half
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

// encoder mapping
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

static bool dip_switch = false;

bool dip_switch_update_kb(uint8_t index, bool active) { 
    if (!dip_switch_update_user(index, active)){ 
        return false; 
    }

    if(!is_keyboard_master()){
        dip_switch = active;
        return true;
    }

    // There is only a single dip switch, so index will always be 0
    if(active){
        register_code(KC_MUTE);
    } else{
        unregister_code(KC_MUTE);
    }

    // action_exec((keyevent_t){
    //     .key = (keypos_t){.row = isLeftHand ? 1 : 1, .col = 1},
    //     .pressed = active, .time = (timer_read() | 1) /* time should not be 0 */
    // });

    return true;
}

void keyboard_sync_dip_slave_handler(uint8_t in_buflen, const void* in_data, uint8_t out_buflen, void* out_data){
    dip_switch_read(false);
    *(bool*)out_data = dip_switch;
}

void keyboard_post_init_kb(void) {
    transaction_register_rpc(KEYBOARD_SYNC_DIP, keyboard_sync_dip_slave_handler);
    keyboard_post_init_user();
}

void housekeeping_task_kb(void) {
    if(is_keyboard_master()){
        static uint32_t last_sync = 0;
        if(timer_elapsed32(last_sync) > 100){
            bool slave_dip_status = 0;
            if(transaction_rpc_exec(KEYBOARD_SYNC_DIP, 0, NULL, sizeof(bool), &slave_dip_status)){           
                last_sync = timer_read32();

                if(dip_switch != slave_dip_status){
                    if(slave_dip_status){
                        register_code(KC_MUTE);
                        
                    } else{
                        unregister_code(KC_MUTE);
                    }
                    dip_switch = slave_dip_status;
                }
            }
        }
    }
}
