/*
	P119 ѵ��������������
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
	uint32_t levels;
	puts("������������Ĳ�����");

	scanf_s("%" SCNu32, &levels);

	puts("���ֽ���ͼ�����£�");

	for (size_t i = 1; i <= levels; i++)
	{
		// �ո�����
		uint32_t spaces = levels - i;	

		// ����ո� j < levels - i
		for (size_t j = 0; j < levels - i; j++)
		{
			printf("  ");
		}
		for (size_t j = 1; j <= i; j++)
		{
			printf("%zu ",j);
		}
		for (size_t j = i - 1; j > 0; j--)
		{
			printf("%zu ", j);
		}
		puts("");
		
	}

	system("pause");
	return 0;
}

