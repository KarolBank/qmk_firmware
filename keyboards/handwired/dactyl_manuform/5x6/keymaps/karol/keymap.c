
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _BOTH 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define BOTH MO(_BOTH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , _______ ,
    _______ , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_ENT  , _______ ,
    _______ , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_ESC  , KC_TAB  , KC_BSPC , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     LOWER   , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  ),
  [_LOWER] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_1    , KC_2    , KC_3    , KC_LCTL , KC_LALT ,         KC_LALT , KC_RCTL , _______ , _______ , _______ , _______ ,

    _______ , KC_4    , KC_5    , KC_6    , KC_LBRC , KC_RBRC ,         KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_ENT  , _______ ,
    _______ , KC_7    , KC_8    , KC_9    , KC_0    , KC_LGUI ,         KC_RGUI , KC_SLSH , KC_ESC  , KC_TAB  , KC_BSPC , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , BOTH    ,     LOWER   , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  ),
  [_RAISE] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_F1   , KC_F2   , KC_F3   , KC_LCTL , KC_LALT ,         KC_LALT , KC_RCTL , KC_MINS , KC_EQL  , KC_BSLS , _______ ,
    _______ , KC_F4   , KC_F5   , KC_F6   , KC_F11  , KC_F12  ,         KC_SCLN , KC_QUOT , KC_COMM , KC_DOT  , KC_ENT  , _______ ,
    _______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_LGUI ,         KC_RGUI , KC_GRV  , KC_ESC  , KC_TAB  , KC_BSPC , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     BOTH    , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  ),
  [_BOTH] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , _______ , _______ , _______ , KC_LCTL , KC_LALT ,         KC_LALT , KC_RCTL , _______ , _______ , _______ , _______ ,
    _______ , KC_LCAP , KC_PSCR , _______ , _______ , _______ ,         KC_HOME , KC_PGDN , KC_PGUP , KC_END  , _______ , _______ ,
    _______ , _______ , _______ , _______ , _______ , KC_LGUI ,         KC_RGUI , _______ , KC_ESC  , KC_TAB  , KC_DEL  , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     BOTH    , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  )
};

