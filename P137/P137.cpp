/*
	P137 ����İ�������ĸ����ͳ��
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

	// ͳ��ÿ����ĸ���ֵĴ���
	for (size_t i = 0; text[i] != '\0'; i++)
	{
		char ch = tolower(text[i]);
		// ȷ������ĸ��ASCII������ĸ�ķ�Χ��a-z��A-Z��ASCII����a-z�ķ�Χ��97-122��A-Z�ķ�Χ��65-90	
		if (ch >= 'a' && ch<= 'z')
		{
			// ���¶�Ӧ��ĸ��Ƶ��
			frequency[ch - 'a']++;
		}
	}

	puts("��ĸƵ��:");
	for (size_t i = 0; i < LETTER_COUNT; i++)
	{
		if (frequency[i] > 0)
		{
			// i+'a'��ASCII����ʾ��ĸ��frequency[i]�Ƕ�Ӧ��ĸ��Ƶ��
			printf("%c: %u\n", i + 'a', frequency[i]);
		}
	}

	system("pause");
	return 0;
}

