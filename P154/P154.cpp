/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	139 �ݹ�

*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

uint32_t factorial(uint32_t);
int main(void)
{
	/*
		�ݹ�,�׳�
	*/
	uint32_t number = 5;
	printf("%u�Ľ׳���%u\n", number ,factorial(number));



	system("pause");
	return 0;
}

uint32_t factorial(uint32_t n) {
	if (n == 0)
	{
		return 1;
	}
	else
	{
		// β�ݹ�
		return n * factorial(n - 1);
		// return 5 * factorial(4)
			// return 4 * factorial(3)
				// return 3 * factorial(2)
					// return 2 * factorial(1)
						// return 1
	}
}
