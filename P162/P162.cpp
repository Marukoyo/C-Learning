/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	147 ȫ�ֱ����Ŀ�Խ�߽��������Χ�ɼ��ԣ���̬�����ڣ�Ĭ�ϳ�ʼ��


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

// ȫ�ֱ�������
int globalVar = 100;
int* p = NULL;
//��Խ�����߽磬��������

void demonstrateGlobalVariable(void)
{
	printf("globalVar in demonstrateGlobalVariable: %d\n", globalVar);
}
int main(void)
{
	/**
		����Χ�Ŀɼ���
		��̬�洢��
		��Խ�����߽磬��������
	*/
	uint32_t number;
	demonstrateGlobalVariable();
	// ��main�����з���ȫ�ֱ���
	printf("globalVar in main: %d\n", globalVar);


	system("pause");
	return 0;
}

