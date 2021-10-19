/*
Copyright 2020 noclew

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

#include "config_common.h"

/* USB Device descriptor parameter */
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD:keyboards/chili/config.h
#define VENDOR_ID       0x5945 // "YE"
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    YDKB
#define PRODUCT         Chili
#define DESCRIPTION     QMK keyboard firmware for Chili, a G80-3000 replacement PCB

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 10

// ROWS: Top to bottom, COLS: Left to right
/* Row pin configuration
*/
#define MATRIX_ROW_PINS { F5, F4, F1, F0, E6, B0, D5, D3, D2, D1, D0 }
/* Column pin configuration
 */
#define MATRIX_COL_PINS { D4, F6, F7, C7, C6, B6, B5, B4, D7, D6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B7
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
#define VENDOR_ID 0x9906
=======
#define VENDOR_ID 0x9906
<<<<<<< HEAD:keyboards/nckiibs/vaneelaex/config.h
#define PRODUCT_ID 0x0002
#define DEVICE_VER 0x0001
#define MANUFACTURER nckiibs
#define PRODUCT VaneelaEx

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, B2, B6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B5, B4, E6, D7, C6, D4 }
//#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0001
#define MANUFACTURER noclew
#define PRODUCT Vaneela

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F6, F7, B3, B2, B6 }
#define MATRIX_COL_PINS { F4, F5, B5, B4, E6, D7, C6, D4, D0, D1, D2, D3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/nckiibs/vaneela/config.h
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

<<<<<<< HEAD
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/nckiibs/vaneela/config.h

/* Underlight configuration
 */
#define RGB_DI_PIN B3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 30     // Number of LEDs
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 10

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

<<<<<<< HEAD:keyboards/chili/config.h
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/nckiibs/vaneela/config.h
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD:keyboards/chili/config.h
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
// #define GRAVE_ESC_CTRL_OVERRIDE
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/nckiibs/vaneela/config.h
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD:keyboards/chili/config.h
/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
//#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 1
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
// #define BOOTMAGIC_LITE_ROW 0
// #define BOOTMAGIC_LITE_COLUMN 0
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/nckiibs/vaneela/config.h
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
