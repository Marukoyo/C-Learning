/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	213.�����д����
	��ʵ���ڲ��뵽֮ǰ���½ڶ�û�н�Ҫ��ָ��Ĭ�ϸ�ֵΪNULL�������ǱȽϺõġ�
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

void read_config_safe(const char*);
int main(void)
{

	/**
		r ���Բ�if(fclose) �ж�
		д Ҫif(fclose) �ж�
	*/

	const char* file_name = "game_config.txt";
	read_config_safe(file_name);

	system("pause");
	return 0;
}

void read_config_safe(const char* filename)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "r");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	�Ǳ�׼��������Standard Error�����������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "open file error %s\n", error_msg);
		exit(EXIT_FAILURE);
	}

	char buffer[256] = { 0 };
	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL)
	{
		printf("%s", buffer);
	}

	puts("");

	fclose(file_ptr);
}
