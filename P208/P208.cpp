/*
    章节学习视频经常变更，所以不再按照视频标题分P记录
	191.sprintf_s
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
        sprintf_s
    */

    char buffer[50] = { 0 };

    int number = 3;
    double pi = 3.14159;

	int result = sprintf_s(buffer, "number: %d, pi: %f", number, pi);
    if (result > 0)
    {
        printf("Formmated string: %s\n", buffer);
    }
    else
    {
		printf("Error: %d\n", result);
    }

    system("pause");
    return 0;
}