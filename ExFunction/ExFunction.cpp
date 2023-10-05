#include<stdio.h>
#include"Divid.h"
#include"Minus.h"
#include"Multi.h"
#include"Sum.h"
#include<iostream>
//함수이름 : Sum
// 매개 변수(파라미터) : int a, int b
// 반환 값 : int
// a 와 b 를 합한 결과를 반환하시오.

//함수 이름:  Minus
// 매개 변수 (파라미터): int a, int b
// 반환 값:  int
// a 와 b를 빼기한 결과를 반환하시오

//함수 이름:  Multi
// 매개 변수 (파라미터): int a, int b
// 반환 값:  int
// a 와 b를 곱하기한 결과를 반환하시오

//함수 이름:  Divid
// 매개 변수 (파라미터): float a, float b
// 반환 값:  float
// a 와 b를 나누기한 결과를 반환하시오

// 함수 이름 : Average
// 파라미터 int &Sum, int a, int b, int c
// 반환값 없음
//레퍼런스 변수 Sum으로 a, b, c 의 평균 값을 반환


void Average(int&Sum,int& a, int b, int c)
{
	a = 77;
	Sum=(b+c);
}
		

// 함수이름 : ArraySum
// 파라미터 int* arr, int length
// 반환 값 : int
// 배열 "arr" 과 배열의 길이 "length" 를 파라미터로 받아서 모든 배열의 합을 반환

int ArraySum(int *arr, int length)
{
	int a;
	a = length;
	int bb=0;

	for (int i = 0; i < a; ++i)
	{
		bb +=arr[i];
	}
	return bb;
}

// 클래스 이름 : CShop
// 맴버 변수 : m_value(기본값:0)
// 맴버 함수 추가 : printValue
// printValue 함수 결과 : "Value=%d"로 m_value 출력

class CShop
{
public:
	int a;
	CShop(int m_Value = 0) : a(m_Value)
	{

	}
	~CShop()
	{

	}
	void printValue()
	{
		printf("Value=%d", a);
	}
private:

};





// 클래스 이름 : CPhoneShop
// 부모 클래스 : CShop
// 생성자 파라메타 : int PhoneCnt ( m_PhoneCnt에 값 적용 )
// 생성자 파라메타 : int PhonePrice ( m_PhonePrice에 값 적용 )
// 맴버 변수 : m_PhoneCnt
// 맴버 변수 : m_PhonePrice
// printValue 함수 결과 : "Value=%d"로 m_PhoneCnt * m_PhonePrice출력

//CPhoneShop(10, 100) 생성 후 객체에 printValue 출력
class CPhoneShop : public CShop
{
public:
	CPhoneShop(int PhoneCnt, int PhonePrice) : m_PhoneCnt(PhoneCnt), m_PhonePrice(PhonePrice)
	{
		
	}
	int m_PhoneCnt;
	int m_PhonePrice;
	~CPhoneShop()
	{

	}
};
// 클래스 이름 : CFruitShop
// 생성자 파라메타 : int FruitCnt ( m_FruitCnt에 값 적용 )
// 생성자 파라메타 : int FruitPrice ( m_FruitPrice에 값 적용 )
// 부모 클래스 : CShop
// 맴버 변수 : m_FruitCnt
// 맴버 변수 : m_FruitPrice
// printValue 함수 결과 : "Value=%d"로 m_FruitCnt * m_FruitPrice출력

//CFruitShop(10, 100) 생성 후 객체에 printValue 출력



int main()
{
	int nresult = 0;
	
	//printf로 "Sum=%d" 로 Sum 함수 결과 출력
	nresult = Sum(3, 2);
	printf("Sum=%d\n", nresult);

	//printf로 "Minus=%d" 로 Minus 함수 결과 출력
	nresult = Minus(3, 2);
	printf("Minus=%d\n", nresult);

	//printf로 "Multi=%d" 로 Multi 함수 결과 출력
	nresult = Multi(3, 2);
	printf("Multi=%d\n", nresult);

	//printf로 "Divid=%f" 로 Divid 함수 결과 출력
	float fresult = 0.0f;
	fresult = Divid(3, 2);
	printf("Divid=%f\n", fresult);

	//레퍼런스 참조
	int d=0;
	int ff = 0;
	Average(d,ff, 2, 1);
	printf("Average=%d %d\n", d, ff);

	int arrA[3] = { 2,3,6 };

	nresult = ArraySum(arrA, 3);
	printf("ArraySum=%d\n", nresult);

	CShop abc(5);
	abc.printValue();

}
