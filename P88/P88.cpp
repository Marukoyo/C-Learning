/*
	P88 ����Ȩ�޵ļ�Ӧ�ð���
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
		��˾�ڲ���Ȩ�����⡣
		Ա�����Է��ʲ�ͬ��ϵͳ��Դ����ȡ�������ǵ�ְλ�����������Ȩ�޹������£�
		1.����Manager���ǿ��Է������е���Դ
		2.��ͨԱ��Employee������5�����ϵ������Ժ�����Է�����Դ
		3.ʵϰ��Intern ����.����10���Ժ󣬱��뾭���������׼���ܷ���
	*/
	uint8_t role = 1; // 0:Manager 1:Employee 2:Intern
	uint8_t task = 6;
	bool is_manager_approved = false;	// �����Ƿ���׼
	// �Ƿ��������
	bool access_allowed = (role == 1) || (role == 1 && task >= 5) || (role == 2 && task >= 10 && is_manager_approved);
	if (access_allowed)
	{
		puts("Access allowed.");
	}
	else
	{
		puts("Access denied.");
	}
	/*if (role == 0)
	{
		puts("Manager can access all resources.");
	}
	else if (role == 1 && task >= 5)
	{
		puts("Employee can access all resources and complete 5 task.");
	}
	else if (role == 2 && task >= 10 && is_manager_approved)
	{
		puts("Intern can access all resources and complete 10 task and get manager's approval");
	}*/

	system("pause");
	return 0;
}

