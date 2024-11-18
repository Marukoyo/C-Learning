/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	131 function函数的介绍与作用
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


