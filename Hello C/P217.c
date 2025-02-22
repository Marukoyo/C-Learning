/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	200.strspn��strcspn����
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

	/**
		// Define two strings for comparison
	*/
	const char* str1 = "12345abcdefgh678910";
	const char* str2 = "12345678910";

	// strspn calculates the length of the initial segment of str1 
	// which consists entirely of characters in str2
	size_t len = strspn(str1, str2);

	// Print the length of the initial segment
	printf("The length of the initial segment of str1 containing only characters from str2 is: %zu\n", len);

	system("pause");
	return 0;
}
