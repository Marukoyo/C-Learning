/*
	P42 float类型
	P36、 39、 40、 41、 42、43
	※ 定义 float 类型的变量，一定要指定f后缀，否则会丢失精度，f后缀是告诉编译器这是一个 float 类型的变量
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
int main() {
	// 单精度 float
	float temperature = 36.5f;
	float humidity = 48.3f;
	float speed_of_sound = 343.5e2f;

	// 双精度 double
	// 科学计数法，表示 343.5 * 10^2
	double length = 12.34l, width = 23.45l, height = 34.56l;	// 同一个意群，比如说这几个单位构成一个立方体
	printf("temperature = %f\n", temperature);
	printf("humidity = %.2f\n", humidity);
	printf("speed_of_sound = %f\n", speed_of_sound);
	printf("length = %.2lf, width = %lf, height = %lf\n", length, width, height);

	// 打印百分号%
	printf("%%\n");

	// 科学计数法格式化输出 %e 或 %E
	printf("Using %%e : speed_of_sound = %e\n", speed_of_sound);

	// P计数法 十六进制浮点数%a 或者 %A 
	printf("Using %%a : speed_of_sound = %a\n", speed_of_sound);
	system("pause");
	return 0;

	
	
}