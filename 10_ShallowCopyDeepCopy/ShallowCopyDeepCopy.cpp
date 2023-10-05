#include<stdio.h>
#include<iostream>


class CName
{
public:

	CName(const wchar_t* name): szName(nullptr), len(0)
	{
		len = wcslen(name)+1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, name);
	}
	//복사 생성자 및 복사 할당 연산자
	//파라미터로 (const 자신의클래스명 & other) 와 같이 자신의 클래스 타입을 레퍼런스로 받으면 복사 생성자
	CName(const CName& other) : szName(nullptr), len(0)
	{
		if (szName != nullptr)
		{
			delete[] szName;
		}
		len = wcslen(other.szName) + 1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, other.szName);
	}
		
	//파괴생성자
	~CName()
	{
		delete[] szName;
	}

	wchar_t* GetName() {
		return szName;
	}

	//대입 연산자 처리
	const CName& operator=(const CName& other)
	{
		//szName = other.szName;  //other.szName 이 가리키는 곳을 szName 도 가리키게 하겠다.(얕은 복사. 그래서 문제가됨)
		//len = other.len;

		if (szName != nullptr) //szName 을 일단 초기화 시켜야 한다.
		{
			delete[] szName;
		}
		// other.szName 을 복사해서 szName 에 넣는다(깊은 복사)
		len = wcslen(other.szName) + 1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, other.szName);
		return *this;
	}

	wchar_t* szName;
	size_t len; //int 64 같은 타입 

};

int main()
{
	_wsetlocale(LC_ALL, L"korean");

	CName name1(L"원");
	CName name2(L"철수");
	
	name1 = name2; // 대입 연산자 처리
	wprintf(L"name=%s", name1.GetName());

	
	CName name3 = name1; //복사 생성자 처리
	wprintf(L"name=%s", name3.GetName());

}