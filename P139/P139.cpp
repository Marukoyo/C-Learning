/*
	P139 ถþฮฌสýื้
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

#define MAX_SIZE 10

int main(void)
{
	/*

	*/
	uint32_t numbers_arr[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	printf("numbers_arr[0][0] = %" PRIu32 "\n", numbers_arr[0][0]);

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			printf("numbers_arr[%zu][%zu] = %" PRIu32 "\t", i, j, numbers_arr[i][j]);
		}
		puts("");
	}

	system("pause");
	return 0;
}

