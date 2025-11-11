/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum layers {
    _BASE,
    _SYM,
    _NUM,
    _NAV,
    _GAME,
    _QWERTY
};

#define SFT_AREP LSFT_T(KC_0)
#define ALGR_REP ALGR_T(KC_1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    SE_B,    SE_L,    SE_D,    SE_W,    SE_Z,                      SE_QUOT,    SE_F,    SE_O,    SE_U,    SE_J,   TO(4),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  LCTL_T(KC_ESC),LGUI_T(SE_N),LALT_T(SE_R),LCTL_T(SE_T),LT(1,SE_S),SE_G,         SE_Y,LT(1,SE_H),LCTL_T(SE_A),LALT_T(SE_E),LGUI_T(SE_I),QK_AREP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       OSL(1),    SE_Q,    SE_X,    SE_M,LT(2,SE_C),  SE_V,                      SE_K,LT(2,SE_P), SE_COMM,  SE_DOT, SE_MINS, KC_RALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         OSL(3),LAG_T(KC_SPC),KC_LGUI,    QK_AREP, LSFT_T(KC_BSPC), RALT_T(KC_ENT)
                                      //`--------------------------'  `--------------------------'

  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      SE_SECT, SE_HALF,  SE_DLR, SE_AMPR, SE_PERC, XXXXXXX,                      SE_DQUO, SE_PLUS, SE_SLSH, SE_UNDS, SE_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, SE_LABK, SE_LBRC, SE_LCBR, SE_LPRN,   SE_AT,                      SE_HASH,  SE_EQL, SE_ASTR, SE_SCLN, SE_COLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, SE_RABK, SE_RBRC, SE_RCBR, SE_RPRN, XXXXXXX,                      SE_EURO, SE_MINS, SE_PIPE, SE_CIRC, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            TO(0),  KC_SPC, SE_TILD,     KC_DEL,  KC_ENT, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        TO(0), XXXXXXX,   KC_F8,   KC_F8,   KC_F9,  KC_F10,                      XXXXXXX,    SE_7,    SE_8,    SE_9, XXXXXXX,   TO(3),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        TO(1), XXXXXXX,   KC_F4,   KC_F5,   KC_F6,  KC_F11,                      XXXXXXX,    SE_4,    SE_5,    SE_6, XXXXXXX,   TO(4),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+------ -|
        TO(2), XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F12,                      XXXXXXX,    SE_1,    SE_2,    SE_3, XXXXXXX,   TO(5),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            TO(0),  KC_SPC, _______,    KC_BSPC,  KC_ENT,    SE_0
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_PGDN, KC_PGUP, KC_PSCR, KC_CAPS, XXXXXXX,                      XXXXXXX, SE_ADIA, SE_ODIA, SE_ARNG, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_INS, KC_HOME,LGUI(KC_PSCR), CW_TOGG, XXXXXXX,                 XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP,KC_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,  KC_END, XXXXXXX, XXXXXXX, XXXXXXX,                      MS_BTN2, MS_LEFT, MS_DOWN,   MS_UP,MS_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            TO(0),  KC_SPC, _______,    MS_BTN1, MS_WHLD, MS_WHLU
                                      //`--------------------------'  `--------------------------'
  ),

  [_GAME] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    SE_1,    SE_Q,    SE_W,    SE_E,    SE_R,                         SE_Y,    SE_U,    SE_I,    SE_O,   SE_F,    TO(0),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    SE_2,    SE_A,    SE_S,    SE_D,    SE_F,                         SE_H,    SE_J,    SE_K,    SE_L, SE_SCLN, SE_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    SE_3,    SE_Z,    SE_X,    SE_C,    SE_V,                         SE_N,    SE_M,    SE_G,    SE_P, SE_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  KC_SPC, _______,    KC_BSPC,    SE_T,  KC_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,                         SE_Y,    SE_U,    SE_I,    SE_O,   SE_P,  SE_ARNG,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC,    SE_A,    SE_S,    SE_D,    SE_F,    SE_G,                         SE_H,    SE_J,    SE_K,    SE_L, SE_ODIA, SE_ADIA,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,                         SE_N,    SE_M, SE_COMM,  SE_DOT, SE_MINS, SE_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            TO(0),  KC_SPC, _______,    KC_BSPC, KC_LSFT,  KC_ENT
                                      //`--------------------------'  `--------------------------'

  )
};

const uint16_t PROGMEM exlm_combo[] = {SE_M, LT(2,SE_C), COMBO_END};
const uint16_t PROGMEM ques_combo[] = {SE_COMM, LT(2,SE_P), COMBO_END};
combo_t key_combos[] = {
    COMBO(exlm_combo, SE_EXLM),
    COMBO(ques_combo, SE_QUES),
};

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
  // Don't remember these keys themselves
  if (keycode == SFT_AREP || keycode == ALGR_REP) {
    return false;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case SFT_AREP:  // Shift on hold, ALTERNATE repeat on tap
      if (record->tap.count) {
        alt_repeat_key_invoke(&record->event);  // Alternate repeat
        return false;
      }
      break;

    case ALGR_REP:  // AltGr on hold, REGULAR repeat on tap
      if (record->tap.count) {
        repeat_key_invoke(&record->event);  // Regular repeat
        return false;
      }
      break;
  }

  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LAG_T(KC_SPC):
        case LSFT_T(KC_BSPC):
        case RALT_T(KC_ENT):
            return 140;
        default:
            return TAPPING_TERM;
    }
}

// ALT+LGUI + HAEI movement
// const key_override_t h_left_override = ko_make_basic(MOD_MASK_AG, LT(1, SE_H), KC_LEFT);
// const key_override_t a_down_override = ko_make_basic(MOD_MASK_AG, LCTL_T(SE_A), KC_DOWN);
// const key_override_t e_up_override = ko_make_basic(MOD_MASK_AG, LALT_T(SE_E), KC_UP);
// const key_override_t i_right_override = ko_make_basic(MOD_MASK_AG, LGUI_T(SE_I), KC_RGHT);

// ALT+LGUI + FOU for Swedish letters
const key_override_t f_adia_override = ko_make_basic(MOD_MASK_AG, SE_F, SE_ADIA);
const key_override_t o_odia_override = ko_make_basic(MOD_MASK_AG, SE_O, SE_ODIA);
const key_override_t u_arng_override = ko_make_basic(MOD_MASK_AG, SE_U, SE_ARNG);

const key_override_t *key_overrides[] = {
    // &h_left_override,
    // &a_down_override,
    // &e_up_override,
    // &i_right_override,
    &f_adia_override,
    &o_odia_override,
    &u_arng_override,
    NULL // Array must be NULL-terminated
};

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  switch (keycode) {
        case SE_B: return SE_R;
        case SE_Q: return SE_U;
        case SE_K: return SE_Y;
        case SE_M: return SE_B;
        case LGUI_T(SE_N): return SE_G;
        case LALT_T(SE_R): return SE_L;
        case LCTL_T(SE_T): return SE_M;
        case LT(1, SE_S): return SE_C;
        case LT(2, SE_C): return SE_K;
        case SE_G: return SE_S;
        case SE_Y: return SE_P;
        case LT(2, SE_P): return SE_H;
        case LT(1, SE_H): return SE_Y;
        case LCTL_T(SE_A): return SE_O;
        case LALT_T(SE_E): return SE_U;
        case LGUI_T(SE_I): return SE_I;
        case SE_O: return SE_K;
        case SE_F: return SE_Y;
        case SE_DOT: return SE_SLSH;
        case SE_U: return SE_E;
        case SE_W: return SE_S;
        case LAG_T(KC_SPC): case SE_MINS: case SE_UNDS: {
          set_oneshot_mods(MOD_BIT(KC_RSFT));
          return KC_NO;
        };
    }
    return keycode;  // Defer to default definitions.
}

bool is_flow_tap_key(uint16_t keycode) {
    if ((get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) != 0) {
        return false; // Disable Flow Tap on hotkeys.
    }

    // Exclude specific layer-tap and mod-tap keys
    switch (keycode) {
        case LAG_T(KC_SPC):
        case LSFT_T(KC_BSPC):
        case RALT_T(KC_ENT):
            return false;        // Disable Flow Tap for these keys
    }

    switch (get_tap_keycode(keycode)) {
        case KC_SPC:
        case SE_A ... SE_Z:
        case SE_DOT:
        case SE_COMM:
        case SE_SCLN:
        case SE_SLSH:
            return true;
    }
    return false;
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record,
                           uint16_t prev_keycode) {
    if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
        switch (keycode) {
            case LT(1,SE_S):
            case LT(1,SE_H):
            case LT(2,SE_C):
            case LT(2,SE_P):
                return 50;  // Short timeout for these keys

            default:
                return FLOW_TAP_TERM;  // Use global timeout (150ms) for others
        }
    }
    return 0;  // Disable Flow Tap
}

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
    // Allow one-handed chords for these keys
    switch (tap_hold_keycode) {
        case LAG_T(KC_SPC):
        case LSFT_T(KC_BSPC):
        case RALT_T(KC_ENT):
            return true;  // Allow chordal hold even on same hand
    }

    // For all other keys, use the default opposite hands rule
    return get_chordal_hold_default(tap_hold_record, other_record);
}


#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // LEFT SIDE - Layer state only
        oled_write_P(PSTR("\n"), false);
        oled_write_P(PSTR(" LAYER\n"), false);
        oled_write_P(PSTR(" -----\n"), false);

        switch (get_highest_layer(layer_state)) {
            case _BASE:
                oled_write_P(PSTR("  BASE\n"), false);
                break;
            case _SYM:
                oled_write_P(PSTR(" SYMBOL\n"), false);
                break;
            case _NUM:
                oled_write_P(PSTR("  NUM\n"), false);
                break;
            case _NAV:
                oled_write_P(PSTR("  NAV\n"), false);
                break;
            case _GAME:
                oled_write_P(PSTR("  GAME\n"), false);
                break;
            case _QWERTY:
                oled_write_P(PSTR(" QWERTY\n"), false);
                break;
        }
    } else {
        // RIGHT SIDE - WPM and Caps Lock
        oled_write_P(PSTR("\n"), false);
    }
    return false;
}
#endif // OLED_ENABLE

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
