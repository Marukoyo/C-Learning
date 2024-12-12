/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	166 再探size_t 与数组与指针的使用
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
		指针与数组的关系
		数组名作为指针的使用
	*/
	int32_t arrays[] = { 10,20,30,40,50,60,70,80,90,100 };

	int32_t* ptr = arrays; // 等同 int32_t* ptr = &arrays[0];

	// size_t 是无符号整型，专门用于表示大小，长度和索引。提高程序在不同平台上的移植性
	size_t arraySize = sizeof(arrays) / sizeof(arrays[0]);

	puts("输出原始数组：");
	for (size_t i = 0; i < arraySize; i++)
	{
		printf("%" PRId32 "\n", arrays[i]);
	}
	puts("");
	printf("输出增加后的数组：\n");
	// 通过指针增加数组的每个元素的值
	for (size_t i = 0; i < arraySize; i++)
	{
		*(ptr + i) += 5;
		printf("%" PRId32 "\n", arrays[i]);
	}

	
	system("pause");
	return 0;
}

