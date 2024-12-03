/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	149 extern 全局变量与跨文件访问


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
#include "helper.h"



int g_static_val = 10; // 全局变量
void access_g(void);
int main(void)
{
	/**


	*/
	printf("g_static_val Main before = %d\n", g_static_val);
	access_g();
	try_access_g();

	system("pause");
	return 0;
}


void access_g(void) {
	g_static_val += 5;
	printf("g_static_val = %d\n", g_static_val);
}