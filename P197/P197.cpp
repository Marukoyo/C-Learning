/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	180.�ṹ������
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

typedef struct
{
	int x;
	int y;
} Point;

int main(void)
{

	/**

	*/

	Point point[2] = { {1 ,2}, {3,4} }; // ����һ������10��Point�ṹ�������

	for (size_t i = 0; i < 2; i++)
	{
		printf("Point %zu:{%d,%d}\n", i, point[i].x, point[i].y);
	}


	system("pause");
	return 0;
}