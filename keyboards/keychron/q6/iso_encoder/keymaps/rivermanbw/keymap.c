/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};
// Define the mod-tap keys for the home row
#define HOME_A LGUI_T(KC_A)  // A acts as GUI (Cmd/Win) when held
#define HOME_S LALT_T(KC_S)  // S acts as Alt when held
#define HOME_D LSFT_T(KC_D)  // D acts as Shift when held
#define HOME_F LCTL_T(KC_F)  // F acts as Ctrl when held

#define HOME_J RCTL_T(KC_J)  // J acts as Ctrl when held
#define HOME_K RSFT_T(KC_K)  // K acts as Shift when held
#define HOME_L RALT_T(KC_L)  // L acts as Alt when held
#define HOME_COMM RGUI_T(KC_COMM)  // , acts as GUI (Cmd/Win) when held

// Zum Flashen der q6 Tastatur: USB-C Kabel ziehen, ESC gedrückt halten und USB-C Kabel wieder einstecken.
// 07.04.2025: KC_CAPS ersetzt durch KC_ESC
// 08.04.2025: Key-Overrides https://docs.qmk.fm/features/key_overrides
// 09.04.2025: Bei Problemen mit den Keymappings auf Remote Desktop Verbindungen: Eigenschaften der .rdp-Datei öffnen, "Lokale Ressourcen", Tastatur "Auf diesem Computer" einstellen!

const key_override_t switch_behavior_alt_1 = ko_make_basic(MOD_MASK_ALT, S(KC_1), KC_1); // Alt+1 == 1
const key_override_t switch_behavior_alt_2 = ko_make_basic(MOD_MASK_ALT, S(KC_2), KC_2); // Alt+2 == 2
const key_override_t switch_behavior_alt_3 = ko_make_basic(MOD_MASK_ALT, S(KC_3), KC_3); // Alt+3 == 3
const key_override_t switch_behavior_alt_4 = ko_make_basic(MOD_MASK_ALT, S(KC_4), KC_4); // Alt+4 == 4
const key_override_t switch_behavior_alt_5 = ko_make_basic(MOD_MASK_ALT, S(KC_5), KC_5); // Alt+5 == 5
const key_override_t switch_behavior_alt_6 = ko_make_basic(MOD_MASK_ALT, S(KC_6), KC_6); // Alt+6 == 6
const key_override_t switch_behavior_shift_7 = ko_make_basic(MOD_MASK_SHIFT, S(KC_7), ALGR(KC_7)); // ALGR(7) == AltGr+7
const key_override_t switch_behavior_alt_7 = ko_make_basic(MOD_MASK_ALT, S(KC_7), KC_7); // Alt+7 == 7
const key_override_t switch_behavior_shift_8 = ko_make_basic(MOD_MASK_SHIFT, S(KC_8), ALGR(KC_8)); // ALGR(8) == AltGr+8
const key_override_t switch_behavior_alt_8 = ko_make_basic(MOD_MASK_ALT, S(KC_8), KC_8); //  Alt+8 == 8
const key_override_t switch_behavior_shift_9 = ko_make_basic(MOD_MASK_SHIFT, S(KC_9), ALGR(KC_9)); // ALGR(9) == AltGr+9
const key_override_t switch_behavior_alt_9 = ko_make_basic(MOD_MASK_ALT, S(KC_9), KC_9); // Alt+9 == 9
const key_override_t switch_behavior_shift_0 = ko_make_basic(MOD_MASK_SHIFT, S(KC_0), ALGR(KC_0)); // ALGR(0) == AltGr+0
const key_override_t switch_behavior_alt_0 = ko_make_basic(MOD_MASK_ALT, S(KC_0), KC_0); // Alt+0 == 0
const key_override_t switch_behavior_shift_sz = ko_make_basic(MOD_MASK_SHIFT, S(KC_MINS), ALGR(KC_MINS)); // mit Shift+ß wird \ geschrieben
const key_override_t switch_behavior_alt_sz = ko_make_basic(MOD_MASK_ALT, S(KC_MINS), KC_MINS); // mit Alt+ß wird ß geschrieben ALGR(ß) == ß
// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
    &switch_behavior_alt_1 ,
    &switch_behavior_alt_2 ,
    &switch_behavior_alt_3 ,
    &switch_behavior_alt_4 ,
    &switch_behavior_alt_5 ,
    &switch_behavior_alt_6 ,
    &switch_behavior_shift_7 ,
    &switch_behavior_alt_7 ,
    &switch_behavior_shift_8 ,
    &switch_behavior_alt_8 ,
    &switch_behavior_shift_9 ,
    &switch_behavior_alt_9 ,
    &switch_behavior_shift_0 ,
    &switch_behavior_alt_0 ,
    &switch_behavior_shift_sz ,
    &switch_behavior_alt_sz ,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [MAC_BASE] = LAYOUT_iso_110(
    //     KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,  KC_NO,    KC_NO,    RM_NEXT,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
    //     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
    //     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,              KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
    //     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,    KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
    //     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
    //     KC_LCTL,  KC_LOPT,  KC_LCMD ,                               KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    //     MAC_BASE ist das Standard Windows Layout
    [MAC_BASE] = LAYOUT_iso_110(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  KC_NO,    RM_NEXT,  _______,  _______,  _______,  _______,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,              KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_COMM,  KC_QUOT,  KC_NUHS,    KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_SCLN,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [MAC_FN] = LAYOUT_iso_110(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RM_TOGG,  _______,  _______,  RM_TOGG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                                _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
    [WIN_BASE] = LAYOUT_iso_110(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  KC_NO,    RM_NEXT,  _______,  _______,  _______,  _______,
        KC_GRV,   S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  S(KC_MINS),  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,              KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_ESC,   HOME_A,   HOME_S,   HOME_D,   HOME_F,   KC_G,     KC_H,     HOME_J,   HOME_K,   HOME_L,   HOME_COMM,KC_QUOT,  KC_NUHS,    KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_SCLN,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_FN] = LAYOUT_iso_110(
        _______,  KC_BRID,  KC_BRIU,  _______,  _______,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RM_TOGG,  _______,  _______,  RM_TOGG,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,                                _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU) }
};
#endif
