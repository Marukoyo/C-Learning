/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	168 指针访问多维数组
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

int main(void)
{

	/**

	*/
	int matrix[2][3] = { {1,2,3},{4,5,6} };

	int(*ptr)[3] = matrix;	// 指向数组的指针
	// (*ptr)[3] 表示ptr是一个指针，指向一个数组，数组的长度是3,数组的元素是int类型

	// int* ptr[3] = {0x111111,0x11112,0x11113};	// 指针数组，数组的元素是指针，指针指向int类型，长度是3

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++) {
			printf("%d ", *(*(ptr + i) + j));
		}
		puts("");
	}
	system("pause");
	return 0;
}