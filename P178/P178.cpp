/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	162 ��ָ��ĳ�ʼ��
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

	*/
	// ��ָ�룬û��ָ���κ�¥��ĵ�ַ
	uint32_t* ptr_to_floor = NULL;

	uint32_t number = 100;
	ptr_to_floor = &number;
	// ����ͨ����ָ���������
	if (ptr_to_floor == NULL)
	{
		printf("û��ָ��¥��ĵ�ַ��\n");
		// �����ݷ�ʽ�� �����κδ�����˫��û�з�Ӧ
	}
	else
	{
		printf("¥���ַ�ǣ�%p��¥��ţ�%d\n", (void*)ptr_to_floor, *ptr_to_floor);
	}
	system("pause");
	return 0;
}

