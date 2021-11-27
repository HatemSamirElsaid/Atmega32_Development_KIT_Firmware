//#include <avr/io.h>
#include <util/delay.h>

#include "MCAL.h"
#include "HAL.h"
#include "Lib.h"


int main ()
{
	//Block1Start	MCAL
	/*DIO_WRITE_STATUS(DIO_PORTC, DIO_PIN2, OTUPUT);//Button1
	DIO_WRITE_STATUS(DIO_PORTC, DIO_PIN7, OTUPUT);//Button2
	DIO_WRITE_STATUS(DIO_PORTD, DIO_PIN3, OTUPUT);//Button3
	DIO_WRITE_STATUS(DIO_PORTA, DIO_PIN3, OTUPUT);//Buzzer

	DIO_WRITE_STATUS(DIO_PORTB, DIO_PIN0, INPUT);//LED1
	DIO_WRITE_STATUS(DIO_PORTB, DIO_PIN4, INPUT);//LED2
	DIO_WRITE_STATUS(DIO_PORTD, DIO_PIN2, INPUT);//LED3
	Boolean Flag1 =FALSE;
	Boolean Flag2 =FALSE;
	Boolean Flag3 =FALSE;*/
	//Block1End


	//Block2Start	HAL LED
	/*LED_Init(LED0);
	LED_Init(LED1);
	LED_Init(LED2);*/
	//Block2End


	//Block3Start	HAL LED Buzzer
	/*DIO_WRITE_STATUS(DIO_PORTC, DIO_PIN2, OTUPUT);//Button1
	DIO_WRITE_STATUS(DIO_PORTC, DIO_PIN7, OTUPUT);//Button2
	DIO_WRITE_STATUS(DIO_PORTD, DIO_PIN3, OTUPUT);//Button3
	Buzzer_Init();


	LED_Init(LED0);
	LED_Init(LED1);
	LED_Init(LED2);
	Boolean Flag1 =FALSE;
	Boolean Flag2 =FALSE;
	Boolean Flag3 =FALSE;*/
	//Block3End

	while (1)
	{
		//Block1Start	MCAL
		/*if (DIO_READ_LEVEL(DIO_PORTB, DIO_PIN0)==HIGH && Flag1==FALSE){
			DIO_TOGGLE_PIN(DIO_PORTC,DIO_PIN2);
			DIO_SET_PIN(DIO_PORTA, DIO_PIN3);
			Flag1 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTB, DIO_PIN0)==LOW && Flag1==TRUE){
			Flag1=FALSE;
			_delay_ms(10);
		}

		if (DIO_READ_LEVEL(DIO_PORTB, DIO_PIN4)==HIGH && Flag2==FALSE){
			DIO_TOGGLE_PIN(DIO_PORTC,DIO_PIN7);
			DIO_CLEAR_PIN(DIO_PORTA, DIO_PIN3);
			Flag2 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTB, DIO_PIN4)==LOW && Flag2==TRUE){
			Flag2=FALSE;
			_delay_ms(10);
		}

		if (DIO_READ_LEVEL(DIO_PORTD, DIO_PIN2)==HIGH && Flag3==FALSE){
			DIO_TOGGLE_PIN(DIO_PORTD,DIO_PIN3);
			Flag3 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTD, DIO_PIN2)==LOW && Flag3==TRUE){
			Flag3=FALSE;
			_delay_ms(10);
		}*/
		//Block1End


		//Block2Start	HAL LED
		/*LED_ON(LED0);
		_delay_ms(40);
		LED_OFF(LED2);
		_delay_ms(75);
		LED_ON(LED1);
		_delay_ms(40);
		LED_OFF(LED0);
		_delay_ms(75);
		LED_ON(LED2);
		_delay_ms(40);
		LED_OFF(LED1);
		_delay_ms(75);*/
		//Block2End

		//Block3Start	HAL LED Buzzer
		/*if (DIO_READ_LEVEL(DIO_PORTB, DIO_PIN0)==HIGH && Flag1==FALSE){
			LED_TOGGLE(LED0);
			Buzzer_ON();
			Flag1 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTB, DIO_PIN0)==LOW && Flag1==TRUE){
			Flag1=FALSE;
			_delay_ms(10);
		}

		if (DIO_READ_LEVEL(DIO_PORTB, DIO_PIN4)==HIGH && Flag2==FALSE){
			LED_TOGGLE(LED1);
			Buzzer_OFF();
			Flag2 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTB, DIO_PIN4)==LOW && Flag2==TRUE){
			Flag2=FALSE;
			_delay_ms(10);
		}

		if (DIO_READ_LEVEL(DIO_PORTD, DIO_PIN2)==HIGH && Flag3==FALSE){
			LED_TOGGLE(LED2);
			Buzzer_TOGGLE();
			Flag3 = TRUE;
		}else if(DIO_READ_LEVEL(DIO_PORTD, DIO_PIN2)==LOW && Flag3==TRUE){
			Flag3=FALSE;
			_delay_ms(10);
		}*/
		//Block3End

	}


	return 0;
}


