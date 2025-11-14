#include "stm32f10x.h"

#include "delay.h"


#include "led.h"
#include "beep.h"


int main()
{
    delay_init();
    LED_Init();
    BEEP_Init();


    while(1)
    {
        LED0 = ON;
        BEEP = ON;
        delay_ms(300); //—” ± 300ms
        LED0 = OFF;
        BEEP = OFF;
        delay_ms(300); //—” ± 300ms
    }
}
