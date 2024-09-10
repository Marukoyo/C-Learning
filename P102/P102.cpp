/*
	P102 break与利用死循环 -求和案例
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <stdint.h>

int main(void)
{
	/*
		写一个计算求整数和的案例。
		用户从终端输入一系列数字，用回车隔开，直到用户输入一个单个0作为结束，
		然后把所有的数相加，最终计算结果。
	*/

	uint32_t sum = 0;	// 初始化数字和是0

	uint32_t number;	// 用于存储用户输入的数字 利用死循环可以不用初始化赋值

	puts("请输入一系列数字，用回车隔开，直到输入一个单个0作为结束：");

	while (true) {
		scanf_s("%" SCNu32, &number);
		sum += number;

		if (number == 0)
		{
			break;		
		}
	}

	printf("所有的数字的和是：%" PRIu32 "\n", sum);

	system("pause");
	return 0;
}


