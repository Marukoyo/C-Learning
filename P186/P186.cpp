
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	170 函数的值传递（Pass by value)
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
void add_ten_by_value(uint32_t*);
int main(void)
{

	/**
		函数的值传递（Pass by value)
		地址传递（Pass by reference)
	*/

	uint32_t my_value = 5;
	printf("my_value = %d\n", my_value);

	add_ten_by_value(&my_value);

	printf("已经调用add_ten_by_value之后的值my_value = %d\n", my_value);

	system("pause");
	return 0;
}

void add_ten_by_value(uint32_t* value) {
	*value += 10;
}