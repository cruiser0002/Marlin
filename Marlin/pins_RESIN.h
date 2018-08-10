


/**
 * Arduino Mega with ResinShield
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true



#ifndef RESIN
	#define RESIN
#endif


  //#define RESIN_SEGMENTS_PER_SECOND 10




#define X_STEP_PIN         4
#define X_DIR_PIN          4
#define X_ENABLE_PIN       4
#define X_MIN_PIN          -1
#define X_MAX_PIN          -1

#define Y_STEP_PIN         4
#define Y_DIR_PIN          4
#define Y_ENABLE_PIN       4
#define Y_MIN_PIN          -1
#define Y_MAX_PIN          -1

#define Z_STEP_PIN         24 //42 //new shield 12
#define Z_DIR_PIN          22 //40 //new shield 13
#define Z_ENABLE_PIN       32 //48 //new shield 8
#define Z_MIN_PIN          25 //33 //new shield A4 (58)
#define Z_MAX_PIN          -1



#define E0_STEP_PIN        4
#define E0_DIR_PIN         4
#define E0_ENABLE_PIN      4


#define LASER_FIRING_PIN   2 //32 //new shield 14
#define GALVO_SS_PIN       48 //A7 = 61 //new shield 53
#define CASE_OPEN_PIN      27 //A0 = 54 //new shield A2 (56), A3 (57)
#define CASE_OPEN2_PIN     29
#define FAULT              -1 //not used any more






#define HEATER_0_PIN     11   // EXTRUDER 1



#define TEMP_0_PIN         11   // A12
#define TEMP_1_PIN         -1   // ANALOG NUMBERING
#define TEMP_2_PIN         -1   // ANALOG NUMBERING


#define HEATER_BED_PIN   8   

#define TEMP_BED_PIN      14 // A12 = 66???


