/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	141 Ϊʲô������ʹ�õݹ��Լ��ݹ��β�ݹ���;����

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

uint32_t factorial(uint32_t, uint32_t);
int main(void)
{
	/*
		�ݹ�,�׳�
	*/
	uint32_t number = 5;
	printf("%u�Ľ׳���%u\n", number, factorial(number, 1));



	system("pause");
	return 0;
}

uint32_t factorial(uint32_t n, uint32_t acc) {
	// acc �����ۼ��� accumulator
	if (n == 0)
	{
		return acc;
	}
	else
	{
		// β�ݹ�
		return factorial(n - 1, n * acc);
		// return factorial(4, 5)
			// return factorial(3, 20)
				// return factorial(2, 60)
					// return factorial(1, 120)
						// return 1

	}
}
