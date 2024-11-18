/*
	P134 数组的案例：天气
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define DAY_IN_WEEK 7

int main(void)
{
	/*
		假如我们有5个学生的成绩，我们需要计算平均成绩，找出最高分和最低分
	*/
	uint32_t daily_temperatures[DAY_IN_WEEK] = { 22,24,19,24,17,18,23 };

	uint32_t sum = 0;

	uint32_t max_temp = daily_temperatures[0];

	uint32_t min_temp = daily_temperatures[0];

	puts("一周内每天的最高温度：");

	for (size_t i = 0; i < DAY_IN_WEEK; i++)
	{
		printf("第 %zu 天:%" PRIu32 "°C\n", i + 1, daily_temperatures[i]);

		sum += daily_temperatures[i];

		if (daily_temperatures[i] > max_temp)
		{
			max_temp = daily_temperatures[i];
		}
		if (daily_temperatures[i] < min_temp)
		{
			min_temp = daily_temperatures[i];
		}
	}

	double average = (double)sum / DAY_IN_WEEK;


	printf("平均温度：%.2f°C\n", average);

	printf("最热的天气：%u\n", max_temp);

	printf("最冷的天气：%u\n", min_temp);

	system("pause");
	return 0;
}


