/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	132 函数声明与定义的规则

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


void print_line(void);
void loop_i(void);

int main(void)
{
	/*
		functions 功能块
		1. 代码复用
		2. 代码模块化
	*/


	print_line();
	loop_i();

	system("pause");
	return 0;
}

void print_line(void)
{
	printf("------------------------------\n");
}
void loop_i(void) {
	for (size_t i = 0; i < 5; i++)
	{
		printf("%" PRIu32" \n", i);
	}
}


