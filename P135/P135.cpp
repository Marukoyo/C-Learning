/*
	P135 数组的案例：账户存款取款
*/
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ACCOUNT_COUNT 3

int main(void)
{
	/*
		
	*/
	uint64_t account_balances[ACCOUNT_COUNT] = { 10000,15000,20000 };

	uint64_t total_assets = 0;

	puts("初始账户金额：");

	for (size_t i = 0; i < ACCOUNT_COUNT; i++)
	{
		printf("账户%zu：%llu\n", i + 1, account_balances[i]);
		
	}

	
	account_balances[0] += 5000;
	account_balances[1] -= 2500;
	puts("账户金额变动后：");
	
	for (size_t i = 0; i < ACCOUNT_COUNT; i++)
	{
		printf("账户%zu：%llu\n", i + 1, account_balances[i]);
	}

	printf("账户总资产：%llu\n", total_assets);

	system("pause");
	return 0;
}


