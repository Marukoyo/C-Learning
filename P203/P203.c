/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	186.�ַ���
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
	// �����ַ�
	char c = 't';

	// �ַ���
	char arr[] = { "Hello World!" };	// ���޸�
	// 'H' 'e' 'l' 'l' 'o' ' ' 'W' 'o' 'r' 'l' 'd' '!' '\0'
	char* ptr = "Hello World!";	// �����޸� only-read

	char string[5] = "hello";
	char string[5] = { "hello" };

	printf("%s\n", string);

	system("pause");
	return 0;
}