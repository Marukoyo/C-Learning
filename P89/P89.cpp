/*
	P89 switch...case 的用途
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
		公司内部的权限问题。
		员工可以访问不同的系统资源，这取决于他们的职位和完成数量。权限规则如下：
		1.经理Manager总是可以访问所有的资源
		2.普通员工Employee如果完成5个以上的任务以后，则可以访问资源
		3.实习生Intern 。。.。。10个以后，必须经过经理的批准才能访问
	*/
	uint8_t role = 1; // 0:Manager 1:Employee 2:Intern
	uint8_t task = 6;
	bool is_manager_approved = false;	// 经理是否批准
	bool access_allowed = false;	// 是否允许访问
		switch (role)
		{
		case 0: // Manager
			access_allowed = true;
			break;
		case 1: // Employee
			check_access_for_employee(task);	// 调用函数方法
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
