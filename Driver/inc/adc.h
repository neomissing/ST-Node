/********************************************************************************
 * 文件名  ：adc.h
* 描述     :adc相关函数的头文件    
 * 库版本  ：V2.0.0
 * 作者    ：泽畔无材  QQ:715805855
 *修改时间 ：2012-9-10
**********************************************************************************/
#ifndef __ADC_H
#define __ADC_H

#include "common.h"
//转换时间为14个ADC时钟周期
//时钟频率在1~4M为宜，5V供电可以到6M
//数据右对齐时，先读低位再度高位；左对齐时相反

//函数声明
void ADC1_Init_Single(u8 ch);
void ADC1_Get_Single(u16 *data);
void ADC1_Init_Scan(u8 ch);
void ADC1_Get_Scan(u16* data,u8 n);

#endif