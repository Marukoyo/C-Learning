/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	146 �ֲ��������������޶����Զ������ڡ���ʼֵδ����


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

uint32_t fibonacci_iterative(uint32_t);
int main(void)
{
	/**
		�ֲ����� local variable
		�������޶�
		�Զ��洢��
		��ʼֵδ����
	*/
	uint32_t number = 10;
	printf("%u � %u\n", number, fibonacci_iterative(number));



	system("pause");
	return 0;
}

