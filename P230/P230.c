/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	213.抽离读写函数
	其实现在才想到之前的章节都没有讲要把指针默认赋值为NULL。这样是比较好的。
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
int main(void)
{

	/**
		r 可以不if(fclose) 判断
		写 要if(fclose) 判断
	*/

	const char* file_name = "game_config.txt";
	read_config_safe(file_name);

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
