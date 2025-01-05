
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	179.值语义初始化结构体变量
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

typedef struct
{
	int x;
	int y;
} Point;

Point get_point(void);

int main(void)
{

	/**
		Return 结构体
	*/

	Point my_point = get_point();
	Point your_point = get_point();
	Point zhangsan = get_point();

	printf("Point:{%d,%d}\n", my_point.x, my_point.y);

	system("pause");
	return 0;
}

Point get_point(void)
{
	// 值语义（values semantics）
	/* 
	值语义(Value Semantics)：所谓值语义是指目标对象由源对象拷贝生成，且生成后与源对象完全无关，彼此独立存在
	，改变互不影响。就像 Int 类型变量相互拷贝一样，拷贝之后就与源对象完全脱离关系。	
	引用语义(Reference Semantics)：通常是指一个目标对象由源对象拷贝生成，但生成后与源对象之间依然共享底层资源，对任何一个的改变都将随之改变另一个。
	*/
	Point p = { 10,20 };
	return p;	// Return 一个结构体副本
}
