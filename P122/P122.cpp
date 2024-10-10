/*
	P122 使用VS进行debug调试以及for的注意事项的
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <windows.h>

#include <time.h>

int main(void)
{
	/*

	*/
	const int NUM_TABLES = 3;	// 假如餐厅有3张桌子

	const int SEATS_PER_TABLE = 4;	// 假如每张桌子有4个座位

	// 外层循环遍历 每张桌子
	for (size_t table_num = 1; table_num <= NUM_TABLES; table_num++)
	{
		printf("桌子编号: %zu\n", table_num);

		// 内层循环遍历每张桌子的座位
		for (size_t seat_num = 1; seat_num <= SEATS_PER_TABLE; seat_num++)
		{
			printf("\t座位编号: %zu\n", seat_num);

			// 在这里执行具体座位的分配操作
			printf("\t\t处理中：桌子：%zu ， 座位 %zu\n", table_num, seat_num);
		}
	}
	system("pause");
	return 0;
}


