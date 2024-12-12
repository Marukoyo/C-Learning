/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	165 续上集：指针的算数运算与比较运用
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
	int numbers[] = { 10,20,30,40,50,60,70,80,90,100 };

	int* ptr = numbers; // 等同 int* ptr = &numbers[0];

	// 数组在内存中是连续的，所以可以通过指针进行遍历  
	// 计算数组元素个数
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("数组元素个数：%d\n", size);

	printf("数组：\n");

	// 使用数组下标遍历数组
	for (size_t i = 0; i < size; i++)
	{
		printf("%d", numbers[i]);
	}


	puts("");
	// 使用指针加法移动指针
	ptr += 4;
	printf("使用指针加法访问第五个元素[ptr + 4]：%d\n", *ptr);

	// 使用指针减法移动指针
	ptr -= 4;
	printf("回到第一个元素numbers[ptr - 4]：%d\n", *ptr);

	// 指针之间的减法，计算距离
	int* ptr_start = numbers;	// 等同 int* ptr_start = &numbers[0];
	int* ptr_end = numbers + size - 1;		// 等同 int* ptr_end = &numbers[size - 1];

	printf("数组首尾之间的距离：%" PRIdPTR "\n", ptr_end - ptr_start);
	// ptr_end - ptr_start :9 类型是 ptrdiff_t 打印时使用 PRIdPTR/%td
	printf("数组首尾之间的距离：%td\n", ptr_end - ptr_start);

	// 指针之间的比较
	puts("指针之间的比较：");
	if (ptr_start < ptr_end)
	{
		puts("ptr_start 指向的元素在 ptr_end 指向的元素之前");
	}
	// 使用指针遍历数组
	for (int* i = ptr_start; i < ptr_end + 1; i++)
	{
		printf("%5d", *i);
	}
	puts("");

	// 使用指针减法逐个访问数组元素 （反向遍历）
	for (int* i = ptr_end; i > ptr_start - 1; i--)
	{
		printf("%5d", *i);
	}
	puts("");

	// 指针加减整数访问特定元素
	puts("指针加减整数访问特定元素：");
	uint32_t offset = 3;
	printf("访问第%d个元素：%d\n", offset + 1, *(ptr_start + offset));

	// 回退到第三个元素
	printf("回退到第三个元素：%d\n", *(ptr_start + offset - 1));

	// 比较两个指针
	int* middle_ptr = &numbers[size / 2];

	system("pause");
	return 0;
}

