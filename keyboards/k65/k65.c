#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {  13,  12,  11,  10,   9,   8,   7,   6,   5,   4,   3,   2,   1,   0 },
    {  27,  26,  25,  24,  23,  22,  21,  20,  19,  18,  17,  16,  15,  14 },  
    {  40,  39,  38,  37,  36,  35,  34,  33,  32,  31,  30,  29,  28, NO_LED },  
    {  NO_LED, 52,  51,  50,  49,  48,  47,  46,  45,  44,  43,  42,  41, NO_LED},  
    {  60,  59,  58, NO_LED,  57,  NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 56,  55,  54,  53,   }
}, {
    { 208,  16 }, { 192,  16 }, { 176,  16 }, { 160,  16 }, { 144,  16 }, { 128,  16 }, { 112,  16 }, {  96,  16 },
    {  80,  16 }, {  64,  16 }, {  48,  16 }, {  32,  16 }, {  16,  16 }, {   0,  16 },  

    { 208,  32 }, { 192,  32 }, { 176,  32 }, { 160,  32 }, { 144,  32 }, { 128,  32 }, { 112,  32 }, {  96,  32 },
    {  80,  32 }, {  64,  32 }, {  48,  32 }, {  32,  32 }, {  16,  32 }, {   0,  32 },  

    { 208,  48 }, { 192,  48 }, { 176,  48 }, { 160,  48 }, { 144,  48 }, { 128,  48 }, { 112,  48 }, {  96,  48 },
    {  80,  48 }, {  64,  48 }, {  48,  48 }, {  32,  48 }, {  16,  48 },               

    { 208,  64 }, { 192,  64 }, { 176,  64 }, { 160,  64 }, { 144,  64 }, { 128,  64 }, { 112,  64 }, {  96,  64 },
    {  80,  64 }, {  64,  64 }, {  48,  64 }, {  32,  64 },                             

    { 208,  80 }, { 192,  80 }, { 176,  80 }, { 160,  80 }, { 144,  80 }, { 128,  80 }, { 112,  80 }, {  96,  80 }  
}, {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,   
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,   
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,      
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,         
    1, 1, 1, 1, 1, 1, 1, 1                      
} };

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(40, 255, 255, 255);
    } 
    // else {
    //     RGB_MATRIX_INDICATOR_SET_COLOR(40, 0, 0, 0);
    // }

    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_WHITE);
                }
            }
        }
    }
    return false;
}

#endif
