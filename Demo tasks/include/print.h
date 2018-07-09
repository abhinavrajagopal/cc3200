
#ifndef PRINT_H
#define PRINT_H

void vPrintInitialise( void );
void vPrintDisplayMessage( const char * const * pcMessageToSend );
const char *pcPrintGetNextMessage( TickType_t xPrintRate );

#endif


