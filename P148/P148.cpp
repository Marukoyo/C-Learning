/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	133 函数的参数

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

// 先声明
void greet(int, bool);

int add(int, int);

int main(void)
{
	/*
		调用
	*/
	greet(18, 1);
	greet(20, 0);

	printf("num1 + num2 = %" PRId32 "\n", add(7, 8));

	system("pause");
	return 0;
}

void greet(int age, bool gender) {
	printf("您的年龄：%" PRId32 ",您的性别是：%s\n", age, gender ? "男" : "女");
}
int add(int num1, int num2) {
	return num1 + num2;
}

