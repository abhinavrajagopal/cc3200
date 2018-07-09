

#ifndef COMTEST_H
#define COMTEST_H

void vAltStartComTestTasks( UBaseType_t uxPriority, uint32_t ulBaudRate, UBaseType_t uxLED );
BaseType_t xAreComTestTasksStillRunning( void );

#endif

