/*
	P113 ѵ�����׳�
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
#include <stdbool.h>
#include <windows.h>

int main(void)
{
	/*
		�û�����һ��������������׳ˡ�Ĭ�ϻ��Ǵ�1��ʼ
	*/

	uint32_t number;	// INPUT
	uint32_t factorial = 1;

	puts("������һ��������,���ǽ�����׳ˣ�");

	scanf_s("%" SCNu32, &number);

	for (size_t i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	printf("�׳˽��(! =)�ǣ�%" PRIu32 "\n", (uint32_t)factorial);

	system("pause");
	return 0;
}

