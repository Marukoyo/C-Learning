/*
	类型转换 Type Conversion
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	int16_t smallNum = 32767;
	int32_t bigNum = 9999999;
	// 隐式转换
	//bigNum = smallNum;
	
	// 显式转换 有可能会丢失精度 (强制转换) 尽量使用显示转换，提高代码可读性
	smallNum = (int16_t)bigNum;
	printf("smallNum = %d\n", smallNum);

	//无符号到有符号
	uint32_t uNum = UINT32_MAX;
	int32_t sNum = (int32_t)uNum;
	printf("uNum = %u\n", uNum);
	printf("convert to int32_t: %d\n", sNum);

	// 大范围到小范围
	int64_t bigNum64 = 999999999999999999;
	int16_t smallNum16 = (int16_t)bigNum64;
	printf("bigNum64 = %lld\n", bigNum64);
	printf("convert to int16_t: %hd\n", smallNum16);

	// 小范围到大范围(扩展复数)
	int16_t Num16 = -1;
	uint32_t uNum32 = (uint32_t)Num16;
	printf("Num16 = %hd\n", Num16);
	printf("convert to uint32_t: %u\n", uNum32);


	system("pause");
	return 0;
}