/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	192.strncpy_s
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
		strncpy_s
		strncpy
	*/

	char dest[20];
	const char* src = "Hello, World!";
	size_t max_copy = 10;
	errno_t result = strncpy_s(dest, sizeof(dest), src, max_copy);

	if (result == 0)
	{
		printf("Copied String: %s\n", dest);
	}
	else
	{
		printf("Failed to copy string\n");
	}
	system("pause");
	return 0;
}