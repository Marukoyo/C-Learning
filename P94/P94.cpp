/*
	P94 switchºìÂÌµÆµÄ¼òµ¥Ó¦ÓÃ
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
		×´Ì¬»ú
		¹ÜÀí¸´ÔÓ×´Ì¬µÄ×ª»»£¬Ê¹ÓÃswitch case
	*/
	uint8_t traffic_light_state = 0; // ³õÊ¼×´Ì¬£ººìµÆ
	switch (traffic_light_state)
	{
	case 0: // ºìµÆ
		printf("ºìµÆ\n");
		traffic_light_state = 1;
		break;
	case 1: // ÂÌµÆ
		printf("ÂÌµÆ\n");
		traffic_light_state = 2;
		break;
	case 2: // »ÆµÆ
		printf("»ÆµÆ\n");
		traffic_light_state = 0;
		break;
	default:
		puts("Ä¬ÈÏ×´Ì¬");
		break;
	}

	system("pause");
	return 0;
}


