/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	199.strstr
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
#include <string.h>  // Include string.h for strchr and strrchr

int main(void)
{

	/**
		strstr() 函数用于查找一个字符串在另一个字符串中的第一次出现的位置。
		usage: char *strstr(const char *haystack, const char *needle)
		return: 返回一个指针，指向字符串 needle 第一次出现的位置；如果未找到字符串 needle，则返回 NULL。
	*/
	const char* text = "This is a simple test string.";
	const char* sub = "simple";
	char* result = strstr(text, sub);

	// NULL

	if (result != NULL) {
		printf("'%s' was found in '%s' at position %td\n", sub, text, result - text + 1);
	}
	else {
		printf("'%s' was not found in '%s'\n", sub, text);
	}

	system("pause");
	return 0;
}
