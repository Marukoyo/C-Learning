/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	209.ftell,fseek,rewind
	���ò��ã��γ̿�ʼ��û�н�����������������;�Լ�����ʹ�÷����������������ֵ��
	���ҿ�ͷû��˵��fopen_s ʹ����r+ģʽ��ǰ������ƵҲ������fopen ��ϸ�÷� �����Ҫ���ر����漰�������ļ���ģʽ
	����Micro_Frank�������뵯Ļȫ���رգ�һ�㶼�������������գ���Ҳ�Ժ�����C��ƪ��ʦ���ش�Ӱ�죬��Ϊ��Ļ�����۲�����������ѧϰ���գ����ܼ�ʱ�Ĳ���/������Ƶ������/����Ĳ��֣�����ν����Bվѧϰ���������ڡ�
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
		ftell
		fseek
		rewind
	*/

	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, "Frank.txt", "r+");
	if (err != 0 || file_ptr == NULL)
	{
		perror("�ļ���ʧ��");
		return EXIT_FAILURE;
	}
	//	ʹ��ftell��ȡ��ǰ�ļ�ָ���λ��
	// 
	long position = ftell(file_ptr);
	printf("��ǰλ�ã�%ld\n", position);

	//	��ʼ��ȡ
	char buffer[100];
	if (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
	{
		printf("���ļ���ȡ��%s", buffer);
		// �ٴ�ʹ��ftell��ȡ�µ�λ��
		//Windowsϵͳ���棬ÿ�н�β�ǡ�<�س�><����>��������\r\n��
		position = ftell(file_ptr);
		printf("��ȡ�����λ�ã�%ld\n", position);

	}
	//	ʹ��fseek�����ƶ����ļ��Ŀ�ʼ 
	//	The fseek function in C is used to move the file pointer to a specific location within a file. This can be useful when you want to read or write data from a specific position in the file rather than from the beginning.
	fseek(file_ptr, 0L, SEEK_SET);	//L��׺��ʾlong����
	position = ftell(file_ptr);
	printf("ʹ��fseek���ƶ�������ʼ��λ�ã�SEEK_SET = 0 : %ld\n", position);

	memset(buffer, 0, sizeof(buffer));

	for (size_t i = 0; i < 2; i++)
	{
		if (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
		{
			printf("���ļ���ȡ��%s", buffer);
		}
	}

	position = ftell(file_ptr);
	printf("��ȡ�����λ�� : %ld\n", position);

	//	rewind
	//	The rewind function in C is used to move the file pointer to the beginning of the file. This can be useful when you want to read or write data from the beginning of the file rather than from the current position in the file.
	rewind(file_ptr);
	position = ftell(file_ptr);
	printf("ʹ��rewind��ֱ���ƶ�������ʼ��λ��: %ld\n", position);


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
