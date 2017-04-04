#ifndef RUNNING_COUNTER_H
#define RUNNING_COUNTER_H

#include "common_structs.h"

typedef struct RUNNINGCOUNTER
{
    uint16 count;
    uint16 period;
    uint16 callbackPoint;
    void (*callback)(struct RUNNINGCOUNTER*);
    void (*callbackExpired)(struct RUNNINGCOUNTER*);
}RunningCounter;

void initRunningCounter(RunningCounter* counter);
void serviceRunningCounter(RunningCounter* counter);

#endif