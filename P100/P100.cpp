/*
	P100 �Զ�����������
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main(void)
{
	/*
		�Զ�������
		�������ֻ֧��Ӳ�ң�����ֻ��һ�����ϣ�ÿƿ�ļ۸��ǣ�5.
		��ô�����ܸ��û�������?
		�û���ҪһֱͶ�ң�ֱ������㹻���������������ṩ����Ŷ��
		����һ��������ֻ����1��2��5ԪӲ�ҡ�
	*/
	// 1.��ʼ��
	const uint8_t PRICE = 5;	// ���ϼ۸�

	uint8_t balance = 0;	// �û���ǰ�Ľ���ǰͶ���������

	uint8_t coin = 0;	// �û�Ͷ�ҽ���ǰ��

	// ��ʾ�û�Ͷ��
	puts("��ӭʹ���Զ������������ϼ۸�Ϊ��5����Ͷ��(1,2,5ԪӲ��)��");

	// 2.����ѭ��������
	// balance < PRICE
	while (balance < PRICE) {
		puts("Ǯ��������Ͷ�ң�");
		//ģ��Ͷ�� �����û�����Ľ�����Ͷ�ҽ��
		scanf_s("%" SCNu8, &coin);
		// ���Ͷ�ҽ���Ƿ�Ϸ�
		switch (coin)
		{
		case 1:
		case 2:
		case 5:
			// accumulate the balance
			balance += coin;
			printf("���Ѿ�Ͷ���� $% " PRIu8 ",��ǰ���Ϊ��%d\n", coin, balance);
			break;
		default:
			printf("�Բ������ǲ����� ��%" PRIu8 "��Ӳ�ң�������Ͷ�ң�\n", coin);
			break;
		}
	}
	// 3.�û�Ͷ�ҽ���㹻
	// ����
	if (balance > PRICE)
	{
		printf("���㣤%" PRIu8 "\n", balance - PRICE);
	}
	puts("��ȡ���������ϣ�лл��");

	system("pause");
	return 0;
}


