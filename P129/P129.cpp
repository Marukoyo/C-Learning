/*
	P129 数组的初步使用
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		
	*/
	// 初始化
	uint32_t numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	uint32_t numbers_2[10];

	int arr1[] = { 1, 2, 3, 4, 5 };

	// 访问数组元素

	// 下标 index
	// 数组遍历
	for (uint32_t i = 0; i < 10; i++)
	{
		printf("numbers[%zu] = %zu\n", i, numbers[i]);
	}


	system("pause");
	return 0;
}


