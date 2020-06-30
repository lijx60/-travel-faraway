#include "Gdata.h"
int i=8;

int main()
  {
		RCC_Configuration( );
		USART1_GPIO_Configuration( );
		USART1_Configuration( );
    
  while(1)
	{
		switch(dt)
		{
			case('A'):
			printf("I love u ");
			break;
		 case('0'):
			printf("I love u too . ");
			break ;	
			default:
			printf(" we love u too . ");
			printf("%d,%d", ++i,i++);
	    }
		
		
//	 u8 i,data;
//		data='a';
//		for(i=0;i<30;i++)
//		{
//		 USART_SendData(USART1,(u8) data); 
//		 data++;
//		 while(USART_GetFlagStatus(USART1,USART_FLAG_TC) == RESET); 
//		 Delay(50000);
//		}
		
		//printf("i love my daughter");
	}
 }

 
 
 
 
 

//  #if  PRINTF_ON  
// 
// #endif 
// 
// 
// #ifdef __GNUC__
//#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
//#else
// #define  PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
//#endif 
//PUTCHAR_PROTOTYPE
// { 
//  USART_SendData(USART1, (uint8_t) ch);
//  while (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
//  return ch;
// }
