/*
	P87 if...els 与其他逻辑符的练习
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		玩家可以选择进入不同的房间，每一个房间都有不同的进入条件
		房间A:玩家至少需要有VIP身份
		房间B:玩家至少需要至少有10个金币，或者是一个特殊道具
		房间C:玩家至少需要有VIP身份，并且金币数量不得少于20
		房间D:玩家至少需要有VIP或者特殊道具，并且金币数量不少于5
	*/

	bool is_vip = 1;		//VIP身份 在真实程序中可能来自用户输入或者是游戏逻辑
	uint32_t coin = 15;		//金币数量
	bool has_special_item = 1;	//是否有特殊道具

	// 检查房间A的条件
	if (is_vip)
	{
		puts("Welcome to room A");	// puts()函数是C语言的标准库函数，用于输出字符串
	}
	else
	{
		puts("玩家没有VIP身份，无法进入房间A");
	}
	// 检查房间B的条件
	if (coin >= 10 || has_special_item)
	{
		puts("Welcome to room B");
	}
	else
	{
		puts("玩家金币不足10个，也没有特殊道具，无法进入房间B");
	}
	// 检查房间C的条件
	if (is_vip && coin >= 20)
	{
		puts("Welcome to room C");
	}
	else
	{
		puts("玩家没有VIP身份，或者金币不足20个，无法进入房间C");
	}
	// 检查房间D的条件
	if ((is_vip || has_special_item) && coin >= 5)
	{
		puts("Welcome to room D");
	}
	else
	{
		puts("玩家没有VIP身份或者特殊道具，或者金币不足5个，无法进入房间D");
	}
	system("pause");
	return 0;
}

