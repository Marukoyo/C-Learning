/*
	P103 break与利用死循环 -求和案例
	输入 Q 退出程序
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

int main(void)
{
	/*
		写一个计算求整数和的案例。
		用户从终端输入一系列数字，用回车隔开，直到用户输入一个单个0作为结束，
		然后把所有的数相加，最终计算结果。
	*/

	uint32_t sum = 0;	// 初始化数字和是0


	char input[10];			// 用于存储用户输入的字符

	puts("请输入一系列数字，用回车隔开，输入“Q”退出结束：");

	while (true) {
		puts("请输入一个数字：");
		scanf_s(" %s", &input, 10); // scanf_s 用法是 scanf_s(" %c", &input, 1); 1表示读取一个字符

		// 输入Q（大小写）退出程序
		if (input[0] == 'Q' || input[0] == 'q')
		{
			break;
		}

		char* end;
		long number = strtol(input, &end, 10); // 将字符串转换为长整型
		if (*end != '\0' || number > UINT32_MAX)
		{
			puts("无效输入，请输入一个数字或者'Q(大小写)'");
		}
		else
		{
			sum += number;
		}
		// 将字符转换为数字
		// ASCII码表中，数字0~9的ASCII码是48~57
		/*if (input >= '0' && input <= '9')
		{
			sum += input - '0';
		}
		else
		{
			puts("无效的输入，请输入Q（大小写），或者一个数字0~9！");
		}*/
	}

	printf("所有的数字的和是：%" PRIu32 "\n", sum);

	system("pause");
	return 0;
}
