/*
	P95 switch��if-else������
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	/*
		switch()

	*/
	uint8_t day = 0;
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 0:
		printf("������\n");
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}


