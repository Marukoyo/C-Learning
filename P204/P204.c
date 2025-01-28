/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	187.strcpy_s的用法
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
	char str[] = "hello";

	char dest[50];

	strcpy_s(dest, sizeof(dest), str);

	printf("dest = %s\n", dest);
	const char* ptr = { "Hello" };
	system("pause");
	return 0;
}