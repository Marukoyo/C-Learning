/*
	P140 隐式确定数组大小的初始化
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

#define MAX_SIZE 10

void processMatrix(uint32_t matrix[][3], uint32_t);

int main(void)
{
	/*

	*/
	uint32_t arr[] = { 0 };

	printf("sizeof(arr) = %zu\n", sizeof(arr));
	printf("%" PRIu32 "\n", arr[0]);

	//

	char greeting[] = "Hello";

	/* Elements are read into the array in a row−wise manner, which means the first 5 elements are stored in first row, and so on.
		Hence, the first dimension is optional in the array declaration
		To increase the readability, elements of each row can be optionally put in curly brackets as follows −
	*/
	uint32_t matrix[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	system("pause");
	return 0;
}

