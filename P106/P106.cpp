/*
	P106 �����������Ϸ����-do while ��ϰ
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
#include <time.h>
#include <stdbool.h>

int main(void)
{
	/*

	*/

	uint32_t secret_number, guess_number, status;

	// ���������
	srand(time(NULL));
	// ����1-100�������
	// https://c.biancheng.net/view/2043.html
	secret_number = rand() % 100 + 1;

	puts("�²����������һ����(1~100)?");

	do
	{
		puts("��������Ĳ²⣺");
		status = scanf_s("%d", &guess_number);
		if (guess_number < secret_number)
		{
			puts("̫С�ˣ������ԣ�");
		}
		else if (guess_number > secret_number)
		{
			puts("̫���ˣ������ԣ�");
		}
	} while (guess_number != secret_number);

	printf("��ϲ�㣬�¶��ˣ����� %" PRIu32 "\n", secret_number);

	system("pause");
	return 0;
}
