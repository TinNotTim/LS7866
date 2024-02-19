/*
   LS7866.h - Library for using the LSI/CSI LS7866 quadrature encoder counter with I2C interface
   Created by Tin Chiang
   License: MIT license
*/

#ifndef LS7866_h
#define LS7866_h


/** Necessary library for STM32 HAL */
#include "stm32l4xx_hal.h" /* Swap the library based on you hardware*/

/** Default LS7866 I2C register address. */
#define MCR0 0x00 /* RD&WR */
#define MCR1 0x01 /* RD&WR */
#define FCR  0x02 /* RD&WR */
#define IDR0 0x03 /* RD&WR */
#define IDR1 0x04 /* RD&WR */
#define TPR  0x05 /* WR */
#define ODR  0x06 /* RD */
#define CNTR 0x07 /* RD */
#define SSTR 0x08 /* RD */

class LS7866
{
private:
    /* data */
public:
    /* deviceAddress = 0x70 .. 0x77 */
    /* device address is set by pin A0, A1, and A2*/
    LS7866(uint8_t deviceAddress, I2C_HandleTypeDef *hi2c);
    bool begin();
    
};

LS7866::LS7866(/* args */)
{
}



#endif