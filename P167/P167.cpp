/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	152 ����������������


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
#include "helper.h"
void demo(int);
int main(void)
{

	/**
	*	��������������
		linkage: ������
	*/
	fun();
	demo(1);
	system("pause");
	return 0;
}

void demo(int x) {
	int a = 10;		// a�����������demo()������
	if (a > 5)
	{
		int b = 20;	// b�����������if�����
		printf("a = %d, b = %d\n", a, b);
	}
	x += 1;
}