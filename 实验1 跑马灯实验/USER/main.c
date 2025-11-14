#include "stm32f10x.h"

#include "delay.h"

#include "led.h"

int main()
{
    LED_Init();
    delay_init();

    while(1)
    {
        LED0 = ON;
        LED1 = OFF;
        delay_ms(300); //—” ± 300ms
			
        LED0 = ON;
        LED1 = OFF;
        delay_ms(300); //—” ± 300ms
    }
}
