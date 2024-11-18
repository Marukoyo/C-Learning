/*
	P132 数组的注意事项
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main(void)
{
	/*

	*/
	uint32_t numbers[SIZE] = { 1,2 };

	printf("%" PRId32"\n", numbers[0]);
	// 数组的长度

	for (size_t i = 0; i < sizeof numbers / sizeof numbers[0]; i++)
	{
		printf("%" PRId32"\n", numbers[i]);
	}
	// 错误1.越界访问

	// 错误2.未初始化数组

	// 错误3. 数组大小错误 SIZE > 0

	// 警告1.部分初始化 剩下的值默认为0

	// 提示：总是初始化数组

	system("pause");
	return 0;
}


