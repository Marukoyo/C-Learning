/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	135 ������дҪ��

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


int sum(int, int);
bool is_leap_year(int);
int main(void)
{
	/*
		1.��ȷ����Ŀ�ģ���ȷ���Ĺ��ܽ������������Щ�����Ǳ���ģ���ʽ������ģ�壩���Լ���α������Ĺ������.
		2.ʶ������Ҫ������
		3.ȷ�����������
		4.ʹ���ʵ�����������
		5.������������������������������
	*/
	uint32_t year = 2024;
	printf("%d����%s��\n", year, is_leap_year(year) ? "��" : "ƽ");
	system("pause");
	return 0;
}

int sum(int num1, int num2) {
	return num1 + num2;
}

bool is_leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}
