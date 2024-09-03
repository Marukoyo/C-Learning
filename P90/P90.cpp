/*
	P90 条件运算符 三元运算符 的用途
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
		variable = Expression1 ? Expression2 : Expression3;
		variable = (condition) ? Expression2 : Expression3;
	*/
	uint32_t score = 79;
	char grade;
	grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : 'C';
	printf("Grade = %c\n", grade);
	system("pause");
	return 0;
}


