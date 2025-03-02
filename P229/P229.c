/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	212.fprintf_s
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

		ferror
		feof
		clearerr - The `clearerr` function clears the end-of-file (EOF) and error indicators for the specified stream in C++.
	*/

	FILE* file_ptr = NULL;

	errno_t err = fopen_s(&file_ptr, "frank.txt", "r");
	if (err != 0 || file_ptr == NULL) {
		printf_s("The file frank.txt was not opened\n");
		return EXIT_FAILURE;
	}

	char buffer[100];
	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
		printf_s("%s", buffer);
	}

	if (ferror(file_ptr))
	{
		perror("读或者写出现错误");
		clearerr(file_ptr);
	}

	if (feof(file_ptr))
	{
		printf_s("文件结束\n");
	}
	else
	{
		printf("文件未结束\n");

	}
	fclose(file_ptr);
	system("pause");
	return 0;
}
