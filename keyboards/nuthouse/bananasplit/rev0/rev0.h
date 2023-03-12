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

#include "bananasplit.h"

#include "quantum.h"

/* Left half
 *
 * 	K42, K41, K40,        K05, K04, K03, K02, K01, K00
 * 	K45, K44, K43,        K15, K14, K13, K12, K11, K10
 *           K52,             K25, K24, K23, K22, K21, K20
 * 	K55, K54, K53         K35, K34, K33, K32, K31, K30
 *          	    	                               K51, K50
 */


#define LAYOUT( \
	L42, L41, L40,        L05, L04, L03, L02, L01, L00,		R00, R01, R02, R03, R04, R05,        R40, R41, R42,	\
  	L45, L44, L43,        L15, L14, L13, L12, L11, L10,             R10, R11, R12, R13, R14, R15,	     R43, R44, R45,     \
             L52,             L25, L24, L23, L22, L21, L20,		R20, R21, R22, R23, R24, R25,             R52,          \
 	L55, L54, L53,        L35, L34, L33, L32, L31, L30,             R30, R31, R32, R33, R34, R35,        R53, R54, R55,     \
                	                               L51, L50,   R50, R51     \
        ) \
        { \
    { L05, L04, L03, L02, L01, L00 }, \
    { L15, L14, L13, L12, L11, L10 }, \
    { L25, L24, L23, L22, L21, L20 }, \
    { L35, L34, L33, L32, L31, L30 }, \
    { L45, L44, L43, L42, L41, L40 }, \
    { L55, L54, L53, L52, L51, L50 }, \
    { R05, R04, R03, R02, R01, R00 }, \
    { R15, R14, R13, R12, R11, R10 }, \
    { R25, R24, R23, R22, R21, R20 }, \
    { R35, R34, R33, R32, R31, R30 }, \
    { R45, R44, R43, R42, R41, R40 }, \
    { R55, R54, R53, R52, R51, R50 }, \
}
