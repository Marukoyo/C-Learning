/*
	P72 �������·ң��LED����ϰ
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	
/*
	P75 ���������
*/

int main(void)
{
	// ����������Ҫ�����壬�˴���Ϊ���԰���
	uint8_t a = 1, b = 2, c = 3;
	uint8_t result = (a += 1, b += 2, c += 3);	// �����������������ִ�У����������һ�����ʽ��ֵ ����ʹ��,������Ҫʹ��
	printf("result = %d\n", result);
}

