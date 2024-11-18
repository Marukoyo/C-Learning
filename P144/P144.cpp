/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	129 ��Ϸ���� ũ������ɳ�
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

#define ROW 10		// ũ����С
#define COL 10		// ũ����С
#define EMPTY 0		// �յ�
#define PLANTED 1	// ����ֲ
#define MATURE 2	// ����

void print_farm(uint8_t [][COL]);

int main(void)
{
	/*

	*/
	uint8_t farm[ROW][COL] = { 0 };	// ��ʹ������ָ����ʼ��
	// ��������ӳ�ʼ��
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

	// ģ�����Ĺ��̣�����ũ����ͼ��ģ������ɳ�

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
				// �յ�
				printf(". ");
				break;
			case PLANTED:
				// ����ֲ
				printf("* ");
				break;
			case MATURE:
				// ����
				printf("# ");
				break;
			default:
				break;
			}
		}
		puts("");
	}
}

