/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	214.a ģʽ ׷��

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

void read_config_safe(const char*);
void append_log_safe(const char*, const char*);
int main(void)
{

	/**

	*/
	const char* config_filename = "config.txt";
	const char* log_filename = "log.txt";

	read_config_safe(config_filename);

	const char* str = "select * from students";

	append_log_safe(log_filename, "drop");

	// All other files are closed

	int numclosed = _fcloseall();
	printf("Number of files closed by _fcloseall(): %d\n", numclosed);

	system("pause");
	return 0;
}
void read_config_safe(const char* filename)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "r");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	�Ǳ�׼��������Standard Error�����������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "open file error %s\n", error_msg);
		exit(EXIT_FAILURE);
	}

	char buffer[256] = { 0 };
	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
	{
		printf("%s", buffer);
	}

	puts("");

	fclose(file_ptr);
}

void append_log_safe(const char* filename, const char* msg)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "a");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	�Ǳ�׼��������Standard Error�����������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "Failed to open log file for appending:%s\n", error_msg);
		exit(EXIT_FAILURE);
	}


	fprintf(file_ptr, "%s\n", msg);

	puts("Append Successfully!");

	fclose(file_ptr);
}
