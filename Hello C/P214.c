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
   const char* str1 = "Hello, World!";  
   const char* str2 = "Hello, World!";  
   const char* str3 = "Hello, Guys!";  

   size_t num = 7; // 比较前7个字符  

   if (strncmp(str1, str2, num) == 0) {  
       printf("str1 and str2 are equal!\n");  
   }  
   else {  
       printf("str1 and str2 are not equal!\n");  
   }  

   if (strncmp(str1, str3, num) == 0) {  
       printf("str1 and str3 are equal!\n");  
   }  
   else {  
       printf("str1 and str3 are not equal!\n");  
   }  

   system("pause");  
   return 0;  
}
