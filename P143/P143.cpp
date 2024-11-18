/*
	P143 五子棋棋盘绘制
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <Windows.h>

#define BOARD_SIZE 15

int main(void)
{
	/*

	*/
	// 设置控制台编码为UTF-8
	SetConsoleOutputCP(65001);

	// 设置区域为当前系统默认
	setlocale(LC_ALL, "");

	wchar_t board[BOARD_SIZE][BOARD_SIZE] = { 0 };
	uint8_t x, y;

	// 初始化棋盘
	wchar_t current_player = 0x25CF;

	for (size_t i = 0; i < BOARD_SIZE; i++)
	{
		for (size_t j = 0; j < BOARD_SIZE; j++)
		{
			board[i][j] = 0x00B7;
			wprintf(L"%c", board[i][j]);
		}
		puts("");
	}
	// ●	0x25CF	○	0x25CB	· (Middle Dot)	0x00B7
	wchar_t control = L'y';
	while (control == L'y' || control == L'Y')
	{
		system("cls");	//清屏
		for (size_t i = 0; i < BOARD_SIZE; i++)
		{
			for (size_t j = 0; j < BOARD_SIZE; j++)
			{
				wprintf(L"%c", board[i][j]);
			}
			puts("");
		}
		wprintf(L"玩家 %lc 请输入坐标：(1 - %d) , 中间用空格隔开：\n", current_player, BOARD_SIZE);
		// 判断输入是否合法
		if (scanf_s("%" SCNu8 "%" SCNu8, &x, &y) != 2)
		{
			while (getchar() != '\n');
			wprintf(L"输入无效，请重新输入！\n");
			
		}
		// 判断输入是否合法
		if (x < BOARD_SIZE && y < BOARD_SIZE && board[x][y] == 0x00B7)
		{
			board[x - 1][y - 1] = current_player;
			current_player = (current_player == 0x25CF) ? 0x25CB : 0x25CF;
		}
		else
		{
			wprintf(L"输入无效，请重新输入！\n");
			while (getchar() != '\n');	// 清空输入缓冲区
		}
		system("cls");	//清屏
		for (size_t i = 0; i < BOARD_SIZE; i++)
		{
			for (size_t j = 0; j < BOARD_SIZE; j++)
			{
				wprintf(L"%c", board[i][j]);
			}
			puts("");
		}

		wprintf(L"是否继续？(Y/N)\n");
		while (getchar() != '\n');	// 清空输入缓冲区
		wscanf_s(L"%lc", &control, 1);
	}
	puts("游戏结束！");
	printf("Current locale for LC_ALL: %s\n", setlocale(LC_ALL, NULL));
	system("pause");
	return 0;
}

