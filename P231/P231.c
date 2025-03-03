/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	214.a 模式 追加

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
		//	是标准错误流（Standard Error），用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
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
		//	是标准错误流（Standard Error），用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
		fprintf(stderr, "Failed to open log file for appending:%s\n", error_msg);
		exit(EXIT_FAILURE);
	}


	fprintf(file_ptr, "%s\n", msg);

	puts("Append Successfully!");

	fclose(file_ptr);
}
