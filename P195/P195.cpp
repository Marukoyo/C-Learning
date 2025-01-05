
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	178.匿名结构体、函数参数为结构体
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
// 匿名结构体
typedef struct
{
	char name[50];
	int id;
	float score;
} Student;
void pri_stu(Student);
void update_score_by_value(Student*, float);
int main(void)
{

	/**

	*/
	Student stu = { "John Doe", 123, 89.5 };
	puts("Before update:");
	pri_stu(stu);
	puts("After update:");
	update_score_by_value(&stu, 99.5);
	pri_stu(stu);
	system("pause");
	return 0;
}

void pri_stu(Student student)
{
	printf("Student Name: %s\n", student.name);
	printf("Student ID: %d\n", student.id);
	printf("Student Score: %.2f\n", student.score);
}

// 通过指针修改结构体的值
void update_score_by_value(Student* student, float new_score) 
{
	student->score = new_score;
}
