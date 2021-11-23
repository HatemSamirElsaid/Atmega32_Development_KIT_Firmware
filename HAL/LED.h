/*
 * LED.h
 *
 *  Created on: Nov 19, 2021
 *      Author: HatemSamir
 */

#ifndef HAL_LED_H_
#define HAL_LED_H_


#include "LED_Types.h"
#include "LED_Config.h"

void LED_Init(LED_ID);
void LED_ON(LED_ID);
void LED_OFF(LED_ID);
void LED_TOGGLE(LED_ID);

#endif /* HAL_LED_H_ */
