#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
                          KC_NO,   KC_NO,   KC_2,    KC_3,    KC_2,    KC_5,    KC_NO,
                          KC_ESC,  KC_1,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,
                          KC_TAB,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,
                          KC_CAPS, KC_A,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,
                          KC_LSFT, KC_Z,    KC_LBRC, KC_RBRC, KC_LCTL, KC_LWIN, KC_UP,
                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_LEFT,
                          KC_6,    KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO,   KC_NO,
                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_0,    KC_DEL,  KC_NO,
                          KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_LBRC, KC_NO,
                          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_DEL,  KC_NO,
                          KC_DOWN, KC_RSFT, KC_BSPC, KC_LBRC, KC_RBRC, KC_DOT,  KC_DEL,
                          KC_RGHT, KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};
