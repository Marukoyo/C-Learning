/*
	P118 ѵ�����򵥻滭������
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
	uint32_t size;
	puts("������ͼ����С��");

	scanf_s("%" SCNu32, &size);

	puts("��ӡ������ͼ����");

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}

	system("pause");
	return 0;
}

