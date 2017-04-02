#include "analog_digital.h"

void initAD()
{
    ADCON1 = 0b00001110;
    ADCON2 = 0b10101010;
    
    AD_SET_CHAN(AD_CHAN0);
    
    ADON=1;
    GODONE=1;
}

void initADDinamic(int channel)
{
    if(channel<15)
    {
        ADCON1 = 0b00001110;
        ADCON2 = 0b10101010;

        ADCON0 = channel<<2;

        ADON=1;
        GODONE=1;
    }
}

unsigned short getADResult()
{
    ADIF=0;
    return ADRES;
}