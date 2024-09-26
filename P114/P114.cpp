/*
	P114 训练：sqrt与素数的概念
*/
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	/*
		开平方根
		什么叫素数
		用户输入一个数，判断是否为素数。
	*/
	double number = 4.00;
	printf("%lf\n", sqrt(number));


	uint32_t number;
	puts("请输入一个数：");

	system("pause");
	return 0;
}

