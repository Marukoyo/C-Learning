/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	206.scanf_s ����ֵ
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
		scanf_s ����stringʱ��һ��Ҫ�ṩ��������С
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
