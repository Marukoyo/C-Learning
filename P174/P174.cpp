/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	158 ָ���Ǻŵ���ҵ���淶�Լ���������������*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

int main(void)
{

	/**
		Ʃ�磺�� int a �������С� int �����������ͣ��� a ���Ǳ������� �������쵽ָ��������ˣ��� int *p ���� �� int ���������������ͣ� �� *p ������Ϊһ�����屻��Ϊ��ָ������� ��������һ��ָ������� *p ���� ��ָ������������ǡ� int ���� ���ڡ� int* p ����˵���� int* ����Ϊһ�����屻��Ϊ���������ͣ����� p ������Ϊ��ָ�������                
		ԭ�����ӣ�https://blog.csdn.net/u012867916/article/details/74781049
	*/
	// ΢��д�� int* ������ǿ�����������һ��ָ��int���͵�ָ�루int���͵�ָ�룩�ı���
	int* p = NULL;
	
	// GNUд�� int* ������ǿ���������ʵ������һ��ָ�����
	int *p;

	int* a, b;	// a��ָ�����,b��int���ͱ���
	uint32_t* c, * b;	// c��ָ�룬bҲ��ָ��

	

	system("pause");
	return 0;
}

