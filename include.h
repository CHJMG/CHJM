/*******************************************************************************
Copyright  : 2017-2018,WDI(Xiamen) Technology Co., Ltd.
File name  : USER/include.h
Description: 1.对用户自编写用到的头文件，进行集中包含
             2.在每个用户编写的源程序中，只需要包含"include.h"即可。
Author     : 苏子洪
Version    : V0.0
Date       : 完成日期
History    : 修改历史记录列表， 每条修改记录应包括修改日期、修改
             者及修改内容简述。
*******************************************************************************/
#ifndef INCLUDE_H
#define INCLUDE_H

#include "stm32f0xx.h"
#include "stdio.h"
#include "string.h"
typedef enum
{
   FLAG_NULL,               //空值
   FLAG_YES,                //
   FLAG_NO
}FLAG_YN;

#include "stm32f0xx_it.h"
#include "math.h"
#include "peripheral_config.h"
#include "mydoc.h"
#include "main.h"
#include "lm3033cdw.h"

#define Disp_Graph              0
#define Step_Motor_Life_Test    1
#define Flowmeter_Duty          2
#define Flowmeter_Flow          3
#define Step_Motor_Power_Test   4
#define Step_Motor_Step_Set_1   5
#define Step_Motor_Step_Set_2   6
#define Flowmeter_Compare       7
#define DISPLAY                 8


//#define TESTER_MODE Disp_Graph
//#define TESTER_MODE Step_Motor_Life_Test    //换向阀寿命测试
//#define TESTER_MODE Flowmeter_Duty          //流量计占空比
//#define TESTER_MODE Flowmeter_Flow          //流量计流量
//#define TESTER_MODE Step_Motor_Power_Test   //电机扭矩测试
//#define TESTER_MODE Step_Motor_Step_Set_1     //电机步数设定,每次加4步
//#define TESTER_MODE Step_Motor_Step_Set_2     //电机步数设定，按照5档步数执行
//#define TESTER_MODE Flowmeter_Compare
#define TESTER_MODE DISPLAY



#endif

/******************** (C) COPYRIGHT WDI(Xiamen) Technology *****END OF FILE****/
