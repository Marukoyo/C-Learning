/*
	P37 固定宽度整数类型格式化宏输出
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> // C99标准
int main() {
	int8_t myInt8 = INT8_MAX;
	int32_t myInt32 = INT32_MAX;
	uint32_t myUint32 = UINT32_MAX;
	uint64_t myUint64 = UINT64_MAX;

	printf("int8_t: %" PRId8 "\n", myInt8);
	printf("int32_t: %" PRId32 "\n", myInt32);
	printf("uint32_t: %" PRIu32 "\n", myUint32);
	printf("uint64_t: %" PRIu64 "\n", myUint64);
	/*
		P38 least和fast整型的企业用途与区别
	*/
	// least means the smallest size of the integer type 指定最小的整数类型
	int_least32_t playerScore = 1000000;

	// fast whose meaning is not clearly defined and is left to the implementation to decide what is meant by a "fast" integer data type.
	// 快速整数类型的含义没有明确定义，由实现（环境,e.g.,CPU）决定什么是“快速”整数数据类型。
	int_fast32_t pixelValue = 128;
	printf("playerScore: %" PRIdFAST32 "\n", playerScore);
	system("pause");
	return 0;
}