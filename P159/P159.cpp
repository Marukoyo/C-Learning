/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	144 作用域Scope


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

uint32_t fibonacci_iterative(uint32_t);
int main(void)
{
	/**

		斐波那契数列
		递归,阶乘
	*/
	uint32_t number = 10;
	printf("%u 项： %u\n", number, fibonacci_iterative(number));



	system("pause");
	return 0;
}

