
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	173.更新分数
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

uint32_t* compare_score(uint32_t*, uint32_t*);
void update_score(uint32_t*, uint32_t);
void double_score(uint32_t*);
int main(void)
{

	/**

	*/
	uint32_t player1_score = 100;

	uint32_t player2_score = 150;

	update_score(&player1_score, 50);

	uint32_t* higher_score = compare_score(&player1_score, &player2_score);

	printf("最高分: %d\n", *higher_score);

	double_score(&player2_score);

	system("pause");
	return 0;
}

uint32_t* compare_score(uint32_t* score1, uint32_t* score2)
{
	return (*score1 > *score2) ? score1 : score2;
}

void update_score(uint32_t* score, uint32_t points)
{
	*score += points;
	printf("当前分数: %d\n", *score);
}

void double_score(uint32_t* score)
{
	*score *= 2;
	printf("翻倍后的分数: %d\n", *score);
}
