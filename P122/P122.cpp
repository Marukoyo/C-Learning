/*
	P122 ʹ��VS����debug�����Լ�for��ע�������
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <windows.h>

#include <time.h>

int main(void)
{
	/*

	*/
	const int NUM_TABLES = 3;	// ���������3������

	const int SEATS_PER_TABLE = 4;	// ����ÿ��������4����λ

	// ���ѭ������ ÿ������
	for (size_t table_num = 1; table_num <= NUM_TABLES; table_num++)
	{
		printf("���ӱ��: %zu\n", table_num);

		// �ڲ�ѭ������ÿ�����ӵ���λ
		for (size_t seat_num = 1; seat_num <= SEATS_PER_TABLE; seat_num++)
		{
			printf("\t��λ���: %zu\n", seat_num);

			// ������ִ�о�����λ�ķ������
			printf("\t\t�����У����ӣ�%zu �� ��λ %zu\n", table_num, seat_num);
		}
	}
	system("pause");
	return 0;
}


