#include "keymap.h"
#include <zmk/keymap.h>
#include <zmk/keymap_layers.h>

ZMK_KEYMAP_LAYER(LAYER_BASE) = {
    { KC_A, KC_B, KC_C }  // map your three keys
};

ZMK_KEYMAP_EXPORT();
