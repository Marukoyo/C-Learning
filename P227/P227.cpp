/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	211-1.fscanf_s
	��Ƶй¶�˸�����Ϣ....��Ҳ�ǲ�����Ļ�������ĺ����������������ǲҵ�����ƪ��Ƶ����Ҳ�ã��ҹ��ƾ���һ���˼�ֿ���������...����Ҳ������û����
	����ֵû�й������,һ������if�ж�1���Ի�fThe fscanf function returns an integer value representing the number of input items successfully matched and assigned. If the input ends before the first matching failure or if an error occurs, EOF (End Of File) is returned.
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
		An optional starting asterisk indicates that the data is to be read from the stream but ignored (i.e. it is not stored in the location pointed by an argument).
		����������ƥ��������ֹͣ������ʧ�ܣ�0 �� EOF����
	*/

	FILE* stream = NULL;

	long l;
	float fp;
	char s[81];
	char c;

	errno_t err = fopen_s(&stream, "fscanf.out", "w+");
	if (err)
		printf_s("The file fscanf.out was not opened\n");
	else
	{
		fprintf_s(stream, "%s %ld %f%c", "a-string",
			65000, 3.14159, 'x');
		// Set pointer to beginning of file:
		fseek(stream, 0L, SEEK_SET);

		// Read data back from file:
		fscanf_s(stream, "%s", s, unsigned _countof(s));
		fscanf_s(stream, "%ld", &l);

		fscanf_s(stream, "%f", &fp);
		fscanf_s(stream, "%c", &c, 1);

		// Output data read:
		printf("%s\n", s);
		printf("%ld\n", l);
		printf("%f\n", fp);
		printf("%c\n", c);

		fclose(stream);
	}

	long l2;
	float fp2;
	char s2[81];
	char c2;

	FILE* stream2 = NULL;

	errno_t err2 = fopen_s(&stream2, "frank.txt", "r");

	if (err2)
		printf_s("The file frank.txt was not opened\n");
	else
	{
		// Set pointer to beginning of file:
		fseek(stream2, 0L, SEEK_SET);

		// Read data back from file:
		int result1 = fscanf_s(stream2, "%s", s2, unsigned _countof(s));
		int result2 = fscanf_s(stream2, "%ld", &l2);

		int result3 = fscanf_s(stream2, "%f", &fp2);
		int result4 = fscanf_s(stream2, " %c", &c2, 1);

		// Output data read:
		printf("%s\n", s2);
		printf("%ld\n", l2);
		printf("%f\n", fp2);
		printf("%c\n", c2);

		fclose(stream2);
	}


	system("pause");
	return 0;
}
