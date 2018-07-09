
#ifndef CRHOOK_H
#define CRHOOK_H

/*
 * Create the co-routines used to communicate wit the tick hook.
 */
void vStartHookCoRoutines( void );

/*
 * Return pdPASS or pdFAIL depending on whether an error has been detected
 * or not.
 */
BaseType_t xAreHookCoRoutinesStillRunning( void );

#endif

