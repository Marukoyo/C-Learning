/*
	P133 ����İ���������
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_COUNT 5
int main(void)
{
	/*
		����������5��ѧ���ĳɼ���������Ҫ����ƽ���ɼ����ҳ���߷ֺ���ͷ�
	*/
	uint32_t grades[STUDENT_COUNT] = { 85,92, 88,96,79 };

	uint32_t sum = 0;
	uint32_t max_grade = grades[0];
	uint32_t min_grade = grades[0];

	puts("�����˵ĳɼ������£�");

	for (size_t i = 0; i < STUDENT_COUNT; i++)
	{
		printf("ѧ�� %" PRIu64 " �ĳɼ�:%" PRIu32 "\n", i + 1, grades[i]);

		sum += grades[i];

		if (grades[i] > max_grade)
		{
			max_grade = grades[i];
		}
		if (grades[i] < min_grade)
		{
			min_grade = grades[i];
		}
	}

	double average = (double)sum / STUDENT_COUNT;

	printf("�ܷ֣�%u\n", sum);

	printf("ƽ���ɼ���%.2f\n", average);

	printf("��߷֣�%u\n", max_grade);

	printf("��ͷ֣�%u\n", min_grade);

	system("pause");
	return 0;
}


