/*
 * Base.c
 *
 * Created: 12/12/2020 07:57:22 م
 * Author : hp
 */ 

#include <avr/io.h>
#include "STD_types.h"
#include "DIO.h"
#include "SPI.h"
#include "USART.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
//#include "LCD.h"


int main(void)
{
	Uint8 Data_in ;
	DIO_Init();
	SPI_Init('M');	SlaveEn();	USART_Init(9600);	
    while (1) 
    {
		SPI_Write('N');		_delay_ms(300);		SPI_Write(0x98);		_delay_ms(300);
		
	Data_in = USART_RxChar();						/* receive data from Bluetooth device*/
	
	
	if(Data_in =='1')
	{
		DIO_write(DIO_channelD2,STD_high);							/* Turn ON LED */
		USART_SendString("Room1_ON");					/* send status of LED i.e. LED ON */
	}
		
    else if(Data_in =='2')
    {
	    DIO_write(DIO_channelD2,STD_low);							/* Turn OFF LED */
	    USART_SendString("Room1_OFF"); 				/* send status of LED i.e. LED OFF */
	}


if(Data_in =='3')
{
	DIO_write(DIO_channelD3,STD_high);							/* Turn ON LED */
	USART_SendString("Room2_ON");					/* send status of LED i.e. LED ON */
}

else if(Data_in =='4')
{
	DIO_write(DIO_channelD3,STD_low);							/* Turn OFF LED */
	USART_SendString("Room2_OFF"); 				/* send status of LED i.e. LED OFF */
}



if(Data_in =='5')
{
	DIO_write(DIO_channelD4,STD_high);							/* Turn ON LED */
	USART_SendString("Room3_ON");					/* send status of LED i.e. LED ON */
}

else if(Data_in =='6')
{
	DIO_write(DIO_channelD4,STD_low);							/* Turn OFF LED */
	USART_SendString("Room3_OFF"); 				/* send status of LED i.e. LED OFF */
}



if(Data_in =='7')
{
	DIO_write(DIO_channelD5,STD_high);							/* Turn ON LED */
	USART_SendString("Room4_ON");					/* send status of LED i.e. LED ON */
}

else if(Data_in =='8')
{
	DIO_write(DIO_channelD5,STD_low);							/* Turn OFF LED */
	USART_SendString("Room4_OFF"); 				/* send status of LED i.e. LED OFF */
}

	}
	}