/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	196.strcmp
	按照要求分解字符串
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
		但凡只要是涉及到修改字符串 基本用用带_s的函数
		strcmp 
		strncmp
	*/
	const char* str1 = "Hello, World!";
	const char* str2 = "Hello, World!";
	const char* str3 = "Hello, Guys!";

	if (strcmp(str1, str2) == 0) {
		printf("str1 and str2 are equal!\n");
	}
	else {
		printf("str1 and str2 are not equal!\n");
	}

	if (strcmp(str1, str3) == 0) {
		printf("str1 and str3 are equal!\n");
	}
	else
	{
		printf("str1 and str3 are not equal!\n");
	}

	system("pause");
	return 0;
}