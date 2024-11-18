/*
	P137 数组的案例：字母次数统计
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

#define LETTER_COUNT 26

int main(void)
{
	/*

	*/
	uint32_t frequency[LETTER_COUNT] = { 0 };

	char text[] = "Example text for frequency analysis";

	// 统计每个字母出现的次数
	for (size_t i = 0; text[i] != '\0'; i++)
	{
		char ch = tolower(text[i]);
		// 确保是字母，ASCII码中字母的范围是a-z和A-Z，ASCII码中a-z的范围是97-122，A-Z的范围是65-90	
		if (ch >= 'a' && ch<= 'z')
		{
			// 更新对应字母的频率
			frequency[ch - 'a']++;
		}
	}

	puts("字母频率:");
	for (size_t i = 0; i < LETTER_COUNT; i++)
	{
		if (frequency[i] > 0)
		{
			// i+'a'是ASCII码显示字母，frequency[i]是对应字母的频率
			printf("%c: %u\n", i + 'a', frequency[i]);
		}
	}

	system("pause");
	return 0;
}

