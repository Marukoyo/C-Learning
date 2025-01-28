/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	186.字符串
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
	// 单个字符
	char c = 't';

	// 字符串
	char arr[] = { "Hello World!" };	// 可修改
	// 'H' 'e' 'l' 'l' 'o' ' ' 'W' 'o' 'r' 'l' 'd' '!' '\0'
	char* ptr = "Hello World!";	// 不可修改 only-read

	char string[5] = "hello";
	char string[5] = { "hello" };

	printf("%s\n", string);

	system("pause");
	return 0;
}