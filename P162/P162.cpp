/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	147 全局变量的跨越边界性与程序范围可见性，静态储存期，默认初始化


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

// 全局变量声明
int globalVar = 100;
int* p = NULL;
//跨越函数边界，共享数据

void demonstrateGlobalVariable(void)
{
	printf("globalVar in demonstrateGlobalVariable: %d\n", globalVar);
}
int main(void)
{
	/**
		程序范围的可见性
		静态存储期
		跨越函数边界，共享数据
	*/
	uint32_t number;
	demonstrateGlobalVariable();
	// 在main函数中访问全局变量
	printf("globalVar in main: %d\n", globalVar);


	system("pause");
	return 0;
}

