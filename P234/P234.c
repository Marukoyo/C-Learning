/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	217.fflush���Թ�
	����....����fflush֮ǰ ����һ���ļ��������ܶ������ݣ�����Ϊʲô�أ�_(:�١���)_
	��������һ�£��еĻ�fseek() ���ڱ�Ҫʱˢ�»�����������ڵ��� fseek() ���ȡ�ļ�ʱ����ɹ���ȡ���Ѿ�д�뻺���������ݡ�
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


int main(void)
{

	/**

	*/
	FILE *file = fopen("example.txt", "w+");  // �Կɶ�дģʽ���ļ�

    if (file == NULL) {
        printf("�޷����ļ���\n");
        return 1;
    }

    // д�����ݣ������Ƚ��뻺����
    fprintf(file, "���ǵ�һ�����ݡ�\n");
    fprintf(file, "���ǵڶ������ݡ�\n");

    // ���Զ�ȡ�ļ��е����ݣ�����ʱ�������е����ݻ�δд���ļ�
    printf("��ͼ�ڻ�����δˢ��ʱ��ȡ����...\n");

    // ���ļ�ָ���ƶ����ļ��Ŀ�ͷ
    fseek(file, 0, SEEK_SET);

    char buffer[256];
    fgets(buffer, sizeof(buffer), file);  // ��ȡ�ļ��е�����,������ϵͳ���죬�еĻ�fseek() ���ڱ�Ҫʱˢ�»�����������ڵ��� fseek() ���ȡ�ļ�ʱ����ɹ���ȡ���Ѿ�д�뻺���������ݡ�

    // �����ȡ������
    printf("��ȡ�����ݣ�%s\n", buffer);

    // ͨ�� fflush() ǿ�ƽ��������е�����д���ļ�
    fflush(file);
    printf("ͨ�� fflush() ������������д���ļ���\n");

    // �ٴγ��Զ�ȡ�ļ��е�����
    fseek(file, 0, SEEK_SET);  // ���ļ�ָ���ƶ����ļ���ͷ
    fgets(buffer, sizeof(buffer), file);  // ��ȡ�ļ��е�����

    printf("���¶�ȡ�����ݣ�%s\n", buffer);

    fclose(file);


	system("pause");
	return 0;
}