/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	207.stream流的概述
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
#include <string.h>  
#include <signal.h>



int main(void)
{

	/**
		流(Stream)
		1.文件流
			磁盘
			用于读取与写入在磁盘上的文件。
		2.标准I/O流
			stdin:默认连接到键盘，用于程序输入	→scanf_()
			stdout：默认连接到控制台或者是显示器，用于程序输出	→printf()
			stderr:默认也连接到控制台或者显示器，专门输出错误信息和警告，使得其能够被区分开来或者重定向到不同的目的地。
		3.管道流
			用于进程之间的通信（IPC),允许一个进程的输出成为另一个进程的输入。
			popen();
		4.内存流
			允许你将流和内存缓冲区关联，使得你可以向内存中读写数据，就像操作文件一样。
			POSIX -> fmenopen();
		5.网络流
			套接字（Sockets）用于网络通信
		6.设备流
			特殊文件或者是设备
			打印机
		FILE* stream;

	*/

	




	system("pause");
	return 0;
}
