/*
	P130 �����Ӧ�ð���
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*

	*/
	// ���彩ʬ�����
	uint32_t regular_zombie = 1;
	uint32_t conehead_zombie = 2;
	uint32_t buckethead_zombie = 3;
	uint32_t flag_zombie = 4;
	uint32_t newspaper_zombie = 5;

	// ����һ��������ͬ���͵Ľ�ʬ����
	uint32_t zombies[10] = { regular_zombie,conehead_zombie,buckethead_zombie,flag_zombie,newspaper_zombie,regular_zombie,regular_zombie,regular_zombie,regular_zombie,regular_zombie };

	// ����ֲ������
	uint32_t battle_plants[5] = { 6,7,8,9,10 };

	// ������õ�ֲ��
	uint32_t available_plants[10] = { 6,7,8,9,10,11,12,13,14,15 };
	
	printf("Zombies in the game(Type ids):\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%" PRIu32 "\n", zombies[i]);
	}

	puts("Plants selected for battle(Type ids) :");
	for (size_t i = 0; i < 5; i++)
	{
		printf("%" PRIu32 "\n", battle_plants[i]);
	}

	puts("Available plants for selection (Type ids) :");
	for (size_t i = 0; i < 5; i++)
	{
		printf("%" PRIu32 "\n", available_plants[i]);
	}


	system("pause");
	return 0;
}


