/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	168 ָ����ʶ�ά����
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

int main(void)
{

	/**

	*/
	int matrix[2][3] = { {1,2,3},{4,5,6} };

	int(*ptr)[3] = matrix;	// ָ�������ָ��
	// (*ptr)[3] ��ʾptr��һ��ָ�룬ָ��һ�����飬����ĳ�����3,�����Ԫ����int����

	// int* ptr[3] = {0x111111,0x11112,0x11113};	// ָ�����飬�����Ԫ����ָ�룬ָ��ָ��int���ͣ�������3

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++) {
			printf("%d ", *(*(ptr + i) + j));
		}
		puts("");
	}
	system("pause");
	return 0;
}