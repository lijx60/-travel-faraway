
int fputc(int ch, FILE *f)
{
      HAL_UART_Transmit(&huart1, (uint8_t *)&ch,1, 0xFFFF);
      return ch;
}

How to convert delay into timer delay ?
uint16_t HAL_GetTick_us(void)  //把uwTick增量的功能改到别的定时器
{
 //返回寄存器值，这里先假设定时器2，要按具体情况定
   return  __HAL_TIM_GET_COUNTER(&htim2);
}

// 微秒级延时，更准确。
 void HAL_Delay_us(uint16_t Delay) //小于65535，要拿到前面去声明一下
{
  uint16_t tickstart = HAL_GetTick_us();
  uint16_t wait = Delay;

     while ((HAL_GetTick_us() - tickstart) < wait)
		{
		}
	HAL_TIM_Base_Stop(&htim2);
	 __HAL_TIM_SET_COUNTER(&htim2, 0);
 }


