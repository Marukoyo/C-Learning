/*
	P120 案例：进度条
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include<windows.h>
int main(void)
{
	/*
		进度条
	*/
	const uint32_t total_steps = 100;	// 总步长数，进度条长度
	
	puts("处理中，请稍后：");

	//scanf_s("%" SCNu32, &levels);

	puts("数字金字图案如下：");

	for (size_t i = 0; i <= total_steps; i++)
	{
		printf("\r[");	// 光标移动到本行的开始处
		// 打印进度条的完整部分
		for (size_t j = 0; j < i; j++)
		{
			printf("#");
		}
		// 相当于当前的进度条的剩余部分（用于空格），例如当前32%，则剩余68%用于空格
		for (size_t j = i; j < total_steps; j++)
		{
			printf(" ");
		}
		// （已经传输的数据量 / 文件总大小） * 100% 
		printf("] %3" PRIu32 "%c", i * 100 / total_steps,'%');
		// 刷新缓冲区 确保输出到屏幕
		fflush(stdout);
		Sleep(100);
	}
	puts("处理完成");
	system("pause");
	return 0;
}

