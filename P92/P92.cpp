/*
	P92 ���� ��ϰ �⳵����
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
		variable = (condition) ? Expression2 : Expression3;
		����� guard clause
	*/
	uint8_t driving_year = 3;
	uint8_t age = 25;

	if (age < 21)
	{
		puts("���������������䲻�㡣");
		return 0;
	}
	if (driving_year < 1)
	{
		puts("��������������ʻ���鲻�㡣");
		return 0;
	}
	// ���е�����������
	puts("���������������⳵��");
	system("pause");
	return 0;
}


