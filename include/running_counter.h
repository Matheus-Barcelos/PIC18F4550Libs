#ifndef RUNNING_COUNTER_H
#define RUNNING_COUNTER_H

typedef struct RUNNINGCOUNTER
{
    uint16 count;
    uint16 period;
    uint16 callbackPoint;
    void callback(RunningCounter*);
}RunningCounter;

void initRunningCounter(RunningCounter* counter);
void serviceRunningCounter(RunningCounter* counter);

#endif