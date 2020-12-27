#include "nyquist.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _WORK 1
#define _SYMBOLS 2
#define _NUMBERS 3

#define _______ KC_TRNS
#define WRK  TG(_WORK)
#define NUM  MO(_NUMBERS)
#define SYM  MO(_SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT( \
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    TG(WRK), \
  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_NO,    KC_LALT, KC_LGUI, KC_BSPC, KC_SPC,  KC_ENT,  KC_TAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

[_WORK] = LAYOUT( \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, LT(NUM, KC_D), _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, GUI_T(KC_BSPC), LT(SYM, KC_SPC), CTL_T(KC_ENT), LALT_T(KC_TAB), _______, _______, _______,  _______  \
),

[_SYMBOLS] = LAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_AMPR, KC_DLR,  KC_UNDS, KC_MINS, KC_PPLS, KC_PAST, _______, \
  _______, KC_PERC, KC_HASH, KC_LPRN, KC_RPRN, KC_NO,   KC_PIPE, KC_LABK, KC_RABK, KC_PEQL, _______, _______, \
  _______, KC_GRV,  KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_BSLS, KC_SLSH, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
),

[_NUMBERS] = LAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, KC_PGUP, KC_7,    KC_8,    KC_9,    _______, _______, \
  _______, _______, _______, _______, _______, _______, KC_PGDOWN, KC_4,  KC_5,    KC_6,    _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    _______, _______, \
  _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______, _______  \
),

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}


