#include "money.h.h"
#include<stdio.h>

// static int g_money = 0;

//extern int g_money;


int addMoney(int money)
{
	int t_money = 0; //���� ����
	t_money += money;
	//g_money += money;

	printf("t_money=%d\n", t_money);
	///printf("g_money=%d\n", g_money);

	return 0;

}

int useMoney(int money)

{
	return 0;
}
