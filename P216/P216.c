/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
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
		strstr() �������ڲ���һ���ַ�������һ���ַ����еĵ�һ�γ��ֵ�λ�á�
		usage: char *strstr(const char *haystack, const char *needle)
		return: ����һ��ָ�룬ָ���ַ��� needle ��һ�γ��ֵ�λ�ã����δ�ҵ��ַ��� needle���򷵻� NULL��
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
