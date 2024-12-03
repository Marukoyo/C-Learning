/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	137 ��Ϸ������ʯͷ��������������̵ģ�����ӳ�䣩��Ƽ���

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

// ��Ϸѡ��
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// ��������
void print_instruction(void);
uint32_t get_player_choice(void);
uint32_t get_computer_choice(void);
void print_choice(uint32_t);
void determine_winner(uint32_t, uint32_t);
int main(void)
{
	/*

	*/

	// ��ʼ�����������
	srand((unsigned int)time(NULL));



	//��ȡ��Һ͵��Ե�ѡ��
	uint32_t player_choice = get_player_choice();
	uint32_t computer_choice = get_computer_choice();

	// ��ӡ��Һ͵��Ե�ѡ��
	puts("���ѡ���ǣ�");
	print_choice(player_choice);
	puts("�������ѡ���ǣ�");
	print_choice(computer_choice);

	// �ж���Ӯ
	determine_winner(player_choice, computer_choice);


	system("pause");
	return 0;
}


void print_instruction(void)
{
	// ��ӡ��Ϸ˵��
	puts("����һ��ʯͷ��������Ϸ");
	puts("1. ʯͷ");
	puts("2. ����");
	puts("3. ��");
	puts("==================================");
}
uint32_t get_player_choice(void) {
	// ��ȡ���ѡ��
	uint32_t choice = 0;
	puts("���������ѡ��");
	scanf_s("%d", &choice);

	// ��������Ƿ�Ϸ�
	while (choice != ROCK && choice != PAPER && choice != SCISSORS) {
		puts("����������������룺");
		scanf_s("%d", &choice);
	}
	return choice;
}
uint32_t get_computer_choice(void) {
	return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}
void print_choice(uint32_t choice) {

	// ��ӡѡ��
	switch (choice) {
	case ROCK:
		puts("ʯͷ");
		break;
	case PAPER:
		puts("��");
		break;
	case SCISSORS:
		puts("����");
		break;
	default:
		break;
	}


}
void determine_winner(uint32_t player_choice, uint32_t computer_choice) {
	if (player_choice == computer_choice)
	{
		puts("ƽ��!");
	}
	else if ((player_choice == ROCK && computer_choice == SCISSORS) ||
		(player_choice == PAPER && computer_choice == ROCK) ||
		(player_choice == SCISSORS && computer_choice == PAPER))
	{
		puts("��Ӯ��!");
	}
	else
	{
		puts("������!");
	}
}
