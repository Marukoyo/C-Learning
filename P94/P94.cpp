/*
	P94 switch���̵Ƶļ�Ӧ��
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		״̬��
		������״̬��ת����ʹ��switch case
	*/
	uint8_t traffic_light_state = 0; // ��ʼ״̬�����
	switch (traffic_light_state)
	{
	case 0: // ���
		printf("���\n");
		traffic_light_state = 1;
		break;
	case 1: // �̵�
		printf("�̵�\n");
		traffic_light_state = 2;
		break;
	case 2: // �Ƶ�
		printf("�Ƶ�\n");
		traffic_light_state = 0;
		break;
	default:
		puts("Ĭ��״̬");
		break;
	}

	system("pause");
	return 0;
}


