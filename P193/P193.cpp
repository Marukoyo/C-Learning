
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	176.��ʶ�ṹ��Struct

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
		�ṹ��(structures)
		��������
		�ṹ����һ���û��Զ�����������ͣ�����洢��ͬ���͵�������
		˵���ˣ�������Ҫ����ʲô���ͣ�
		���У������ṹ�������3��int���͵ĳ�Ա
	*/
	struct Date {
		int year;
		int month;
		int day;
	};
	struct Date today = { 2021, 9, 1 };

	struct Person
	{
		char name[50];
		int age;
		float height;
		//...
	};

	struct Person frank = { "frank", 77, 280 };
	system("pause");
	return 0;
}
