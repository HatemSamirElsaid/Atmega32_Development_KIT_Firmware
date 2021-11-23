#include "Buzzer_Config.h"
#include "../MCAL/Dio.h"

void Buzzer_Init(){
	DIO_WRITE_STATUS(Buzzer_PORT, Buzzer_PIN, OTUPUT);
}

void Buzzer_ON(){
	DIO_SET_PIN(Buzzer_PORT, Buzzer_PIN);
}

void Buzzer_OFF(){
	DIO_CLEAR_PIN(Buzzer_PORT, Buzzer_PIN);
}

void Buzzer_TOGGLE(){
	DIO_TOGGLE_PIN(Buzzer_PORT, Buzzer_PIN);
}
