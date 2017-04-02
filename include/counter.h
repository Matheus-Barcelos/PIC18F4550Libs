#ifndef COUNTER_H
#define COUNTER_H

#include "common_structs.h"

typedef enum COUNTERSTATE
{
    EXPIRED = 1,
    RUNNING = 0,
    STOPPED = -1
}
CounterState;

typedef struct COUNTER
{
    CounterState state;
    uint16 count;
    uint16 terminateValue;
    void (*serviceCallback)(struct COUNTER*);
}Counter;

void initCounter(register Counter* counter);
void resetCounter(register Counter* counter);
void serviceCounter(register Counter* counter);

#endif