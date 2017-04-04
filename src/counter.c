#include "../include/counter.h"

void initCounter(register Counter* counter)
{
    counter->count = 0;
    counter->state = RUNNING;
}

void resetCounter(register Counter* counter)
{
    if(counter->terminateValue!=0)
    {
        counter->state = RUNNING;
        counter->count = (uint16)0;
    }
}

void serviceCounter(register Counter* counter)
{
    if(counter->state==RUNNING)
    {
        counter->count+=(uint16)1;
        if(counter->count == counter->terminateValue)
        {
            counter->state = EXPIRED;
            counter->serviceCallback(counter);
        }
    }
}