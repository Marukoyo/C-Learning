/*
	P72 掩码与电路遥控LED灯练习
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	

void print_binary(uint8_t num);

int main(void)
{
	uint8_t status_led = 0B00001100; // prefix 0B means binary
	printf("status_led = %d\n", status_led);
	print_binary(status_led);

	// 修复低电量
	status_led = status_led & 0B00001000; // mask 0B00001000 掩码
	printf("修复低电量\n");
	print_binary(status_led);

	// 电源和wifi
	status_led = status_led ^ 0B00001011; // mask 0B00001011 掩码
	printf("一切正常\n");
	print_binary(status_led);

	system("pause");
	return 0;
}

void print_binary(uint8_t num) {
	for (int i = 7; i >= 0; i--) {
		if (num & (1 << i)) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
}