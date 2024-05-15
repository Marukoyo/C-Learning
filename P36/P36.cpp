/*
	����ת�� Type Conversion
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	int16_t smallNum = 32767;
	int32_t bigNum = 9999999;
	// ��ʽת��
	//bigNum = smallNum;
	
	// ��ʽת�� �п��ܻᶪʧ���� (ǿ��ת��) ����ʹ����ʾת������ߴ���ɶ���
	smallNum = (int16_t)bigNum;
	printf("smallNum = %d\n", smallNum);

	//�޷��ŵ��з���
	uint32_t uNum = UINT32_MAX;
	int32_t sNum = (int32_t)uNum;
	printf("uNum = %u\n", uNum);
	printf("convert to int32_t: %d\n", sNum);

	// ��Χ��С��Χ
	int64_t bigNum64 = 999999999999999999;
	int16_t smallNum16 = (int16_t)bigNum64;
	printf("bigNum64 = %lld\n", bigNum64);
	printf("convert to int16_t: %hd\n", smallNum16);

	// С��Χ����Χ(��չ����)
	int16_t Num16 = -1;
	uint32_t uNum32 = (uint32_t)Num16;
	printf("Num16 = %hd\n", Num16);
	printf("convert to uint32_t: %u\n", uNum32);


	system("pause");
	return 0;
}