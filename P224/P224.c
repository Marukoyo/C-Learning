/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	208fopen_s,fgetc,fgets,fclose��ȡrģʽ
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


int main(void)
{

	/**
		fopen()
		fopen_s()

	*/
	FILE* file_stream = NULL;
	FILE* socket_stream = NULL;

	char buffer[256];
	// ���ļ����趨�ļ�·��Ҫ��ȡ���ļ����趨�ļ��Ĳ���ģʽr
	errno_t err = fopen_s(&file_stream, "./test.txt", "r");	//r : read, w: write, a: append, r+: read and write, w+: write and read, a+: append and read
	// �ļ�·�����ԣ��ļ������ڣ��ļ�С�������쳣���ļ�û��Ȩ�޷��ʡ�����
	// read
	// EOF: end of file
	if (err != 0 || file_stream == NULL)
	{
		perror("Error opening file");
		return EXIT_FAILURE;
	}
	while (fgets(buffer, sizeof(buffer), file_stream) != NULL) {
		printf("buffer: %s", buffer);
	}
	puts("");
	// ��ʱ�ļ�ָ���Ѿ������ļ�ĩβ
	memset(buffer, 0, sizeof(buffer));

	rewind(file_stream);	//���ļ�ָ������ָ���ļ���ͷ
	int ch;

	while ((ch = fgetc(file_stream)) != EOF)
	{
		putchar(ch);
	}

	if (fclose(file_stream) != 0)
	{
		perror("Error closing file");
		return EXIT_FAILURE;
	}
	puts("");

	system("pause");
	return 0;
}
