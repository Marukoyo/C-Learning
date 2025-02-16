/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	193.strcat_s
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
		strcat_s
		最多追加多少个字符
	*/

	char dest[20] = "Hello";
	const char* src = ", World\n";

	size_t max_append = 7; // 最多追加7个字符

	int result = strncat_s(dest, sizeof(dest), src, max_append);

	if (result == 0) {
		printf("Concatenate string: %s\n", dest);
	}
	else
	{
		printf("Error concatenate string.\n");
	}

	system("pause");
	return 0;
}