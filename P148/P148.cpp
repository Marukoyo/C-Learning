/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	133 �����Ĳ���

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

// ������
void greet(int, bool);

int add(int, int);

int main(void)
{
	/*
		����
	*/
	greet(18, 1);
	greet(20, 0);

	printf("num1 + num2 = %" PRId32 "\n", add(7, 8));

	system("pause");
	return 0;
}

void greet(int age, bool gender) {
	printf("�������䣺%" PRId32 ",�����Ա��ǣ�%s\n", age, gender ? "��" : "Ů");
}
int add(int num1, int num2) {
	return num1 + num2;
}

