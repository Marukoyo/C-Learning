/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	152 块作用域与链接性


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
#include "helper.h"
void demo(int);
int main(void)
{

	/**
	*	作用域与链接性
		linkage: 链接性
	*/
	fun();
	demo(1);
	system("pause");
	return 0;
}

void demo(int x) {
	int a = 10;		// a的作用域仅在demo()函数内
	if (a > 5)
	{
		int b = 20;	// b的作用域仅在if语句内
		printf("a = %d, b = %d\n", a, b);
	}
	x += 1;
}