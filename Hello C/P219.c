/*  
章节学习视频经常变更，所以不再按照视频标题分P记录  
202.案例（略难)：关于string.h  
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

#define TEXT_SIZE 100  
#define WORD_SIZE 100  
#define DELIMS " ,.?!;:"  
void replaceWord(char*, char*, char*, char*);  

int main(void)  
{  
char text[TEXT_SIZE] = "This is a simple example. This text is for testing.";  

char replacedText[TEXT_SIZE] = { 0 };  

char oldWord[] = "test";  
char newWord[] = "example";  
char countCharTarget[] = "s";  
char uniqueWords[TEXT_SIZE][WORD_SIZE] = { 0 };  

int uniqueCount = 0;  

replaceWord(text, oldWord, newWord, replacedText);  
printf("Replaced text: %s\n", replacedText);  

system("pause");  
return 0;  
}  

void replaceWord(char* text, char* oldWord, char* newWord, char* result)  
{  
char buffer[TEXT_SIZE] = { 0 };  
char* pos = text;  
char* temp = text;  
size_t oldWordLength = strlen(oldWord);  
while ((temp = strstr(pos, oldWord)) != NULL)  
{  
	strncat_s(buffer, sizeof(buffer), pos, temp - pos);  
	strncat_s(buffer, sizeof(buffer), newWord, strlen(newWord));  
	pos = temp + oldWordLength;  
}  
strcat_s(buffer, sizeof(buffer), pos);  
strcpy_s(result, TEXT_SIZE, buffer);  
}
