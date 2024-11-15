/*
 * App.c
 *
 *  Created on: Nov 8, 2024
 *      Author: Wels
 */

#include "App.h"

void App_HelloWorld(void)
{
	/*HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
	HAL_Delay(100);
	HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
	HAL_Delay(100);*/
	HAL_GPIO_TogglePin(Led_GPIO_Port, Led_Pin);
	HAL_Delay(200);
}











