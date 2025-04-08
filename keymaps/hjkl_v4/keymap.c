#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5
};

// https://ergosplits.com/blog/hrm
// https://docs.qmk.fm/mod_tap
// Right-hand home row mods
#define J_RCTL RCTL_T(KC_J)
#define K_RSFT RSFT_T(KC_K)
#define L_LALT LALT_T(KC_L)
#define SCLN_RGUI RGUI_T(KC_SCLN)
#define SPC_RALT RALT_T(KC_SPC)
#define LBRC_RALT RALT_T(KC_LBRC)
#define RBRC_SAGR SAGR_T(KC_RBRC)
//#define SPC_SHFT MT(MOD_LSFT, KC_SPC)


 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,           KC_7,           KC_8,         KC_9,       KC_0,           KC_MINS,
    KC_GRV,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,           KC_U,           KC_I,         KC_O,       KC_P,           KC_MINS,
    KC_LGUI,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               KC_H,           J_RCTL,         K_RSFT,       L_LALT,     SCLN_RGUI,      KC_QUOT,
    KC_TAB,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,           KC_M,           LBRC_RALT,    RBRC_SAGR,  KC_COMM,        KC_DOT,
    _______,    _______,    KC_EQL,     KC_CAPS,    MO(1),      KC_LSFT,            LT(1, KC_SPC),  MO(1),          KC_WBAK,      KC_WFWD,    MO(2),          _______,
    _______,    _______,    MO(3),      SPC_RALT,   KC_LCTL,    KC_LALT,            C(KC_RGHT),     KC_RALT,        C(KC_DOWN),   C(KC_UP),   C(KC_LEFT),     _______
),
[_LAYER1] = LAYOUT(
    KC_PSCR,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,               _______,        _______,        _______,      _______,     _______,       _______,
    _______,    KC_PSLS,    KC_P7,      KC_P8,      KC_P9,      KC_PMNS,            KC_HOME,        KC_PGDN,        KC_PGUP,      KC_END,      KC_PAUSE,      _______,
    _______,    KC_PAST,    KC_P4,      KC_P5,      KC_P6,      KC_PPLS,            KC_LEFT,        KC_DOWN,        KC_UP,        KC_RGHT,     _______,       _______,
    _______,    KC_P0,      KC_P1,      KC_P2,      KC_P3,      KC_COMM,            KC_BSPC,        KC_ENT,         KC_BSLS,      KC_DEL,      _______,       KC_SLSH,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,        _______,        KC_VOLD,      KC_VOLU,     _______,       _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,        _______,        _______,      _______,     _______,       _______
),
[_LAYER2] = LAYOUT(
    _______,    _______,    _______,    DM_PLY1,    _______,    _______,            _______,        _______,        DM_PLY1,      DM_PLY2,     _______,       _______,
    _______,    _______,    KC_F7,      KC_F8,      KC_F9,      _______,            KC_ESC,         KC_WH_D,        KC_WH_U,      KC_APP,      A(KC_F4),      _______,
    _______,    _______,    KC_F4,      KC_F5,      KC_F6,      KC_PENT,            C(KC_C),        KC_MS_BTN1,     KC_MS_BTN3,   KC_MS_BTN2,  C(KC_W),       A(KC_TAB),
    _______,    KC_F10,     KC_F1,      KC_F2,      KC_F3,      KC_DOT,             KC_BSPC,        KC_ENT,         C(KC_V),      KC_DEL,      C(KC_X),       _______,
    _______,    _______,    KC_F11,     KC_F12,     _______,    _______,            _______,        MO(3),          C(KC_Z),      C(KC_Y),     _______,       _______,
    _______,    _______,    _______,    _______,    _______,    _______,            _______,        _______,        _______,      _______,     _______,       _______
),
[_LAYER3] = LAYOUT(
    KC_NUM,     DM_REC1,    DM_REC2,    _______,    _______,    DM_RSTP,            _______,        _______,        _______,      _______,     _______,       KC_PWR,
    _______,    _______,    KC_PSCR,    KC_SCRL,    KC_PAUS,    _______,            _______,        _______,        KC_INS,       _______,     _______,       KC_SLEP,
    KC_RGUI,    _______,    _______,    _______,    _______,    _______,            KC_LEFT,        KC_DOWN,        KC_UP,        KC_RGHT,     _______,       _______,
    QK_BOOT,    _______,    _______,    KC_CALC,    _______,    KC_PDOT,            C(KC_LEFT),     C(KC_DOWN),     C(KC_UP),     C(KC_RGHT),  DF(5),         DF(4),
    _______,    _______,    _______,    _______,    _______,    KC_RSFT,            _______,        _______,        KC_MPRV,      KC_MNXT,     _______,       _______,
    _______,    _______,    _______,    _______,    KC_RCTL,    KC_RALT,            _______,        _______,        _______,      _______,     _______,       _______
),
[_LAYER4] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,           KC_7,           KC_8,         KC_9,        KC_0,          _______,
    KC_GRV,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,           KC_U,           KC_UP,        KC_O,        KC_P,          KC_LBRC,
    KC_LGUI,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               KC_H,           KC_LEFT,        KC_DOWN,      KC_RGHT,     KC_SCLN,       KC_QUOT,
    KC_TAB,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,           KC_M,           KC_COMM,      KC_DOT,      KC_EQL,        KC_RBRC,
    _______,    _______,    KC_MINS,    KC_CAPS,    MO(1),      KC_LSFT,            KC_SPC,         MO(1),          KC_WBAK,      KC_WFWD,     DF(0),         _______,
    _______,    _______,    DF(0),      KC_SPC,     KC_LCTL,    KC_LALT,            _______,        _______,        _______,      _______,     _______,       _______
),
 [_LAYER5] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,           KC_7,           KC_8,         KC_9,       KC_0,           KC_MINS,
    KC_GRV,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,           KC_U,           KC_I,         KC_O,       KC_P,           KC_MINS,
    KC_LGUI,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               KC_H,           KC_MS_BTN1,     KC_MS_BTN3,   KC_MS_BTN2, SCLN_RGUI,      KC_QUOT,
    KC_TAB,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,           KC_M,           LBRC_RALT,    RBRC_SAGR,  KC_COMM,        KC_DOT,
    _______,    _______,    KC_EQL,     KC_CAPS,    MO(1),      KC_LSFT,            LT(1, KC_SPC),  MO(1),          KC_WBAK,      KC_WFWD,    _______,        _______,
    _______,    _______,    DF(0),      SPC_RALT,   KC_LCTL,    KC_LALT,            C(KC_RGHT),     KC_RALT,        C(KC_DOWN),   C(KC_UP),   C(KC_LEFT),     _______
)
};
