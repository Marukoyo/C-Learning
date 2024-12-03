/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	148 静态局部变量 static variable


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

void increment_counter(void);
int main(void)
{

	/**
		静态局部变量
		1. 静态局部变量在函数内部定义，但是在函数外部不可见
		2. 静态局部变量在函数内部初始化，只会初始化一次
		3. 即使函数调用结束，静态局部变量的值也会保留
		4. 用于函内部保持状态或者计数
	*/
	for (size_t i = 0; i < 3; i++)
	{
		increment_counter();
	}


	system("pause");
	return 0;
}

void increment_counter(void)
{
	static int counter = 0;
	counter++;
	printf("Counter is %d\n", counter);
}

