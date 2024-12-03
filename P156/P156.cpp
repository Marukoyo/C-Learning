/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	141 为什么不建议使用递归以及递归和尾递归用途区别

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

uint32_t factorial(uint32_t, uint32_t);
int main(void)
{
	/*
		递归,阶乘
	*/
	uint32_t number = 5;
	printf("%u的阶乘是%u\n", number, factorial(number, 1));



	system("pause");
	return 0;
}

uint32_t factorial(uint32_t n, uint32_t acc) {
	// acc ——累加器 accumulator
	if (n == 0)
	{
		return acc;
	}
	else
	{
		// 尾递归
		return factorial(n - 1, n * acc);
		// return factorial(4, 5)
			// return factorial(3, 20)
				// return factorial(2, 60)
					// return factorial(1, 120)
						// return 1

	}
}
