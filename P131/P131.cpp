/*
	P131 ���鶨��ʱ�±���Ҫ����
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
	system("pause");
	return 0;
}


