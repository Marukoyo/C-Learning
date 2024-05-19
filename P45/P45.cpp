/*
	P45 inf - infinity �����
		NaN -  is not a number
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>

int main() {
	// �������
	float positive_infinity = INFINITY;
	printf("positive_infinity = %f\n", positive_infinity);

	// �������
	float negative_infinity = -(INFINITY);
	printf("negative_infinity = %f\n", negative_infinity);

	// ����0�����������
	float num = 1.0f;
	float infinity = num / 0.0f;
	printf("infinity = %f\n", infinity);

	// NaN �޷�ͨ��������
	//float nan = 0.0f / 0.0f;
	//printf("nan = %f\n", nan);

	// ƽ����
	float sqrt_num = sqrt(-(1.0f));
	printf("sqrt_num = %f\n", sqrt_num);

	// �ж��Ƿ�ΪNaN
	if (isnan(sqrt_num))
	{
		printf("��NaN\n");
	}

	system("pause");
	return 0;
}