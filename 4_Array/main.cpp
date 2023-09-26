#include<stdio.h>

// c++ 의 컴파일 
// c++ 에서 사람이 작성한 소스코드를 컴퓨터가 읽을 수 있는 코드로 변환하여 실행할 수 있는 파일로 변환하는 과정

// 1. 전처리(Preprocessing) 단계 : #include 와 #define 과 같은 전처리가 매크로들을 처리하는 단계
// 2. 컴파일(Compile) 단계 : 각각의 소스 파일들을 어셈블리 명령어로 변환
// 3. 어셈블(Assemble) 단계 : 어셈블리 코드들을 실제 기계어로 이루어진 목적 코드 (Object file)로 변환하는 단계
// 4. 링킹(Linking) 단계 : 각각의 목적 코드들을 한데 모아서 하나의 실행 파일을 생성하는 단계





// 메모리 영역
// 1. Code 영역 : 실행할 코드가 저장되어 있는 영역(기계어로 존재)
// 2. Data 영역 : 전역변수, Static 변수들이 저장, 프로세스가 종료될 때 까지 메모리에 저장
// 3. Stack 영역 : 지역변수, 매개변수들이 저장, 함수가 호출되면 생성되고 함수가 종료되면 시스템에 반환
// 4. Heap 영역 : malloc 또는 new 함수에 의해서 동적으로 할당되는 영역, malloc() Ehsms new 연산자로 할당, free()또는 delete 연산자로 해제



//int g_money = 0;//전역 변수
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
		 printf("핸드폰 가격은 \niPhone = %d\nzFlip=%d\nGalaxyS23=%d\nGalaxyFold=%d\n", iPhone, zFlip, GalaxyS23, GalaxyFold);
	 }
};
struct fruitShop
{
	//구조체 내부 선언한 변수는 구조체가 사라지지 않으면 안 사라진다.
	int appleA;
	int mangoA;
	int strawberryA;

	//구조체 생성자 ":" 이 구문 오른쪽에 변수에 초기값을 셋팅한다.
	fruitShop() : appleA(1000), mangoA(1000), strawberryA(1000)
	{

	}
	//구조체에 함수 생성
	void SetFruitValue(int apple, int mango, int strawbeery)
	{
		int appleB = apple; // SetFruitValue 함수가 종료되면 사라지는 변수(appleB)이다.
		appleA = apple;
		mangoA = mango;
		strawberryA = strawbeery;
	}


	void printfShopValue()
	{
		printf("과일가게 가격\n사과 : %d\n망고 : %d\n딸기 : %d\n  ", appleA, mangoA, strawberryA);
	}

};

//1+1 = 2
//int Add(int a, int b)
//{
//	printf("int형 Add\n");
//	return a + b;
//}
//
////1.1+1.4 = 2.5
//float Add(float a, float b)
//{
//	printf("float형 Add\n");
//
//	return a + b;
//
//}
//
//double Add(double a, double b)
//{
//	printf("double형 Add\n");
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
	printf("더하기=%d\n", AddNum(num1, num2));

	scanf_s("%d %d", &num1, &num2);
	printf("빼기=%d\n", MinusNum(num1, num2));

	scanf_s("%d %d", &num1, &num2);
	printf("곱하기=%d\n", MultiplyNum(num1, num2));*/
	
	//Add(20, 3); //인트형

	//Add(2.f, 3.f); //float 형

	//Add(2., 3.); //double 형
	
	//배열
	//int arrint[10] = { 0 }; //전부 0으로 초기화
	//int arrint[10] = { 0, }; //전부 0으로 초기화
	int arrint[10] = { 0,1,45,3,4,5,60-1,7,8,9 }; // 배열 생성 및 각각에 배열에 초기값 넣는 방법
	arrint[0] = 10; // 배열 1번째에 10을 넣음
	arrint[4] = 40; // 배열 5번째에 40을 넣음
	arrint[9] = 90; // 0번부터 배열이 시작되므로 10번째 배열은 9라고 표기

	//예시문
	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 배열 값은 %d입니다.\n", i, arrint[i]);//2개 이상의 파라메타 출력 방법
		arrint[i];
	}
	int number = 0;
	for (int value : arrint) //for each 문. 배열에서만 사용됨
	{
		printf("for each %d번째 배열 값은 %d입니다. \n", number, value);
		number++;
	}



	//구조체 structure
	//struct에 사용
	//fruitShop: 변수형
	//shop : 변수 이름
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
