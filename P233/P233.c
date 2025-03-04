/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	214.r+ ģʽ ��ҵʵ�ʰ������ѣ����޸�log
	����������
	1. ���������ʱ�Ĵ��������д��뱾�������ԭ���е����ݣ������������⣺
?	strlen(buffer) �Ѿ��� buffer ���ַ��ĳ��ȣ��������з�����Ӧ��ֱ�ӽ�����գ�memset(buffer, 0, sizeof(buffer)) �Ǹ���ȫ�ķ�ʽ��
?	��ʹ��ֻ����� strlen(buffer) - 1���� fputs д��������ʱ����Ҳ������ȫ���ʣ��Ŀռ䡣
2.	��������� fseek ���ã� ɾ���˶���� fseek��ʹ���ļ�ָ��ʼ�ն�λ���滻λ�á�


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

#define BUFFER_SIZE 1024

void read_config_safe(const char*);
void append_log_safe(const char*, const char*);
void clear_log(const char*);
errno_t update_log(const char* filename, const char* search_str, const char* replace_str);
int main(void)
{

	/**

	*/
	const char* log_file = "frank.log";
	const char* search_str = "Memory usage exceeds 80% of available memory.";
	const char* replace_str = "[2023-02-14T12:36:00Z] [WARN] Memory usage is back to normal levels.";
	

	const char* log_file2 = "zhangsan.log";
	const char* search_str2 = "������";
	const char* replace_str2 = "���˵�";


	errno_t result = update_log(log_file, search_str, replace_str);
	if (result != 0)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), result);
		//	�Ǳ�׼��������Standard Error*/),�������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "open file error %s\n", error_msg);
	}
	else
	{
		puts("Record Update Successfully!");
	}


	errno_t result2 = update_log(log_file2, search_str2, replace_str2);
	if (result2 != 0)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), result2);
		//	�Ǳ�׼��������Standard Error*/),�������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "open file error %s\n", error_msg);
	}
	else
	{
		puts("Record Update Successfully!");
	}


	// All other files are closed
	int numclosed = _fcloseall();
	printf("Number of files closed by _fcloseall(): %d\n", numclosed);


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

void append_log_safe(const char* filename, const char* msg)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "a");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	�Ǳ�׼��������Standard Error�����������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "Failed to open log file for appending:%s\n", error_msg);
		exit(EXIT_FAILURE);
	}


	fprintf(file_ptr, "%s\n", msg);

	puts("Append Successfully!");

	fclose(file_ptr);
}

void clear_log(const char* filename)
{
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "w");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		//	�Ǳ�׼��������Standard Error�����������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
		fprintf(stderr, "open file error %s\n", error_msg);
		exit(EXIT_FAILURE);
	}
	// w ģʽ ��������ļ��ĳ��Ƚ�Ϊ0������ļ������ڣ��򴴽�һ�����ļ�
	puts("�ļ��Ѿ��� w ģʽ");

	fclose(file_ptr);
}

//errno_t update_log(const char* filename, const char* search_str, const char* replace_str)
//{
//	if (filename == NULL || search_str == NULL || replace_str == NULL) {
//		return EINVAL;	//������Ч��������
//	}
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "r+");
//	if (err != 0 || file_ptr == NULL)
//	{
//		char error_msg[256] = { 0 };
//		strerror_s(error_msg, sizeof(error_msg), err);
//			�Ǳ�׼��������Standard Error*/),�������������Ϣ�������Ϣ���� C �� C++ �У�ͨ��ʹ������������������еĴ��󣬶����ǽ�������Ϣд���׼����� 
//		fprintf(stderr, "open file error %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	char buffer[BUFFER_SIZE] = { 0 };
//	long position = 0;
//	int found = 0;
//
//	while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
//		 strstr �����������ַ����в������ַ��� 
//		if (strstr(buffer, search_str) != NULL) {
//			found = true;
//			 ���д����Ŀ���Ǽ����ļ���ĳ���ַ�������λ�õĿ�ʼλ�á���ͨ����ȡ��ǰ�ļ�λ�õ�ƫ���ֽ���λ�ã�����ȥ��ǰ�еĳ��Ⱥ�һ���ֽڣ������ǻ��з�����Ȼ���ļ�ָ���ƻص�����ַ����������е���ʼλ�ã��Ա�����Ը�λ�ý����޸Ļ��滻��
//			position = ftell(file_ptr) - (long)strlen(buffer) - 1;	// -1 �ǻ��з�
//			break;
//		}
//	}
//
//	if (found) {
//		 fseek �������ڸı��ļ�ָ���λ��(�����������ַ�����ǰ�е���ͷλ��)
//		fseek(file_ptr, position, SEEK_SET);
//
//		 �����滻�ı���ԭ�ı��ĳ��Ȳ���
//		size_t replace_len = strlen(replace_str);
//		size_t search_len = strlen(search_str);
//
//		if (replace_len > BUFFER_SIZE - 1 || search_len > BUFFER_SIZE - 1)
//		{
//			fclose(file_ptr);
//			return ERANGE;	//���س�����Χ����
//		}
//
//		 д���¼�¼֮ǰ���������λ�õ�������
//		memset(buffer, ' ', strlen(buffer) - 1);	
//
//		buffer[strlen(buffer) - 1] = '\n'; // -1 �������ĩβ\n
//
//		fseek(file_ptr, position, SEEK_SET);	// ���»ص�����еĿ�ͷ
//
//		fputs(buffer, file_ptr);	// ���ԭ��������
//
//		fseek(file_ptr, position, SEEK_SET);	// ���»ص�����еĿ�ͷ
//
//		int result = fputs(replace_str, file_ptr);
//
//		if (result == EOF)
//		{
//			fclose(file_ptr);
//			return errno;
//		}
//	}
//	else
//	{
//		fclose(file_ptr);
//		return ENOENT;	//�����ļ������ڴ���
//	}
//	fclose(file_ptr);
//	return 0;
//}

errno_t update_log(const char* filename, const char* search_str, const char* replace_str)
{
	if (filename == NULL || search_str == NULL || replace_str == NULL) {
		return EINVAL; // ������Ч��������
	}
	FILE* file_ptr = NULL;
	errno_t err = fopen_s(&file_ptr, filename, "r+");
	if (err != 0 || file_ptr == NULL)
	{
		char error_msg[256] = { 0 };
		strerror_s(error_msg, sizeof(error_msg), err);
		fprintf(stderr, "open file error %s\n", error_msg);
		return err;
	}

	char buffer[BUFFER_SIZE] = { 0 };
	long position = 0;
	int found = 0;

	while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
		if (strstr(buffer, search_str) != NULL) {
			found = 1;
			position = ftell(file_ptr) - (long)strlen(buffer) - 1; // -1 �ǻ��з� Tips��windows��,IDE��ǰ�ļ����޸ĵ��ļ�(log)Ҫ��ʹ��ͬ��ǰ����ƽ̨������windows��ͬ��CRLFģʽ
			break;
		}
	}

	if (found) {
		size_t replace_len = strlen(replace_str);
		size_t search_len = strlen(search_str);

		if (replace_len > BUFFER_SIZE - 1 || search_len > BUFFER_SIZE - 1)
		{
			fclose(file_ptr);
			return ERANGE; // ���س�����Χ����
		}

		// ���ԭ��������
		memset(buffer, ' ', strlen(buffer));
		buffer[strlen(buffer) - 1] = '\n';

		fseek(file_ptr, position, SEEK_SET); // ���»ص�����еĿ�ͷ

		fputs(buffer, file_ptr); // ���ԭ��������

		fseek(file_ptr, position, SEEK_SET); // ���»ص�����еĿ�ͷ

		int result = fputs(replace_str, file_ptr);

		if (result == EOF)
		{
			fclose(file_ptr);
			return errno;
		}
	}
	else
	{
		fclose(file_ptr);
		return ENOENT; // �����ļ������ڴ���
	}
	fclose(file_ptr);
	return 0;
}
