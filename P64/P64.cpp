/*
	P64 ��λ��λ�����
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main() {
	// <<  λ�������	 Ҫע��д��λ�Ʋ�������ͼ��һ���� unsigned  һ�����ڳ˳������㣬�Ż����ܣ�����������
	uint8_t num = 22;	// 22 = 0001 0110
	printf("num = %" PRIu8 "\n", num);
	printf("num << 2 = %" PRIu8 "\n", num << 2); // ��Ч�� 22 * 2^2 = 88 �� 88 = 0101 1000

	//>> λ�������
	uint8_t num2 = 22; // 22 = 0001 0110
	printf("num2 = %" PRIu8 "\n", num2);
	printf("num2 >> 2 = %" PRIu8 "\n", num2 >> 2); // ��Ч�� 22 / 2^2 = 5 �� 5 = 0000 0101

	// ��λ������� ����STM32 ��Ƭ�� HAL���������  B/S�����ò��� 
	uint32_t device_config = 0; // 0000 0000
	const uint32_t option1 = 1 << 0; // 0000 0001
	const uint32_t option2 = 1 << 1; // 0000 0010
	const uint32_t option3 = 1 << 2; // 0000 0100

	device_config |= option1 | option2 | option3; // 0000 0111
	uint32_t option2_status = (device_config & option2) >> 1; // 0000 0010 & 0000 0010 = 0000 0010 >> 1 = 0000 0001
	device_config &= ~option2; // 0000 0111 & 1111 1101 = 0000 0101

	system("pause");
	return 0;
}