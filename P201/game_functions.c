#include "game_functions.h"

#include <stdio.h>
#include <string.h>

void create_player(Player* player, char* name, CharacterClass char_class) {
	strcpy_s(player->name, sizeof(player->name), name);
	player->char_class = char_class;
	player->level = 1;
	player->health = 100;
	switch (char_class)
	{
	case Warrior:
		player->ability.strength = 10;
		break;
	case Mage:
		player->ability.mana = 55.50;
		break;
	case Rogue:
		player->ability.stealth = 20;
		break;
	default:
		break;
	}
};
Enemy generateEnemy(EnemyType enemy_type, int32_t level) {
	Enemy enemy;
	enemy.type = enemy_type;
	enemy.level = level;
	enemy.health = level * 20;
	switch (enemy_type)
	{
	case Goblin:
		enemy.damage = level * 5;
		break;
	case Troll:
		enemy.damage = level * 10;
		break;
	case Dragon:
		enemy.damage = level * 100;
		break;
	default:
		break;
	}
	return enemy;
}

void battle(Player* player, Enemy* enemy) {
	printf("%s encounters a level %d %d! A battle begins...\n", player->name, enemy->type, enemy->level);

	// 假设战斗总是能 win
	player->exp += 100 * enemy->level;
	printf("%s wins the battle and gains %d experience points!\n", player->name, 100 * enemy->level);
}

void print_player_info(const Player* player) {
	char* class_name[] = { "Warrior", "Mage", "Rogue" };
	puts("Player Information:");
	printf("Name: %s\n", player->name);
	printf("Class: %s\n", class_name[player->char_class]);	// 通过指针数组输出字符串 ——表驱动法
	printf("Level: %d\n", player->level);
	printf("Health: %d\n", player->health);
	switch (player->char_class)
	{
	case Warrior:
		printf("Strength: %d\n", player->ability.strength);
		break;
	case Mage:
		printf("Mana: %.2f\n", player->ability.mana);
		break;
	case Rogue:
		printf("Stealth: %d\n", player->ability.stealth);
		break;
	default:
		break;
	}
}

void print_enemy_info(const Enemy* enemy) {
	puts("Enemy Information:");
	printf("Type: %d\n", enemy->type);
	printf("Level: %d\n", enemy->level);
	printf("Health: %d\n", enemy->health);
	printf("Damage: %d\n", enemy->damage);
}
void init() {
	puts("Welcome to the Text RPG Game!");
	Player player;
	create_player(&player, "Player1", Warrior);
	print_player_info(&player);
	Enemy enemy = generateEnemy(Goblin, 1);
	print_enemy_info(&enemy);
	battle(&player, &enemy);
	print_player_info(&player);
}