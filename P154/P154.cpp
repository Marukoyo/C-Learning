/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	139 递归

*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

uint32_t factorial(uint32_t);
int main(void)
{
	/*
		递归,阶乘
	*/
	uint32_t number = 5;
	printf("%u的阶乘是%u\n", number ,factorial(number));



	system("pause");
	return 0;
}

uint32_t factorial(uint32_t n) {
	if (n == 0)
	{
		return 1;
	}
	else
	{
		// 尾递归
		return n * factorial(n - 1);
		// return 5 * factorial(4)
			// return 4 * factorial(3)
				// return 3 * factorial(2)
					// return 2 * factorial(1)
						// return 1
	}
}
