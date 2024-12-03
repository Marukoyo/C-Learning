/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	136 初步认识全局变量、局部变量

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
#define YEAR 2024	// 宏定义（全局常量）

int sum(int, int);
bool is_leap_year(int);
int main(void)
{
	/*
		全局变量
		局部变量
		作用域
	*/
	uint32_t year = YEAR;
	printf("%d年是%s年\n", year, is_leap_year(year) ? "闰" : "平");
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
