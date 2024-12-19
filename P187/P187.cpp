
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	171 案例：员工薪资系统：指针作为函数返回值
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
void print_employee(uint32_t*);	// 等同于 void print_employee(uint32_t[])
uint32_t* calculate_bonus(uint32_t*);;
int main(void)
{

	/**
		员工薪资管理系统
		 - 批量涨工资
		 - 计算并且返回员工的年终奖
		 - 查找最高薪资的员工
	*/

	uint32_t salary[EMPLOYEE_COUNT] = { 3000,4000,3500,4500,3200 };
	uint32_t bonus[EMPLOYEE_COUNT] = { 0 };
	uint32_t increment = 10000;
	update_salary(salary, increment);
	print_employee(salary);
	// 
	printf("年终奖最高的员工是：%d\n", *calculate_bonus(salary));

	system("pause");
	return 0;
}
void update_salary(uint32_t* salary, uint32_t increment) {
	for (size_t i = 0; i < EMPLOYEE_COUNT; i++)
	{
		*(salary + i) += increment;	// 也可以写成 salary[i] += increment;
		// ?	*(salary + i) 和 salary[i] 是等效的，因为它们都表示数组 salary 中第 i 个元素的值。
	}
}

void print_employee(uint32_t* salary)
{
	for (size_t i = 0; i < EMPLOYEE_COUNT; i++)
	{
		printf("员工%zu的工资是：%d\n", i + 1, salary[i]);
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
			// 等同于 max_salary_employee = salary + i;
		}
	}
	return max_salary_employee;
}
