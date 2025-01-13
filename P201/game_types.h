#pragma once
#ifndef GAME_TYPES_H
#define GAME_TYPES_H

typedef enum {
	Warrior,	// 战士
	Mage,		// 法师
	Rogue,		// 盗贼
} CharacterClass;

typedef enum {
	Goblin,		// 哥布林
	Troll,		// 巨魔
	Dragon,		// 龙
} EnemyType;

typedef enum
{
	WEAPON,
	POTION,
	ARMOR
} ItemType;

#endif // GAME_TYPES_H
