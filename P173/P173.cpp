/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	157 ָ�����޸�
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

	uint32_t* ptr_floor_102 = &building_floors[1];	// ����������int *
	uint32_t* ptr_floor_103 = &building_floors[2];	// ����������int *

	printf("&building_floors[2]�ĵ�ַ��%p\n", &building_floors[2]);

	printf("ptr_floor_103 ָ������������%p\n", ptr_floor_103);

	printf("building_floors[2]%d\n", building_floors[2]);

	printf("���Աͨ��*��ָ���൱��һ����ͼ���ߣ���������ptr_floor_103 ��� ָ����������洢��ҵ���ĵ�ַ��ȥѰ��...\n");

	printf("�������ҵ���....%d\n", *ptr_floor_103);

	//printf("building_floors[2]%p\n", &building_floors[1] + 0x4);

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
	// ���Ա�ҵ����ˡ���������Ҫ����Ա����Ҫ����ˣ��һ�ᵽ106...
	uint32_t * ptr_new_106 = ptr_floor_103;
	//building_floors[2] = 106;
	*ptr_new_106 = 106;
	system("pause");
	return 0;
}

