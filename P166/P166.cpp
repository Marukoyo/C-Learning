/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	151 register�Ĵ�������


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

void demo_re_var(void);
int main(void)
{

	/**
		�Ĵ���
	*/
	demo_re_var();

	system("pause");
	return 0;
}
void demo_re_var(void) {
	register int counter;

	for (counter = 0; counter < 10; counter++)
	{
		printf("%d\n", counter);
	}
}
