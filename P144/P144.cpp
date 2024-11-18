/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	129 游戏案例 农场作物成长
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

#define ROW 10		// 农场大小
#define COL 10		// 农场大小
#define EMPTY 0		// 空地
#define PLANTED 1	// 已种植
#define MATURE 2	// 成熟

void print_farm(uint8_t [][COL]);

int main(void)
{
	/*

	*/
	uint8_t farm[ROW][COL] = { 0 };	// 可使用数组指定初始化
	// 随机数种子初始化
	srand((unsigned int)time(NULL));

	for (size_t i = 0; i < ROW; i++)
	{
		for (size_t j = 0; j < COL; j++)
		{

			farm[i][j] = (rand() % 2 == 0) ? EMPTY : PLANTED;
		}
	}

	print_farm(farm);
	Sleep(1000);

	// 模拟成熟的过程，更新农场地图，模拟作物成长

	for (size_t i = 0; i < 5; i++)
	{
		system("cls");

		for (size_t i = 0; i < ROW; i++)
		{
			for (size_t j = 0; j < COL; j++)
			{
				if (farm[i][j] == PLANTED && rand() % 10 < 3)
				{
					farm[i][j] = MATURE;
				}
			}
		}
		print_farm(farm);
		Sleep(1000);
	}


	system("pause");
	return 0;
}

void print_farm(uint8_t farm[][COL]) {
	for (size_t i = 0; i < ROW; i++)
	{
		for (size_t j = 0; j < COL; j++) {
			switch (farm[i][j])
			{
			case EMPTY:
				// 空地
				printf(". ");
				break;
			case PLANTED:
				// 已种植
				printf("* ");
				break;
			case MATURE:
				// 成熟
				printf("# ");
				break;
			default:
				break;
			}
		}
		puts("");
	}
}

