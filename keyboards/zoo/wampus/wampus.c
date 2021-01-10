/* Copyright 2020 Matthew Tso (zoo)
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
#include "m0lly.h"

<<<<<<< HEAD:keyboards/zoo/wampus/wampus.c
=======

>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
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
<<<<<<< HEAD
=======
void keyboard_pre_init_kb(void) {
    setPinInputHigh(D0);
    setPinInputHigh(D1);

    setPinOutput(B7);
    writePinHigh(B7);

    keyboard_pre_init_user();
}
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445:keyboards/tkc/m0lly/m0lly.c
=======
>>>>>>> acdcc622028a7c8e6ec086a5da2bff67fd137445
