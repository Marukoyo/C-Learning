/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	165 ���ϼ���ָ�������������Ƚ�����
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
	int numbers[] = { 10,20,30,40,50,60,70,80,90,100 };

	int* ptr = numbers; // ��ͬ int* ptr = &numbers[0];

	// �������ڴ����������ģ����Կ���ͨ��ָ����б���  
	// ��������Ԫ�ظ���
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("����Ԫ�ظ�����%d\n", size);

	printf("���飺\n");

	// ʹ�������±��������
	for (size_t i = 0; i < size; i++)
	{
		printf("%d", numbers[i]);
	}


	puts("");
	// ʹ��ָ��ӷ��ƶ�ָ��
	ptr += 4;
	printf("ʹ��ָ��ӷ����ʵ����Ԫ��[ptr + 4]��%d\n", *ptr);

	// ʹ��ָ������ƶ�ָ��
	ptr -= 4;
	printf("�ص���һ��Ԫ��numbers[ptr - 4]��%d\n", *ptr);

	// ָ��֮��ļ������������
	int* ptr_start = numbers;	// ��ͬ int* ptr_start = &numbers[0];
	int* ptr_end = numbers + size - 1;		// ��ͬ int* ptr_end = &numbers[size - 1];

	printf("������β֮��ľ��룺%" PRIdPTR "\n", ptr_end - ptr_start);
	// ptr_end - ptr_start :9 ������ ptrdiff_t ��ӡʱʹ�� PRIdPTR/%td
	printf("������β֮��ľ��룺%td\n", ptr_end - ptr_start);

	// ָ��֮��ıȽ�
	puts("ָ��֮��ıȽϣ�");
	if (ptr_start < ptr_end)
	{
		puts("ptr_start ָ���Ԫ���� ptr_end ָ���Ԫ��֮ǰ");
	}
	// ʹ��ָ���������
	for (int* i = ptr_start; i < ptr_end + 1; i++)
	{
		printf("%5d", *i);
	}
	puts("");

	// ʹ��ָ����������������Ԫ�� �����������
	for (int* i = ptr_end; i > ptr_start - 1; i--)
	{
		printf("%5d", *i);
	}
	puts("");

	// ָ��Ӽ����������ض�Ԫ��
	puts("ָ��Ӽ����������ض�Ԫ�أ�");
	uint32_t offset = 3;
	printf("���ʵ�%d��Ԫ�أ�%d\n", offset + 1, *(ptr_start + offset));

	// ���˵�������Ԫ��
	printf("���˵�������Ԫ�أ�%d\n", *(ptr_start + offset - 1));

	// �Ƚ�����ָ��
	int* middle_ptr = &numbers[size / 2];

	system("pause");
	return 0;
}

