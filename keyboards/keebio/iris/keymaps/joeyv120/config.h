/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

#pragma once

// #define USE_I2C
#define EE_HANDS

// Enable Lighting Layers
// #define RGBLIGHT_LAYERS

// https://www.all8.com/tools/bpm.htm
#define TAPPING_TERM 200

// Remove some features to save space
// https://docs.qmk.fm/#/feature_rgblight
// #undef RGBLED_NUM
// #undef RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_BREATHING
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8

// Not defined	If defined, the RGB lighting will be switched off when the host goes to sleep
#define RGBLIGHT_SLEEP

// 	If defined, synchronization functionality for split keyboards is added
#define RGBLIGHT_SPLIT 