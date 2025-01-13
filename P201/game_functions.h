#pragma once
#ifndef GAME_GUNCTIONS_H
#define GAME_GUNCTIONS_H

#include "game_structs.h"
/* ����ԭ�� */
// �������
void create_player(Player*, const char*, CharacterClass);

//	��������
Enemy generateEnemy(EnemyType, int32_t);

// ������Ʒ
Item create_item(const char*, ItemType);

// ս��
void battle(Player*, Enemy*);

// ��ӡ��Ϣ
void print_player_info(const Player*);

void print_enemy_info(const Enemy*);

#endif // !GAME_GUNCTIONS_H

