
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	179.ֵ�����ʼ���ṹ�����
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

typedef struct
{
	int x;
	int y;
} Point;

Point get_point(void);

int main(void)
{

	/**
		Return �ṹ��
	*/

	Point my_point = get_point();
	Point your_point = get_point();
	Point zhangsan = get_point();

	printf("Point:{%d,%d}\n", my_point.x, my_point.y);

	system("pause");
	return 0;
}

Point get_point(void)
{
	// ֵ���壨values semantics��
	/* 
	ֵ����(Value Semantics)����νֵ������ָĿ�������Դ���󿽱����ɣ������ɺ���Դ������ȫ�޹أ��˴˶�������
	���ı以��Ӱ�졣���� Int ���ͱ����໥����һ��������֮�����Դ������ȫ�����ϵ��	
	��������(Reference Semantics)��ͨ����ָһ��Ŀ�������Դ���󿽱����ɣ������ɺ���Դ����֮����Ȼ����ײ���Դ�����κ�һ���ĸı䶼����֮�ı���һ����
	*/
	Point p = { 10,20 };
	return p;	// Return һ���ṹ�帱��
}
