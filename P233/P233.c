/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	214.r+ 模式 企业实际案例（难）：修改log
	还是有问题
	1. 清除行数据时的错误：你这行代码本意是清除原来行的数据，但有两个问题：
?	strlen(buffer) 已经是 buffer 中字符的长度，包括换行符。你应该直接将其清空，memset(buffer, 0, sizeof(buffer)) 是更安全的方式。
?	即使你只清除到 strlen(buffer) - 1，在 fputs 写入新内容时，你也不会完全清除剩余的空间。
2.	减少冗余的 fseek 调用： 删除了多余的 fseek，使得文件指针始终定位到替换位置。


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

#define BUFFER_SIZE 1024

void read_config_safe(const char*);
void append_log_safe(const char*, const char*);
void clear_log(const char*);
errno_t update_log(const char* filename, const char* search_str, const char* replace_str);
int main(void)
{

	/**

	*/
	const char* log_file = "frank.log";
	const char* search_str = "Memory usage exceeds 80% of available memory.";
	const char* replace_str = "[2023-02-14T12:36:00Z] [WARN] Memory usage is back to normal levels.";
	

	const char* log_file2 = "zhangsan.log";
	const char* search_str2 = "这天气";
	const char* replace_str2 = "王八蛋";


	errno_t result = update_log(log_file, search_str, replace_str);
	if (result != 0)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), result);
		//	是标准错误流（Standard Error*/),用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
		fprintf(stderr, "open file error %s\n", error_msg);
	}
	else
	{
		puts("Record Update Successfully!");
	}


	errno_t result2 = update_log(log_file2, search_str2, replace_str2);
	if (result2 != 0)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), result2);
		//	是标准错误流（Standard Error*/),用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
		fprintf(stderr, "open file error %s\n", error_msg);
	}
	else
	{
		puts("Record Update Successfully!");
	}


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

void clear_log(const char* filename)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "w");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	是标准错误流（Standard Error），用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
		fprintf(stderr, "open file error %s\n", error_msg);
		exit(EXIT_FAILURE);
	}
	// w 模式 会把现有文件的长度截为0；如果文件不存在，则创建一个新文件
	puts("文件已经打开 w 模式");

	fclose(file_ptr);
}

//errno_t update_log(const char* filename, const char* search_str, const char* replace_str)
//{
//	if (filename == NULL || search_str == NULL || replace_str == NULL) {
//		return EINVAL;	//返回无效参数错误
//	}
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "r+");
//	if (err != 0 || file_ptr == NULL)
//	{
//		char error_msg[256] = { 0 };
//		strerror_s(error_msg, sizeof(error_msg), err);
//			是标准错误流（Standard Error*/),用于输出错误信息或诊断信息。在 C 和 C++ 中，通常使用它来报告程序运行中的错误，而不是将错误信息写入标准输出流 
//		fprintf(stderr, "open file error %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	char buffer[BUFFER_SIZE] = { 0 };
//	long position = 0;
//	int found = 0;
//
//	while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
//		 strstr 函数用于在字符串中查找子字符串 
//		if (strstr(buffer, search_str) != NULL) {
//			found = true;
//			 这行代码的目的是计算文件中某个字符串所在位置的开始位置。它通过获取当前文件位置的偏移字节数位置，并减去当前行的长度和一个字节（可能是换行符），然后将文件指针移回到这个字符串的所在行的起始位置，以便后续对该位置进行修改或替换。
//			position = ftell(file_ptr) - (long)strlen(buffer) - 1;	// -1 是换行符
//			break;
//		}
//	}
//
//	if (found) {
//		 fseek 函数用于改变文件指针的位置(即搜索到的字符串当前行的行头位置)
//		fseek(file_ptr, position, SEEK_SET);
//
//		 计算替换文本与原文本的长度差异
//		size_t replace_len = strlen(replace_str);
//		size_t search_len = strlen(search_str);
//
//		if (replace_len > BUFFER_SIZE - 1 || search_len > BUFFER_SIZE - 1)
//		{
//			fclose(file_ptr);
//			return ERANGE;	//返回超出范围错误
//		}
//
//		 写入新纪录之前，清除所在位置的行数据
//		memset(buffer, ' ', strlen(buffer) - 1);	
//
//		buffer[strlen(buffer) - 1] = '\n'; // -1 用于添加末尾\n
//
//		fseek(file_ptr, position, SEEK_SET);	// 重新回到标记行的开头
//
//		fputs(buffer, file_ptr);	// 清除原来行内容
//
//		fseek(file_ptr, position, SEEK_SET);	// 重新回到标记行的开头
//
//		int result = fputs(replace_str, file_ptr);
//
//		if (result == EOF)
//		{
//			fclose(file_ptr);
//			return errno;
//		}
//	}
//	else
//	{
//		fclose(file_ptr);
//		return ENOENT;	//返回文件不存在错误
//	}
//	fclose(file_ptr);
//	return 0;
//}

errno_t update_log(const char* filename, const char* search_str, const char* replace_str)
{
	if (filename == NULL || search_str == NULL || replace_str == NULL) {
		return EINVAL; // 返回无效参数错误
	}
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "r+");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		fprintf(stderr, "open file error %s\n", error_msg);
		return err;
	}

	char buffer[BUFFER_SIZE] = { 0 };
	long position = 0;
	int found = 0;

	while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
		if (strstr(buffer, search_str) != NULL) {
			found = 1;
			position = ftell(file_ptr) - (long)strlen(buffer) - 1; // -1 是换行符 Tips：windows下,IDE当前文件及修改的文件(log)要用使用同当前编译平台——即windows相同的CRLF模式
			break;
		}
	}

	if (found) {
		size_t replace_len = strlen(replace_str);
		size_t search_len = strlen(search_str);

		if (replace_len > BUFFER_SIZE - 1 || search_len > BUFFER_SIZE - 1)
		{
			fclose(file_ptr);
			return ERANGE; // 返回超出范围错误
		}

		// 清除原来行内容
		memset(buffer, ' ', strlen(buffer));
		buffer[strlen(buffer) - 1] = '\n';

		fseek(file_ptr, position, SEEK_SET); // 重新回到标记行的开头

		fputs(buffer, file_ptr); // 清除原来行内容

		fseek(file_ptr, position, SEEK_SET); // 重新回到标记行的开头

		int result = fputs(replace_str, file_ptr);

		if (result == EOF)
		{
			fclose(file_ptr);
			return errno;
		}
	}
	else
	{
		fclose(file_ptr);
		return ENOENT; // 返回文件不存在错误
	}
	fclose(file_ptr);
	return 0;
}
