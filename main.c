/* 
 * Open-BLDC Firmware, Firmware for BrushLess Drive Controllers
 * Copyright (C) 2009 Piotr Esden-Tempski <piotr at esden.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#include <avr/interrupt.h>

#include "led.h"
#include "bldc.h"
#include "timer.h"

int main(void){
    
    led_init();

    timer_init();

    bldc_init();

    sei();

    bldc_run();

    while(1) __asm__("nop");

    return 0;
}
