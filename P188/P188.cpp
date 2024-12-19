
/*
	�½�ѧϰ��Ƶ������������Բ��ٰ�����Ƶ�����P��¼
	172.��Ϸ������ָ�����ϰ
*/
#include <inttypes.h>
#include <math.h>Q
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

#define EXP_PER_LEVEL 100	// ÿ���������辭��ֵ
#define MAX_LEVEL 10	// ���ȼ�
#define HINTS_COUNT 10	// ������ʾ����
void increase_exp(uint32_t*, uint32_t);
bool check_level_up(uint32_t*, uint32_t*);
const char* get_treasure_hint(uint32_t);
int main(void)
{

	/**
		1.��Ϸ���

		������ԣ�exp,level.

		����:

		�ȼ�������

		��Ϸ��Ŀ�꣺
	*/

	uint32_t player_exp = 0;

	uint32_t player_level = 0;
	// ģ����ҽ��ջ�þ���ֵ
	increase_exp(&player_exp, 50);
	// û��ƣ�������֣�����...
	increase_exp(&player_exp, 75);

	if (check_level_up(&player_exp, &player_level))
	{
		printf("%s\n", get_treasure_hint(player_level));
	}
	else
	{
		printf("����Ҫ���ྭ��ֵ��������\n");
	}
	system("pause");
	return 0;
}

void increase_exp(uint32_t* exp, uint32_t value)
{
	*exp += value;
}

bool check_level_up(uint32_t* player_exp, uint32_t* player_level)
{
	while (*player_exp >= EXP_PER_LEVEL && *player_level < MAX_LEVEL)
	{
		*player_exp -= EXP_PER_LEVEL;
		(*player_level)++;
		printf("��ϲ�㣬�����ˣ���ǰ�ȼ���%d\n", *player_level);
		return true;
	}
	return false;
}

const char* get_treasure_hint(uint32_t level)
{
	static const char* hints[HINTS_COUNT] = {
	"��ʾ 1�� ���������ڹ��ϵ��ٲ����棬�뷵�ػ��أ�",
	"��ʾ 2�� Ѱ�ұ�������ʧ��֮��",
	"��ʾ 3�� �ںڰ�ɭ�����ҵ����ص�ˮ��",
	"��ʾ 4�� ̽��ɳĮ�еĹŴ��ż�",
	"��ʾ 5�� �ڱ����ɽ���з������صĶ�Ѩ",
	"��ʾ 6�� �ڻ�ɽ�ڸ���Ѱ��ʧ��ı���",
	"��ʾ 7�� �ں�����ҵ������Ĳк�",
	"��ʾ 8�� ���������ֵ��������ҵ����ϵ�����",
	"��ʾ 9�� �ڸ��ʵ������Ϸ������ܵ����",
	"��ʾ 10�� �ڷ�æ�ĳ������ҵ����صĵ���ͨ��",
	};
	if (level > 0 && level <= HINTS_COUNT)
	{
		return hints[level - 1];
	}
	return "δ֪��ʾ����ȷ�����ڵȼ�����Ч��Χ�ڲ��ܽ���������ʾ!";
}
