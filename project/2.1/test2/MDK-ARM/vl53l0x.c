/*#include "main.h"
extern I2C_HandleTypeDef hi2c1;
#define VL53L0X_ADDR  (0x29 << 1)
static uint8_t wr(uint8_t reg , uint8_t val)
{
	return HAL_I2C_Mem_Write(&hi2c1,VL53L0X_ADDR,reg,I2C_MEMADD_SIZE_8BIT, &val ,1,100);
	
}
static uint8_t rd(uint8_t reg , uint8_t *val)
{
	return HAL_I2C_Mem_Read(&hi2c1,VL53L0X_ADDR,reg,I2C_MEMADD_SIZE_8BIT, val ,1,100);
}
uint8_t VL53L0X_ReadID(void)
{
	uint8_t id = 0;
	if(rd(0xC0,&id)!=HAL_OK) return 0;
	return id;
 	
}
*/