#include<stdio.h>

// 상속
// 기존 클래스의 기능을 추가하거나 재정의하여 새로운 클래스를 정의하는 기능
// 생물 = 기본 최상위 클래스 라고 정의
// 동물 = 생물 + 움직인다는 기능
// 포유류 = 동물 + 젖먹이 기능
// 사람 = 포유류 + 지적 기능
// 사람은 포유류의 기능을 상속받음

class CBase
{
public:
	CBase(int x=1, int y = 2) :m_X(x) , m_Y(y)
	{
		printf("부모 클래스 (CBase) 생성\n");
	}
	~CBase()
	{
		printf("부모 클래스 (CBase) 파괴\n");

	}
	//가상함수 virtual
	//자식 클래스에서 재정의할 것으로 기대하는 멤버함수
	// 함수 앞에 virtual 키워드를 붙인다.
	//virtual void printValue() //가상함수 virtual
	//{
	//	printf("m_x=%d\n", m_X);
	//}

public:
	int m_X;
	int m_Y;
};

// 상속 방법    ' : public 상속할 부모 클래스 '  ( : public CBase)
class CChild : public CBase
{
public:

	// " : " 의 뒤에 부모 클래스 (CBase(x))를 넣어서 부모클래스 생성자 호출
	// 부모 클래스의 생성자가 먼저 호출 된 후에 자식 생성자가 호출됨
	CChild(int x=1, int y=2, int z=3) : m_Z(z),  CBase(x, y)
	{
		printf("자식 클래스 (CChild) 생성\n");

	}

	//  파괴호출은 자식 파괴자 먼저 호출 후 부모 파괴자 호출됨
	~CChild()
	{
		printf("자식 클래스 (CChild) 파괴\n");

	}

	////가상함수로 재정의
	//virtual void printValue() override // override 를 뒤에 붙임
	//{
	//	CBase::printValue(); // 부모의 처리를 호출 -부모의 클래스에서 스코프 연산으로 함수 호출
	//	printf("m_x=%d m_Z=%d\n", m_X, m_Z); //위 아래 순서에 따라 처리 순서가 결정된다.
	//}

public:
	int m_Z;
};

//업캐스팅. 
//자식 클래스에서 부모클래스로 별다른 연산자 없이 자동으로 캐스팅 호출(읽어지는 ) 되는 방법.
void printobject(CBase** pBase, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("xpos=%d, ypos=%d\n", pBase[i]->m_X, pBase[i]->m_Y);
	}
}

int main()
{
	//CBase base(10);
	//base.m_X = 100;
	//base.printValue();

	//CChild child(20, 10);
	//child.m_X = 200; // 상속 받은 부모의 기능을 그대로 사용 가능
	//child.printValue();



	/*CChild* pArrChild = new CChild[10];
	printobject(pArrChild, 10);
	delete[] pArrChild;*/
	CBase** pArrBase = new CBase * [10]; //포인터로 배열을 생성 아직은 오브젝이 생성되기 전 for문을 돌리면서 실제로 생성
	for (int i = 0; i < 10; i++)
	{
		pArrBase[i] = new CChild;

	}
	
	printobject(pArrBase, 10);

	for (int i = 0; i < 10; i++)
	{
		delete pArrBase[i];

	}
	delete[] pArrBase;
}