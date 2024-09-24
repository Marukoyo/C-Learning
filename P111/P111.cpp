/*
	P111 训练：倒数五个数
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
#include <stdbool.h>

int main(void)
{
	/*
		星光大道 “倒数五个数”
		输入一个正整数，我们将从这个数开始倒数到1
	*/

	uint32_t start_number;	// 初始化：从哪一个数开始倒数

	puts("请输入一个正整数,我们将从该数开始倒数到1：");

	scanf_s("%" SCNu32, &start_number);

	puts("倒数开始：");

	for (size_t i = start_number; i > 0; i--)
	{
		printf("%" PRIu32 "\n", (uint32_t)i);
	}
	puts("倒数结束！");
    
	system("pause");
	return 0;
}

