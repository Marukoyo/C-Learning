/*
	P116 ѵ�����򵥵ĳ˷���
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
	uint32_t num;
	puts("������һ�������������ǽ�Ϊ�����ɳ˷���");

	scanf_s("%" SCNu32, &num);

	printf("�˷��� %" PRIu32 ":\n", num);

	for (size_t i = 1; i <= 10; i++)
	{
		printf("%u * %u = %u\n", num, i, num * i);
	}

	system("pause");
	return 0;
}

