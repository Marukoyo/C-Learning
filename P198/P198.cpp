/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	181.Ƕ�׽ṹ��
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

typedef struct
{
	char street[50];
	char city[50];
	char country[50];
} Address;

typedef struct
{
	char name[50];
	int age;
	Address address;	// Ƕ�׽ṹ��
} Person;
int main(void)
{

	/**

	*/
	Person frank = {
		"Frank",
		190,
		{"123 Main Street", "New York", "USA"}
	};
	printf("Name: %s\n", frank.name);
	printf("Age: %d\n", frank.age);
	printf("Address: %s, %s, %s\n", frank.address.street, frank.address.city, frank.address.country);
	Person* ptr = &frank;
	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", ptr->age);
	printf("Address: %s, %s, %s\n", ptr->address.street, ptr->address.city, ptr->address.country);

	system("pause");
	return 0;
}