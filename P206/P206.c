/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	189.strlen
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
		strlen()
	*/

	// Hello\0

	char string[] = { "Hello" };
	printf("%zd\n", strlen(string));

	system("pause");
	return 0;
}