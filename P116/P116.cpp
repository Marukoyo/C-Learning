/*
	P116 训练：简单的乘法表
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
	uint32_t num;
	puts("请输入一个正整数，我们将为您生成乘法表：");

	scanf_s("%" SCNu32, &num);

	printf("乘法表 %" PRIu32 ":\n", num);

	for (size_t i = 1; i <= 10; i++)
	{
		printf("%u * %u = %u\n", num, i, num * i);
	}

	system("pause");
	return 0;
}

