/*
	P134 ����İ���������
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
		����������5��ѧ���ĳɼ���������Ҫ����ƽ���ɼ����ҳ���߷ֺ���ͷ�
	*/
	uint32_t daily_temperatures[DAY_IN_WEEK] = { 22,24,19,24,17,18,23 };

	uint32_t sum = 0;

	uint32_t max_temp = daily_temperatures[0];

	uint32_t min_temp = daily_temperatures[0];

	puts("һ����ÿ�������¶ȣ�");

	for (size_t i = 0; i < DAY_IN_WEEK; i++)
	{
		printf("�� %zu ��:%" PRIu32 "��C\n", i + 1, daily_temperatures[i]);

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


	printf("ƽ���¶ȣ�%.2f��C\n", average);

	printf("���ȵ�������%u\n", max_temp);

	printf("�����������%u\n", min_temp);

	system("pause");
	return 0;
}


