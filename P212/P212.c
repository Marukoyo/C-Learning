/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	195.strtok_s
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
//ff 特色一个
int main(void)
{

	/**


	*/
	char str[] = "This is a sample string";
	char delimiter[] = " ";
	char* token;
	// 
	char** context = { 0 };
	token = strtok_s(str, delimiter, &context);

	while (token != NULL) {
		printf("Token:%s\n", token);
		token = strtok_s(NULL, delimiter, &context);
	}

	system("pause");
	return 0;
}