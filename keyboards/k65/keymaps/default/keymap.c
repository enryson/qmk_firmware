#include QMK_KEYBOARD_H

#define _BASE 0
#define RGB_TOGGLE_KEY KC_F

void matrix_scan_user(void) {
    if (is_pressing(KC_F)) { // A tecla F foi pressionada
        rgblight_mode_next(); // Alterna para o próximo efeito RGB
    }
}

// Layout físico do teclado (Layer 0 - Padrão)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0 - Padrão
    [0] = LAYOUT_ortho_5x14(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,
        KC_NO,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_NO,    KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(1),    KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    // Layer 1 - Funções e Multimídia
    [1] = LAYOUT_ortho_5x14(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE, KC_VOLU, KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PSCR, KC_NO,   KC_MPRV, KC_MPLY,  KC_MNXT,  KC_NO,    KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO
    )
};

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