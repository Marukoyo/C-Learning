/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	167 案例：指针查找特定元素的索引并返回
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
// 查找特定元素的索引，并返回是否找到以及元素的索引
bool find_value(const int32_t*, size_t, int32_t, size_t*);
int main(void)
{

	/**

	*/
	int32_t values[] = { 10,20,30,40,50 };

	int32_t* start_ptr = values;

	size_t value_size = sizeof(values) / sizeof(values[0]);

	int32_t target_value = 30;

	size_t index = 0;

	bool found = find_value(values, value_size, target_value, &index);
	if (found)
	{
		printf("找到了目标值：%d, 索引是：%zu\n", target_value, index);
	}
	else
	{
		printf("没有找到目标值：%d\n", target_value);
	}
	system("pause");
	return 0;
}
bool find_value(const int32_t* array, size_t size, int32_t target_value, size_t* index)
{
	for (size_t i = 0; i < size; i++)
	{
		if (*(array + i) == target_value)
		{
			*index = i;
			return true;
		}
	}
	return false;

	system("pause");
	return 0;
}