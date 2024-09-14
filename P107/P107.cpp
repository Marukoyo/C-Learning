/*
	P107 continue 的用法
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
#include <time.h>
#include <stdbool.h>

int main(void)
{
	/*

	*/

	uint32_t sum = 0;
	int32_t number;
	
	puts("请输入一系列正整数来计算他们的和。");
	puts("可以输入负数，但是负数不会被计算。");
	puts("输入0结束，并且显示出总和。");
	
	while (true)
	{
		printf("请输入一个整数：");
		scanf_s("%d", &number);
		if (number == 0)
		{
			break;
		}
		if (number < 0)
		{
			continue;	// 跳过本次循环（剩余部分），继续下一次循环
		}
		sum += number;
	}

	printf("这些正整数的和是：%u\n", sum);

	system("pause");
	return 0;
}
