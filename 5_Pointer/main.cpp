#include <stdio.h>

void BuyItem(int* Money, int price)
{
	//int *Money �� �޸� ������ �Ͼ�� �ʴ´�.
	// �޸𸮿� ȿ������ ����, ������ ������ ���ϴ�.
	*Money -= price;
}
void Selec(int* are)
{
	switch (*are)
	{
	default:
		break;
	}
}
enum ePhoneType //���������� ������ȣ�� �ο��ȴ�. e�� �տ� �ٿ��� ����� ���� �����̴�.
{
	iPhone = 0, // 0���� ������ �����൵ ������ �����ϸ� �� �Ʒ��� 1�� ��ȣ�� �߰��ȴ�. 
	Galaxys23, //1 �� �����ȴ�. ���� �Ȱ��� =0 ���� ������ ��ȣ�� �������� ���� ����.
	GalaxyFold =5,// 5�� �����ϸ� �ؿ� ���� 6���� ���۵ȴ�.
	GalaxyZ //6
};

struct stPhoneShop
{
	int iPhoneCnt;
	int Galaxys23;
	int GalaxyFold;
	int Galaxyz;

	void printPhoneCnt()
	{
		printf("������=%d, ������s23=%d, ������Fold=%d, ������z=%d", iPhoneCnt, Galaxys23, GalaxyFold, Galaxyz);
	}
};

void BuyiPhone(ePhoneType phoneType, stPhoneShop* pPs)
{
	switch (phoneType)
	{
	case ePhoneType::iPhone:
			pPs->iPhoneCnt--; //����Ʈ�� �����ϴ� ����ü�� ������ "->" Ű����� �����Ѵ�.
			break;
	case ePhoneType::Galaxys23:
			pPs->Galaxys23--; //����Ʈ�� �����ϴ� ����ü�� ������ "->" Ű����� �����Ѵ�.
			break;
	case ePhoneType::GalaxyFold:
			pPs->GalaxyFold--; //����Ʈ�� �����ϴ� ����ü�� ������ "->" Ű����� �����Ѵ�.
			break;
	case ePhoneType::GalaxyZ:
			pPs->Galaxyz--; //����Ʈ�� �����ϴ� ����ü�� ������ "->" Ű����� �����Ѵ�.
			break;
		default:
			break;
	}
	
}




int main()
{
	int a = 0;//4Byte
	int b = 0;
	//�����͸� ����ϴ� ����
	// �޸𸮿� ȿ������ ����, ������ ������ ���ϴ�.
	// int *pA : ������ ������ ����(pA�� ���ִ� �ּҿ� int���� ũ�� ��ŭ �����ϰڴ�.)
	//int* pa: ������ ������ ����
	//nullptr : ������ ������ �ʱ�ȭ ��(�ּҰ��� �������)
	//�������� null �� ����ߴµ� null =0�� �ǹ� �׷��� 0�̶� �ǹ̰� �����ؼ� ���� �߻�
	//�ּҰ��� ��� �����̶�� ��Ȯ�� �ǹ̸� ���� nullptr ���
	//������ ũ��(x32������ 4Byte, x64���� 8Byte)
	
	int* pA = nullptr;
	pA = &a; //a�ּҰ��� pA�� �ִ´�.
	// * : ���۷��� �����Ѵ�.(�ּҰ� ����Ű�� �ִ� ���� �����Ѵ�.)
	b = *pA; //b�� pA�� ����Ű�� �ִ� �ּҿ� ���� �ִ´�.
	*pA = 10; //pA �� ����Ű�� �ִ� �ּҿ� ���� 10���� �����Ѵ�.

	int num1 = 0;
	int num2 = 0;
	int* pNum = nullptr; //int �� ����Ʈ ���� ����

	pNum = &num1; //������ ���� num1�� ����Ų��.
	printf("pNum=%d\n", *pNum); //num1���� 0�� ���
	*pNum = 20; //������ ���� 20�� �־���. num1�� 20�̵ȴ�.
	printf("pNum=%d\n", *pNum); //num1���� 20�� ���

	pNum = &num2; // ������ ���� num2�� ����Ų��.
	printf("pNum=%d\n", *pNum); //num2���� 0�� ���

	*pNum = 30; //������ ���� 30�� �־���. num2 �� 30�� �ȴ�.
	printf("pNum=%d\n", *pNum); //num1���� 30�� ���

	printf("num1=%d num2=%d\n", num1, num2);

	//
	//�߰� ��//
	//
	int Money = 10000;
	BuyItem(&Money, 1000);
	printf("MyMoney=%d\n", Money);

	stPhoneShop stPs;
	stPs.iPhoneCnt = 100;
	stPs.Galaxys23 = 100;
	stPs.GalaxyFold = 200;
	stPs.Galaxyz = 100;

	BuyiPhone(ePhoneType::iPhone, & stPs);
	stPs.printPhoneCnt();

	//--//
	//�迭�� ������//

	int arrint[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int* plnt = nullptr; //plnt �� ���ִ� �ּҿ� int���� ũ�� ��ŭ �����ϰڴ�.
	plnt = arrint;
	printf("plnt=%d\n", *plnt);

	plnt += 1;//���� �迭 �������� �ּҸ� ����Ų��.
	
	printf("plnt=%d\n", *plnt);

	short arrS[10] = { 0,10,20,30,40,50,60,70,80,90 };
	plnt = (int*)arrS;//(int*)�� ����ؼ� int*�� ������ ����ȯ(cast)�Ѵ�.
	plnt += 1;//plnt �� int* �̹Ƿ� int(4Byte) ��ŭ ���� �ּ� ���� �����Ѵ�. 
	short* pS = (short*)plnt;// int(4Byte)��ŭ �̵��� �ּҰ��� short(2Byte)2�� �̵��� ��
	printf("plnt=%d\n", *pS	);

	//int* pA = nullptr;
	//pA = &a;
	
	//�Ʒ� �迭�� ���� ���� ������� ���
	//int* lowA = nullptr;
	//lowA =(int*) & arrA;
	
		
	int arrA[10] = { 10,2,78,53,6,33,27,99,7,31 };
	for (int i = 0; i < 10; i++)
	{
		int lowA = i;//lowA�� �������� �ε��� ����
		for (int j = i + 1; j < 10; j++)
		{
			if(arrA[lowA]>arrA[j])
			{
				//lowA �� j�� ������� ��
				// j �ε��� ���� ������ j�� ���ο� lowA
				lowA = j;
			}
		}
		//j for ���� ����Ǹ� lowA���� ���� ���� �ε������� ����
		//i �� ���������� ���鼭 ���� ���� ���� ���
		//lowA���� i�� �ε��� ���� ��ü
		int ABC = arrA[i];
		arrA[i] = arrA[lowA];
		arrA[lowA] = ABC;
	printf("%d\n", arrA[i]);
	}

}