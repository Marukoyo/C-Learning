/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	194.gets_s
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
		puts
		gets C11 后 大部分编译器不支持
	*/

	const char* str = "Hello!";
	puts(str);

	char buffer[100] = { 0 };

	puts("Enter a string:");
	if (gets_s(buffer, sizeof(buffer)) == NULL)
	{
		puts("An error occurred.");
	}
	else
	{
		printf("You entered: %s\n", buffer);
	}

	system("pause");
	return 0;
}