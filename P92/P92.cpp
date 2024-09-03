/*
	P92 条件 练习 租车案例
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		variable = (condition) ? Expression2 : Expression3;
		卫语句 guard clause
	*/
	uint8_t driving_year = 3;
	uint8_t age = 25;

	if (age < 21)
	{
		puts("不符合条件，年龄不足。");
		return 0;
	}
	if (driving_year < 1)
	{
		puts("不符合条件，驾驶经验不足。");
		return 0;
	}
	// 所有的条件都满足
	puts("符合条件，可以租车。");
	system("pause");
	return 0;
}


