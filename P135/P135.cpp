/*
	P135 ����İ������˻����ȡ��
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ACCOUNT_COUNT 3

int main(void)
{
	/*
		
	*/
	uint64_t account_balances[ACCOUNT_COUNT] = { 10000,15000,20000 };

	uint64_t total_assets = 0;

	puts("��ʼ�˻���");

	for (size_t i = 0; i < ACCOUNT_COUNT; i++)
	{
		printf("�˻�%zu��%llu\n", i + 1, account_balances[i]);
		
	}

	
	account_balances[0] += 5000;
	account_balances[1] -= 2500;
	puts("�˻����䶯��");
	
	for (size_t i = 0; i < ACCOUNT_COUNT; i++)
	{
		printf("�˻�%zu��%llu\n", i + 1, account_balances[i]);
	}

	printf("�˻����ʲ���%llu\n", total_assets);

	system("pause");
	return 0;
}


