/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	148 ��̬�ֲ����� static variable


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

void increment_counter(void);
int main(void)
{

	/**
		��̬�ֲ�����
		1. ��̬�ֲ������ں����ڲ����壬�����ں����ⲿ���ɼ�
		2. ��̬�ֲ������ں����ڲ���ʼ����ֻ���ʼ��һ��
		3. ��ʹ�������ý�������̬�ֲ�������ֵҲ�ᱣ��
		4. ���ں��ڲ�����״̬���߼���
	*/
	for (size_t i = 0; i < 3; i++)
	{
		increment_counter();
	}


	system("pause");
	return 0;
}

void increment_counter(void)
{
	static int counter = 0;
	counter++;
	printf("Counter is %d\n", counter);
}

