/*
	P56 const������#define�궨��
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>	/*#define ��*/

#define PI 3.1415926f	
int main() {
	// ����
	const int const_num = 10;
	//const_num = 20;	// error C3892: ��const_num��: �޷�Ϊֻ��������ֵ
	//PI = 3.14;	// error C3892: ��PI��: �޷�Ϊֻ��������ֵ
	printf("const_num = %d\n", const_num);
	printf("PI = %f\n", PI);

	system("pause");
	return 0;
}