/*
	P104 do-while 与 while 的区别
	while 语句是先判断条件是否成立，再执行循环体，如果条件不成立，循环体一次也不执行。
	do while 语句是先执行循环体，再判断条件是否成立，如果条件不成立，※至少执行一次循环体。
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

	*/

	uint32_t total_laps = 10;
	uint32_t current_lap = 0;
	puts("罚跑开始：");
	do
	{
		current_lap++;
		printf("罚跑第 %" PRIu32 " 圈\n", current_lap);
	} while (current_lap < total_laps);

	printf("跑步者跑完%" PRIu32 "圈\n",total_laps);

	system("pause");
	return 0;
}
