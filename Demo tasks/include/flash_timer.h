

#ifndef FLASH_TIMER_H
#define FLASH_TIMER_H

/*
 * Creates the LED flashing timers.  xNumberOfLEDs specifies how many timers to
 * create, with each timer toggling a different LED.  The first LED to be 
 * toggled is LED 0, with subsequent LEDs following on in numerical order.  Each
 * timer uses the exact same callback function, with the timer ID being used
 * within the callback function to determine which timer has actually expired
 * (and therefore which LED to toggle).
 */
void vStartLEDFlashTimers( UBaseType_t uxNumberOfLEDs );

#endif /* FLASH_TIMER_H */
