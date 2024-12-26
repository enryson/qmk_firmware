// Copyright 2022 Arturo Avila (@ADPenrose)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

/* Setting up the LED matrix */

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {   0,   1,   2,   3 },  // Primeira linha da matriz (associada aos LEDs 0 a 3)
    {   4,   5,   6,   7 },  // Segunda linha (LEDs 4 a 7)
    {   8,   9,  10,  11 },  // Terceira linha (LEDs 8 a 11)
    {  12,  13, NO_LED, NO_LED } // Última linha (LEDs 12 e 13)
}, {
    // LED Index to Physical Position
    {   0,  16 }, // LED 0
    {  16,  16 }, // LED 1
    {  32,  16 }, // LED 2
    {  48,  16 }, // LED 3
    {  64,  16 }, // LED 4
    {  80,  16 }, // LED 5
    {  96,  16 }, // LED 6
    { 112,  16 }, // LED 7
    { 128,  16 }, // LED 8
    { 144,  16 }, // LED 9
    { 160,  16 }, // LED 10
    { 176,  16 }, // LED 11
    { 192,  16 }, // LED 12
    { 208,  16 }  // LED 13
}, {
    // LED Index to Flag
    1, 1, 1, 1,   // LEDs 0 a 3 (ativados para camada 1)
    1, 1, 1, 1,   // LEDs 4 a 7
    1, 1, 1, 1,   // LEDs 8 a 11
    1, 1          // LEDs 12 e 13
} };

#endif
