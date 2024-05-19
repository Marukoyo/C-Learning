/*
	P42 float����
	P36�� 39�� 40�� 41�� 42��43
	�� ���� float ���͵ı�����һ��Ҫָ��f��׺������ᶪʧ���ȣ�f��׺�Ǹ��߱���������һ�� float ���͵ı���
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 
#include <float.h> 
int main() {
	// ������ float
	float temperature = 36.5f;
	float humidity = 48.3f;
	float speed_of_sound = 343.5e2f;

	// ˫���� double
	// ��ѧ����������ʾ 343.5 * 10^2
	double length = 12.34l, width = 23.45l, height = 34.56l;	// ͬһ����Ⱥ������˵�⼸����λ����һ��������
	printf("temperature = %f\n", temperature);
	printf("humidity = %.2f\n", humidity);
	printf("speed_of_sound = %f\n", speed_of_sound);
	printf("length = %.2lf, width = %lf, height = %lf\n", length, width, height);

	// ��ӡ�ٷֺ�%
	printf("%%\n");

	// ��ѧ��������ʽ����� %e �� %E
	printf("Using %%e : speed_of_sound = %e\n", speed_of_sound);

	// P������ ʮ�����Ƹ�����%a ���� %A 
	printf("Using %%a : speed_of_sound = %a\n", speed_of_sound);
	system("pause");
	return 0;

	
	
}