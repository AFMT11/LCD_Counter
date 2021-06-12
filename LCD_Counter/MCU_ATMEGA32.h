/*
 * MCU.h
 *
 * Created: 4/7/2021 10:55:26 PM
 *  Author: ahmed
 */ 


#ifndef MCU_H_
#define MCU_H_
/***************************************** DIO ********************************************/
#define PORTA    (*(volatile char*)(0x3B))
#define DDRA     (*(volatile char*)(0x3A))
#define PINA     (*(volatile char*)(0x39))

#define PORTB    (*(volatile char*)(0x38))
#define DDRB     (*(volatile char*)(0x37))
#define PINB     (*(volatile char*)(0x36))

#define PORTC    (*(volatile char*)(0x35))
#define DDRC     (*(volatile char*)(0x34))
#define PINC     (*(volatile char*)(0x33))

#define PORTD    (*(volatile char*)(0x32))
#define DDRD     (*(volatile char*)(0x31))
#define PIND     (*(volatile char*)(0x30))
/***************************************** EXT INT ********************************************/
#define  SREG    (*(volatile char*)(0x5F))
#define  GICR    (*(volatile char*)(0x5B))
#define  GIFR    (*(volatile char*)(0x5A))
#define  MCUCR   (*(volatile char*)(0x55))
#define  MCUCSR  (*(volatile char*)(0x54))
/***************************************** SPI ********************************************/
#define  SPCR    (*(volatile char*)(0x2D))
#define  SPSR    (*(volatile char*)(0x2E))
#define  SPDR    (*(volatile char*)(0x2F))

/***************************************** I2C ********************************************/
#define TWCR    (*(volatile uint8)(0x56))
#define TWDR    (*(volatile uint8)(0x23))
#define TWAR    (*(volatile uint8)(0x22))
#define TWBR    (*(volatile uint8)(0x20))
#define TWSR    (*(volatile uint8)(0x21))

#endif /* MCU_H_ */