/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	196.strcmp
	����Ҫ��ֽ��ַ���
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
		����ֻҪ���漰���޸��ַ��� �������ô�_s�ĺ���
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