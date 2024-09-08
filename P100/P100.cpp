/*
	P100 自动贩卖机案例
*/
#include <float.h> 
#include <inttypes.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main(void)
{
	/*
		自动贩卖机
		这个机器只支持硬币，假设只卖一种饮料，每瓶的价格是￥5.
		怎么样才能给用户饮料呢?
		用户需要一直投币，直到金额足够，这样机器才能提供饮料哦。
		增加一个条件，只接受1，2，5元硬币。
	*/
	// 1.初始化
	const uint8_t PRICE = 5;	// 饮料价格

	uint8_t balance = 0;	// 用户当前的金额（当前投入的总数）

	uint8_t coin = 0;	// 用户投币金额（当前）

	// 提示用户投币
	puts("欢迎使用自动贩卖机，饮料价格为￥5，请投币(1,2,5元硬币)：");

	// 2.处理循环的条件
	// balance < PRICE
	while (balance < PRICE) {
		puts("钱不够，请投币：");
		//模拟投币 假设用户输入的金额就是投币金额
		scanf_s("%" SCNu8, &coin);
		// 检查投币金额是否合法
		switch (coin)
		{
		case 1:
		case 2:
		case 5:
			// accumulate the balance
			balance += coin;
			printf("您已经投入了 $% " PRIu8 ",当前金额为：%d\n", coin, balance);
			break;
		default:
			printf("对不起，我们不接受 ￥%" PRIu8 "的硬币，请重新投币！\n", coin);
			break;
		}
	}
	// 3.用户投币金额足够
	// 找零
	if (balance > PRICE)
	{
		printf("找零￥%" PRIu8 "\n", balance - PRICE);
	}
	puts("请取走您的饮料，谢谢！");

	system("pause");
	return 0;
}


