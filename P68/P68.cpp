/*
	P68 位运算符
		按位与 "&"
	P69	按位或 "|"
	P70 按位异或"`"
	P71 按位取反"~"
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main() {
	void print_binary(uint8_t num);
	// 按位与 "&" 两个操作数的位中，如果两个相应位都为1，则该位的结果为1，否则为0
	// 用于清零
	uint8_t a = 12; // 0000 1100
	uint8_t b = 25; // 0001 1001
	printf("a & b = %d\n", a & b); // 0000 1000 = 8

	// 按位或 "|"
	// 两个操作数的位中，如果两个相应位有一个为1，则该位的结果为1，否则为0
	// 用于置1
	uint8_t c = 2; // 0000 0010
	uint8_t d = 5; // 0000 0101
	printf("c | d = %d\n", c | d); // 0000 0111 = 7

	// 按位异或 "^"
	// 两个操作数的位中，如果两个相应位不同，则该位的结果为1，否则为0
	// 用于取反(逻辑异或)
	uint8_t e = 2; // 0000 0010
	uint8_t f = 10; // 0000 1010
	printf("e ^ f = %d\n", e ^ f); // 0000 1000 = 8

	// 按位取反 "~"
	// 两个操作数的位中，如果两个相应位不同，则该位的结果为1，否则为0
	// 用于取反
	uint8_t status = 0b00001100;

	print_binary(~status);

	system("pause");
	return 0;
}

void print_binary(uint8_t num) {
	char str[9];  // 存储二进制数的字符串，包括结尾的'\0'
	str[8] = '\0';  // 将字符串的结尾设为'\0'
	for (int i = 7; i >= 0; i--) {
		str[i] = (num & 0x01) ? '1' : '0';  // 从最高位开始将二进制数转换为字符串
		num >>= 1;  // 将二进制数右移一位
	}
	printf("%s", str);  // 打印二进制数的字符串形式
}