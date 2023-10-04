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
	CBase(int x) :m_X(x)
	{
		printf("부모 클래스 (CBase) 생성\n");
	}
	~CBase()
	{
		printf("부모 클래스 (CBase) 파괴\n");

	}
public:
	int m_X;
};

// 상속 방법    ' : public 상속할 부모 클래스 '  ( : public CBase)
class CChild : public CBase
{
public:

	// " : " 의 뒤에 부모 클래스 (CBase(x))를 넣어서 부모클래스 생성자 호출
	// 부모 클래스의 생성자가 먼저 호출 된 후에 자식 생성자가 호출됨
	CChild(int x, int y) : m_Y(y),  CBase(x)
	{
		printf("자식 클래스 (CChild) 생성\n");

	}
	~CChild()
	{
		printf("자식 클래스 (CChild) 파괴\n");

	}
public:
	int m_Y;
};

int main()
{
	CBase base(10);
	base.m_X = 100;

	CChild child(20, 10);
	child.m_X = 200; // 상속 받은 부모의 기능을 그대로 사용 가능

}