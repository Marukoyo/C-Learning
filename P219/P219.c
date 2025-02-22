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

int countChar(const char*, char);

int countWords(const char*);

void extraUniqueWords(const char*, char[][WORD_SIZE], int*);

int main(void)
{
	char text[TEXT_SIZE] = "This is a simple test. This text is for testing.";

	char result[TEXT_SIZE] = { 0 };

	char oldWord[] = "test";
	char newWord[] = "example";
	char countCharTarget = 's';
	char uniqueWords[TEXT_SIZE][WORD_SIZE] = { 0 };

	int uniqueCount = 0;

	replaceWord(text, oldWord, newWord, result);
	printf("Replaced text: %s\n", result);

	int charCount = countChar(result, countCharTarget);
	printf("Count of character '%c': %d\n", countCharTarget, charCount);

	int wordCount = countWords(result);
	printf("Word count: %d\n", wordCount);

	extraUniqueWords(result, uniqueWords, &uniqueCount);
	puts("Unique words:");
	for (size_t i = 0; i < uniqueCount; i++)
	{
		puts(uniqueWords[i]);
	}

	system("pause");
	return 0;
}

void replaceWord(char* text, char* oldWord, char* newWord, char* result)
{
	char buffer[TEXT_SIZE] = { 0 };
	char* pos = text;	// 用于指向text的指针
	char* temp = NULL;
	size_t oldWordLength = strlen(oldWord);
	while ((temp = strstr(pos, oldWord)) != NULL)
	{
		strncat_s(buffer, sizeof(buffer), pos, temp - pos);		// temp - pos 表示找到的oldWord的地址减去原字符串的地址，即oldWord前的文本
		strcat_s(buffer, sizeof(buffer), newWord);
		pos = temp + oldWordLength; //原字符串 oldWord后的文本的指针地址
	}
	strcat_s(buffer, sizeof(buffer), pos);
	strcpy_s(result, TEXT_SIZE, buffer);
}

int countChar(const char* text, char ch)
{
	int count = 0;
	while (*text) {
		if (*text == ch)
		{
			count++;
		}
		text++;
	}
	return count;
}

int countWords(const char* text)
{
	int count = 0;
	char buffer[TEXT_SIZE] = { 0 };
	strcpy_s(buffer, TEXT_SIZE, text);
	char* context = NULL;
	char* token = strtok_s(buffer, DELIMS, &context);

	while (token != NULL) {
		count++;
		token = strtok_s(NULL, DELIMS, &context);
	}

	return count;
}
/*
 * 函数: extraUniqueWords
 * ----------------------
 * 从给定的文本中提取唯一的单词，并将它们存储在 uniqueWords 数组中。
 *
 * text: 输入的文本，从中提取唯一的单词。
 * uniqueWords: 用于存储在文本中找到的唯一单词的二维数组。
 * uniqueCount: 指向一个整数的指针，用于存储找到的唯一单词的数量。
 */
void extraUniqueWords(const char* text, char uniqueWords[][WORD_SIZE], int* uniqueCount)
{
	char temp[TEXT_SIZE] = { 0 };
	strcpy_s(temp, TEXT_SIZE, text);

	char* context = NULL;
	char* token = strtok_s(temp, DELIMS, &context);
	// strtok 调用完后，token指向下一个单词，context指向剩下的字符串
	while (token != NULL) {
		bool found = false;
		for (int i = 0; i < *uniqueCount; i++)
		{
			if (strcmp(uniqueWords[i], token) == 0)
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			strcpy_s(uniqueWords[*uniqueCount], WORD_SIZE, token);
			(*uniqueCount)++;
		}
		token = strtok_s(NULL, DELIMS, &context);
	}
}
