#ifndef __BEEP_H
#define __BEEP_H

#include "stm32f10x.h"
#include "sys.h"

// BEEP 端口定义
#define BEEP PBout(8)// BEEP,蜂鸣器接口

void BEEP_Init(void);// 初始化

#endif
