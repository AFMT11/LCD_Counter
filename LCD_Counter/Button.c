/*
 * Button.c
 *
 * Created: 5/28/2021 4:44:31 PM
 *  Author: ahmed
 */ 

#include "Button.h"
#define F_CPU 16000000
#include <util/delay.h>

Uint8 BUTTON0_Read(void)
{
	Uint8 val = 0;
	val = DIO_GetPinVal(Button0_Port, Button0_Pin);
	while(DIO_GetPinVal(Button0_Port, Button0_Pin));
	_delay_ms(20);
	return val;
}
Uint8 BUTTON1_Read(void)
{
	Uint8 val = 0;
	val = DIO_GetPinVal(Button1_Port, Button1_Pin);
	while(DIO_GetPinVal(Button1_Port, Button1_Pin));
	_delay_ms(20);
	return val;	
}
Uint8 BUTTON2_Read(void)
{
	Uint8 val = 0;
	val = DIO_GetPinVal(Button2_Port, Button2_Pin);
	while(DIO_GetPinVal(Button2_Port, Button2_Pin));
	_delay_ms(20);
	return val;	
}
