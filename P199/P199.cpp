/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	182.Enumeration 枚举
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

/** enum Weekday
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};
**/
typedef enum
{
	MONDAY,		//0
	TUESDAY,	//1
	WEDNESDAY,	//... 
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
} Weekday;


const char* get_weekday_name(Weekday);

int main(void)
{

	/**
		Enumeration 枚举
	*/
	Weekday day1 = MONDAY;
	Weekday day2 = TUESDAY;
	printf("day = %d\n", MONDAY);
	printf("day = %s\n", get_weekday_name(TUESDAY));

	system("pause");
	return 0;
}

const char* get_weekday_name(Weekday day)
{
	switch (day)
	{
	case MONDAY:
		return "Monday";
		break;
	case TUESDAY:
		return "Tuesday";
		break;
	case WEDNESDAY:
		return "Wednesday";
		break;
	case THURSDAY:
		return "Thursday";
		break;
	case FRIDAY:
		return "Friday";
		break;
	case SATURDAY:
		return "Saturday";
		break;
	case SUNDAY:
		return "Sunday";
		break;
	default:
		break;
	}
}
