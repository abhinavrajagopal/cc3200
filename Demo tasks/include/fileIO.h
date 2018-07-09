

#ifndef FILE_IO_H
#define FILE_IO_H

void vDisplayMessage( const char * const pcMessageToPrint );
void vWriteMessageToDisk( const char * const pcMessage );
void vWriteBufferToDisk( const char * const pcBuffer, uint32_t ulBufferLength );

#endif

