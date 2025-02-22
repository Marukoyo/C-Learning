/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	201.再次废话
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
#include <string.h>  

int main(void)
{
	// 字符串指针 与 字符串数组

	char str[] = "Hello";
	char* ptr = str;
	// char* ptr = &str[0];  // 与上一行等价

	ptr[1] = 'a';  // 修改第一个字符

	printf("%s\n", str);

	while (*ptr != '\0')
	{
		printf("%c\n", *ptr);
		ptr++;
	}

	const char* ptr2 = "hello";  // 字符串常量，不能修改•	字符串常量（如 "hello"）通常存储在只读内存区域。这意味着你不能修改它们的内容，因为它们被编译器放在一个只读的内存段中。
	// ptr2[1] = 'a';  // 错误
	system("pause");
	return 0;
}
