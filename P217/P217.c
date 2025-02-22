/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	200.strspn 与 strcspn 函数
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


	//strspn() 函数用于计算字符串 str1 中开头连续有几个字符都属于字符串 str2
	// The strcspn function in C is used to calculate the length of the initial segment of a string (str1) which consists entirely of characters not found in another string (str2). Essentially, it tells you how many characters at the beginning of str1 do not appear in str2.
	const char* str1 = "123456abcdefghi678910";
	const char* str2 = "abcdefghi123456678910";
	const char* str3 = "12345678910";

	size_t len = strspn(str1, str3);
	size_t len2 = strcspn(str2, str3);

	printf("The length of initial segment matching is %zu\n", len);
	printf("The length of initial segment matching is %zu\n", len2);

	char input[] = "filen?ame.txt";
	char invalid_char[] = "/\\:*?\"<>|";

	if (strcspn(input, invalid_char) < strlen(input))
	{
		printf("Input contains invalid character.\n");
	}
	else
	{
		printf("Input is valid.\n");
	}
	printf("Input: %zu\n", strcspn(input, invalid_char));

	system("pause");
	return 0;
}
