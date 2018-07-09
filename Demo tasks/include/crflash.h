

#ifndef CRFLASH_LED_H
#define CRFLASH_LED_H

/*
 * Create the co-routines used to flash the LED's at different rates.
 *
 * @param uxPriority The number of 'fixed delay' co-routines to create.  This
 *		  also effects the number of LED's that will be utilised.  For example,
 *		  passing in 3 will cause LED's 0 to 2 to be utilised.
 */
void vStartFlashCoRoutines( UBaseType_t uxPriority );

/*
 * Return pdPASS or pdFAIL depending on whether an error has been detected
 * or not.
 */
BaseType_t xAreFlashCoRoutinesStillRunning( void );

#endif

