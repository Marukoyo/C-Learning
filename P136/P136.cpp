/*
	P136 ����İ�����ͶƱ
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

	// ��ѡ�˵�index�±�����
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
			winner = i;	// ���»�ʤ��ѡ�˵�index �������±꣩
		}
	}

	puts("������ѡ�˵ĵ�Ʊ����");
	for (size_t i = 0; i < CANDIDATE_COUNT; i++)
	{
		printf("��ѡ��%d�ĵ�Ʊ����%d\n", i + 1, votes[i]);
	}

	printf("��Ʊ����%" PRIu32 "\n", total_votes);
	printf("��ʤ��ѡ�ˣ�%" PRIu32 "����Ʊ����%d\n", winner + 1, max_votes);

	system("pause");
	return 0;
}

