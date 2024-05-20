/*
	P67 条件运算符
		条件运算符是C语言中唯一的三目运算符，它的一般形式为：
		表达式1 ? 表达式2 : 表达式3
		如果表达式1的值为真，则整个条件表达式的值为表达式2的值，否则为表达式3的值。
		条件运算符的优先级较低，因此在表达式中使用时，通常需要加上括号。
		条件运算符的使用可以简化代码，但是过度使用会使代码难以阅读。
		条件运算符的使用场景：
			1. 用于简单的条件判断
			2. 用于赋值语句
			3. 用于宏定义
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main() {
	uint8_t score = 89;
	printf("你的成绩等级： %s\n", score >= 90 ? "A" : "不及格");


	system("pause");
	return 0;
}