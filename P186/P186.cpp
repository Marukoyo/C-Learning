
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	170 ������ֵ���ݣ�Pass by value)
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
void add_ten_by_value(uint32_t*);
int main(void)
{

	/**
		������ֵ���ݣ�Pass by value)
		��ַ���ݣ�Pass by reference)
	*/

	uint32_t my_value = 5;
	printf("my_value = %d\n", my_value);

	add_ten_by_value(&my_value);

	printf("�Ѿ�����add_ten_by_value֮���ֵmy_value = %d\n", my_value);

	system("pause");
	return 0;
}

void add_ten_by_value(uint32_t* value) {
	*value += 10;
}