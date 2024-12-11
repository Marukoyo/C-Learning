/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	157 指针与修改
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

	uint32_t* ptr_floor_102 = &building_floors[1];	// 数据类型是int *
	uint32_t* ptr_floor_103 = &building_floors[2];	// 数据类型是int *

	printf("&building_floors[2]的地址是%p\n", &building_floors[2]);

	printf("ptr_floor_103 指针变量保存的是%p\n", ptr_floor_103);

	printf("building_floors[2]%d\n", building_floors[2]);

	printf("快递员通过*（指针相当于一个地图工具），它带着ptr_floor_103 这个 指针变量（它存储了业主的地址，去寻找...\n");

	printf("于是它找到了....%d\n", *ptr_floor_103);

	//printf("building_floors[2]%p\n", &building_floors[1] + 0x4);

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
	// 快递员找到你了。。。。你要求快递员：我要搬家了，我会搬到106...
	uint32_t * ptr_new_106 = ptr_floor_103;
	//building_floors[2] = 106;
	*ptr_new_106 = 106;
	system("pause");
	return 0;
}

