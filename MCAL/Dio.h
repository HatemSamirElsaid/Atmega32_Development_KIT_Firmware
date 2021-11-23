/*
 * MCAL_Dio.h
 *
 *  Created on: Nov 19, 2021
 *      Author: HatemSamir
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include "Dio_Types.h"
#include "Dio_Config.h"

//DIO Module functions prototypes.
void DIO_SET_PIN(Port_ID,Pin_ID);  //if Pin configured as an output
void DIO_CLEAR_PIN(Port_ID,Pin_ID);  //if Pin configured as an output
void DIO_TOGGLE_PIN(Port_ID,Pin_ID);  //if Pin configured as an output

void DIO_ENABLE_PULLUP(Port_ID,Pin_ID);  //if Pin configured as an input
void DIO_DISABLE_PULLUP(Port_ID,Pin_ID);  //if Pin configured as an input
Logic_Level DIO_READ_LEVEL(Port_ID,Pin_ID);  //to read pin level if Pin configured as an input

void DIO_WRITE_STATUS(Port_ID,Pin_ID,Pin_Status);  //to write pin direction


#endif /* MCAL_DIO_H_ */
