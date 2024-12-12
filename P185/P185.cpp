
/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	169 指针数组
*/
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

	*/
	// 第一个部门的员工ID
	int department1[] = { 1001, 1002, 1003 };
	int department2[] = { 2001, 2002 };
	int department3[] = { 3001, 3002, 3003, 3004 };
	int* department_ptrs[] = { department1, department2, department3 };
	int department_size[] = { sizeof(department1) / sizeof(department1[0]), sizeof(department2) / sizeof(department2[0]), sizeof(department3) / sizeof(department3[0]) };

	for (size_t i = 0; i < 3; i++)
	{
		printf("Department %zu:", i + 1);
		for (size_t j = 0; j < department_size[i]; j++)
		{
			printf("%d ", department_ptrs[i][j]);
		}
		puts("");
	}

	system("pause");
	return 0;
}