/*
	P103 break��������ѭ�� -��Ͱ���
	���� Q �˳�����
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

int main(void)
{
	/*
		дһ�������������͵İ�����
		�û����ն�����һϵ�����֣��ûس�������ֱ���û�����һ������0��Ϊ������
		Ȼ������е�����ӣ����ռ�������
	*/

	uint32_t sum = 0;	// ��ʼ�����ֺ���0


	char input[10];			// ���ڴ洢�û�������ַ�

	puts("������һϵ�����֣��ûس����������롰Q���˳�������");

	while (true) {
		puts("������һ�����֣�");
		scanf_s(" %s", &input, 10); // scanf_s �÷��� scanf_s(" %c", &input, 1); 1��ʾ��ȡһ���ַ�

		// ����Q����Сд���˳�����
		if (input[0] == 'Q' || input[0] == 'q')
		{
			break;
		}

		char* end;
		long number = strtol(input, &end, 10); // ���ַ���ת��Ϊ������
		if (*end != '\0' || number > UINT32_MAX)
		{
			puts("��Ч���룬������һ�����ֻ���'Q(��Сд)'");
		}
		else
		{
			sum += number;
		}
		// ���ַ�ת��Ϊ����
		// ASCII����У�����0~9��ASCII����48~57
		/*if (input >= '0' && input <= '9')
		{
			sum += input - '0';
		}
		else
		{
			puts("��Ч�����룬������Q����Сд��������һ������0~9��");
		}*/
	}

	printf("���е����ֵĺ��ǣ�%" PRIu32 "\n", sum);

	system("pause");
	return 0;
}
