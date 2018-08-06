/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 (or v1.3) pin assignments
 *
 * Applies to the following boards:
 *
 *  RAMPS_14_EFB (Hotend, Fan, Bed)
 *  RAMPS_14_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS_14_EFF (Hotend, Fan0, Fan1)
 *  RAMPS_14_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS_14_SF  (Spindle, Controller Fan)
 *
 *  RAMPS_13_EFB (Hotend, Fan, Bed)
 *  RAMPS_13_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS_13_EFF (Hotend, Fan0, Fan1)
 *  RAMPS_13_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS_13_SF  (Spindle, Controller Fan)
 *
 *  Other pins_MYBOARD.h files may override these defaults
 *
 *  Differences between
 *  RAMPS_13 | RAMPS_14
 *         7 | 11
 */


#ifndef BOARD_NAME
  #define BOARD_NAME "RESIN_SHIELD"
#endif

//
// Limit Switches
//
#define X_MIN_PIN          -1
#define Y_MIN_PIN          -1
//#define Y_MAX_PIN          -1
#define Z_MIN_PIN          25
//#define Z_MAX_PIN          -1


//
// Steppers
//
#define X_STEP_PIN         4
#define X_DIR_PIN          4
#define X_ENABLE_PIN       4
#ifndef X_CS_PIN
  //#define X_CS_PIN         -1
#endif

#define Y_STEP_PIN         4
#define Y_DIR_PIN          4
#define Y_ENABLE_PIN       4
#ifndef Y_CS_PIN
  //#define Y_CS_PIN         49
#endif

#define Z_STEP_PIN         24
#define Z_DIR_PIN          22
#define Z_ENABLE_PIN       32
#ifndef Z_CS_PIN
  //#define Z_CS_PIN         40
#endif

#define E0_STEP_PIN        4
#define E0_DIR_PIN         4
#define E0_ENABLE_PIN      4
#ifndef E0_CS_PIN
  //#define E0_CS_PIN        42
#endif



//
// Temperature Sensors
//
#define TEMP_0_PIN         11   // Analog Input
//#define TEMP_1_PIN         -1   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input



#define HEATER_0_PIN       13

#define HEATER_BED_PIN     14


//###LASER
#define ORIG_LASER_PWR_PIN          2
#define ORIG_LASER_PWM_PIN       41
#define LASER_ENABLE_PIN            3
#define LASER_FIRING_PIN       45 

#define GALVO_SS_PIN               48 //A7 = 61 //new shield 53
#define CASE_OPEN_PIN              27 //A0 = 54 //new shield A2 (56), A3 (57)
#define CASE_OPEN2_PIN             29
