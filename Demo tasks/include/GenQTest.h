

#ifndef GEN_Q_TEST_H
#define GEN_Q_TEST_H

void vStartGenericQueueTasks( UBaseType_t uxPriority );
BaseType_t xAreGenericQueueTasksStillRunning( void );
void vMutexISRInteractionTest( void );

#endif /* GEN_Q_TEST_H */



