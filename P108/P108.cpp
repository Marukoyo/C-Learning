/*
	P108 continue �� break ���������жϵ�ʵ����;
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
#include <time.h>
#include <stdbool.h>

int main(void)
{
	/*
		��������Ҫ����һϵ�е����֣�������Ҫ�������еĸ�����>100�����֣�ֻ�ܴ���0��100֮������֡�
		����ÿһ����Ч���֣������ż������ӡһ����Ϣ���Ҹ�֪����ż�����������������ӡһ����Ϣ���Ҹ�֪����������
		�û�����-1��������
	*/

	uint32_t sum = 0;
	int32_t number;

	while (true)
	{
		puts("������һ����Ч���֣�0~100)��");
		scanf_s("%d", &number);

		// �����������
		if (number == -1)
		{
			break;
		}

		// �������еĸ�����>100������
		if (number < 0 || number > 100)
		{
			continue;	// ��������ѭ����ʣ�ಿ�֣���������һ��ѭ��
		}

		// ������Ч����
		if (number % 2 == 0)
		{
			printf("����һ��ż����%d\n", number);
		}
		else
		{
			printf("����һ��������%d\n", number);
		}
	}


	system("pause");
	return 0;
}

