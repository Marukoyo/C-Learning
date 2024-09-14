/*
	P108 continue 和 break 联用条件判断的实际用途
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
		假如我们要处理一系列的数字，我们想要忽略所有的负数和>100的数字，只能处理0到100之间的数字。
		对于每一个有效数字，如果是偶数，打印一条信息并且告知它是偶数，如果是奇数，打印一条信息并且告知它是奇数。
		用户输入-1结束程序。
	*/

	uint32_t sum = 0;
	int32_t number;

	while (true)
	{
		puts("请输入一个有效数字（0~100)：");
		scanf_s("%d", &number);

		// 检查条件结束
		if (number == -1)
		{
			break;
		}

		// 跳过所有的负数和>100的整数
		if (number < 0 || number > 100)
		{
			continue;	// 跳过本次循环（剩余部分），继续下一次循环
		}

		// 处理有效数字
		if (number % 2 == 0)
		{
			printf("这是一个偶数：%d\n", number);
		}
		else
		{
			printf("这是一个奇数：%d\n", number);
		}
	}


	system("pause");
	return 0;
}

