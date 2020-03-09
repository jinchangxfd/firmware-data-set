#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
	 
 
#define KEY0  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_15)//读取按键0

#define KEY0_Press	1

void KEY_Init(void);//IO初始化
u8 KEY_Scan(u8);  	//按键扫描函数					    
#endif
