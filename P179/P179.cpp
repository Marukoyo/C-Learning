/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	163 �Ӵ����ϳ�����ʶҰָ��
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
	/* wild pointer */
	int* p;
	/* Some unknown memory location is being corrupted.
	This should never be done. */
	*p = 12;
	system("pause");
	return 0;
}

