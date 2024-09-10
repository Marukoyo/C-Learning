/*
	P105 do while 实际使用
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
		// 显示菜单
		puts("****主菜单****");
		puts("1. 新游戏");
		puts("2. 载入游戏");
		puts("3. 退出");
		printf("请选择一个选项：");
		scanf_s("%" SCNu32, &choice);

		// 处理用户的选择
		switch (choice)
		{
		case 1:
			puts("新游戏已经启动...");
			// 新游戏的逻辑... ToDo
			puts("游戏结束，返回主菜单重新选择...");
			break;
		case 2:
			puts("载入游戏中...");
			puts("存档已经载入...");
			// 载入游戏的逻辑... ToDo
			puts("游戏结束，返回主菜单重新选择...");
			break;
		case 3:
			puts("感谢游玩，再见！");
			// 退出游戏的逻辑... ToDo
			puts("游戏结束，返回主菜单重新选择...");
			break;
		default:
			puts("无效的选项，请重新选择！");
			break;
		}
		// 如果用户选择的不是退出，就继续显示菜单
	} while (choice != 3);


	system("pause");
	return 0;
}
