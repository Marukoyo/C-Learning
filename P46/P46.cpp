/*
	P45 inf - infinity �����
		NaN -  is not a number
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
#include <math.h>
/*
	P45 ��ͳ�� �������� 		
		Banker 's rounding�� ROUND_HALF_EVEN   ���м����� ������ͨ�� 
		�����������˫����������Ϥ������������������ֻ�����������������ݴ�����һ�ָ�Ϊ��ȷ�Ľ�λ��������
		����λ���ִ��ڵ���6ʱ�����λ
		����˼������λ������С�ڵ���4ʱ����ȥ��λ�Լ����������
		����������λ�����ֵ���5ʱ�����5����û�����ݵĻ�����Ҫ������λǰ������֣������������λ������ż����0��2��4��6��8�������
*/
int main() {
	// 3.1415926
	float number = 3.1415926F;
	printf("number = %.2f\n", number);	

	system("pause");
	return 0;
}