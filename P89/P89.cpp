/*
	P89 switch...case ����;
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
bool check_access_for_employee(uint8_t task);
int main(void)
{
	/*
		��˾�ڲ���Ȩ�����⡣
		Ա�����Է��ʲ�ͬ��ϵͳ��Դ����ȡ�������ǵ�ְλ�����������Ȩ�޹������£�
		1.����Manager���ǿ��Է������е���Դ
		2.��ͨԱ��Employee������5�����ϵ������Ժ�����Է�����Դ
		3.ʵϰ��Intern ����.����10���Ժ󣬱��뾭���������׼���ܷ���
	*/
	uint8_t role = 1; // 0:Manager 1:Employee 2:Intern
	uint8_t task = 6;
	bool is_manager_approved = false;	// �����Ƿ���׼
	bool access_allowed = false;	// �Ƿ��������
		switch (role)
		{
		case 0: // Manager
			access_allowed = true;
			break;
		case 1: // Employee
			check_access_for_employee(task);	// ���ú�������
		case 2: // Intern
			if (task >= 10 && is_manager_approved)
			{
				access_allowed = true;
			}
			break;
		default:
			break;
		}

	system("pause");
	return 0;
}

bool check_access_for_employee(uint8_t task)
{
	puts("Employee can access all resources and complete 5 task.");
	return task >= 5;
}
