/*
	P106 随机数猜数游戏案例-do while 练习
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
	/*

	*/

	uint32_t secret_number, guess_number, status;

	// 生成随机数
	srand(time(NULL));
	// 生成1-100的随机数
	// https://c.biancheng.net/view/2043.html
	secret_number = rand() % 100 + 1;

	puts("猜猜我想的是哪一个数(1~100)?");

	do
	{
		puts("请输入你的猜测：");
		status = scanf_s("%d", &guess_number);
		if (guess_number < secret_number)
		{
			puts("太小了，再试试！");
		}
		else if (guess_number > secret_number)
		{
			puts("太大了，再试试！");
		}
	} while (guess_number != secret_number);

	printf("恭喜你，猜对了！答案是 %" PRIu32 "\n", secret_number);

	system("pause");
	return 0;
}
