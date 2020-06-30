#include"stm32f10x.h

 GPIO_WriteBit(GPIOF, GPIO_Pin_6, (BitAction)((1 - GPIO_ReadOutputDataBit(GPIOF, GPIO_Pin_6))));
