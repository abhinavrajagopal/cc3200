

#ifndef MESSAGE_BUFFER_AMP_H
#define MESSAGE_BUFFER_AMP_H

void vStartMessageBufferAMPTasks( void );
BaseType_t xAreMessageBufferAMPTasksStillRunning( void );
void vGenerateCoreBInterrupt( void * xUpdatedMessageBuffer );

#endif /* MESSAGE_BUFFER_AMP_H */
