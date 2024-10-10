/*
	P119 训练：金字塔数字
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
	uint32_t levels;
	puts("请输入金字塔的层数：");

	scanf_s("%" SCNu32, &levels);

	puts("数字金字图案如下：");

	for (size_t i = 1; i <= levels; i++)
	{
		// 空格数量
		uint32_t spaces = levels - i;	

		// 输出空格 j < levels - i
		for (size_t j = 0; j < levels - i; j++)
		{
			printf("  ");
		}
		for (size_t j = 1; j <= i; j++)
		{
			printf("%zu ",j);
		}
		for (size_t j = i - 1; j > 0; j--)
		{
			printf("%zu ", j);
		}
		puts("");
		
	}

	system("pause");
	return 0;
}

