/*
	P118 训练：简单绘画三角形
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
	uint32_t size;
	puts("请输入图案大小：");

	scanf_s("%" SCNu32, &size);

	puts("打印三角形图案：");

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}

	system("pause");
	return 0;
}

