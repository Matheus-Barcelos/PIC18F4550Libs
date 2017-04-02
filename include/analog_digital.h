#ifndef AD_H
#define AD_H

#include "hal.h"


void initAD();
void initADDinamic(int channel);
unsigned short getADResult();


#endif