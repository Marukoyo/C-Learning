/*
	P98 Scanf 的简单使用
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		switch()

	*/
	int32_t number1;
	int32_t number2;
	int32_t number3;
	int32_t number4;
	puts("Enter an integer:");

	// 要求用户从键盘输入一个整数，与我们交互
	// scan 扫描 f 格式化
	scanf_s("%d", &number1);
	printf("已扫描到您输入的数字：%d\n", number1);

	puts("请输入3个数字(用逗号【英文】隔开）:");
	// 逗号隔开，可以输入多个变量，但是要注意格式化
	scanf_s("%d,%d,%d", &number2, &number3, &number4);
	printf("已扫描到您输入的数字：%d,%d,%d\n", number2, number3, number4);
	system("pause");
	return 0;
}


