/*
	P132 �����ע������
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main(void)
{
	/*

	*/
	uint32_t numbers[SIZE] = { 1,2 };

	printf("%" PRId32"\n", numbers[0]);
	// ����ĳ���

	for (size_t i = 0; i < sizeof numbers / sizeof numbers[0]; i++)
	{
		printf("%" PRId32"\n", numbers[i]);
	}
	// ����1.Խ�����

	// ����2.δ��ʼ������

	// ����3. �����С���� SIZE > 0

	// ����1.���ֳ�ʼ�� ʣ�µ�ֵĬ��Ϊ0

	// ��ʾ�����ǳ�ʼ������

	system("pause");
	return 0;
}


