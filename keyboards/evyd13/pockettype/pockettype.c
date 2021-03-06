<<<<<<< HEAD
/* Copyright 2019 Maarten Dekkers <maartenwut@gmail.com>
=======
/* Copyright 2019 Evy Dekkers
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
#include "pockettype.h"

void matrix_init_kb(void) {
	led_init_ports();
  
	matrix_init_user();
};

void led_init_ports(void) {
    // * Set our LED pins as output and high
    setPinOutput(F5);
    writePinHigh(F5);
    
    setPinOutput(F4);
    writePinLow(F4);
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(F5, !led_state.caps_lock);
    }

    return true;
}
