#include "beep.h"

// 初始化
void BEEP_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    // 使能 GPIOB 端口时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; // BEEP-->GPIOB.8 端口配置
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; // 推挽输出
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // 速度为 50MHz
    GPIO_Init(GPIOB, &GPIO_InitStructure); // 根据参数初始化 GPIOB.8
    GPIO_ResetBits(GPIOB, GPIO_Pin_8); // 输出 0，关闭蜂鸣器输出
}
