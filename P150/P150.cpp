/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	135 函数编写要领

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
		1.明确函数目的，明确它的功能将帮助你决定哪些输入是必须的（形式参数。模板），以及如何报告它的工作结果.
		2.识别所需要的输入
		3.确定函数的输出
		4.使用适当的数据类型
		5.函数的命名清晰，并且先声明后定义
	*/
	uint32_t year = 2024;
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
