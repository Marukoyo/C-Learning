/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	187.strcpy_s���÷�
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

int main(void)
{

	/**

	*/
	char str[] = "hello";

	char dest[50];

	strcpy_s(dest, sizeof(dest), str);

	printf("dest = %s\n", dest);
	const char* ptr = { "Hello" };
	system("pause");
	return 0;
}