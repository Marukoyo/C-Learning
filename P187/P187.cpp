
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	171 ������Ա��н��ϵͳ��ָ����Ϊ��������ֵ
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
#define EMPLOYEE_COUNT 5
void update_salary(uint32_t*, uint32_t);
void print_employee(uint32_t*);	// ��ͬ�� void print_employee(uint32_t[])
uint32_t* calculate_bonus(uint32_t*);;
int main(void)
{

	/**
		Ա��н�ʹ���ϵͳ
		 - �����ǹ���
		 - ���㲢�ҷ���Ա�������ս�
		 - �������н�ʵ�Ա��
	*/

	uint32_t salary[EMPLOYEE_COUNT] = { 3000,4000,3500,4500,3200 };
	uint32_t bonus[EMPLOYEE_COUNT] = { 0 };
	uint32_t increment = 10000;
	update_salary(salary, increment);
	print_employee(salary);
	// 
	printf("���ս���ߵ�Ա���ǣ�%d\n", *calculate_bonus(salary));

	system("pause");
	return 0;
}
void update_salary(uint32_t* salary, uint32_t increment) {
	for (size_t i = 0; i < EMPLOYEE_COUNT; i++)
	{
		*(salary + i) += increment;	// Ҳ����д�� salary[i] += increment;
		// ?	*(salary + i) �� salary[i] �ǵ�Ч�ģ���Ϊ���Ƕ���ʾ���� salary �е� i ��Ԫ�ص�ֵ��
	}
}

void print_employee(uint32_t* salary)
{
	for (size_t i = 0; i < EMPLOYEE_COUNT; i++)
	{
		printf("Ա��%zu�Ĺ����ǣ�%d\n", i + 1, salary[i]);
	}
}

uint32_t* calculate_bonus(uint32_t* salary)
{
	uint32_t max_salary = 0;
	uint32_t* max_salary_employee = NULL;
	for (size_t i = 0; i < EMPLOYEE_COUNT; i++)
	{
		if (salary[i] > max_salary)
		{
			max_salary = salary[i];
			max_salary_employee = &salary[i];	
			// ��ͬ�� max_salary_employee = salary + i;
		}
	}
	return max_salary_employee;
}
