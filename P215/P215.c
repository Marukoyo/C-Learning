/*
章节学习视频经常变更，所以不再按照视频标题分P记录
198.strchr与strrchr

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
		Usage of strchr() and strrchr() functions:

		strchr() - This function searches for the first occurrence of a character in a string.
		strrchr() - This function searches for the last occurrence of a character in a string.
		r - stands for reverse
	*/
	const char* str = "Hello, WorldW!";

	char to_find = 'W';
	// Find the first occurrence of 'W'
	char* ptr_char = strchr(str, to_find);
	// Find the last occurrence of 'W'
	char* ptr_reverse_char = strrchr(str, to_find);
	if (ptr_char)
	{
		//	地址内存下标同样从0开始

		// %td is used to print ptrdiff_t type which is the result of pointer difference
		printf("找到了，'%c'的位置是：%td\n", to_find, ptr_char - str + 1);
	}
	else {
		puts("没有找到");
	}

	if (ptr_reverse_char)
	{
		printf("找到了，最后一次出现'%c'的位置是：%td\n", to_find, ptr_reverse_char - str + 1);
	}
	else {
		puts("没有找到");
	}

	system("pause");
	return 0;
}
