/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	155 取地址的含义


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
	uint32_t building_floors[5] = { 101, 102, 103, 104, 105 };

	uint32_t target_floor = 103;	// 快递员需要找的目标住户

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

