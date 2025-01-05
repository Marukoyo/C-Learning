
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	177.创建结构体变量与访问方式
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
// 创建结构体
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
		结构体(structures)
		数据类型
		结构体是一种用户自定义的数据类型，允许存储不同类型的数据项
		说白了，我们想要定义什么类型？
		其中，整个结构体包含了3个 int 类型的成员
	*/

	// 初始结构体变量
	Date today = { 2024, 12, 20 };
	// 通过. 访问成员
	printf("Today is %d-%d-%d\n", today.year, today.month, today.day);
	// 通过指针访问成员
	Date* date_ptr = &today;
	printf("Today is %d-%d-%d\n", date_ptr->year, date_ptr->month, date_ptr->day);

	Person frank = { "frank", 25, 180.50 };
	printf("Name: %s\tAge: %d\tHeight: %.2f\n", frank.name, frank.age, frank.height);

	system("pause");
	return 0;
}
