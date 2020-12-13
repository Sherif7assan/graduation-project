/*
 * collector.c
 *
 * Created: 12/12/2020 08:13:55 م
 * Author : hp
 */ 

#include <avr/io.h>
#include "avr/interrupt.h"
#include "STD_types.h"
#include "DIO.h"
#include "LCD.h"

int main(void)
{
  DIO_Init();
  SPI_Init('S');
  LCD_Init();
  LCD_clr();
   
  LCD_cmd(0x85);
  LCD_StringPos("Hello AMIT",1,1);
    while (1) 
    {
    
if( SPI_Receive() == 'N' ){	DIO_write(DIO_channelD2,STD_high);
	DIO_write(DIO_channelD3,STD_low);


}if( SPI_Receive() == 0x98 ){	DIO_write(DIO_channelD2,STD_low);	DIO_write(DIO_channelD3,STD_high);}	}}