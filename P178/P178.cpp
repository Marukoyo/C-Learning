/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	162 空指针的初始化
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
	// 空指针，没有指向任何楼层的地址
	uint32_t* ptr_to_floor = NULL;

	uint32_t number = 100;
	ptr_to_floor = &number;
	// 尝试通过空指针访问数据
	if (ptr_to_floor == NULL)
	{
		printf("没有指向楼层的地址！\n");
		// 桌面快捷方式， 不做任何处理，即双击没有反应
	}
	else
	{
		printf("楼层地址是：%p，楼层号：%d\n", (void*)ptr_to_floor, *ptr_to_floor);
	}
	system("pause");
	return 0;
}

