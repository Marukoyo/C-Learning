/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	209.ftell,fseek,rewind
	讲得不好，课程开始并没有讲解这三个函数的用途以及基本使用方法（如参数，返回值）
	而且开头没有说明fopen_s 使用了r+模式，前几期视频也不解释fopen 详细用法 这很重要，特别是涉及到开开文件的模式
	而且Micro_Frank把评论与弹幕全部关闭，一点都不利于讨论气氛，这也对后续的C后篇大师有重大影响，因为弹幕与评论不仅可以增加学习气氛，还能及时的补充/勘误视频中有误/不足的部分，正所谓广大的B站学习区精华所在。
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
		perror("文件打开失败");
		return EXIT_FAILURE;
	}
	//	使用ftell获取当前文件指针的位置
	// 
	long position = ftell(file_ptr);
	printf("当前位置：%ld\n", position);

	//	开始读取
	char buffer[100];
	if (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
	{
		printf("从文件读取：%s", buffer);
		// 再次使用ftell获取新的位置
		//Windows系统里面，每行结尾是“<回车><换行>”，即“\r\n”
		position = ftell(file_ptr);
		printf("读取后的新位置：%ld\n", position);

	}
	//	使用fseek函数移动到文件的开始 
	//	The fseek function in C is used to move the file pointer to a specific location within a file. This can be useful when you want to read or write data from a specific position in the file rather than from the beginning.
	fseek(file_ptr, 0L, SEEK_SET);	//L后缀表示long类型
	position = ftell(file_ptr);
	printf("使用fseek后移动到到开始的位置，SEEK_SET = 0 : %ld\n", position);

	memset(buffer, 0, sizeof(buffer));

	for (size_t i = 0; i < 2; i++)
	{
		if (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
		{
			printf("从文件读取：%s", buffer);
		}
	}

	position = ftell(file_ptr);
	printf("读取后的新位置 : %ld\n", position);

	//	rewind
	//	The rewind function in C is used to move the file pointer to the beginning of the file. This can be useful when you want to read or write data from the beginning of the file rather than from the current position in the file.
	rewind(file_ptr);
	position = ftell(file_ptr);
	printf("使用rewind后直接移动到到开始的位置: %ld\n", position);


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
