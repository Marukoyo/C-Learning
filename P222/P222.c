/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	206.scanf_s 返回值
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
#include <signal.h>



int main(void)
{

	/**
		scanf
		scanf_s 用于string时，一定要提供缓冲区大小
	*/

	int number;
	int result;

	puts("Please enter a number:");
	result = scanf_s("%d", &number);
	if (result == 1)
	{
		printf("You entered %d\n", number);
	}
	// End of file -1
	else if (result == EOF)
	{
		printf("End of file encountered.\n");

	}
	else
	{
		printf("You did not enter an integer.\n");
	}




	system("pause");
	return 0;
}
