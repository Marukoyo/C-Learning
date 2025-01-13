#pragma once
#ifndef GAME_TYPES_H
#define GAME_TYPES_H

typedef enum {
	Warrior,	// սʿ
	Mage,		// ��ʦ
	Rogue,		// ����
} CharacterClass;

typedef enum {
	Goblin,		// �粼��
	Troll,		// ��ħ
	Dragon,		// ��
} EnemyType;

typedef enum
{
	WEAPON,
	POTION,
	ARMOR
} ItemType;

#endif // GAME_TYPES_H
