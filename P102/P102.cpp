/*
	P102 break��������ѭ�� -��Ͱ���
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <stdint.h>

int main(void)
{
	/*
		дһ�������������͵İ�����
		�û����ն�����һϵ�����֣��ûس�������ֱ���û�����һ������0��Ϊ������
		Ȼ������е�����ӣ����ռ�������
	*/

	uint32_t sum = 0;	// ��ʼ�����ֺ���0

	uint32_t number;	// ���ڴ洢�û���������� ������ѭ�����Բ��ó�ʼ����ֵ

	puts("������һϵ�����֣��ûس�������ֱ������һ������0��Ϊ������");

	while (true) {
		scanf_s("%" SCNu32, &number);
		sum += number;

		if (number == 0)
		{
			break;		
		}
	}

	printf("���е����ֵĺ��ǣ�%" PRIu32 "\n", sum);

	system("pause");
	return 0;
}


