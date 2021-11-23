#include "Button.h"
#include "../MCAL/Dio.h"

void Button_Init(Button_ID Button){
	switch(Button){
		case(BUTTON0):
				DIO_WRITE_STATUS(Button0_PORT, Button0_PIN, INPUT);
				break;
		case(BUTTON1):
				DIO_WRITE_STATUS(Button1_PORT, Button1_PIN, INPUT);
				break;
		case(BUTTON2):
				DIO_WRITE_STATUS(Button2_PORT, Button2_PIN, INPUT);
				break;
		}
}
//--------------------------------------------------------------------------------------------------
Buttom_Status Button_READ(Button_ID Button){
	switch(Button){
		case(BUTTON0):
				return DIO_READ_LEVEL(Button0_PORT, Button0_PIN);
				break;
		case(BUTTON1):
				return DIO_READ_LEVEL(Button1_PORT, Button1_PIN);
				break;
		case(BUTTON2):
				return DIO_READ_LEVEL(Button2_PORT, Button2_PIN);
				break;
		}
	return 0;
}
//--------------------------------------------------------------------------------------------------
void Button_Pullup_Enable(Button_ID Button){
	switch(Button){
		case(BUTTON0):
				DIO_ENABLE_PULLUP(Button0_PORT, Button0_PIN);
				break;
		case(BUTTON1):
				DIO_ENABLE_PULLUP(Button1_PORT, Button1_PIN);
				break;
		case(BUTTON2):
				DIO_ENABLE_PULLUP(Button2_PORT, Button2_PIN);
				break;
		}
}
//--------------------------------------------------------------------------------------------------
void Button_Pullup_Disable(Button_ID Button){
	switch(Button){
		case(BUTTON0):
				DIO_DISABLE_PULLUP(Button0_PORT, Button0_PIN);
				break;
		case(BUTTON1):
				DIO_DISABLE_PULLUP(Button1_PORT, Button1_PIN);
				break;
		case(BUTTON2):
				DIO_DISABLE_PULLUP(Button2_PORT, Button2_PIN);
				break;
		}
}