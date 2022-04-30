#pragma once
#include QMK_KEYBOARD_H
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

   // clang-format off
#define LAYOUT_venc0r_wrapper(...)   LAYOUT(__VA_ARGS__)


#define RAISE LT(_RAISE, KC_SPC)
#define SHIFT LSFT_T(KC_SPC)
#define LOWER LT(_LOWER, KC_BSPC)
#define CTRL  LCTL_T(KC_BSPC)

#define HOME_A GUI_T(KC_A)
#define HOME_S ALT_T(KC_S)
#define HOME_H CTL_T(KC_H)
#define HOME_T SFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E CTL_T(KC_E)
#define HOME_O RALT_T(KC_O)
#define HOME_I RGUI_T(KC_I)

#define C_HOME_A GUI_T(KC_A)
#define C_HOME_R ALT_T(KC_R)
#define C_HOME_S CTL_T(KC_S)
#define C_HOME_T SFT_T(KC_T)
#define C_HOME_N RSFT_T(KC_N)
#define C_HOME_E CTL_T(KC_E)
#define C_HOME_I RALT_T(KC_I)
#define C_HOME_O RGUI_T(KC_O)

#define DEGREE RSA(KC_SCLN)
#define EURO RALT(KC_5)
#define WORDJ C(KC_RGHT)
#define WORDJB C(KC_LEFT)
#define BSPCW C(KC_W)
#define DELWRD C(KC_DEL)

#define ST_CTAB LCTL_T(KC_TAB)
#define ST_SSPC SFT_T(KC_SPC)
#define ST_CENT LCTL_T(KC_ENT)
#define ST_SBSP SFT_T(KC_BSPC)

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


/* COLEMAK layer
 *
 * ,-----------------------------.        ,-----------------------------.
 * |  q  |  w  |  f  |  p  |  b  |        |  j  |  l  |  u  |  z  |  ;  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * | w^a | a^r | c^s | s^t |  g  |        |  m  | s^n | c^e | a^i | w^o |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * |  y  |  x  |  c  |  d  |  v  |        |  k  |  h  |  ,  |  .  |  /  |
 * `-----------------------------'        `-----------------------------'
 */
#define _________________COLEMAK_L1________________       KC_Q,     KC_W,     KC_F,     KC_P,     KC_B
#define _________________COLEMAK_L2________________       C_HOME_A, C_HOME_R, C_HOME_S, C_HOME_T, KC_G
#define _________________COLEMAK_L3________________       KC_Y,     KC_X,     KC_C,     KC_D,     KC_V

#define _________________COLEMAK_R1________________       KC_J,     KC_L,     KC_U,     KC_Z,     KC_SCLN
#define _________________COLEMAK_R2________________       KC_M,     C_HOME_N, C_HOME_E, C_HOME_I, C_HOME_O
#define _________________COLEMAK_R3________________       KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLASH


/* Thumb keys sweep  ,-----------.        ,-----------.
 *                   | TAB | SPC |        | BSP | ENT |
 *                   `-----------'        `-----------'
 */
#define ____THUMB_L____ KC_TAB, RAISE
#define ____THUMB_R____ LOWER, KC_ENT


/* Lower layer
 *
 * ,-----------------------------.        ,-----------------------------.
 * |  1! |  2@ |  3# |  4$ |  5% |        |  6^ |  7& |  8* |  9( |  0) |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * | ESC |  `  |  [  |  ]  |  +  |        |  |  |  -  |  =  |  _  |  €  |
 * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 * | TAB |  °  |  {  |  }  |  ~  |        |  '  |  "  |  *  |  %  |  \  |
 * `-----------------------------'        `-----------------------------'
 */
#define _________________SYMBOL_L1_________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________SYMBOL_L2_________________       KC_ESC,  KC_GRV,  KC_LBRC, KC_RBRC, KC_PLUS
#define _________________SYMBOL_L3_________________       KC_TAB,  DEGREE,  KC_LCBR, KC_RCBR, KC_TILD

#define _________________SYMBOL_R1_________________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________SYMBOL_R2_________________       KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, EURO
#define _________________SYMBOL_R3_________________       KC_QUOT, KC_DQT,  KC_ASTR, KC_PERC, KC_BSLS

/* Raise/nav
 * ,-----------------------------.          ,-----------------------------.
 * |     |Word |     |     |Back |          |Down |Right|  7  |  8  |  9  |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | ESC |     |PGUP |BSPCW|DelW |          |     |  0  |  4  |  5  |  6  |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | TAB |Home |PGDN | End | Del |          | Up  |Left |  1  |  2  |  3  |
 * `-----------------------------'          `-----------------------------'
 */
#define _________________NAV_L1____________________       _______, WORDJ,   _______, _______, WORDJB
#define _________________NAV_L2____________________       KC_ESC,  _______, KC_PGDN, BSPCW,   DELWRD
#define _________________NAV_L3____________________       KC_TAB,  KC_HOME, KC_PGUP, KC_END,  KC_DEL

#define _________________NAV_R1____________________       KC_DOWN, KC_RGHT, KC_7,    KC_8,    KC_9
#define _________________NAV_R2____________________       _______, KC_0,    KC_4,    KC_5,    KC_6
#define _________________NAV_R3____________________       KC_UP,   KC_LEFT, KC_1,    KC_2,    KC_3


/* Adjust/whatever
 * ,-----------------------------.          ,-----------------------------.
 * | F1  | F2  | F3  | F4  | F5  |          | F6  | F7  | F8  | F9  | F10 |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * | F11 |     |     |     |     |          | DT_U|     |     |     | F12 |
 * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
 * |     |     |     |     | DT  |          | DT_D|     |     |     |     |
 * `-----------------------------'          `-----------------------------'
 */
#define _________________ADJUST_L1_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________ADJUST_L2_________________       KC_F11,  _______, _______, _______, _______
#define _________________ADJUST_L3_________________       _______, _______, _______, _______, DT_PRNT // DF(_ALPHA), DF(_GAME)

#define _________________ADJUST_R1_________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _________________ADJUST_R2_________________       DT_UP,   _______, _______, _______, KC_F12
#define _________________ADJUST_R3_________________       DT_DOWN, _______, _______, _______, _______


/* COLEMAK sofle layer
 *
 * ,-----------------------------------.                    ,-----------------------------------.
 * | `   |  1  |  2  |  3  |  4  |  5  |                    |  6  |  7  |  8  |  9  |  0  |     |
 * |-----+-----+-----+-----+-----+-----|                    |-----+-----+-----+-----+-----+-----|
 * |     |  q  |  w  |  f  |  p  |  b  |                    |  j  |  l  |  u  |  z  |  ;  |     |
 * |-----+-----+-----+-----+-----+-----|                    |-----+-----+-----+-----+-----+-----|
 * | ESC | w^a | a^r | c^s | s^t |  g  |                    |  m  | s^n | c^e | a^i | w^o |ALTGr|
 * |-----+-----+-----+-----+-----+-----+-----.        ,-----+-----+-----+-----+-----+-----+-----|
 * | TAB |  y  |  x  |  c  |  d  |  v  |MUTE |        | FCK |  h  |  h  |  ,  |  .  |  /  | ' " |
 * `-----------------------------------------'        `-----------------------------------------'
 */
/* Thumb keys sofle
 *          ,-----------------------------.              ,-----------------------------.
 *          |     | ALT |TAB/C|SPC/L|SPC/S|              |BSP/S|BSP/R|ENT/C|ALTGr|     |
 *          `-----------------------------'              `-----------------------------'
 */
#define _______________S_COLEMAK_L0________________       _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _______________S_COLEMAK_L1________________       _______, _________________COLEMAK_L1________________
#define _______________S_COLEMAK_L2________________       _______, _________________COLEMAK_L2________________
#define _______________S_COLEMAK_L3________________       _______, _________________COLEMAK_L3________________, _______
#define __S_THUMB_L____                                                     KC_LGUI, KC_LALT, ST_CTAB,   RAISE, ST_SSPC

#define _______________S_COLEMAK_R0________________                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______
#define _______________S_COLEMAK_R1________________                _________________COLEMAK_R1________________, _______
#define _______________S_COLEMAK_R2________________                _________________COLEMAK_R2________________, _______
#define _______________S_COLEMAK_R3________________       _______, _________________COLEMAK_R3________________, _______
#define __S_THUMB_R____                                   ST_SBSP,   LOWER, ST_CENT, KC_RALT, _______

#define __S_THUMB_N____                                   _______,  _______, _______,  _______,  _______

/* LOWER sofle layer
 *
 * ,-----------------------------------.                     ,-----------------------------------.
 * |     |     |     |     |     |     |                     |     |     |     |     |     |     |
 * |-----+-----+-----+-----+-----+-----|                     |-----+-----+-----+-----+-----+-----|
 * |     |  !  |  @  |  #  |  $  |  %  |                     |  ^  |  &  |  *  |  (  |  )  |     |
 * |-----+-----+-----+-----+-----+-----|                     |-----+-----+-----+-----+-----+-----|
 * |     | ESC |  `  |  [  |  ]  |  +  |                     |  |  |  -  |  =  |  _  |  €  |     |
 * |-----+-----+-----+-----+-----+-----+-----.         ,-----+-----+-----+-----+-----+-----+-----|
 * |     | TAB |  °  |  {  |  }  |  ~  |     |         |     |  '  |  "  |  *  |  %  |  \  |     |
 * `-----------------------------------------'         `-----------------------------------------'
 */
#define _______________S_SYMBOL_L0_________________       _______, _______, _______, _______, _______, _______
#define _______________S_SYMBOL_L1_________________       _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5)
#define _______________S_SYMBOL_L2_________________       _______, _________________SYMBOL_L2_________________
#define _______________S_SYMBOL_L3_________________       _______, _________________SYMBOL_L3_________________, _______

#define _______________S_SYMBOL_R0_________________                _______, _______, _______, _______, _______, _______
#define _______________S_SYMBOL_R1_________________                S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______
#define _______________S_SYMBOL_R2_________________                _________________SYMBOL_R2_________________, _______
#define _______________S_SYMBOL_R3_________________       _______, _________________SYMBOL_R3_________________, _______


/* RAISE sofle layer
 *
 * ,-----------------------------------.                      ,-----------------------------------.
 * |     |     |     |     |     |     |                      |     |     |     |     |     |     |
 * |-----+-----+-----+-----+-----+-----|                      |-----+-----+-----+-----+-----+-----|
 * |     |     |Word |     |     |Back |                      |Down |Right|  7  |  8  |  9  |     |
 * |-----+-----+-----+-----+-----+-----|                      |-----+-----+-----+-----+-----+-----|
 * |     | ESC |     |PGUP |BSPCW|DelW |                      |     |  0  |  4  |  5  |  6  |     |
 * |-----+-----+-----+-----+-----+-----+-----.          ,-----|-----+-----+-----+-----+-----+-----|
 * |     | TAB |Home |PGDN | End | Del |     |          |     | Up  |Left |  1  |  2  |  3  |     |
 * `-----------------------------------------'          `-----`-----------------------------------'
 */
#define _______________S_NAV_L0____________________       _______, _______, _______, _______, _______, _______
#define _______________S_NAV_L1____________________       _______, _________________NAV_L1____________________
#define _______________S_NAV_L2____________________       _______, _________________NAV_L2____________________
#define _______________S_NAV_L3____________________       _______, _________________NAV_L3____________________, _______

#define _______________S_NAV_R0____________________                _______, _______, _______, _______, _______, _______
#define _______________S_NAV_R1____________________                _________________NAV_R1____________________, _______
#define _______________S_NAV_R2____________________                _________________NAV_R2____________________, _______
#define _______________S_NAV_R3____________________       _______, _________________NAV_R3____________________, _______


/* Adjust/whatever sofle layer
 * ,-----------------------------------.                      ,-----------------------------------.
 * |     | F1  | F2  | F3  | F4  | F5  |                      | F6  | F7  | F8  | F9  | F10 |     |
 * |-----+-----+-----+-----+-----+-----|                      |-----+-----+-----+-----+-----+-----|
 * |     | F11 |     |     |     |     |                      |     |     |     |     | F12 |     |
 * |-----+-----+-----+-----+-----+-----|                      |-----+-----+-----+-----+-----+-----|
 * |     |     |     |     |     |     |                      | DT_U| V+  |     |     |     |     |
 * |-----+-----+-----+-----+-----+-----+-----.          ,-----|-----+-----+-----+-----+-----+-----|
 * |     |     |     |     |     | DT  |     |          |     | DT_D| V-  |     |     |     |     |
 * `-----------------------------------------'          `-----------------------------------------'
 */
#define _______________S_ADJUST_L0_________________       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _______________S_ADJUST_L1_________________       _______, KC_F11,  _______, _______, _______, RGB_VAI
#define _______________S_ADJUST_L2_________________       _______, _______, _______, _______, _______, RGB_VAD
#define _______________S_ADJUST_L3_________________       _______, _______, _______, _______, _______, DT_PRNT, _______ // DF(_ALPHA), DF(_GAME)

#define _______________S_ADJUST_R0_________________                KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______
#define _______________S_ADJUST_R1_________________                RGB_MOD, _______, _______, _______, KC_F12,  _______
#define _______________S_ADJUST_R2_________________                DT_UP,   KC_VOLU, _______, _______, _______, _______
#define _______________S_ADJUST_R3_________________       _______, DT_DOWN, KC_VOLD, _______, _______, _______, _______

