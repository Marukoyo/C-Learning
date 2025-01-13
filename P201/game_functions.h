#pragma once
#ifndef GAME_GUNCTIONS_H
#define GAME_GUNCTIONS_H

#include "game_structs.h"
/* 函数原型 */
// 创建玩家
void create_player(Player*, const char*, CharacterClass);

//	创建敌人
Enemy generateEnemy(EnemyType, int32_t);

// 创建物品
Item create_item(const char*, ItemType);

// 战斗
void battle(Player*, Enemy*);

// 打印信息
void print_player_info(const Player*);

void print_enemy_info(const Enemy*);

#endif // !GAME_GUNCTIONS_H

