#include "LS7866.h"

LS7866::LS7866(uint8_t deviceAddress, I2C_HandleTypeDef *hi2c)
{
    LS7866.i2c_hal = hi2c
    
}