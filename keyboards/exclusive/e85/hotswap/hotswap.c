<<<<<<< HEAD
/* Copyright 2019
=======
/* Copyright 2020 MechMerlin
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

<<<<<<< HEAD
<<<<<<< HEAD:keyboards/exclusive/e85/hotswap/hotswap.c
#include "hotswap.h"
=======
#pragma once
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/atreus/feather/feather.h
=======
#include "hotswap.h"

void keyboard_pre_init_kb(void) {
    setPinOutput(C7);
    setPinOutput(B5);

    keyboard_pre_init_user();
}

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        writePin(C7, led_state.caps_lock);
        writePin(B5, led_state.scroll_lock);
    }
    return true;
}
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
