/*
	P87 if...els �������߼�������ϰ
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
		��ҿ���ѡ����벻ͬ�ķ��䣬ÿһ�����䶼�в�ͬ�Ľ�������
		����A:���������Ҫ��VIP���
		����B:���������Ҫ������10����ң�������һ���������
		����C:���������Ҫ��VIP��ݣ����ҽ��������������20
		����D:���������Ҫ��VIP����������ߣ����ҽ������������5
	*/

	bool is_vip = 1;		//VIP��� ����ʵ�����п��������û������������Ϸ�߼�
	uint32_t coin = 15;		//�������
	bool has_special_item = 1;	//�Ƿ����������

	// ��鷿��A������
	if (is_vip)
	{
		puts("Welcome to room A");	// puts()������C���Եı�׼�⺯������������ַ���
	}
	else
	{
		puts("���û��VIP��ݣ��޷����뷿��A");
	}
	// ��鷿��B������
	if (coin >= 10 || has_special_item)
	{
		puts("Welcome to room B");
	}
	else
	{
		puts("��ҽ�Ҳ���10����Ҳû��������ߣ��޷����뷿��B");
	}
	// ��鷿��C������
	if (is_vip && coin >= 20)
	{
		puts("Welcome to room C");
	}
	else
	{
		puts("���û��VIP��ݣ����߽�Ҳ���20�����޷����뷿��C");
	}
	// ��鷿��D������
	if ((is_vip || has_special_item) && coin >= 5)
	{
		puts("Welcome to room D");
	}
	else
	{
		puts("���û��VIP��ݻ���������ߣ����߽�Ҳ���5�����޷����뷿��D");
	}
	system("pause");
	return 0;
}

