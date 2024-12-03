/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	142 企业使用[迭代方法]来替代递归


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

uint32_t fibonacci_iterative(uint32_t n) {
	// 迭代方法
	if (n <= 1)
	{
		return n;
	}

	uint32_t fib_n_minus_2 = 0;
	uint32_t fib_n_minus_1 = 1;
	uint32_t fib_n = 0;

	for (size_t i = 2; i <= n; ++i)	// 和i++ 一样，但是效率更高
	{
		fib_n = fib_n_minus_1 + fib_n_minus_2;
		fib_n_minus_2 = fib_n_minus_1;
		fib_n_minus_1 = fib_n;
	}
	return fib_n;
}
