/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	156 ָ��


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

int main(void)
{

	/**
		ָ����һ������ı�����ָ�벻��������ֵ��ָ��ֻ��洢���ݵĵ�ַ��
		������Ա�ĵ�ͼ�̵ı��ÿ��¥������ƺţ���ַ

	*/
	uint32_t building_floors[5] = { 101, 102, 103, 104, 105 };

	uint32_t target_floor = 103;	// ���Ա��Ҫ�ҵ�Ŀ��ס��

	uint32_t* ptr_floor_103 = &building_floors[2];	// ����������int *

	printf("ptr_floor_103 ָ������������%p", ptr_floor_103);

	uint32_t found = 0;	// 0��ʾδ�ҵ���1��ʾ�ҵ�

	printf("���Ա��Ҫ�ҵ�Ŀ��ס���ǣ�%d\n", target_floor);

	for (size_t i = 0; i < 5; i++)
	{
		// printf("�ҵ���Ŀ��ס����%d�ĵ�ַ��%p\n", building_floors[i], &building_floors[i]);
		if (building_floors[i] == target_floor)
		{
			printf("�ҵ���Ŀ��ס����%d�ĵ�ַ��%p\n", target_floor, (void*)&building_floors[i]);
			found = 1;
			break;
		}
	}
	if (!found)
	{
		puts("���Աû���ҵ���ס����");
	}
	system("pause");
	return 0;
}

