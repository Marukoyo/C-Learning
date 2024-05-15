#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> /* C standard library header file that defines integer types with specific widths 具有跨平台性※实际开发使用*/
#include <complex.h>

int main(void) {
	// 浮点数类型
	printf("Size of float : %zu byte(s)\n", sizeof(float));

	// __int8 is a Microsoft specific data type 微软专用
	__int8 num1 = 10;
	printf("Size of __int8 : %zu byte(s)\n", sizeof(num1));
	// stdint.h is a C standard library header file that defines integer types with specific widths 标准库头文件 指定长度整数类型
	// ?实际开发使用 跨平台性
	int16_t myInt16 = 32767;
	uint16_t myUInt16 = 65535;

	int32_t myInt32 = 2147483647;
	uint32_t myUInt32 = 4294967295U; /* U is used to specify unsigned int */

	int64_t myInt64 = 9223372036854775807LL; /* LL is used to specify long long */
	uint64_t myUInt64 = 18446744073709551615ULL; /* ULL is used to specify unsigned long long */

	printf("Size of int16_t : %zu byte(s)\n", sizeof(myInt16));
	printf("Size of uint16_t : %zu byte(s)\n", sizeof(myUInt16));
	printf("Size of int32_t : %zu byte(s)\n", sizeof(myInt32));
	printf("Size of uint32_t : %zu byte(s)\n", sizeof(myUInt32));
	printf("Size of int64_t : %zu byte(s)\n", sizeof(myInt64));
	printf("Size of uint64_t : %zu byte(s)\n", sizeof(myUInt64));

	float _COMPLEX a;  /* 该变量包含两个float值，实部和虚部 */
	system("pause");
	return 0;
}