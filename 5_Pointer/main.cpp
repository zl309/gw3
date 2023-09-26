#include <stdio.h>

void BuyItem(int* Money, int price)
{
	//int *Money 는 메모리 복제가 일어나지 않는다.
	// 메모리에 효율적인 관리, 데이터 참조가 편리하다.
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
enum ePhoneType //순서에따라서 고유번호가 부여된다. e를 앞에 붙여서 만드는 것이 보통이다.
{
	iPhone = 0, // 0으로 지정을 안해줘도 되지만 지정하면 그 아래로 1씩 번호가 추가된다. 
	Galaxys23, //1 이 지정된다. 위와 똑같이 =0 으로 동일한 번호를 지정해줄 수는 없다.
	GalaxyFold =5,// 5로 지정하면 밑에 것은 6으로 시작된다.
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
		printf("아이폰=%d, 갤럭시s23=%d, 갤럭시Fold=%d, 갤럭시z=%d", iPhoneCnt, Galaxys23, GalaxyFold, Galaxyz);
	}
};

void BuyiPhone(ePhoneType phoneType, stPhoneShop* pPs)
{
	switch (phoneType)
	{
	case ePhoneType::iPhone:
			pPs->iPhoneCnt--; //포인트로 참조하는 구조체에 변수는 "->" 키워드로 참조한다.
			break;
	case ePhoneType::Galaxys23:
			pPs->Galaxys23--; //포인트로 참조하는 구조체에 변수는 "->" 키워드로 참조한다.
			break;
	case ePhoneType::GalaxyFold:
			pPs->GalaxyFold--; //포인트로 참조하는 구조체에 변수는 "->" 키워드로 참조한다.
			break;
	case ePhoneType::GalaxyZ:
			pPs->Galaxyz--; //포인트로 참조하는 구조체에 변수는 "->" 키워드로 참조한다.
			break;
		default:
			break;
	}
	
}




int main()
{
	int a = 0;//4Byte
	int b = 0;
	//포인터를 사용하는 이유
	// 메모리에 효율적인 관리, 데이터 참조가 편리하다.
	// int *pA : 포인터 변수의 선언(pA에 들어가있는 주소에 int형의 크기 만큼 참조하겠다.)
	//int* pa: 포인터 변수의 선언
	//nullptr : 포인터 변수의 초기화 값(주소값이 비어있음)
	//이전에는 null 을 사용했는데 null =0을 의미 그래서 0이랑 의미가 동일해서 문제 발생
	//주소값이 비어 있음이라는 명확한 의미를 가진 nullptr 사용
	//포인터 크기(x32에서는 4Byte, x64에는 8Byte)
	
	int* pA = nullptr;
	pA = &a; //a주소값을 pA에 넣는다.
	// * : 레퍼런스 참조한다.(주소가 가르키고 있는 값을 참조한다.)
	b = *pA; //b에 pA가 가르키고 있는 주소에 값을 넣는다.
	*pA = 10; //pA 가 가르키고 있는 주소에 값을 10으로 변경한다.

	int num1 = 0;
	int num2 = 0;
	int* pNum = nullptr; //int 형 포인트 변수 선언

	pNum = &num1; //포인터 값은 num1을 가리킨다.
	printf("pNum=%d\n", *pNum); //num1값인 0이 출력
	*pNum = 20; //포인터 값에 20을 넣었다. num1이 20이된다.
	printf("pNum=%d\n", *pNum); //num1값인 20이 출력

	pNum = &num2; // 포인터 값이 num2을 가리킨다.
	printf("pNum=%d\n", *pNum); //num2값인 0이 출력

	*pNum = 30; //포인터 값에 30을 넣었다. num2 가 30이 된다.
	printf("pNum=%d\n", *pNum); //num1값인 30이 출력

	printf("num1=%d num2=%d\n", num1, num2);

	//
	//추가 예//
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
	//배열과 포인터//

	int arrint[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int* plnt = nullptr; //plnt 에 들어가있는 주소에 int형의 크기 만큼 참조하겠다.
	plnt = arrint;
	printf("plnt=%d\n", *plnt);

	plnt += 1;//다음 배열 포인터의 주소를 가리킨다.
	
	printf("plnt=%d\n", *plnt);

	short arrS[10] = { 0,10,20,30,40,50,60,70,80,90 };
	plnt = (int*)arrS;//(int*)를 사용해서 int*로 강제로 형변환(cast)한다.
	plnt += 1;//plnt 가 int* 이므로 int(4Byte) 만큼 다음 주소 값을 참조한다. 
	short* pS = (short*)plnt;// int(4Byte)만큼 이동한 주소값은 short(2Byte)2번 이동한 값
	printf("plnt=%d\n", *pS	);

	//int* pA = nullptr;
	//pA = &a;
	
	//아래 배열을 낮은 숫자 순서대로 출력
	//int* lowA = nullptr;
	//lowA =(int*) & arrA;
	
		
	int arrA[10] = { 10,2,78,53,6,33,27,99,7,31 };
	for (int i = 0; i < 10; i++)
	{
		int lowA = i;//lowA에 가장작은 인덱스 저장
		for (int j = i + 1; j < 10; j++)
		{
			if(arrA[lowA]>arrA[j])
			{
				//lowA 와 j를 순서대로 비교
				// j 인덱스 값이 낮으면 j는 새로운 lowA
				lowA = j;
			}
		}
		//j for 문이 종료되면 lowA에는 가장 낮은 인덱스값이 저장
		//i 는 순차적으로 돌면서 가장 낮은 수가 들어
		//lowA값과 i의 인덱스 값을 교체
		int ABC = arrA[i];
		arrA[i] = arrA[lowA];
		arrA[lowA] = ABC;
	printf("%d\n", arrA[i]);
	}

}