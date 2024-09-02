/*
	P89 switch...case 的用途
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
		公司内部的权限问题。
		员工可以访问不同的系统资源，这取决于他们的职位和完成数量。权限规则如下：
		1.经理Manager总是可以访问所有的资源
		2.普通员工Employee如果完成5个以上的任务以后，则可以访问资源
		3.实习生Intern 。。.。。10个以后，必须经过经理的批准才能访问
	*/
	uint8_t role = 2; // 0:Manager 1:Employee 2:Intern
	uint8_t task_completed = 6;
	bool is_manager_approved = false;	// 经理是否批准
	bool access_allowed = false;	// 是否允许访问
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
		puts("Access allowed.");	// 允许访问
	}
	else
	{
		puts("Access denied.");	// 拒绝访问
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
