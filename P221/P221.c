/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	205.复习scanf_s
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

#define SIZE 50

int main(void)
{

	/**
		scanf
		scanf_s
	*/

	char name[SIZE];

	puts("Enter your name:");
	scanf_s("%49s", name, (unsigned int)sizeof(name));
	printf("Hello,%s!\n", name);

	char ch;
	puts("Enter a character:");
	scanf_s("%c", &ch, (unsigned int)sizeof(ch));
	printf("The character entered was %c\n", ch);

	int age;
	puts("Enter a number:");
	scanf_s("%d", &age);
	printf("The age:%d\n", age);

	system("pause");
	return 0;
}
