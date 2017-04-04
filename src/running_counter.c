#include "running_counter.h"

void initRunningCounter(RunningCounter* counter)
{
    counter->count=0;
}

void serviceRunningCounter(RunningCounter* counter)
{
    counter->count++;
    if(counter->count > counter->callbackPoint)
    {
        counter->callback(counter);
    }
    else if(counter->count > counter->period)
    {
        counter->count = 0;
        counter->callbackExpired(counter);
    }
}