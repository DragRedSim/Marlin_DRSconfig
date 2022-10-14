/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * CREALITY v4.2.7 (STM32F103RE / STM32F103RC) board pin assignments
 */

#define BOARD_INFO_NAME      "Creality v4.2.7"
#define DEFAULT_MACHINE_NAME "Creality3D"

//
// Steppers
// Note: all steppers have swapped STEP and DIR pins compared to 4.2.2 boards, due to differing pin layouts of the drivers used
//
#define X_STEP_PIN                          PB9
#define X_DIR_PIN                           PC2

#define Y_STEP_PIN                          PB7
#define Y_DIR_PIN                           PB8

#define Z_STEP_PIN                          PB5
#define Z_DIR_PIN                           PB6

#define Z2_STEP_PIN                         PB3 //marked as E on board; being repurposed for Z2 in our case
#define Z2_DIR_PIN                          PB4
#define Z2_ENABLE_PIN                       X_ENABLE_PIN
#undef E0_ENABLE_PIN

#define E0_STEP_PIN                         PA14 //SWCLK (STEP - pulled low)
#define E0_DIR_PIN                          PA13 //SWIO  (DIR - pulled high)
#ifdef HAS_TMC_UART
  #define E0_SERIAL_TX_PIN                  PC6  // Blank pin on LCD connector
  #define E0_SERIAL_RX_PIN                  PC6  // WARNING: currently in test to see if it works through the resistor on board.
                                                 // Backup plan is to use the unused pins on the LCD port
  #define TMC_BAUD_RATE                     19200 //appears to be maximum capacity for STM32 software serial
#endif

#include "pins_CREALITY_V4.h"
