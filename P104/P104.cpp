/*
	P104 do-while �� while ������
	while ��������ж������Ƿ��������ִ��ѭ���壬���������������ѭ����һ��Ҳ��ִ�С�
	do while �������ִ��ѭ���壬���ж������Ƿ���������������������������ִ��һ��ѭ���塣
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

int main(void)
{
	/*

	*/

	uint32_t total_laps = 10;
	uint32_t current_lap = 0;
	puts("���ܿ�ʼ��");
	do
	{
		current_lap++;
		printf("���ܵ� %" PRIu32 " Ȧ\n", current_lap);
	} while (current_lap < total_laps);

	printf("�ܲ�������%" PRIu32 "Ȧ\n",total_laps);

	system("pause");
	return 0;
}
