/*
	P64 按位移位运算符
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

int main() {
	// <<  位移运算符	 要注释写明位移操作的意图，一般用 unsigned  一般用于乘除法运算，优化性能，或者配置项
	uint8_t num = 22;	// 22 = 0001 0110
	printf("num = %" PRIu8 "\n", num);
	printf("num << 2 = %" PRIu8 "\n", num << 2); // 等效于 22 * 2^2 = 88 ※ 88 = 0101 1000

	//>> 位移运算符
	uint8_t num2 = 22; // 22 = 0001 0110
	printf("num2 = %" PRIu8 "\n", num2);
	printf("num2 >> 2 = %" PRIu8 "\n", num2 >> 2); // 等效于 22 / 2^2 = 5 ※ 5 = 0000 0101

	// 按位与运算符 用作STM32 单片机 HAL库的配置项  B/S基本用不到 
	uint32_t device_config = 0; // 0000 0000
	const uint32_t option1 = 1 << 0; // 0000 0001
	const uint32_t option2 = 1 << 1; // 0000 0010
	const uint32_t option3 = 1 << 2; // 0000 0100

	device_config |= option1 | option2 | option3; // 0000 0111
	uint32_t option2_status = (device_config & option2) >> 1; // 0000 0010 & 0000 0010 = 0000 0010 >> 1 = 0000 0001
	device_config &= ~option2; // 0000 0111 & 1111 1101 = 0000 0101

	system("pause");
	return 0;
}