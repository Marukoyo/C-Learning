/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	163 从代码上尝试认识野指针
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

int main(void)
{

	/**

	*/
	/* wild pointer */
	int* p;
	/* Some unknown memory location is being corrupted.
	This should never be done. */
	*p = 12;
	system("pause");
	return 0;
}

