/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	149 extern ȫ�ֱ�������ļ�����


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
#include "helper.h"



int g_static_val = 10; // ȫ�ֱ���
void access_g(void);
int main(void)
{
	/**


	*/
	printf("g_static_val Main before = %d\n", g_static_val);
	access_g();
	try_access_g();

	system("pause");
	return 0;
}


void access_g(void) {
	g_static_val += 5;
	printf("g_static_val = %d\n", g_static_val);
}