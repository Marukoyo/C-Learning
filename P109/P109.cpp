/*
	P109 ��̽ for ѭ��
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
		for
	*/

	const uint32_t total_laps = 10;	// Ŀ����Ȧ��

	//uint32_t curren_lap = 0;	// ��ʼ����ǰȦ��

	puts("�ܲ��߿�ʼ�ܲ�");

   
	for (size_t curren_lap = 0; curren_lap < total_laps; curren_lap++)
	{
        printf("�ܲ������: %" PRIu32 "\n", curren_lap);
	}


	system("pause");
	return 0;
}

