#pragma once
#include QMK_KEYBOARD_H
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

   // clang-format off
#define LAYOUT_ferris_wrapper(...)   LAYOUT(__VA_ARGS__)


#define RAISE LT(_RAISE, KC_SPC)
#define LOWER LT(_LOWER, KC_BSPC)

#define HOME_A GUI_T(KC_A)
#define HOME_S ALT_T(KC_S)
#define HOME_H CTL_T(KC_H)
#define HOME_T SFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_O RALT_T(KC_O)
#define HOME_I RGUI_T(KC_I)

#define C_HOME_A GUI_T(KC_A)
#define C_HOME_R ALT_T(KC_R)
#define C_HOME_S CTL_T(KC_S)
#define C_HOME_T SFT_T(KC_T)
#define C_HOME_N RSFT_T(KC_N)
#define C_HOME_E RCTL_T(KC_E)
#define C_HOME_I RALT_T(KC_I)
#define C_HOME_O RGUI_T(KC_O)

enum layers{
    _ALPHA = 0,   // default
    _LOWER,
    _RAISE,
    _ADJUST,
};

typedef enum {
    ENDW  = SAFE_RANGE,
    SAVEI
}custom_keycodes;


// stolen from drashna
#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define _________________WORKMAN_L1________________       KC_Q,    KC_D,    KC_R,   KC_W,     KC_B
#define _________________WORKMAN_L2________________       HOME_A,  HOME_S,  HOME_H, HOME_T,   KC_G
#define _________________WORKMAN_L3________________       KC_Z,    KC_X,    KC_M,   KC_C,     KC_V

#define _________________WORKMAN_R1________________       KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN
#define _________________WORKMAN_R2________________       KC_Y,    HOME_N,  HOME_E,  HOME_O,  HOME_I
#define _________________WORKMAN_R3________________       KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLASH

#define _________________COLEMAK_L1________________       KC_Q,     KC_W,     KC_F,     KC_P,     KC_B
#define _________________COLEMAK_L2________________       C_HOME_A, C_HOME_R, C_HOME_S, C_HOME_T, KC_G
#define _________________COLEMAK_L3________________       KC_Y,     KC_X,     KC_C,     KC_D,     KC_V

#define _________________COLEMAK_R1________________       KC_J,     KC_L,     KC_U,     KC_Z,     KC_SCLN
#define _________________COLEMAK_R2________________       KC_M,     C_HOME_N, C_HOME_E, C_HOME_I, C_HOME_O
#define _________________COLEMAK_R3________________       KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLASH

#define ____THUMB_L____ KC_TAB, RAISE
#define ____THUMB_R____ LOWER, KC_ENT


/* Lower layer
 *
 * ,-----------------------------.        ,-----------------------------.
 * |  1  |  2  |  3  |  4  |  5  |        |  6  |  7  |  8  |  9  |  0  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  $  |  +  |  (  |  )  |  @  |        |  |  |  -  |  =  |  _  |  *  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  !  |  #  |  {  |  }  |  ~  |        |  &  |  [  |  ]  |  %  |  ^  |
 * `-----------------------------'        `-----------------------------'
 */
#define _________________SYMBOL_L1_________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________SYMBOL_L2_________________       KC_DLR,  KC_PLUS, KC_LPRN, KC_RPRN, KC_AT
#define _________________SYMBOL_L3_________________       KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_TILD

#define _________________SYMBOL_R1_________________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________SYMBOL_R2_________________       KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, KC_ASTR
#define _________________SYMBOL_R3_________________       KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC


/* Raise/nav
 * ,-----------------------------.          ,-----------------------------.
 * |     |Word |     |     |Back |          |Down |Right|     |     |     |
 * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
 * |Home |PGUP |PGDN | End |     |          |     |     |ENDW |     |     |
 * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
 * |     |     |     |     | Del |          | Up  |Left |     |     |     |
 * `-----------------------------'	        `-----------------------------'
 */
#define _________________NAV_L1____________________       _______, C(KC_RGHT), _______, _______, C(KC_LEFT)
#define _________________NAV_L2____________________       KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______
#define _________________NAV_L3____________________       _______, _______, _______, _______, KC_DEL

#define _________________NAV_R1____________________       KC_DOWN, KC_RGHT, _______, _______, _______
#define _________________NAV_R2____________________       _______, _______, ENDW,    _______, _______
#define _________________NAV_R3____________________       KC_UP,   KC_LEFT, _______, _______, _______

/* Adjust/whatever
 * ,-----------------------------.          ,-----------------------------.
 * | F1  | F2  | F3  | F4  | F5  |          | F6  | F7  | F8  | F9  | F10 |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | F11 |     |     |     |     |          |     |     |     |     | F12 |
 * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
 * |     |     |     | Wrk | Gm  |          |     |     |     |     |     |
 * `-----------------------------'	        `-----------------------------'
 */

#define _________________ADJUST_L1_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________ADJUST_L2_________________       KC_F11,  _______, _______, _______, _______
#define _________________ADJUST_L3_________________       _______, _______, _______, _______, DT_PRNT // DF(_ALPHA), DF(_GAME)

#define _________________ADJUST_R1_________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________ADJUST_R2_________________       DT_UP,   _______, _______, _______, KC_F12
#define _________________ADJUST_R3_________________       DT_DOWN, _______, _______, _______, _______

