
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	174.��Ϸ�������ղؽ���
*/
#include <inttypes.h>
#include <math.h>Q
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#include <string.h>

#define MAX_ACHIEVEMENTS 10

const char* achievements[MAX_ACHIEVEMENTS];

size_t achievement_count = 0;

void add_achievement(const char* new_achievement);

void print_achievements();
int main(void)
{

	/**

	*/
	const char* str = "Hello";
	printf("%s\n", str);
	add_achievement("��ɵ�һ����ս����");
	add_achievement("�ҵ������е����ر���");
	print_achievements();
	system("pause");
	return 0;
}

void add_achievement(const char* new_achievement)
{
	// const readonly ֻ�ɶ� ����д
	if (achievement_count < MAX_ACHIEVEMENTS)
	{
		achievements[achievement_count] = new_achievement;
		achievement_count++;
		printf("�����ѽ�����%s\n", new_achievement);
	}
	else
	{
		printf("�����������޷������½���\n");
	}
}

void print_achievements()
{
	printf("�ѽ����Ľ�����\n");
	for (size_t i = 0; i < achievement_count; i++)
	{
		printf("%zu:%s\n", i + 1, achievements[i]);
	}
}
