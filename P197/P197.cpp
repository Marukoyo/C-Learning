/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	180.结构体数组
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

typedef struct
{
	int x;
	int y;
} Point;

int main(void)
{

	/**

	*/

	Point point[2] = { {1 ,2}, {3,4} }; // 定义一个包含10个Point结构体的数组

	for (size_t i = 0; i < 2; i++)
	{
		printf("Point %zu:{%d,%d}\n", i, point[i].x, point[i].y);
	}


	system("pause");
	return 0;
}