/*
	P109 初探 for 循环
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
		for
	*/

	const uint32_t total_laps = 10;	// 目标总圈数

	//uint32_t curren_lap = 0;	// 初始化当前圈数

	puts("跑步者开始跑步");

   
	for (size_t curren_lap = 0; curren_lap < total_laps; curren_lap++)
	{
        printf("跑步者完成: %" PRIu32 "\n", curren_lap);
	}


	system("pause");
	return 0;
}

