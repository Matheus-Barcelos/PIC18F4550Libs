#ifndef AD_H
#define AD_H

#include "hal.h"


void initADChannel0();
void initAD(int channel);
unsigned short getADResult();


#endif