

#ifndef PARTEST_H
#define PARTEST_H

#define partstDEFAULT_PORT_ADDRESS		( ( uint16_t ) 0x378 )

void vParTestInitialise( void );
void vParTestSetLED( UBaseType_t uxLED, BaseType_t xValue );
void vParTestToggleLED( UBaseType_t uxLED );

#endif

