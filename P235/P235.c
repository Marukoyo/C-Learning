/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	218.��Ϸ���ð�����bin�������ļ��洢���ȡ��wb��rbģʽ��ʹ��
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

typedef struct GameSettings {
	float volume;
	int resolution_x;
	int resolution_y;
	int difficulty;
} GameSettings;

void save_game_settings(const GameSettings* settings, const char* filename);

void load_game_settings(GameSettings* settings, const char* filename);

int main(void)
{

	/**
		fread
		fwrite
		��д������
	*/

	GameSettings settings = { 0.75f, 1920, 1080, 2 };
	save_game_settings(&settings, "settings.bin");

	GameSettings loaded_settings;
	load_game_settings(&loaded_settings, "settings.bin");

	puts("��Ϸ�����Ѿ����أ�");
	printf("����: %.2f\n", loaded_settings.volume);
	printf("�ֱ���: %d x %d\n", loaded_settings.resolution_x, loaded_settings.resolution_y);
	printf("�Ѷ�: %d\n", loaded_settings.difficulty);
	// ��������Ԫ�ظ��� in C
    // Example array
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int num_elements = sizeof(arr) / sizeof(arr[0]);

    // Print the number of elements
    printf("Number of elements in the array: %d\n", num_elements);

	system("pause");
	return 0;
}

void save_game_settings(const GameSettings* settings, const char* filename)
{
	FILE* file;
	errno_t err = fopen_s(&file, filename, "wb");	//	wb: write binary
	if (file == NULL || err != 0)
	{
		perror("Error opening file");
		return;
	}

	fwrite(settings, sizeof(GameSettings), 1, file);
	printf("Settings saved to %s\n", filename);
	fclose(file);
}

void load_game_settings(GameSettings* settings, const char* filename)
{
	FILE* file;
	errno_t err = fopen_s(&file, filename, "rb");	//	rb: read binary
	if (file == NULL || err != 0)
	{
		perror("�޷����ļ����ж�ȡ����");
		return;
	}
	fread(settings, sizeof(GameSettings), 1, file);
	printf("Settings loaded from %s\n", filename);
	fclose(file);
}
