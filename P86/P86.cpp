/*
	P86 �߼����Ķ�·��Ϊ
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main(void)
{
	// �������� �� ���ؿ��� �Ϳ��Ծ��и߶���	������·����`&&`
	bool status_weather = true;
	bool is_venue_available = false;
	if (status_weather && is_venue_available)
	{
		printf("���ھ���\n");
	}
	else {
		printf("��޷�����\n");
		if (!status_weather)
		{
			printf("ԭ������������\n");
		}
		if (!is_venue_available)
		{
			printf("ԭ�򣺳��ز�����\n");
		}
	}

	// �ƻ����ϳ�ȥ��������ľ��������������������Ƿ����Ż�ȯ�����߷���������� ������·����`||`
	bool has_coupon = true;
	bool is_special_event = false;

	if (has_coupon || is_special_event)
	{
		printf("������ȥ����\n");
	}
	else
	{
		printf("�����ڼҳ�\n");
	}

	system("pause");
	return 0;
}

