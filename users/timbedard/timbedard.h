#pragma once
#include QMK_KEYBOARD_H

// 7-char grid components
#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________COLEMAK_L1________________        KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________        KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2________________        KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________        KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define ______________COLEMAK_MOD_DH_L1____________        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ______________COLEMAK_MOD_DH_L2____________        KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define ______________COLEMAK_MOD_DH_L3____________        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define ______________COLEMAK_MOD_DH_R1____________        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ______________COLEMAK_MOD_DH_R2____________        KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define ______________COLEMAK_MOD_DH_R3____________        KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH


#define ________________NUMBER_LEFT________________        KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________        KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define ______NUMPAD_7_9_______                            KC_7,   KC_8,   KC_9
#define ______NUMPAD_4_6_______                            KC_4,   KC_5,   KC_6
#define ______NUMPAD_1_3_______                            KC_1,   KC_2,   KC_3

#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ____________FUNC_1_4____________                  KC_F1,   KC_F2,   KC_F3,   KC_F4,
#define ____________FUNC_5_8____________                  KC_F5,   KC_F6,   KC_F7,   KC_F8,
#define ____________FUNC_9_12___________                  KC_F9,  KC_F10,  KC_F11,  KC_F12,


#define ___________________BLANK___________________     _______, _______, _______, _______, _______


#define _________________LOWER_L1__________________     KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________     _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________     _________________FUNC_RIGHT________________

#define _________________LOWER_R1__________________     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________     _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________     _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT



#define _________________RAISE_L1__________________     ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________     ___________________BLANK___________________
#define _________________RAISE_L3__________________     ___________________BLANK___________________

#define _________________RAISE_R1__________________     ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________     _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC
#define _________________RAISE_R3__________________     _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END



#define _________________ADJUST_L1_________________     RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG
#define _________________ADJUST_L2_________________     MU_TOG , CK_TOGG, AU_ON,   AU_OFF,  CG_NORM
#define _________________ADJUST_L3_________________     RGB_RMOD,RGB_HUD,RGB_SAD, RGB_VAD, KC_RGB_T

#define _________________ADJUST_R1_________________     KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5
#define _________________ADJUST_R2_________________     CG_SWAP,  QWERTY, COLEMAK,  DVORAK, WORKMAN
#define _________________ADJUST_R3_________________     MG_NKRO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT

// 4-char grid components
#define _______QWERTY_L1______                            KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _______QWERTY_L2______                            KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _______QWERTY_L3______                            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _______QWERTY_R1______                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _______QWERTY_R2______                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _______QWERTY_R3______                            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _____NUMBER_LEFT______                            KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _____NUMBER_RIGHT_____                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define ___NUMPAD_7_9___                                  KC_7,   KC_8,   KC_9
#define ___NUMPAD_4_6___                                  KC_4,   KC_5,   KC_6
#define ___NUMPAD_1_3___                                  KC_1,   KC_2,   KC_3


#define ______FUNC_LEFT_______                            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define ______FUNC_RIGHT______                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define _______FUNC_1_4_______                            KC_F1,   KC_F2,   KC_F3,   KC_F4,
#define _______FUNC_5_8_______                            KC_F5,   KC_F6,   KC_F7,   KC_F8,
#define _______FUNC_9_12______                            KC_F9,  KC_F10,  KC_F11,  KC_F12,


#define ________BLANK_________                          _______, _______, _______, _______, _______
