#include "DIO.h"
#include "../Lib/Std_Types.h"
#include "../Lib/Bit_Math.h"

void DIO_SET_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		SET_BIT(DIO_PORTA_REG,pin);
		break;
	case DIO_PORTB:
		SET_BIT(DIO_PORTB_REG,pin);
		break;
	case DIO_PORTC:
		SET_BIT(DIO_PORTC_REG,pin);
		break;
	case DIO_PORTD:
		SET_BIT(DIO_PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_CLEAR_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		CLR_BIT(DIO_PORTA_REG,pin);
		break;
	case DIO_PORTB:
		CLR_BIT(DIO_PORTB_REG,pin);
		break;
	case DIO_PORTC:
		CLR_BIT(DIO_PORTC_REG,pin);
		break;
	case DIO_PORTD:
		CLR_BIT(DIO_PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_TOGGLE_PIN(Port_ID port,Pin_ID pin){  //if Pin configured as an output
	switch (port){
	case DIO_PORTA:
		TOGGLE_BIT(DIO_PORTA_REG,pin);
		break;
	case DIO_PORTB:
		TOGGLE_BIT(DIO_PORTB_REG,pin);
		break;
	case DIO_PORTC:
		TOGGLE_BIT(DIO_PORTC_REG,pin);
		break;
	case DIO_PORTD:
		TOGGLE_BIT(DIO_PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_ENABLE_PULLUP(Port_ID port,Pin_ID pin){  //if Pin configured as an input
	switch (port){
	case DIO_PORTA:
		if(CHK_BIT(DIO_DDRA_REG,pin)==0)
			SET_BIT(DIO_PORTA_REG,pin);
		break;
	case DIO_PORTB:
		if(CHK_BIT(DIO_DDRB_REG,pin)==0)
			SET_BIT(DIO_PORTB_REG,pin);
		break;
	case DIO_PORTC:
		if(CHK_BIT(DIO_DDRC_REG,pin)==0)
			SET_BIT(DIO_PORTC_REG,pin);
		break;
	case DIO_PORTD:
		if(CHK_BIT(DIO_DDRD_REG,pin)==0)
			SET_BIT(DIO_PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
void DIO_DISABLE_PULLUP(Port_ID port,Pin_ID pin){  //if Pin configured as an input
	switch (port){
	case DIO_PORTA:
		if(CHK_BIT(DIO_DDRA_REG,pin)==0)
			CLR_BIT(DIO_PORTA_REG,pin);
		break;
	case DIO_PORTB:
		if(CHK_BIT(DIO_DDRB_REG,pin)==0)
			CLR_BIT(DIO_PORTB_REG,pin);
		break;
	case DIO_PORTC:
		if(CHK_BIT(DIO_DDRC_REG,pin)==0)
			CLR_BIT(DIO_PORTC_REG,pin);
		break;
	case DIO_PORTD:
		if(CHK_BIT(DIO_DDRD_REG,pin)==0)
			CLR_BIT(DIO_PORTD_REG,pin);
		break;
	}
}
//--------------------------------------------------------------------------------------------------
Logic_Level DIO_READ_LEVEL(Port_ID port,Pin_ID pin){  //to read pin level if Pin configured as an input
	switch (port){
	case DIO_PORTA:
		return CHK_BIT(DIO_PINA_REG,pin);
		break;
	case DIO_PORTB:
		return CHK_BIT(DIO_PINB_REG,pin);
		break;
	case DIO_PORTC:
		return CHK_BIT(DIO_PINC_REG,pin);
		break;
	case DIO_PORTD:
		return CHK_BIT(DIO_PIND_REG,pin);
		break;
	}
	return 0;
}
//--------------------------------------------------------------------------------------------------
void DIO_WRITE_STATUS(Port_ID port,Pin_ID pin,Pin_Status direction){  //to write pin direction
	switch (port){
	case DIO_PORTA:
		if (direction==OTUPUT)
			SET_BIT(DIO_DDRA_REG,pin);
		else
			CLR_BIT(DIO_DDRA_REG,pin);
		break;
	case DIO_PORTB:
		if (direction==OTUPUT)
			SET_BIT(DIO_DDRB_REG,pin);
		else
			CLR_BIT(DIO_DDRB_REG,pin);
		break;
	case DIO_PORTC:
		if (direction==OTUPUT)
			SET_BIT(DIO_DDRC_REG,pin);
		else
			CLR_BIT(DIO_DDRC_REG,pin);
		break;
	case DIO_PORTD:
		if (direction==OTUPUT)
			SET_BIT(DIO_DDRD_REG,pin);
		else
			CLR_BIT(DIO_DDRD_REG,pin);
		break;
	}
}
