/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	208fopen_s,fgetc,fgets,fclose读取r模式
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
	// 打开文件，设定文件路径要读取的文件，设定文件的操作模式r
	errno_t err = fopen_s(&file_stream, "./test.txt", "r");	//r : read, w: write, a: append, r+: read and write, w+: write and read, a+: append and read
	// 文件路径不对，文件不存在，文件小狐仙了异常，文件没有权限访问。。。
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
	// 此时文件指针已经到达文件末尾
	memset(buffer, 0, sizeof(buffer));

	rewind(file_stream);	//将文件指针重新指向文件开头
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
