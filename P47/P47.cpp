/*
	P48 float 与 double 有效精度对比
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>

int main() {
	float float_num = 1.0f / 3.0f;
	double double_num = 1.0l / 3.0l;
	printf("float_num = %.20f\n", float_num);
	printf("double_num = %.20lf\n", double_num);

	printf("Define Max precision for float: %.20f\n", FLT_EPSILON);
	printf("Define Max precision for double: %.20lf\n", DBL_EPSILON);
	system("pause");
	return 0;
}