
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	177.�����ṹ���������ʷ�ʽ
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
// �����ṹ��
typedef struct Date {
	int year;
	int month;
	int day;
} Date;
typedef struct Person
{
	char name[50];
	int age;
	float height;
	//...
} Person;
int main(void)
{

	/**
		�ṹ��(structures)
		��������
		�ṹ����һ���û��Զ�����������ͣ�����洢��ͬ���͵�������
		˵���ˣ�������Ҫ����ʲô���ͣ�
		���У������ṹ�������3�� int ���͵ĳ�Ա
	*/

	// ��ʼ�ṹ�����
	Date today = { 2024, 12, 20 };
	// ͨ��. ���ʳ�Ա
	printf("Today is %d-%d-%d\n", today.year, today.month, today.day);
	// ͨ��ָ����ʳ�Ա
	Date* date_ptr = &today;
	printf("Today is %d-%d-%d\n", date_ptr->year, date_ptr->month, date_ptr->day);

	Person frank = { "frank", 25, 180.50 };
	printf("Name: %s\tAge: %d\tHeight: %.2f\n", frank.name, frank.age, frank.height);

	system("pause");
	return 0;
}
