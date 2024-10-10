/*
	P121 案例：检查组件故障
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <windows.h>

#include <time.h>

// 模拟组建的健康检查功能
bool check_component_health(uint32_t);
int main(void)
{
	/*

	*/
	const uint32_t total_components = 5;

	srand(time(NULL));

	puts("Checking components...");
	for (size_t i = 0; i < total_components; i++)
	{
		printf("Component %zu: ", i + 1);
		if (check_component_health(i + 1))
		{
			printf("组件 %" PRIu32 "状态良好.\n",i + 1);
		}
		else
		{
			printf("组件 %" PRIu32 "出现故障.\n", i + 1);
			// 在实际应用中，这里可能会发送警报或者是执行其他的操作，或者是列举修复方案进行选择
		}
	}
	puts("All components checked.");
	system("pause");
	return 0;
}

bool check_component_health(uint32_t component_id) {
	// 在实际应用中，这里真的可能会发送网络请求或者是执行检查的复杂操作
	// 我们这里就简单的模拟一下，假设所有的组件偶尔都会有故障
	if (rand() % 10 < 2)	//20%的概率出现故障
	{
		return false;
	}
	return true;
}
