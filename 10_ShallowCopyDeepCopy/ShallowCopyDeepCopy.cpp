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
	//���� ������ �� ���� �Ҵ� ������
	//�Ķ���ͷ� (const �ڽ���Ŭ������ & other) �� ���� �ڽ��� Ŭ���� Ÿ���� ���۷����� ������ ���� ������
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
		
	//�ı�������
	~CName()
	{
		delete[] szName;
	}

	wchar_t* GetName() {
		return szName;
	}

	//���� ������ ó��
	const CName& operator=(const CName& other)
	{
		//szName = other.szName;  //other.szName �� ����Ű�� ���� szName �� ����Ű�� �ϰڴ�.(���� ����. �׷��� ��������)
		//len = other.len;

		if (szName != nullptr) //szName �� �ϴ� �ʱ�ȭ ���Ѿ� �Ѵ�.
		{
			delete[] szName;
		}
		// other.szName �� �����ؼ� szName �� �ִ´�(���� ����)
		len = wcslen(other.szName) + 1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, other.szName);
		return *this;
	}

	wchar_t* szName;
	size_t len; //int 64 ���� Ÿ�� 

};

int main()
{
	_wsetlocale(LC_ALL, L"korean");

	CName name1(L"��");
	CName name2(L"ö��");
	
	name1 = name2; // ���� ������ ó��
	wprintf(L"name=%s", name1.GetName());

	
	CName name3 = name1; //���� ������ ó��
	wprintf(L"name=%s", name3.GetName());

}