/*
	P112 ѵ�����ӳٺ�����չSleep
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

int main(void)
{
	/*
		�ǹ��� �������������
		����һ�������������ǽ����������ʼ������1
	*/

	uint32_t start_number;	// ��ʼ��������һ������ʼ����

	puts("������һ��������,���ǽ��Ӹ�����ʼ������1��");

	scanf_s("%" SCNu32, &start_number);

	puts("������ʼ��");

	for (size_t i = start_number; i > 0; i--)
	{
		Sleep(1000);	// Windows �ӳ�1�� ��λ������ 1000���� = 1��  Linux: sleep(1); ��λ����
		printf("%" PRIu32 "\n", (uint32_t)i);
	}
	puts("����������");

	system("pause");
	return 0;
}

