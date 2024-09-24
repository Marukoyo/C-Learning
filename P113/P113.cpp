/*
	P113 训练：阶乘
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
#include <windows.h>

int main(void)
{
	/*
		用户输入一个正整数，计算阶乘。默认还是从1开始
	*/

	uint32_t number;	// INPUT
	uint32_t factorial = 1;

	puts("请输入一个正整数,我们将计算阶乘：");

	scanf_s("%" SCNu32, &number);

	for (size_t i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	printf("阶乘结果(! =)是：%" PRIu32 "\n", (uint32_t)factorial);

	system("pause");
	return 0;
}

