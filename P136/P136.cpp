/*
	P136 数组的案例：投票
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define CANDIDATE_COUNT 4

int main(void)
{
	/*

	*/
	uint32_t votes[CANDIDATE_COUNT] = { 0 };

	uint32_t total_votes = 0;

	uint32_t max_votes = 0;

	// 候选人的index下标索引
	uint32_t winner = 0;

	votes[0] += 150;
	votes[1] += 200;
	votes[2] += 180;
	votes[3] += 190;

	for (uint32_t i = 0; i < CANDIDATE_COUNT; i++)
	{
		total_votes += votes[i];
		if (votes[i] > max_votes)
		{
			max_votes = votes[i];
			winner = i;	// 更新获胜候选人的index 索引（下标）
		}
	}

	puts("各个候选人的得票数：");
	for (size_t i = 0; i < CANDIDATE_COUNT; i++)
	{
		printf("候选人%d的得票数：%d\n", i + 1, votes[i]);
	}

	printf("总票数：%" PRIu32 "\n", total_votes);
	printf("获胜候选人：%" PRIu32 "，得票数：%d\n", winner + 1, max_votes);

	system("pause");
	return 0;
}

