#include "LS7866.h"

LS7866::LS7866(uint8_t deviceAddress, I2C_HandleTypeDef *hi2c)
{
    //assume the I2c module initialization has been done in the main.c
    i2c_hal = hi2c;    
    device_address = deviceAddress;    
}



bool LS7866::write_reg(uint8_t reg_address, uint8_t* data_buff, uint16_t num_bytes)
{
    HAL_StatusTypeDef ret;
    ret = HAL_I2C_Mem_Write(i2c_hal, (uint16_t)(device_address<<1), (uint16_t)(reg_address), LS7866_REG_ADD_SIZE, data_buff, num_bytes, HAL_MAX_DELAY);

    // check if the transmission is successful
    if(ret != HAL_OK){
        return false;
    }
    return true;
}
bool read_reg(uint8_t reg_address, uint8_t* data_buff, uint16_t num_bytes)
{
    HAL_StatusTypeDef ret;
    ret = HAL_I2C_Master_Receive(i2c_hal, (uint16_t)(device_address <<1), (uint16_t)(reg_address), LS7866_REG_ADD_SIZE, data_buff, num_bytes, HAL_MAX_DELAY);

    // check if the data receive is successful
    if(ret != HAL_OK){
        return false;
    }
    return true;
}