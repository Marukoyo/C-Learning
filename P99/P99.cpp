/*
	P99 ��̽ while ѭ��
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main(void)
{
	/*
		

	*/
	
	const uint32_t TOTAL = 10;	// ��Ȧ��
	uint32_t current_lap = 0;	// ��ǰ�ܵ�Ȧ��
	puts("��ʼ��Ȧ");
	
	while (current_lap < 10)
	{
		current_lap++;
		printf("�ܲ�������ɵ� %" PRIu32 " Ȧ.\n", current_lap);
		
	}
	printf("�ܲ�������ɵ� %" PRIu32 " Ȧ.\n", current_lap);
	system("pause");
	return 0;
}


