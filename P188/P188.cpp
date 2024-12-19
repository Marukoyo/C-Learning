
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	172.游戏案例，指针的练习
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

#define EXP_PER_LEVEL 100	// 每次升级所需经验值
#define MAX_LEVEL 10	// 最大等级
#define HINTS_COUNT 10	// 宝藏提示次数
void increase_exp(uint32_t*, uint32_t);
bool check_level_up(uint32_t*, uint32_t*);
const char* get_treasure_hint(uint32_t);
int main(void)
{

	/**
		1.游戏概念。

		玩家属性：exp,level.

		解谜:

		等级提升：

		游戏的目标：
	*/

	uint32_t player_exp = 0;

	uint32_t player_level = 0;
	// 模拟玩家解谜获得经验值
	increase_exp(&player_exp, 50);
	// 没设计，它打个怪，解谜...
	increase_exp(&player_exp, 75);

	if (check_level_up(&player_exp, &player_level))
	{
		printf("%s\n", get_treasure_hint(player_level));
	}
	else
	{
		printf("还需要更多经验值才能升级\n");
	}
	system("pause");
	return 0;
}

void increase_exp(uint32_t* exp, uint32_t value)
{
	*exp += value;
}

bool check_level_up(uint32_t* player_exp, uint32_t* player_level)
{
	while (*player_exp >= EXP_PER_LEVEL && *player_level < MAX_LEVEL)
	{
		*player_exp -= EXP_PER_LEVEL;
		(*player_level)++;
		printf("恭喜你，升级了，当前等级：%d\n", *player_level);
		return true;
	}
	return false;
}

const char* get_treasure_hint(uint32_t level)
{
	static const char* hints[HINTS_COUNT] = {
	"提示 1： 宝藏隐藏在古老的瀑布后面，请返回基地！",
	"提示 2： 寻找被遗忘的失落之剑",
	"提示 3： 在黑暗森林中找到神秘的水晶",
	"提示 4： 探索沙漠中的古代遗迹",
	"提示 5： 在冰封的山脉中发现隐藏的洞穴",
	"提示 6： 在火山口附近寻找失落的宝藏",
	"提示 7： 在海底深处找到沉船的残骸",
	"提示 8： 在迷雾笼罩的沼泽中找到古老的神庙",
	"提示 9： 在高耸的悬崖上发现秘密的入口",
	"提示 10： 在繁忙的城市中找到隐藏的地下通道",
	};
	if (level > 0 && level <= HINTS_COUNT)
	{
		return hints[level - 1];
	}
	return "未知提示：请确保你在等级的有效范围内才能解锁宝藏提示!";
}
