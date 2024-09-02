/*
	P89 switch...case ����;
*/
#include <float.h> 
#include <inttypes.h> 
#include <math.h>	
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
bool check_access_for_manager(uint8_t task_completed);
bool check_access_for_employee(uint8_t task_completed);
bool check_access_for_intern(uint8_t task_completed, bool is_manager_approved);

int main(void)
{
	/*
		��˾�ڲ���Ȩ�����⡣
		Ա�����Է��ʲ�ͬ��ϵͳ��Դ����ȡ�������ǵ�ְλ�����������Ȩ�޹������£�
		1.����Manager���ǿ��Է������е���Դ
		2.��ͨԱ��Employee������5�����ϵ������Ժ�����Է�����Դ
		3.ʵϰ��Intern ����.����10���Ժ󣬱��뾭���������׼���ܷ���
	*/
	uint8_t role = 2; // 0:Manager 1:Employee 2:Intern
	uint8_t task_completed = 6;
	bool is_manager_approved = false;	// �����Ƿ���׼
	bool access_allowed = false;	// �Ƿ��������
	switch (role)
	{
	case 0: // Manager
		access_allowed = check_access_for_manager(1);
		break;
	case 1: // Employee
		access_allowed = check_access_for_employee(6);
		break;
	case 2: // Intern
		access_allowed = check_access_for_intern(11, is_manager_approved);
	default:
		break;
	}
	if (access_allowed)
	{
		puts("Access allowed.");	// �������
	}
	else
	{
		puts("Access denied.");	// �ܾ�����
	}
	system("pause");
	return 0;
}

bool check_access_for_manager(uint8_t task_completed)
{
	return true;
}

bool check_access_for_intern(uint8_t task_completed, bool is_manager_approved)
{
	return task_completed >= 10 && is_manager_approved;
}

bool check_access_for_employee(uint8_t task_completed)
{
	return task_completed >= 5;
}
