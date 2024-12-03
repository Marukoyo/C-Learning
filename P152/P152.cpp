/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	137 游戏案例：石头剪刀布与软件工程的（规则映射）设计技巧

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

// 游戏选项
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// 函数声明
void print_instruction(void);
uint32_t get_player_choice(void);
uint32_t get_computer_choice(void);
void print_choice(uint32_t);
void determine_winner(uint32_t, uint32_t);
int main(void)
{
	/*

	*/

	// 初始化随机数种子
	srand((unsigned int)time(NULL));



	//获取玩家和电脑的选择
	uint32_t player_choice = get_player_choice();
	uint32_t computer_choice = get_computer_choice();

	// 打印玩家和电脑的选择
	puts("你的选择是：");
	print_choice(player_choice);
	puts("计算机的选择是：");
	print_choice(computer_choice);

	// 判断输赢
	determine_winner(player_choice, computer_choice);


	system("pause");
	return 0;
}


void print_instruction(void)
{
	// 打印游戏说明
	puts("这是一个石头剪刀布游戏");
	puts("1. 石头");
	puts("2. 剪刀");
	puts("3. 布");
	puts("==================================");
}
uint32_t get_player_choice(void) {
	// 获取玩家选择
	uint32_t choice = 0;
	puts("请输入你的选择：");
	scanf_s("%d", &choice);

	// 检查输入是否合法
	while (choice != ROCK && choice != PAPER && choice != SCISSORS) {
		puts("输入错误，请重新输入：");
		scanf_s("%d", &choice);
	}
	return choice;
}
uint32_t get_computer_choice(void) {
	return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}
void print_choice(uint32_t choice) {

	// 打印选择
	switch (choice) {
	case ROCK:
		puts("石头");
		break;
	case PAPER:
		puts("布");
		break;
	case SCISSORS:
		puts("剪刀");
		break;
	default:
		break;
	}


}
void determine_winner(uint32_t player_choice, uint32_t computer_choice) {
	if (player_choice == computer_choice)
	{
		puts("平局!");
	}
	else if ((player_choice == ROCK && computer_choice == SCISSORS) ||
		(player_choice == PAPER && computer_choice == ROCK) ||
		(player_choice == SCISSORS && computer_choice == PAPER))
	{
		puts("你赢了!");
	}
	else
	{
		puts("你输了!");
	}
}
