/*
    章节学习视频经常变更，所以不再按照视频标题分P记录
    190.strcat_s
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
        strcat_s
    */

    char dest[50] = { "Hello" };    // {}可省略
    const char* src = ", World\0";
    // dest = "Hello, World!";

    // strlen()

    strcpy_s(dest, sizeof(dest), "Hello");

    size_t dest_size = sizeof(dest) - strlen(dest) - 1; // Change from int to size_t

    printf("dest_size: %zu\n", dest_size); // Use %zu for size_t

    strcat_s(dest, dest_size, src);

    printf("dest: %s\n", dest);

    system("pause");
    return 0;
}