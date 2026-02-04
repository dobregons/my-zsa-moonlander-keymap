
#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_CAPS,        KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LALT(KC_SPACE),                                 KC_DELETE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_ESCAPE,      MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),MT(MOD_LSFT, KC_G),TD(DANCE_0),                                                                    KC_BSPC,        MT(MOD_RSFT, KC_H),MT(MOD_RGUI, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RSFT, KC_SCLN),KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    TT(2),          TD(DANCE_1),    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_SPACE,                                                                                                       KC_ESCAPE,      MT(MOD_RGUI, KC_LBRC),MT(MOD_RALT, KC_RBRC),KC_RIGHT_CTRL,  KC_PGDN,        KC_PAGE_UP,
    KC_BSPC,        TT(1),          TT(3),                          TT(1),          KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          LALT(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RPRN,                                                                        KC_TRANSPARENT, LALT(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(KC_RIGHT), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_DOWN),  KC_PGDN,        KC_END,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_END,         KC_PGDN,        LALT(KC_DOWN),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                 MU_TOGG,        KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_DELETE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_VAI,        KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, RGB_TOG,
    TO(0),          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                 RGB_VAD,        LCTL(KC_LEFT),  KC_F4,          KC_F5,          KC_F6,          RCTL(KC_RIGHT), KC_SYSTEM_SLEEP,
    KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MS_BTN2,     KC_MS_BTN1,     KC_TRANSPARENT,                                 TO(4),          KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, TD(DANCE_2),    KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     TO(0),                                                                                                          TO(0),          KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,                                        KC_UNDS,        KC_AMPR,        KC_KP_ASTERISK, KC_LPRN,        KC_RPRN,        KC_KP_SLASH,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_CIRC,        KC_AT,          KC_UP,          KC_EXLM,        KC_DLR,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSPC,        KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_PIPE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_RABK,        KC_AT,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_KP_ENTER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS,                                        KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          TO(0),          KC_0,           ST_MACRO_1,     KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {173,218,204}, {0,245,245}, {214,230,165}, {167,218,204}, {24,218,255}, {173,218,204}, {220,228,255}, {173,218,204}, {89,255,255}, {24,218,255}, {173,218,204}, {220,228,255}, {173,218,204}, {214,230,165}, {24,218,255}, {173,218,204}, {220,228,255}, {173,218,204}, {214,230,165}, {24,218,255}, {173,218,204}, {41,249,250}, {173,218,204}, {220,228,255}, {24,218,255}, {173,218,204}, {173,218,204}, {173,218,204}, {24,218,255}, {89,255,255}, {173,218,204}, {220,228,255}, {0,249,250}, {173,218,204}, {220,228,255}, {173,218,204}, {173,218,204}, {173,218,204}, {89,255,255}, {139,249,255}, {173,218,204}, {173,218,204}, {220,228,255}, {173,218,204}, {139,249,255}, {24,218,255}, {173,218,204}, {220,228,255}, {173,218,204}, {214,230,165}, {24,218,255}, {173,218,204}, {220,228,255}, {173,218,204}, {214,230,165}, {24,218,255}, {173,218,204}, {41,249,250}, {173,218,204}, {220,228,255}, {24,218,255}, {173,218,204}, {173,218,204}, {173,218,204}, {0,0,255}, {173,218,204}, {220,228,255}, {220,228,255}, {87,249,250}, {0,249,250}, {0,249,250} },

    [1] = { {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {55,218,204}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {170,84,255}, {21,227,255}, {170,84,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {89,255,255}, {21,227,255}, {21,227,255}, {0,249,250}, {21,227,255}, {0,249,250}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {87,249,250}, {21,227,255}, {21,227,255}, {21,227,255}, {93,218,204}, {0,249,250}, {93,218,204}, {21,227,255}, {220,228,255}, {0,249,250}, {0,249,250}, {220,228,255}, {21,227,255}, {21,227,255}, {170,84,255}, {0,249,250}, {170,84,255}, {21,227,255}, {21,227,255}, {21,227,255}, {87,249,250}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {21,227,255}, {0,249,250} },

    [2] = { {24,218,255}, {0,0,0}, {0,0,0}, {0,249,250}, {220,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {40,249,250}, {89,255,255}, {0,0,0}, {85,203,158}, {93,218,204}, {60,249,250}, {0,0,0}, {0,249,250}, {93,218,204}, {93,218,204}, {0,0,0}, {139,249,255}, {41,249,250}, {85,203,158}, {93,218,204}, {0,0,0}, {139,249,255}, {60,249,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {220,112,255}, {220,228,255}, {220,228,255}, {0,0,0}, {220,228,255}, {139,249,255}, {0,0,0}, {0,249,250}, {24,218,255}, {0,0,0}, {0,0,0}, {2,218,204}, {0,0,0}, {0,0,0}, {24,218,255}, {24,218,255}, {24,218,255}, {24,218,255}, {0,0,0}, {24,218,255}, {24,218,255}, {24,218,255}, {24,218,255}, {0,0,0}, {24,218,255}, {24,218,255}, {24,218,255}, {24,218,255}, {34,249,250}, {0,0,0}, {0,0,0}, {2,218,204}, {173,218,204}, {0,0,0}, {220,112,255}, {220,85,255}, {79,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {85,203,158}, {42,227,255}, {42,227,255}, {42,227,255}, {85,203,158}, {85,203,158}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {85,203,158}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {87,249,250}, {42,227,255}, {42,227,255}, {220,228,255}, {220,228,255}, {220,228,255}, {220,228,255}, {42,227,255}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {42,227,255}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {60,249,250}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {42,227,255}, {42,227,255}, {42,227,255}, {32,176,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255}, {42,227,255} },

    [4] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,218,204}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_RIGHT));
        tap_code16(LCTL(KC_RIGHT));
        tap_code16(LCTL(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_RIGHT));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_RIGHT)); register_code16(LCTL(KC_RIGHT));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_RIGHT)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE))SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_L)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_0)SS_DELAY(100)  SS_TAP(X_KP_0));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}
