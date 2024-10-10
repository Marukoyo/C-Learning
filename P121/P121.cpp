/*
	P121 ����������������
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <windows.h>

#include <time.h>

// ģ���齨�Ľ�����鹦��
bool check_component_health(uint32_t);
int main(void)
{
	/*

	*/
	const uint32_t total_components = 5;

	srand(time(NULL));

	puts("Checking components...");
	for (size_t i = 0; i < total_components; i++)
	{
		printf("Component %zu: ", i + 1);
		if (check_component_health(i + 1))
		{
			printf("��� %" PRIu32 "״̬����.\n",i + 1);
		}
		else
		{
			printf("��� %" PRIu32 "���ֹ���.\n", i + 1);
			// ��ʵ��Ӧ���У�������ܻᷢ�;���������ִ�������Ĳ������������о��޸���������ѡ��
		}
	}
	puts("All components checked.");
	system("pause");
	return 0;
}

bool check_component_health(uint32_t component_id) {
	// ��ʵ��Ӧ���У�������Ŀ��ܻᷢ���������������ִ�м��ĸ��Ӳ���
	// ��������ͼ򵥵�ģ��һ�£��������е����ż�������й���
	if (rand() % 10 < 2)	//20%�ĸ��ʳ��ֹ���
	{
		return false;
	}
	return true;
}
