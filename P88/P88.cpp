/*
	P88 访问权限的简单应用案例
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
		公司内部的权限问题。
		员工可以访问不同的系统资源，这取决于他们的职位和完成数量。权限规则如下：
		1.经理Manager总是可以访问所有的资源
		2.普通员工Employee如果完成5个以上的任务以后，则可以访问资源
		3.实习生Intern 。。.。。10个以后，必须经过经理的批准才能访问
	*/
	uint8_t role = 1; // 0:Manager 1:Employee 2:Intern
	uint8_t task = 6;
	bool is_manager_approved = false;	// 经理是否批准
	// 是否允许访问
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

