/*
	P44 float���� underflow �� overflow ����������
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
int main() {
	float max_float = FLT_MAX;
	float overflow = max_float * 1000.0f;
	float min_float = FLT_MIN;
	float underflow = min_float / 1.0e126;
	printf("Maximum float: %e\n", max_float);	
	printf("Overflow: %e\n", overflow);		// ���޴� inf = infinity
	printf("Minimum positive float: %e\n", min_float);
	printf("Underflow: %e\n", underflow);	// ����С infinitesimal ��һֱ��ʧ���� ֱ��0

	system("pause");
	return 0;



}