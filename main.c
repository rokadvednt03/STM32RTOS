#include "stm32f103xx_gpio.h"

int i , j ;
void GPIO1Conf(void);
void GPIO2Conf(void);
void delay(int a);




int main(void)
{
	GPIO1Conf();
	GPIO2Conf();
	
	while(1)
	{
		
	}
	

}










void GPIO1Conf(void)
{
	GPIO_Handle_t gpio1;
	gpio1.pGPIOx = GPIOA;
	gpio1.GPIO_PinConfig.GPIO_PinNumber = 13;
	gpio1.GPIO_PinConfig.GPIO_ModeInOut = GPIO_OUT_50MHZ;
	gpio1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT_PP;
	GPIO_PeriClockControl(GPIOA,ENABLE);
	GPIO_Init(&gpio1);
}


void GPIO2Conf(void)
{
	GPIO_Handle_t gpio2;
	gpio2.pGPIOx = GPIOB;
	gpio2.GPIO_PinConfig.GPIO_PinNumber = 13;
	gpio2.GPIO_PinConfig.GPIO_ModeInOut = GPIO_OUT_50MHZ;
	gpio2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT_PP;
	GPIO_PeriClockControl(GPIOA,ENABLE);
	GPIO_Init(&gpio2);
}


void task1(void)
{
	
	
}

void task2(void)
{
	
}

void delay(int a)
{
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 1000000 ; j++);
	}
}