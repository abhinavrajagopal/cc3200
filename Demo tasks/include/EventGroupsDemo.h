


/*
 * This file contains fairly comprehensive checks on the behaviour of event
 * groups.  It is not intended to be a user friendly demonstration of the event
 * groups API.
 */

#ifndef EVENT_GROUPS_DEMO_H
#define EVENT_GROUPS_DEMO_H

void vStartEventGroupTasks( void );
BaseType_t xAreEventGroupTasksStillRunning( void );
void vPeriodicEventGroupsProcessing( void );

#endif /* EVENT_GROUPS_DEMO_H */

