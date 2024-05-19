/*
	P56 const常量与#define宏定义
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	/*#define 宏*/

#define PI 3.1415926f	
int main() {
	// 常量
	const int const_num = 10;
	//const_num = 20;	// error C3892: “const_num”: 无法为只读变量赋值
	//PI = 3.14;	// error C3892: “PI”: 无法为只读变量赋值
	printf("const_num = %d\n", const_num);
	printf("PI = %f\n", PI);

	system("pause");
	return 0;
}