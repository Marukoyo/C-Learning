/*
	P45 inf - infinity 无穷大
		NaN -  is not a number
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>
/*
	P45 传统的 四舍五入 		
		Banker 's rounding， ROUND_HALF_EVEN   银行家舍入 ※国际通用 
		四舍六入五成双，和我们熟悉的四舍五入有所区别，只不过它是作用在数据处理是一种更为精确的进位保留方法
		舍弃位数字大于等于6时，则进位
		它意思是舍弃位的数字小于等于4时，舍去该位以及后面的数字
		※而当舍弃位的数字等于5时，如果5后面没有数据的话，就要看舍弃位前面的数字，若是奇数则进位，若是偶数（0、2、4、6、8）则舍掉
*/
int main() {
	// 3.1415926
	float number = 3.1415926F;
	printf("number = %.2f\n", number);	

	system("pause");
	return 0;
}