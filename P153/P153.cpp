/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	138 案例：软件工程设计技巧：表驱动法之再探成绩评分系统、再探闰年返回月份天数

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

//  函数将传递一个月份，返回这个月份有多少天的结果
bool is_leap_year(int);
uint32_t get_days_in_month(uint32_t, uint32_t);
char get_grade(uint32_t);
int main(void)
{
	/*
		表驱动法
		使用数据结构(Array, Hash)来存储数据，通过索引来访问数据
		使用数组
		来替代复杂的逻辑语句
		来自 Google 的解释：表驱动法是一种编程模式，它的本质是，从表里查询信息来代替逻辑语句（if,case）。
		1.识别：确定程序中可以用查表代替的逻辑部分。
		2.设计：创建包含所有可能输入和对应输出的表（数组或者Hash）
		3.实现：编写代码，使用输入作为索引或者键来查找表中的相应输出。
		4.优化：根据需要，调整表的结构以提高效率或者可读性。
	*/

	uint32_t res_day = get_days_in_month(12, 2024);
	printf("2024年12月有%d天\n", res_day);

	printf("grade 55 ------ %c\n", get_grade(55));

	system("pause");
	return 0;
}

uint32_t get_days_in_month(uint32_t month, uint32_t year)
{
	//  传统写法用if else... if 或者 switch...case
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