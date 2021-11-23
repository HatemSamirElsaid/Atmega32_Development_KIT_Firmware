#include "../MCAL/Dio.h"
#include "LED.h"


void LED_Init(LED_ID led){
	switch (led){
	case (LED0):
		DIO_WRITE_STATUS(LED0_PORT, LED0_PIN, OTUPUT);
		break;
	case (LED1):
		DIO_WRITE_STATUS(LED1_PORT, LED1_PIN, OTUPUT);
		break;
	case (LED2):
		DIO_WRITE_STATUS(LED2_PORT, LED2_PIN, OTUPUT);
		break;
	}
}

void LED_ON(LED_ID led){
	switch (led){
	case (LED0):
		DIO_SET_PIN(LED0_PORT, LED0_PIN);
		break;
	case (LED1):
		DIO_SET_PIN(LED1_PORT, LED1_PIN);
		break;
	case (LED2):
		DIO_SET_PIN(LED2_PORT, LED2_PIN);
		break;
	}
}

void LED_OFF(LED_ID led){
	switch (led){
	case (LED0):
		DIO_CLEAR_PIN(LED0_PORT, LED0_PIN);
		break;
	case (LED1):
		DIO_CLEAR_PIN(LED1_PORT, LED1_PIN);
		break;
	case (LED2):
		DIO_CLEAR_PIN(LED2_PORT, LED2_PIN);
		break;
	}
}

void LED_TOGGLE(LED_ID led){
	switch (led){
	case (LED0):
		DIO_TOGGLE_PIN(LED0_PORT, LED0_PIN);
		break;
	case (LED1):
		DIO_TOGGLE_PIN(LED1_PORT, LED1_PIN);
		break;
	case (LED2):
		DIO_TOGGLE_PIN(LED2_PORT, LED2_PIN);
		break;
	}
}
