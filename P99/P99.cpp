/*
	P99 初探 while 循环
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main(void)
{
	/*
		

	*/
	
	const uint32_t TOTAL = 10;	// 总圈数
	uint32_t current_lap = 0;	// 当前跑的圈数
	puts("开始跑圈");
	
	while (current_lap < 10)
	{
		current_lap++;
		printf("跑步的人完成第 %" PRIu32 " 圈.\n", current_lap);
		
	}
	printf("跑步的人完成第 %" PRIu32 " 圈.\n", current_lap);
	system("pause");
	return 0;
}


