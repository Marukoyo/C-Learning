/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	166 ��̽size_t ��������ָ���ʹ��
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
		ָ��������Ĺ�ϵ
		��������Ϊָ���ʹ��
	*/
	int32_t arrays[] = { 10,20,30,40,50,60,70,80,90,100 };

	int32_t* ptr = arrays; // ��ͬ int32_t* ptr = &arrays[0];

	// size_t ���޷������ͣ�ר�����ڱ�ʾ��С�����Ⱥ���������߳����ڲ�ͬƽ̨�ϵ���ֲ��
	size_t arraySize = sizeof(arrays) / sizeof(arrays[0]);

	puts("���ԭʼ���飺");
	for (size_t i = 0; i < arraySize; i++)
	{
		printf("%" PRId32 "\n", arrays[i]);
	}
	puts("");
	printf("������Ӻ�����飺\n");
	// ͨ��ָ�����������ÿ��Ԫ�ص�ֵ
	for (size_t i = 0; i < arraySize; i++)
	{
		*(ptr + i) += 5;
		printf("%" PRId32 "\n", arrays[i]);
	}

	
	system("pause");
	return 0;
}

