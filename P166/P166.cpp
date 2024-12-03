/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	151 register寄存器声明


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

void demo_re_var(void);
int main(void)
{

	/**
		寄存器
	*/
	demo_re_var();

	system("pause");
	return 0;
}
void demo_re_var(void) {
	register int counter;

	for (counter = 0; counter < 10; counter++)
	{
		printf("%d\n", counter);
	}
}
