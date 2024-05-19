/*
	P45 inf - infinity 无穷大
		NaN -  is not a number
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>

int main() {
	// 正无穷大
	float positive_infinity = INFINITY;
	printf("positive_infinity = %f\n", positive_infinity);

	// 负无穷大
	float negative_infinity = -(INFINITY);
	printf("negative_infinity = %f\n", negative_infinity);

	// 除以0产生的无穷大
	float num = 1.0f;
	float infinity = num / 0.0f;
	printf("infinity = %f\n", infinity);

	// NaN 无法通过编译器
	//float nan = 0.0f / 0.0f;
	//printf("nan = %f\n", nan);

	// 平方根
	float sqrt_num = sqrt(-(1.0f));
	printf("sqrt_num = %f\n", sqrt_num);

	// 判断是否为NaN
	if (isnan(sqrt_num))
	{
		printf("是NaN\n");
	}

	system("pause");
	return 0;
}