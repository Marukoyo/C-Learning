/*
	P98 Scanf �ļ�ʹ��
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		switch()

	*/
	int32_t number1;
	int32_t number2;
	int32_t number3;
	int32_t number4;
	puts("Enter an integer:");

	// Ҫ���û��Ӽ�������һ�������������ǽ���
	// scan ɨ�� f ��ʽ��
	scanf_s("%d", &number1);
	printf("��ɨ�赽����������֣�%d\n", number1);

	puts("������3������(�ö��š�Ӣ�ġ�������:");
	// ���Ÿ�������������������������Ҫע���ʽ��
	scanf_s("%d,%d,%d", &number2, &number3, &number4);
	printf("��ɨ�赽����������֣�%d,%d,%d\n", number2, number3, number4);
	system("pause");
	return 0;
}


