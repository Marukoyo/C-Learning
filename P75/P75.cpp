/*
	P72 掩码与电路遥控LED灯练习
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	
/*
	P75 逗号运算符
*/

int main(void)
{
	// 变量命名需要有意义，此处仅为测试案例
	uint8_t a = 1, b = 2, c = 3;
	uint8_t result = (a += 1, b += 2, c += 3);	// 逗号运算符，从左到右执行，※返回最后一个表达式的值 谨慎使用,甚至不要使用
	printf("result = %d\n", result);
}

