/*
	P93 简化逻辑表达式
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
	bool is_weekend = false;
	bool has_invitation = true;
	if (!has_invitation)
	{
		puts("Sorry, you are not invited!");
		return 0;
	}
	
	system("pause");
	return 0;
}


