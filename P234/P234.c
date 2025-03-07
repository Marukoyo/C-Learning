/*
	章节学习视频经常变更，所以不再按照视频标题分P记录
	217.fflush简单略过
	但是....我在fflush之前 读了一下文件，依旧能读到数据，这是为什么呢？_(:з」∠)_
	网上搜了一下，有的会fseek() 会在必要时刷新缓冲区，因此在调用 fseek() 后读取文件时，会成功获取到已经写入缓冲区的数据。
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
#include <errno.h>


int main(void)
{

	/**

	*/
	FILE *file = fopen("example.txt", "w+");  // 以可读写模式打开文件

    if (file == NULL) {
        printf("无法打开文件！\n");
        return 1;
    }

    // 写入数据，数据先进入缓冲区
    fprintf(file, "这是第一行数据。\n");
    fprintf(file, "这是第二行数据。\n");

    // 尝试读取文件中的数据，但此时缓冲区中的数据还未写入文件
    printf("试图在缓冲区未刷新时读取数据...\n");

    // 将文件指针移动到文件的开头
    fseek(file, 0, SEEK_SET);

    char buffer[256];
    fgets(buffer, sizeof(buffer), file);  // 读取文件中的数据,可能因系统而异，有的会fseek() 会在必要时刷新缓冲区，因此在调用 fseek() 后读取文件时，会成功获取到已经写入缓冲区的数据。

    // 输出读取的数据
    printf("读取的数据：%s\n", buffer);

    // 通过 fflush() 强制将缓冲区中的内容写入文件
    fflush(file);
    printf("通过 fflush() 将缓冲区内容写入文件。\n");

    // 再次尝试读取文件中的数据
    fseek(file, 0, SEEK_SET);  // 将文件指针移动到文件开头
    fgets(buffer, sizeof(buffer), file);  // 读取文件中的数据

    printf("重新读取的数据：%s\n", buffer);

    fclose(file);


	system("pause");
	return 0;
}