/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	164 ������׵�ַ��ָ����������� 
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

	// ʹ��ָ���������
	for (size_t i = 0; i < size; i++)
	{
		printf("%d", *(ptr + i));
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

	printf("������β�ľ��룺%" PRIdPTR "\n", ptr_end - ptr_start);
	// ptr_end - ptr_start :9 ������ ptrdiff_t ��ӡʱʹ�� PRIdPTR/%td
	printf("������β�ľ��룺%td\n", ptr_end - ptr_start);


	system("pause");
	return 0;
}

