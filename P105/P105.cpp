/*
	P105 do while ʵ��ʹ��
*/
#include <errno.h>
#include <float.h> 
#include <inttypes.h> 
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

int main(void)
{
	/*

	*/

	uint32_t choice;

	do
	{
		// ��ʾ�˵�
		puts("****���˵�****");
		puts("1. ����Ϸ");
		puts("2. ������Ϸ");
		puts("3. �˳�");
		printf("��ѡ��һ��ѡ�");
		scanf_s("%" SCNu32, &choice);

		// �����û���ѡ��
		switch (choice)
		{
		case 1:
			puts("����Ϸ�Ѿ�����...");
			// ����Ϸ���߼�... ToDo
			puts("��Ϸ�������������˵�����ѡ��...");
			break;
		case 2:
			puts("������Ϸ��...");
			puts("�浵�Ѿ�����...");
			// ������Ϸ���߼�... ToDo
			puts("��Ϸ�������������˵�����ѡ��...");
			break;
		case 3:
			puts("��л���棬�ټ���");
			// �˳���Ϸ���߼�... ToDo
			puts("��Ϸ�������������˵�����ѡ��...");
			break;
		default:
			puts("��Ч��ѡ�������ѡ��");
			break;
		}
		// ����û�ѡ��Ĳ����˳����ͼ�����ʾ�˵�
	} while (choice != 3);


	system("pause");
	return 0;
}
