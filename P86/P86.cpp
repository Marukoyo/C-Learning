/*
	P86 逻辑与或的短路行为
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main(void)
{
	// 天气适宜 且 场地可用 就可以举行高尔夫活动	——短路计算`&&`
	bool status_weather = true;
	bool is_venue_available = false;
	if (status_weather && is_venue_available)
	{
		printf("如期举行\n");
	}
	else {
		printf("活动无法举行\n");
		if (!status_weather)
		{
			printf("原因：天气不适宜\n");
		}
		if (!is_venue_available)
		{
			printf("原因：场地不可用\n");
		}
	}

	// 计划晚上出去吃晚饭，你的决策依赖于两个条件：是否有优惠券，或者饭店有其他活动 ——短路计算`||`
	bool has_coupon = true;
	bool is_special_event = false;

	if (has_coupon || is_special_event)
	{
		printf("决定出去吃晚饭\n");
	}
	else
	{
		printf("决定在家吃\n");
	}

	system("pause");
	return 0;
}

