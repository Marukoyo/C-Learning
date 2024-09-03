/*
	P91 Ìõ¼þ Á·Ï°
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
	*/
	uint32_t wrong_attempts = 3;
	bool is_locked = (wrong_attempts >= 3) ? true : false;
	if (is_locked)
	{
		puts("Account is locked");
		return 0;
	}
	
	system("pause");
	return 0;
}


