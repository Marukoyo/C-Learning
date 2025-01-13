/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	183.Union 联合
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

union Data2 {
	int int_value;
	float float_value;
	const char* string_value;
};

typedef union {
	int int_value;
	float float_value;
	const char* string_value;	// 要加 const，否则会报错
} Data1;

typedef enum {
	DATA_INT,	// 注意名字
	DATA_FLOAT,
	DATA_STRING
} DataType;

typedef struct {
	DataType type;
	Data1 data;
} TypeData;		// 类似 面对对象中的泛型

void print_data(TypeData*);

int main(void)
{
	/**
		允许在同一内存位置存储不同的数据类型
		联合可以存储不同的数据类型，但是只能同时存储一个数据类型，大小为最大的数据类型
	*/

	TypeData typeData1 = { DATA_INT, {.int_value = 10} };	//此种写法需要C++20支持
	TypeData typeData2 = { DATA_FLOAT, {.float_value = (float)3.14} };	//此种写法需要C++20支持
	TypeData typeData3 = { DATA_STRING, {.string_value = "Hello,Union!"} };	//此种写法需要C++20支持
	print_data(&typeData1);
	print_data(&typeData2);
	print_data(&typeData3);
	system("pause");
	return 0;
}

void print_data(TypeData* typedata)
{
	switch (typedata->type)
	{
	case DATA_INT:
		printf("整型数据：%d\n", typedata->data.int_value);
		break;
	case DATA_FLOAT:
		printf("浮点型数据：%f\n", typedata->data.float_value);
		break;
	case DATA_STRING:
		printf("字符串型数据：%s\n", typedata->data.string_value);
		break;
	default:
		break;
	}
}
