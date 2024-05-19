/*
	P44 float类型 underflow 与 overflow 上溢与下溢
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
	printf("Overflow: %e\n", overflow);		// 无限大 inf = infinity
	printf("Minimum positive float: %e\n", min_float);
	printf("Underflow: %e\n", underflow);	// 无限小 infinitesimal 会一直丢失精度 直到0

	system("pause");
	return 0;



}