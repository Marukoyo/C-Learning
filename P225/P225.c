/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	209.fputs,fputc��wģʽ
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

#include <errno.h>

#define PI 3.1415926

int main(void)
{

	/**
		fopen()
		fopen_s()

	*/
	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, "test.txt", "w");
	if (err != 0 || file_ptr == NULL)
	{
		perror("�ļ���ʧ��");
		return EXIT_FAILURE;
	}
	// fputc() fputs() fprintf()
	fputc('H', file_ptr);
	fputc('i', file_ptr);
	fputc('\n', file_ptr);

	fputs("Hello World\n", file_ptr);

	fprintf_s(file_ptr, "Number: %d,%f,%s\n", 10, PI, "End of example.");
	fputs("nimabi", file_ptr);

	if (fclose(file_ptr) != 0)
	{
		perror("Error in closing File");
	}
	else
	{
		puts("File closed successfully");
		puts("File `test.txt` has been written successfully.\n");
	}

	system("pause");
	return 0;
}
