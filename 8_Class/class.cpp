#include<stdio.h>
#include"MyClass.h"

struct stMyStruct //변수형
{
	int a;
};

// Class ( 변수, 자료형)
// Class 는 사용자 정의 Type 이라고 한다.
// C 의 Struct 의 확장된 개념
// C++ 의 클래스는 세 가지 액세스 (접근) 지정자(private, protected, public) 에 의해 액세스가 제어되는 멤버
// 데이터 및 함수가 있는 사용자 정의 유형 또는 데이터 구조를 만든다.
//  액세트 지정자를 사용하여 데이터 및 함수를 만드는 걸 캡슐화라고 한다.
// Class 를 한글로 번역하면 형틀이라는 뜻, 사용가능한 객체가 아님.
//  객체를 생성하기 위한 모양을 나타낸다.

// 객체(Object) ==================
// Class 를 사용해서 생성된걸 객체라고 한다.
// Class 에 선언한 변수들이 생성되고 메모리에서 공간을 차지함

// 객체 지향 프로그래밍 ===============================
// 객체 지향 프로그래밍은 컴퓨터 프로그램을 명령어의 목록으로 보는 시각에서 벗어나 여러 개의 독립된 단위로 보는 것.
// 즉 '객체' 들의 모임으로 구조를 만들고자 하는 패러다임
// 각각의 객체는 메시지를 주고 받고, 데이터를 독립적으로 처리할 수 있다.


class CMyClass //변수형
{
	//접근 지정자
	// private: 외부에서 접근 불가
	// protectd : 상속 관계일 때 접근이 가능. 이외에는 접근 불가.
	// //Public : 어디서든 접근 가능
	// 
	// 위에 접근 지정자가 없으면 기본적으로는 private 
	// int b; //클래스 안에 선언된 변수를 멤버 변수라고 한다.
	int m_b; // 개발자들은 형식적으로 멤버 변수라는걸 표시하기 위해 m_ 를 붙이기도 한다.
public:
	 //생성자
	// 클래스가 생성될 때 호출되는 함수
	//선언하지 않아도 기본 생성자가 존재
	// 생성자도 private 이면  외부에 호출 불가. 반드시 public 으로 선언해야 한다.
	// 생성자도 파라메타의 갯수와 타입에 따라 Overload(타입별 여러 개의 함수를 생서) 할 수 있다.
	// (int valueA= 0 ) 이런 방식으로 생성시 파라메터를 넣어줄 수 있다.
	
	// 파라미터 변수의 형태가 입력 방식에 의해 선택이 불가능 하면 문제가 발생한다. (int valueA=0, int valueB=0) 두 개의 변수에 값이 지정된 상태에서 호출시에
	//  한 개의 입력값만 받으면 두 번째 변수의 값이 생략된 것인지 혼란이 오기 때문에 에러가 발생한다.

	CMyClass(int valueA=0) : a(valueA), m_b(0), c(0) /// 입력값(int valueA=0)을 지정해줄 수 있다.
	{
		printf("생성자 A 호출됨 \n");

	}

	CMyClass(int valueA, int valueB) : a(valueA), m_b(valueB), c(0) /// 받은 값을 특정 변수에 넣을 수 있다.
	{
		printf("생성자 B 호출됨 \n");

	}

	CMyClass(int valueA, int valueB, int valueC) : a(valueA), m_b(valueB), c(valueC) /// 받은 값을 특정 변수에 넣을 수 있다.
	{
		printf("생성자 C 호출됨 \n");

	}
	//


	//파괴자
	// 클래스가 파괴될 때 호출되는 함수
	// 선언하지 않아도 기본 파괴자 존재
	// 파괴자도 public 이 아니면 호출이 불가능, 반드시 public 으로 선언
	~CMyClass()
	{
		printf("파괴자 호출됨 \n ");
	}
	void PrintB()
	{
		printf("B=%d", m_b);
}
	void PrintAllValue()
	{
		printf("A=%d, B=%d, C=%d, \n", a, m_b, c);
	}

	void SecC(int num)
	{
		c = num; //  디스가 생략된 것임.     this->c = num;       일반적으로는 this 키워드가 생략됨.
	}

	// =========================================
	//연산자 오버로딩(Operator Overloading)
	//대입연산자 (기본적으로 생성됨)
	//const CMyClass& : 왼쪽으로 반환될 변수형
	// operator = : 오버로딩할 연산자
	// (const CMyClass& other) : 오른쪽에 입력될 변수

	//cMy3 = cMy + cMy2;
	//cMy3 = CMyClass(a + other.a , m_b+ other.m_b, c+other.c);
	const CMyClass& operator=(const CMyClass& other)
	{
		a = other.a;
		m_b = other.m_b;
		c = other.c;
		return*this; // 클래스내에서 함수가 호출된 대상 객체를 의미함

	}
	const CMyClass& operator +(const CMyClass& other)
	{
		
		return CMyClass(a + other.a , m_b+ other.m_b, c+other.c);

	}
	const CMyClass& operator -(const CMyClass& other)
	{

		return CMyClass(a + other.a, m_b + other.m_b, c + other.c);

	}
public:
	int a;
protected:
private:
	int c;

};
int main()
{
	{
		// 레퍼런스 참조
		// 메모리 복제가 되지 않고 원본은 참조하여 메모리를 효율적으로 사용하기 위한 연산자


		int num = 100;
						stMyStruct stTest;

		// 포인터 참조는 포인터 변수의 주소 값을 참조한다.
		// 포인터 변수의 주소값과 포인터  가리키고 있는 주소 값은 다르다.

		int* pNum = &num; // pNum  (포인터 변수 )에는 num의 주소 값이 들어간다. 즉, pNum 은 num 변수를 가리키고 있다.
						stMyStruct* pTest = &stTest;
						pTest->a = 0;
		printf("&pNum != &num ? %d\n", (int(&pNum) != int(&num)));

		// 레퍼런스 참조는 원본 대상의 주소 값과 동일하다.
		
		int& refNum = num;
						stMyStruct& refTest = stTest;
						refTest.a = 0;
		printf("&refNum == &num ? %d\n", (int(&refNum) == int(&num)));

	}




	//stMyStruct stMy;
	//stMy.a = 0; 

	CMyClass cMy(100);// <----생성자 호출됨. /// 값을 한 개 넣었는지 두 개 넣었는지에 따라 다른 함수를 호출
	CMyClass cMy2(400, 200);

	CMyClass cMy3;
	CMyClass cMy4;
	printf("cMy.a=%d\n", cMy.a);
	//cMy.a = 0; 
	cMy.SecC(2);
	cMy.SecC(29);
	cMy.SecC(55);
	cMy.SecC(4); // 특정 변수를 수정하기 위한 함수. c는 private 상태이지만 함수를 선언해놓음으로 메인함수에서 가져다 쓸 수 있다. 
								// 특 정 변수를 수정하기 위한 함수를 생성해서 개발하는게 기본 규칙이다.
	// cMy.c =100; // 만약 변수를 private 상태로 해놨다면 개발자가 직접 접근하지 말라는 의도가 있다는 것.

	cMy = cMy2;
	cMy.PrintAllValue();
	//cMy.a = 1000;
	cMy4 = cMy - cMy2;
	cMy4.PrintAllValue();
} // <----파괴자 호출됨.(메인 함수 끝)
