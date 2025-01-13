/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	183.Union ����
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

union Data2 {
	int int_value;
	float float_value;
	const char* string_value;
};

typedef union {
	int int_value;
	float float_value;
	const char* string_value;	// Ҫ�� const������ᱨ��
} Data1;

typedef enum {
	DATA_INT,	// ע������
	DATA_FLOAT,
	DATA_STRING
} DataType;

typedef struct {
	DataType type;
	Data1 data;
} TypeData;		// ���� ��Զ����еķ���

void print_data(TypeData*);

int main(void)
{
	/**
		������ͬһ�ڴ�λ�ô洢��ͬ����������
		���Ͽ��Դ洢��ͬ���������ͣ�����ֻ��ͬʱ�洢һ���������ͣ���СΪ������������
	*/

	TypeData typeData1 = { DATA_INT, {.int_value = 10} };	//����д����ҪC++20֧��
	TypeData typeData2 = { DATA_FLOAT, {.float_value = (float)3.14} };	//����д����ҪC++20֧��
	TypeData typeData3 = { DATA_STRING, {.string_value = "Hello,Union!"} };	//����д����ҪC++20֧��
	print_data(&typeData1);
	print_data(&typeData2);
	print_data(&typeData3);
	system("pause");
	return 0;
}

void print_data(TypeData* typedata)
{
	switch (typedata->type)
	{
	case DATA_INT:
		printf("�������ݣ�%d\n", typedata->data.int_value);
		break;
	case DATA_FLOAT:
		printf("���������ݣ�%f\n", typedata->data.float_value);
		break;
	case DATA_STRING:
		printf("�ַ��������ݣ�%s\n", typedata->data.string_value);
		break;
	default:
		break;
	}
}
