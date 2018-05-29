/*******************************************************************************
Copyright  : 2017-2018,WDI(Xiamen) Technology Co., Ltd.
File name  : USER/include.h
Description: 1.���û��Ա�д�õ���ͷ�ļ������м��а���
             2.��ÿ���û���д��Դ�����У�ֻ��Ҫ����"include.h"���ɡ�
Author     : ���Ӻ�
Version    : V0.0
Date       : �������
History    : �޸���ʷ��¼�б� ÿ���޸ļ�¼Ӧ�����޸����ڡ��޸�
             �߼��޸����ݼ�����
*******************************************************************************/
#ifndef INCLUDE_H
#define INCLUDE_H

#include "stm32f0xx.h"
#include "stdio.h"
#include "string.h"
typedef enum
{
   FLAG_NULL,               //��ֵ
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
//#define TESTER_MODE Step_Motor_Life_Test    //������������
//#define TESTER_MODE Flowmeter_Duty          //������ռ�ձ�
//#define TESTER_MODE Flowmeter_Flow          //����������
//#define TESTER_MODE Step_Motor_Power_Test   //���Ť�ز���
//#define TESTER_MODE Step_Motor_Step_Set_1     //��������趨,ÿ�μ�4��
//#define TESTER_MODE Step_Motor_Step_Set_2     //��������趨������5������ִ��
//#define TESTER_MODE Flowmeter_Compare
#define TESTER_MODE DISPLAY



#endif

/******************** (C) COPYRIGHT WDI(Xiamen) Technology *****END OF FILE****/
