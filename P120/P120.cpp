/*
	P120 ������������
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include<windows.h>
int main(void)
{
	/*
		������
	*/
	const uint32_t total_steps = 100;	// �ܲ�����������������
	
	puts("�����У����Ժ�");

	//scanf_s("%" SCNu32, &levels);

	puts("���ֽ���ͼ�����£�");

	for (size_t i = 0; i <= total_steps; i++)
	{
		printf("\r[");	// ����ƶ������еĿ�ʼ��
		// ��ӡ����������������
		for (size_t j = 0; j < i; j++)
		{
			printf("#");
		}
		// �൱�ڵ�ǰ�Ľ�������ʣ�ಿ�֣����ڿո񣩣����統ǰ32%����ʣ��68%���ڿո�
		for (size_t j = i; j < total_steps; j++)
		{
			printf(" ");
		}
		// ���Ѿ������������ / �ļ��ܴ�С�� * 100% 
		printf("] %3" PRIu32 "%c", i * 100 / total_steps,'%');
		// ˢ�»����� ȷ���������Ļ
		fflush(stdout);
		Sleep(100);
	}
	puts("�������");
	system("pause");
	return 0;
}

