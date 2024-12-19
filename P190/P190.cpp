
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	174.游戏案例：收藏奖杯
*/
#include <inttypes.h>
#include <math.h>Q
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#include <string.h>

#define MAX_ACHIEVEMENTS 10

const char* achievements[MAX_ACHIEVEMENTS];

size_t achievement_count = 0;

void add_achievement(const char* new_achievement);

void print_achievements();
int main(void)
{

	/**

	*/
	const char* str = "Hello";
	printf("%s\n", str);
	add_achievement("完成第一个挑战奖杯");
	add_achievement("找到了所有的隐藏宝箱");
	print_achievements();
	system("pause");
	return 0;
}

void add_achievement(const char* new_achievement)
{
	// const readonly 只可读 不可写
	if (achievement_count < MAX_ACHIEVEMENTS)
	{
		achievements[achievement_count] = new_achievement;
		achievement_count++;
		printf("奖杯已解锁：%s\n", new_achievement);
	}
	else
	{
		printf("奖杯已满，无法解锁新奖杯\n");
	}
}

void print_achievements()
{
	printf("已解锁的奖杯：\n");
	for (size_t i = 0; i < achievement_count; i++)
	{
		printf("%zu:%s\n", i + 1, achievements[i]);
	}
}
