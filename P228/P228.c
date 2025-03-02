/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	211-2.fprintf_s
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

	FILE* stream = NULL;

	long l;
	float fp;
	char s[81];
	char c;

	errno_t err = fopen_s(&stream, "frank.txt", "w+");
	if (err) {
		printf_s("The file fscanf.out was not opened\n");
		return EXIT_FAILURE;
	}
	else {
		int id = 1;
		float temperature = 36.5f;
		char name[] = "Frank";
		char grade = 'A';

		fprintf(stream, "ID: %d\n", id);
		fprintf(stream, "Temperature: %f\n", temperature);
		fprintf(stream, "Name: %s\n", name);
		fprintf(stream, "Grade: %c\n", grade);

		fclose(stream);

		puts("数据写入完成！\n");

	}



	system("pause");
	return 0;
}
