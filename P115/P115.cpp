/*
	P115 ѵ�����ж�����
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		��ƽ����
		ʲô������
		�û�����һ�������ж��Ƿ�Ϊ������
	*/
	uint32_t num;

	bool isPrime = true;

	puts("������һ������1�������������ǽ�������Ƿ�Ϊ������");

	scanf_s("%" SCNu32, &num);

	for (size_t i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}

	printf("����ǣ�%s", isPrime ? "����" : "����(��������/����)");

	system("pause");
	return 0;
}

