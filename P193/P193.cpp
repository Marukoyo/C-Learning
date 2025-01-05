
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	176.初识结构体Struct

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
int main(void)
{

	/**
		结构体(structures)
		数据类型
		结构体是一种用户自定义的数据类型，允许存储不同类型的数据项
		说白了，我们想要定义什么类型？
		其中，整个结构体包含了3个int类型的成员
	*/
	struct Date {
		int year;
		int month;
		int day;
	};
	struct Date today = { 2021, 9, 1 };

	struct Person
	{
		char name[50];
		int age;
		float height;
		//...
	};

	struct Person frank = { "frank", 77, 280 };
	system("pause");
	return 0;
}
