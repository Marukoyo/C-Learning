/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	138 ���������������Ƽ��ɣ���������֮��̽�ɼ�����ϵͳ����̽���귵���·�����

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

#define MONTH_COUNT 12
#define GRADE_COUNT 11 

//  ����������һ���·ݣ���������·��ж�����Ľ��
bool is_leap_year(int);
uint32_t get_days_in_month(uint32_t, uint32_t);
char get_grade(uint32_t);
int main(void)
{
	/*
		��������
		ʹ�����ݽṹ(Array, Hash)���洢���ݣ�ͨ����������������
		ʹ������
		��������ӵ��߼����
		���� Google �Ľ��ͣ�����������һ�ֱ��ģʽ�����ı����ǣ��ӱ����ѯ��Ϣ�������߼���䣨if,case����
		1.ʶ��ȷ�������п����ò�������߼����֡�
		2.��ƣ������������п�������Ͷ�Ӧ����ı��������Hash��
		3.ʵ�֣���д���룬ʹ��������Ϊ�������߼������ұ��е���Ӧ�����
		4.�Ż���������Ҫ��������Ľṹ�����Ч�ʻ��߿ɶ��ԡ�
	*/

	uint32_t res_day = get_days_in_month(12, 2024);
	printf("2024��12����%d��\n", res_day);

	printf("grade 55 ------ %c\n", get_grade(55));

	system("pause");
	return 0;
}

uint32_t get_days_in_month(uint32_t month, uint32_t year)
{
	//  ��ͳд����if else... if ���� switch...case
	const uint32_t days[MONTH_COUNT] = { 31,is_leap_year(year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31 };
	if (month < 1 || month > MONTH_COUNT)
	{
		return -1;
	}
	return days[month - 1];
}
bool is_leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}

char get_grade(uint32_t score)
{
	// 90 A, 80 B, 70 C, 60 D, 0 F
	const char grades[GRADE_COUNT] = { 'F','F','F','F','F','F','D','C','B','A','A' };
	if (score < 0 || score > 100)
	{
		return 'X';
	}

	return  grades[score / 10];
}