/*
	P110 训练：求平方和
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	/*
		目的：计算从1到N（N是用户输入）的所有整数的平方和

		2

		3
	*/

	uint32_t number;	// 用户输入的数字A
	uint32_t sum_square = 0;	// 平方和的初始化

	puts("请输入一个整数N，我们将计算从1到N的所有整数的平方和！");

	scanf_s("%u", &number);

	// 

	for (size_t i = 0; i <= number; i++)
	{
		sum_square += i * i;	// 加上当前数的平方
	}

	printf("从1到%u的所有整数的平方和是：%u\n", number, sum_square);

	system("pause");
	return 0;
}

