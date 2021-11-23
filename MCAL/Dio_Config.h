/*
 * Dio_Config.h
 *
 *  Created on: Nov 19, 2021
 *      Author: HatemSsmir
 */

#ifndef MCAL_DIO_CONFIG_H_
#define MCAL_DIO_CONFIG_H_

/*	PORTA HW Registers Definition	*/
#define DIO_DDRA_REG     	(*(volatile u8*)(0x3A))  //Status of the pin is configured in this register (1>output,0>input).
#define DIO_PORTA_REG   	(*(volatile u8*)(0x3B))  //outputs can be written on this register.
#define DIO_PINA_REG		(*(volatile u8*)(0x39))  //inputs can be found in this register.

/*	PORTB HW Registers Definition	*/
#define DIO_DDRB_REG     	(*(volatile u8*)(0x37))  //Status of the pin is configured in this register (1>output,0>input).
#define DIO_PORTB_REG   	(*(volatile u8*)(0x35))  //outputs can be written on this register.
#define DIO_PINB_REG		(*(volatile u8*)(0x36))

/*	PORTC HW Registers Definition	*/
#define DIO_DDRC_REG     	(*(volatile u8*)(0x34))  //Status of the pin is configured in this register (1>output,0>input).
#define DIO_PORTC_REG   	(*(volatile u8*)(0x35))  //outputs can be written on this register.
#define DIO_PINC_REG		(*(volatile u8*)(0x33))

/*	PORTD HW Registers Definition	*/
#define DIO_DDRD_REG     	(*(volatile u8*)(0x31))  //Status of the pin is configured in this register (1>output,0>input).
#define DIO_PORTD_REG   	(*(volatile u8*)(0x32))  //outputs can be written on this register.
#define DIO_PIND_REG		(*(volatile u8*)(0x30))  //inputs can be found in this register.

#endif /* MCAL_DIO_CONFIG_H_ */
