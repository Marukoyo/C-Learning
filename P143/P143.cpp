/*
	P143 ���������̻���
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
	// ���ÿ���̨����ΪUTF-8
	SetConsoleOutputCP(65001);

	// ��������Ϊ��ǰϵͳĬ��
	setlocale(LC_ALL, "");

	wchar_t board[BOARD_SIZE][BOARD_SIZE] = { 0 };
	uint8_t x, y;

	// ��ʼ������
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
	// ��	0x25CF	��	0x25CB	�� (Middle Dot)	0x00B7
	wchar_t control = L'y';
	while (control == L'y' || control == L'Y')
	{
		system("cls");	//����
		for (size_t i = 0; i < BOARD_SIZE; i++)
		{
			for (size_t j = 0; j < BOARD_SIZE; j++)
			{
				wprintf(L"%c", board[i][j]);
			}
			puts("");
		}
		wprintf(L"��� %lc ���������꣺(1 - %d) , �м��ÿո������\n", current_player, BOARD_SIZE);
		// �ж������Ƿ�Ϸ�
		if (scanf_s("%" SCNu8 "%" SCNu8, &x, &y) != 2)
		{
			while (getchar() != '\n');
			wprintf(L"������Ч�����������룡\n");
			
		}
		// �ж������Ƿ�Ϸ�
		if (x < BOARD_SIZE && y < BOARD_SIZE && board[x][y] == 0x00B7)
		{
			board[x - 1][y - 1] = current_player;
			current_player = (current_player == 0x25CF) ? 0x25CB : 0x25CF;
		}
		else
		{
			wprintf(L"������Ч�����������룡\n");
			while (getchar() != '\n');	// ������뻺����
		}
		system("cls");	//����
		for (size_t i = 0; i < BOARD_SIZE; i++)
		{
			for (size_t j = 0; j < BOARD_SIZE; j++)
			{
				wprintf(L"%c", board[i][j]);
			}
			puts("");
		}

		wprintf(L"�Ƿ������(Y/N)\n");
		while (getchar() != '\n');	// ������뻺����
		wscanf_s(L"%lc", &control, 1);
	}
	puts("��Ϸ������");
	printf("Current locale for LC_ALL: %s\n", setlocale(LC_ALL, NULL));
	system("pause");
	return 0;
}

