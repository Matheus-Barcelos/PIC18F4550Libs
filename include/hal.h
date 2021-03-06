#ifndef PIC18F4550_HAL
#define PIC18F4550_HAL

#include <xc.h>
#include <pic18f4550.h>

 //digital ports

#define DIO_CHAN_READ(n) DIO_CHAN_READ_##n
#define DIO_CHAN_WRITE(n) DIO_CHAN_WRITE_##n
#define DIO_CHAN_MASK(n) DIO_CHAN_MASK_##n
#define DIO_CHAN_INMASK(n) DIO_CHAN_INMASK_##n
#define DIO_CHAN_DIR(n) DIO_CHAN_DIR_##n
#define DIO_SET_HI(n) (DIO_CHAN_WRITE(n)|=DIO_CHAN_MASK(n))
#define DIO_SET_LO(n) (DIO_CHAN_WRITE(n)&=DIO_CHAN_INMASK(n))
#define DIO_FLIP(n) (DIO_CHAN_WRITE(n)^=DIO_CHAN_MASK(n))
#define DIO_READ(n) (DIO_CHAN_READ(n)&DIO_CHAN_MASK(n))
#define DIO_SET_IN(n) (DIO_CHAN_DIR(n)|=DIO_CHAN_MASK(n))
#define DIO_SET_OUT(n) (DIO_CHAN_DIR(n)&=DIO_CHAN_INMASK(n))

 //channel 1
#define CHAN1 1
#define DIO_CHAN_READ_1 PORTD
#define DIO_CHAN_WRITE_1 LATD
#define DIO_CHAN_DIR_1 TRISD
#define DIO_CHAN_MASK_1 0b00000001
#define DIO_CHAN_INMASK_1 0b11111110

 //channel 2
#define CHAN2 2
#define DIO_CHAN_READ_2 PORTD
#define DIO_CHAN_WRITE_2 LATD
#define DIO_CHAN_DIR_2 TRISD
#define DIO_CHAN_MASK_2 0b00000010
#define DIO_CHAN_INMASK_2 0b11111101

 //channel 3
#define CHAN3 3
#define DIO_CHAN_READ_3 PORTD
#define DIO_CHAN_WRITE_3 LATD
#define DIO_CHAN_DIR_3 TRISD
#define DIO_CHAN_MASK_3 0b00001000
#define DIO_CHAN_INMASK_3 0b11110111

 //channel 4
#define CHAN4 4
#define DIO_CHAN_READ_4 PORTD
#define DIO_CHAN_WRITE_4 LATD
#define DIO_CHAN_DIR_4 TRISD
#define DIO_CHAN_MASK_4 0b00000100
#define DIO_CHAN_INMASK_4 0b11111011

 //analog-digital conversion

#define AD_CHAN(n) AD_CHAN##n
#define AD_CHAN_HI_MASK(n) AD_CHAN_HI_MASK_##n
#define AD_CHAN_LO_MASK(n) AD_CHAN_LO_MASK_##n
#define AD_SET_CHAN(n) ADCON0|=AD_CHAN_HI_MASK(n);ADCON0&=AD_CHAN_LO_MASK(n)

//analog-digital channel 0
#define AD_CHAN0 0
#define AD_CHAN_HI_MASK_0 0b00000000
#define AD_CHAN_LO_MASK_0 0b11000011

//analog-digital channel 1
#define AD_CHAN1 1
#define AD_CHAN_1_HI_MASK 0b00000100
#define AD_CHAN_1_LO_MASK 0b11000111

//analog-digital channel 2
#define AD_CHAN2 2
#define AD_CHAN_2_HI_MASK 0b00001000
#define AD_CHAN_2_LO_MASK 0b11001011

//analog-digital channel 3
#define AD_CHAN3 3
#define AD_CHAN_3_HI_MASK 0b00001100
#define AD_CHAN_3_LO_MASK 0b11001111

#endif
