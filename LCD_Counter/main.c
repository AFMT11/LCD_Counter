/*
 * LCD_Counter.c
 *
 * Created: 6/11/2021 10:35:24 PM
 * Author : ahmed
 */ 

#include "Button.h"
#include "LCD.h"

Uint8 counter = 0;

int main(void)
{
    /* Replace with your application code */
	LCD_INT();
    while (1) 
    {
		if (BUTTON2_Read())
		{
			counter++;
			LCD_Clear();
			LCD_WriteINTEGER(counter);
		}
		else if (BUTTON1_Read())
		{
			counter--;
			LCD_Clear();
			LCD_WriteINTEGER(counter);			
		}
		else if (BUTTON0_Read())
		{
			counter = 0;
			LCD_Clear();
		}		
    }
}

