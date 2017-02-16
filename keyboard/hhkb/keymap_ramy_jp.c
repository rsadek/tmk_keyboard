/* 
 * HHKB JP Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer */
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN3,QUOT,FN5,BSPC, \
              FN0,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,  UP,  FN0, \
              FN0, LALT,LGUI,FN2 ,FN1,    SPC,  BSPC, RCTL,RALT,RGUI, LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */ 
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    // Layer 2: HHKB mode (HHKB Fn)
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,LEFT,DOWN,RIGHT,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    // Layer 3: HHKB mode (HHKB Fn)
     KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,LEFT,DOWN,RIGHT,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    // Layer 4: HHKB mode (HHKB Fn)
      KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,LEFT,DOWN,RIGHT,LEFT,RGHT,FN4,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    // Layer 5: HHKB mode (HHKB Fn)
       KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,LEFT,DOWN,RIGHT,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    // Layer 6: HHKB mode (HHKB Fn)
        KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,LEFT,DOWN,RIGHT,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,RSFT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
//    [1] = ACTION_LAYER_TAP_KEY(2, KC_SLASH),          // Cursor layer with Slash*
    [1] = ACTION_MODS(MOD_LALT | MOD_LGUI),          // Cursor layer with Slash*
//    [2] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),           // Mousekey layer with Semicolon*
    [2] = ACTION_MODS(MOD_LALT | MOD_LGUI | MOD_LSFT),          // Cursor layer with Slash*  
    [3] = ACTION_LAYER_TAP_KEY(4, KC_SCLN),            // Mousekey layer with Space
//    [4] = ACTION_LAYER_MOMENTARY(4),                  // Mousekey layer(IJKL)
        [4] = ACTION_LAYER_TAP_KEY(0, KC_SCLN),                  // Mousekey layer(IJKL)
    [5] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // RControl with tap Enter
  //  [6] = ACTION_MODS_ONESHOT(MOD_LSFT),              // Oneshot Shift
 //   [7] = ACTION_MACRO(ALT_TAB),                      // Application switching
 //   [8] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),
 //   [9] = ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),

};
