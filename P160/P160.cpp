/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	145 生命周期lifetime


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
		全局变量，全局作用域，生命周期从程序开始到程序结束
		内存泄露
		访问已经被销毁的变量
		生命周期（Lifetime）：它描述了一个从变量被创建（或者初始化）到变量被销毁（或者被回收）的整个过程。
	*/
	uint32_t number = 10;
	printf("%u 项： %u\n", number, fibonacci_iterative(number));



	system("pause");
	return 0;
}

