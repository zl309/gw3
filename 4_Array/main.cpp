#include<stdio.h>

// c++ �� ������ 
// c++ ���� ����� �ۼ��� �ҽ��ڵ带 ��ǻ�Ͱ� ���� �� �ִ� �ڵ�� ��ȯ�Ͽ� ������ �� �ִ� ���Ϸ� ��ȯ�ϴ� ����

// 1. ��ó��(Preprocessing) �ܰ� : #include �� #define �� ���� ��ó���� ��ũ�ε��� ó���ϴ� �ܰ�
// 2. ������(Compile) �ܰ� : ������ �ҽ� ���ϵ��� ����� ��ɾ�� ��ȯ
// 3. �����(Assemble) �ܰ� : ����� �ڵ���� ���� ����� �̷���� ���� �ڵ� (Object file)�� ��ȯ�ϴ� �ܰ�
// 4. ��ŷ(Linking) �ܰ� : ������ ���� �ڵ���� �ѵ� ��Ƽ� �ϳ��� ���� ������ �����ϴ� �ܰ�





// �޸� ����
// 1. Code ���� : ������ �ڵ尡 ����Ǿ� �ִ� ����(����� ����)
// 2. Data ���� : ��������, Static �������� ����, ���μ����� ����� �� ���� �޸𸮿� ����
// 3. Stack ���� : ��������, �Ű��������� ����, �Լ��� ȣ��Ǹ� �����ǰ� �Լ��� ����Ǹ� �ý��ۿ� ��ȯ
// 4. Heap ���� : malloc �Ǵ� new �Լ��� ���ؼ� �������� �Ҵ�Ǵ� ����, malloc() Ehsms new �����ڷ� �Ҵ�, free()�Ǵ� delete �����ڷ� ����



//int g_money = 0;//���� ����
//
//static int s_money = 0;

//#include "money.h.h"
//#include "calcFunc.h"
struct PhoneShop
{
	 int iPhone;
	 int zFlip;
	 int GalaxyS23;
	 int GalaxyFold;
	 PhoneShop() : iPhone(0), zFlip(0), GalaxyS23(0), GalaxyFold(0)
	 {

	 }
	 void SetPhoneShop(int iPhone1, int zFlip1, int GalaxyS231, int GalaxyFold1)
	 {
		 iPhone = iPhone1;
		 zFlip = zFlip1;
		 GalaxyS23 = GalaxyS231;
		 GalaxyFold = GalaxyFold1;
	 }
	 void prntfPhoneShop()
	 {
		 printf("�ڵ��� ������ \niPhone = %d\nzFlip=%d\nGalaxyS23=%d\nGalaxyFold=%d\n", iPhone, zFlip, GalaxyS23, GalaxyFold);
	 }
};
struct fruitShop
{
	//����ü ���� ������ ������ ����ü�� ������� ������ �� �������.
	int appleA;
	int mangoA;
	int strawberryA;

	//����ü ������ ":" �� ���� �����ʿ� ������ �ʱⰪ�� �����Ѵ�.
	fruitShop() : appleA(1000), mangoA(1000), strawberryA(1000)
	{

	}
	//����ü�� �Լ� ����
	void SetFruitValue(int apple, int mango, int strawbeery)
	{
		int appleB = apple; // SetFruitValue �Լ��� ����Ǹ� ������� ����(appleB)�̴�.
		appleA = apple;
		mangoA = mango;
		strawberryA = strawbeery;
	}


	void printfShopValue()
	{
		printf("���ϰ��� ����\n��� : %d\n���� : %d\n���� : %d\n  ", appleA, mangoA, strawberryA);
	}

};

//1+1 = 2
//int Add(int a, int b)
//{
//	printf("int�� Add\n");
//	return a + b;
//}
//
////1.1+1.4 = 2.5
//float Add(float a, float b)
//{
//	printf("float�� Add\n");
//
//	return a + b;
//
//}
//
//double Add(double a, double b)
//{
//	printf("double�� Add\n");
//
//	return a + b;
//
//}
//

int main()
{
	/*int t_money = 0;
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	printf("main t_money=%d\n", t_money);
	printf("main g_money=%d\n", g_money);
	

	int num1 = 0;
	int num2 = 0;

	scanf_s("%d %d",&num1, &num2);
	printf("���ϱ�=%d\n", AddNum(num1, num2));

	scanf_s("%d %d", &num1, &num2);
	printf("����=%d\n", MinusNum(num1, num2));

	scanf_s("%d %d", &num1, &num2);
	printf("���ϱ�=%d\n", MultiplyNum(num1, num2));*/
	
	//Add(20, 3); //��Ʈ��

	//Add(2.f, 3.f); //float ��

	//Add(2., 3.); //double ��
	
	//�迭
	//int arrint[10] = { 0 }; //���� 0���� �ʱ�ȭ
	//int arrint[10] = { 0, }; //���� 0���� �ʱ�ȭ
	int arrint[10] = { 0,1,45,3,4,5,60-1,7,8,9 }; // �迭 ���� �� ������ �迭�� �ʱⰪ �ִ� ���
	arrint[0] = 10; // �迭 1��°�� 10�� ����
	arrint[4] = 40; // �迭 5��°�� 40�� ����
	arrint[9] = 90; // 0������ �迭�� ���۵ǹǷ� 10��° �迭�� 9��� ǥ��

	//���ù�
	for (int i = 0; i < 10; i++)
	{
		printf("%d��° �迭 ���� %d�Դϴ�.\n", i, arrint[i]);//2�� �̻��� �Ķ��Ÿ ��� ���
		arrint[i];
	}
	int number = 0;
	for (int value : arrint) //for each ��. �迭������ ����
	{
		printf("for each %d��° �迭 ���� %d�Դϴ�. \n", number, value);
		number++;
	}



	//����ü structure
	//struct�� ���
	//fruitShop: ������
	//shop : ���� �̸�
	/*shop.appleA = 1000;
	shop.mangoA = 2000;
	shop.strawberryA = 3000;*/

	fruitShop shop[3];
	shop[0].SetFruitValue(1000, 2000, 3000);
	shop[1].SetFruitValue(1100, 2100, 3100);
	shop[2].SetFruitValue(900, 1900, 2900);

	for (fruitShop stValue : shop)
	{
		stValue.printfShopValue();
	}

	//Struct PhoneShop
	
	// 
	// PhoneShop[0] iPhone;
	PhoneShop PhoneShop1[3];
	PhoneShop1[0].SetPhoneShop(100, 90, 80, 150);
	PhoneShop1[1].SetPhoneShop(110, 100, 90, 160);
	PhoneShop1[2].SetPhoneShop(90, 80, 70, 140);
	
	for (PhoneShop Value : PhoneShop1)
	{
		Value.prntfPhoneShop();
	}


}
