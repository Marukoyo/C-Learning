/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	134 案例：求面积函数

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

#define PI 3.14

// 先声明
double square_area(double);
double rectangle(double, double);
double circle_area(double);

int add(int, int);

int main(void)
{
	/*
		调用
	*/
	printf("正方形面积：%.2lf\n", square_area(6));
	printf("长方形面积：%.2lf\n", rectangle(5, 5));
	printf("圆面积：%.2lf\n", circle_area(6.5));
	system("pause");
	return 0;
}
double square_area(double side) {
	return side * side;
}
double rectangle(double length, double width) {
	return length * width;
}
double circle_area(double radius) {
	return PI * radius * 2;
}


