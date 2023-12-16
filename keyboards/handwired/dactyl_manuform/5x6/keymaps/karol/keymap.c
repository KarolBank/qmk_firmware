
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , _______ ,
    _______ , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , _______ ,
    _______ , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     LOWER   , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  ),
  [_RAISE] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , _______ ,
    _______ , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , _______ ,
    _______ , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     LOWER   , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  ),
  [_LOWER] = LAYOUT_5x6(
    _______ , _______ , _______ , _______ , _______ , _______ ,         _______ , _______ , _______ , _______ , _______ , _______ ,
    _______ , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,         KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , _______ ,
    _______ , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,         KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , _______ ,
    _______ , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,         KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , _______ ,
                        _______ , _______ ,                                                 _______ , _______ ,
                                              KC_SPC  , RAISE   ,     LOWER   , KC_RALT ,
                                              _______ , KC_LSFT ,     KC_RSFT , _______ ,
                                              _______ , _______ ,     _______ , _______
  )
};

