/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	146 局部变量的作用域限定、自动储存期、初始值未定义


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
		局部变量 local variable
		作用域限定
		自动存储期
		初始值未定义
	*/
	uint32_t number = 10;
	printf("%u 项： %u\n", number, fibonacci_iterative(number));



	system("pause");
	return 0;
}

