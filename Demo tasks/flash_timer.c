/**
 * Repeatedly toggles one or more LEDs using software timers - one timer per
 * LED.
 */

/* Scheduler include files. */
#include "RTOS.h"
#include "timers.h"

/* Demo program include files. */
#include "partest.h"
#include "flash_timer.h"

/* The toggle rates are all a multple of ledFLASH_RATE_BASE. */
#define ledFLASH_RATE_BASE	( ( ( TickType_t ) 333 ) / portTICK_PERIOD_MS )

/* A block time of zero simple means "don't block". */
#define ledDONT_BLOCK		( ( TickType_t ) 0 )

/*-----------------------------------------------------------*/

/*
 * The callback function used by each LED flashing timer.  All the timers use
 * this function, and the timer ID is used within the function to determine
 * which timer has actually expired.
 */
static void prvLEDTimerCallback( TimerHandle_t xTimer );

/*-----------------------------------------------------------*/

void vStartLEDFlashTimers( UBaseType_t uxNumberOfLEDs )
{
UBaseType_t uxLEDTimer;
TimerHandle_t xTimer;

	/* Create and start the requested number of timers. */
	for( uxLEDTimer = 0; uxLEDTimer < uxNumberOfLEDs; ++uxLEDTimer )
	{
		/* Create the timer. */
		xTimer = xTimerCreate( 	"Flasher",								/* A text name, purely to help debugging. */
								ledFLASH_RATE_BASE * ( uxLEDTimer + 1 ),/* The timer period, which is a multiple of ledFLASH_RATE_BASE. */
								pdTRUE,									/* This is an auto-reload timer, so xAutoReload is set to pdTRUE. */
								( void * ) uxLEDTimer,					/* The ID is used to identify the timer within the timer callback function, as each timer uses the same callback. */
								prvLEDTimerCallback						/* Each timer uses the same callback. */
							  );

		/* If the timer was created successfully, attempt to start it.  If the
		scheduler has not yet been started then the timer command queue must
		be long enough to hold each command sent to it until such time that the
		scheduler is started.  The timer command queue length is set by
		configTIMER_QUEUE_LENGTH in FreeRTOSConfig.h. */
		if( xTimer != NULL )
		{
			xTimerStart( xTimer, ledDONT_BLOCK );
		}
	}
}
/*-----------------------------------------------------------*/

static void prvLEDTimerCallback( TimerHandle_t xTimer )
{
BaseType_t xTimerID;

	/* The timer ID is used to identify the timer that has actually expired as
	each timer uses the same callback.  The ID is then also used as the number
	of the LED that is to be toggled. */
	xTimerID = ( BaseType_t ) pvTimerGetTimerID( xTimer );
	vParTestToggleLED( xTimerID );
}


