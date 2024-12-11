/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	158 指针星号的企业风格规范以及容易引发的问题*/
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
		譬如：「 int a 」，其中「 int 」是数据类型，「 a 」是变量名。 我们延伸到指针就明白了，「 int *p 」将 「 int 」当成了数据类型， 「 *p 」则作为一个整体被认为是指针变量。 即定义了一个指针变量「 *p 」， 该指针的数据类型是「 int 」； 对于「 int* p 」来说，「 int* 」作为一个整体被认为是数据类型，而「 p 」则被认为是指针变量。                
		原文链接：https://blog.csdn.net/u012867916/article/details/74781049
	*/
	// 微软写法 int* ，表明强调这个变量是一个指向int类型的指针（int类型的指针）的变量
	int* p = NULL;
	
	// GNU写法 int* ，表明强调这个变量实际上是一个指针变量
	int *p;

	int* a, b;	// a是指针变量,b是int类型变量
	uint32_t* c, * b;	// c是指针，b也是指针

	

	system("pause");
	return 0;
}

