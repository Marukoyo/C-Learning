/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	188.ѡ�ޣ��ѡ������ţ���VS�����������ַ����쳣
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
#include <crtdbg.h>
void my_invalid_parameter_handler(const wchar_t* expression, const wchar_t* function, const wchar_t* file, unsigned int line, uintptr_t pReserved)
{
	// ���������Ϣ Release�ᵯ��
	wprintf(L"Invalid parameter detected in function %s."
		L" File: %s Line: %d\n", function, file, line);
	wprintf(L"Expression: %s\n", expression);
}
int main(void)
{
	_set_invalid_parameter_handler(my_invalid_parameter_handler);
	/**

	*/

	char src[] = "hello";

	char dest[2];

	errno_t error = strcpy_s(dest, sizeof(dest), src);
	if (error != 0)
	{
		printf("Error copying string. Error code:%d\n", error);
	}
	printf("dest = %s\n", dest);
	const char* ptr = { "Hello" };

	system("pause");
	return 0;
}