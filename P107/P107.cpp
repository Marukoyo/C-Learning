/*
	P107 continue ���÷�
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
#include <time.h>
#include <stdbool.h>

int main(void)
{
	/*

	*/

	uint32_t sum = 0;
	int32_t number;
	
	puts("������һϵ�����������������ǵĺ͡�");
	puts("�������븺�������Ǹ������ᱻ���㡣");
	puts("����0������������ʾ���ܺ͡�");
	
	while (true)
	{
		printf("������һ��������");
		scanf_s("%d", &number);
		if (number == 0)
		{
			break;
		}
		if (number < 0)
		{
			continue;	// ��������ѭ����ʣ�ಿ�֣���������һ��ѭ��
		}
		sum += number;
	}

	printf("��Щ�������ĺ��ǣ�%u\n", sum);

	system("pause");
	return 0;
}
