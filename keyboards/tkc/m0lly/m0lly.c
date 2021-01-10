<<<<<<< HEAD
/* Copyright 2017 Mathias Andersson <wraul@dbox.se>
=======
/* Copyright 2020 Matthew Tso (zoo)
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "m0lly.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "led.h"

void keyboard_pre_init_kb(void) {
  setPinInputHigh(D0);
  setPinInputHigh(D1);

  keyboard_pre_init_user();
}

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    led_init_ports();
    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

void led_init_ports(void) {
	DDRD |= (1<<2) | (1<<3) | (1<<4); // OUT
	DDRB |= (1<<7); // OUT
	PORTB |= (1<<7);
}

void led_set_kb(uint8_t usb_led) {
//    led_set_user(usb_led);
	if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        // Turn numlock on
		PORTD |= (1<<2);
    } else {
        // Turn numlock off
	    PORTD &= ~(1<<2);
    }
	if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // Turn capslock on
		PORTD |= (1<<3);
    } else {
        // Turn capslock off
		PORTD &= ~(1<<3);
    }
	if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
        // Turn scrolllock on
	    PORTD |= (1<<4);
    } else {
        // Turn scrolllock off
		PORTD &= ~(1<<4);
    }
}
=======

=======

<<<<<<< HEAD:keyboards/zoo/wampus/wampus.c
#include "wampus.h"
#ifdef OLED_DRIVER_ENABLE

void board_init(void) {
    SYSCFG->CFGR1 |= SYSCFG_CFGR1_I2C1_DMA_RMP;
    SYSCFG->CFGR1 &= ~(SYSCFG_CFGR1_SPI2_DMA_RMP);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

#endif
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
void keyboard_pre_init_kb(void) {
    setPinInputHigh(D0);
    setPinInputHigh(D1);

    setPinOutput(B7);
    writePinHigh(B7);

    keyboard_pre_init_user();
}
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> dontTouch/master
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
>>>>>>> UpdateQMK
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/tkc/m0lly/m0lly.c
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
