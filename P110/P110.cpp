/*
	P110 ѵ������ƽ����
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	/*
		Ŀ�ģ������1��N��N���û����룩������������ƽ����

		2

		3
	*/

	uint32_t number;	// �û����������A
	uint32_t sum_square = 0;	// ƽ���͵ĳ�ʼ��

	puts("������һ������N�����ǽ������1��N������������ƽ���ͣ�");

	scanf_s("%u", &number);

	// 

	for (size_t i = 0; i <= number; i++)
	{
		sum_square += i * i;	// ���ϵ�ǰ����ƽ��
	}

	printf("��1��%u������������ƽ�����ǣ�%u\n", number, sum_square);

	system("pause");
	return 0;
}

