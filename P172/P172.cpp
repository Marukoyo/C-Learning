/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	156 指针


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
		指针是一种特殊的变量，指针不存具体的数值，指针只存存储数据的地址。
		就像快递员的地图商的标记每个楼层的门牌号（地址

	*/
	uint32_t building_floors[5] = { 101, 102, 103, 104, 105 };

	uint32_t target_floor = 103;	// 快递员需要找的目标住户

	uint32_t* ptr_floor_103 = &building_floors[2];	// 数据类型是int *

	printf("ptr_floor_103 指针变量保存的是%p", ptr_floor_103);

	uint32_t found = 0;	// 0表示未找到，1表示找到

	printf("快递员需要找的目标住户是：%d\n", target_floor);

	for (size_t i = 0; i < 5; i++)
	{
		// printf("找到了目标住户：%d的地址：%p\n", building_floors[i], &building_floors[i]);
		if (building_floors[i] == target_floor)
		{
			printf("找到了目标住户：%d的地址：%p\n", target_floor, (void*)&building_floors[i]);
			found = 1;
			break;
		}
	}
	if (!found)
	{
		puts("快递员没有找到该住户！");
	}
	system("pause");
	return 0;
}

