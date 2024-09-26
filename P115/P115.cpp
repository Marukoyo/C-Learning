/*
	P115 训练：判断素数
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		开平方根
		什么叫素数
		用户输入一个数，判断是否为素数。
	*/
	uint32_t num;

	bool isPrime = true;

	puts("请输入一个大于1的正整数，我们将检查它是否为素数：");

	scanf_s("%" SCNu32, &num);

	for (size_t i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}

	printf("结果是：%s", isPrime ? "质数" : "合数(不是素数/质数)");

	system("pause");
	return 0;
}

