/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	219.�����ļ�
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

	*/

	FILE* source_file, * target_file;

	char source_path[] = "frank.txt";
	char target_path[] = "fuck.txt";

	char buffer[1024];

	size_t bytes_read;

	errno_t err = fopen_s(&source_file, source_path, "rb");

	if (err != 0 || source_file == NULL)
	{
		perror("�޷���Դ�ļ�");
		return EXIT_FAILURE;
	}

	errno_t err2 = fopen_s(&target_file, target_path, "wb");

	if (err2 != 0 || source_file == NULL)
	{
		perror("�޷���Դ�ļ�");
		fclose(source_file);
		return EXIT_FAILURE;
	}

	while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
		fwrite(buffer, 1, bytes_read, target_file);
	}

	_fcloseall();

	puts("�ļ��������");


	system("pause");
	return 0;
}

