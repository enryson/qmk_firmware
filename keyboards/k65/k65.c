#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

/* Setting up the LED matrix */

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13 },  // Primeira linha (14 LEDs)
    {  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27 },  // Segunda linha (14 LEDs)
    {  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40, NO_LED },  // Terceira linha (13 LEDs)
    {  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52, NO_LED, NO_LED },  // Quarta linha (12 LEDs)
    {  53,  54,  55,  56,  57,  58,  59,  60, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED } // Quinta linha (8 LEDs)
}, {
    // LED Index to Physical Position
    {   0,  16 }, {  16,  16 }, {  32,  16 }, {  48,  16 }, {  64,  16 }, {  80,  16 }, {  96,  16 }, { 112,  16 }, 
    { 128,  16 }, { 144,  16 }, { 160,  16 }, { 176,  16 }, { 192,  16 }, { 208,  16 },  // Primeira linha (14 LEDs)

    {   0,  32 }, {  16,  32 }, {  32,  32 }, {  48,  32 }, {  64,  32 }, {  80,  32 }, {  96,  32 }, { 112,  32 }, 
    { 128,  32 }, { 144,  32 }, { 160,  32 }, { 176,  32 }, { 192,  32 }, { 208,  32 },  // Segunda linha (14 LEDs)

    {   0,  48 }, {  16,  48 }, {  32,  48 }, {  48,  48 }, {  64,  48 }, {  80,  48 }, {  96,  48 }, { 112,  48 }, 
    { 128,  48 }, { 144,  48 }, { 160,  48 }, { 176,  48 }, { 192,  48 },              // Terceira linha (13 LEDs)

    {   0,  64 }, {  16,  64 }, {  32,  64 }, {  48,  64 }, {  64,  64 }, {  80,  64 }, {  96,  64 }, { 112,  64 }, 
    { 128,  64 }, { 144,  64 }, { 160,  64 }, { 176,  64 },                             // Quarta linha (12 LEDs)

    {   0,  80 }, {  16,  80 }, {  32,  80 }, {  48,  80 }, {  64,  80 }, {  80,  80 }, {  96,  80 }, { 112,  80 }  // Quinta linha (8 LEDs)
}, {
    // LED Index to Flag
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,   // Primeira linha (14 LEDs)
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,   // Segunda linha (14 LEDs)
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,      // Terceira linha (13 LEDs)
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,         // Quarta linha (12 LEDs)
    1, 1, 1, 1, 1, 1, 1, 1                      // Quinta linha (8 LEDs)
} };


#endif
