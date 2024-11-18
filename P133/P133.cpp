/*
	P133 数组的案例：分数
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
		假如我们有5个学生的成绩，我们需要计算平均成绩，找出最高分和最低分
	*/
	uint32_t grades[STUDENT_COUNT] = { 85,92, 88,96,79 };

	uint32_t sum = 0;
	uint32_t max_grade = grades[0];
	uint32_t min_grade = grades[0];

	puts("所有人的成绩单如下：");

	for (size_t i = 0; i < STUDENT_COUNT; i++)
	{
		printf("学生 %" PRIu64 " 的成绩:%" PRIu32 "\n", i + 1, grades[i]);

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

	printf("总分：%u\n", sum);

	printf("平均成绩：%.2f\n", average);

	printf("最高分：%u\n", max_grade);

	printf("最低分：%u\n", min_grade);

	system("pause");
	return 0;
}


