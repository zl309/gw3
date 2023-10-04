#include<stdio.h>
#include"MyClass.h"

struct stMyStruct //������
{
	int a;
};

// Class ( ����, �ڷ���)
// Class �� ����� ���� Type �̶�� �Ѵ�.
// C �� Struct �� Ȯ��� ����
// C++ �� Ŭ������ �� ���� �׼��� (����) ������(private, protected, public) �� ���� �׼����� ����Ǵ� ���
// ������ �� �Լ��� �ִ� ����� ���� ���� �Ǵ� ������ ������ �����.
//  �׼�Ʈ �����ڸ� ����Ͽ� ������ �� �Լ��� ����� �� ĸ��ȭ��� �Ѵ�.
// Class �� �ѱ۷� �����ϸ� ��Ʋ�̶�� ��, ��밡���� ��ü�� �ƴ�.
//  ��ü�� �����ϱ� ���� ����� ��Ÿ����.

// ��ü(Object) ==================
// Class �� ����ؼ� �����Ȱ� ��ü��� �Ѵ�.
// Class �� ������ �������� �����ǰ� �޸𸮿��� ������ ������

// ��ü ���� ���α׷��� ===============================
// ��ü ���� ���α׷����� ��ǻ�� ���α׷��� ��ɾ��� ������� ���� �ð����� ��� ���� ���� ������ ������ ���� ��.
// �� '��ü' ���� �������� ������ ������� �ϴ� �з�����
// ������ ��ü�� �޽����� �ְ� �ް�, �����͸� ���������� ó���� �� �ִ�.


class CMyClass //������
{
	//���� ������
	// private: �ܺο��� ���� �Ұ�
	// protectd : ��� ������ �� ������ ����. �̿ܿ��� ���� �Ұ�.
	// //Public : ��𼭵� ���� ����
	// 
	// ���� ���� �����ڰ� ������ �⺻�����δ� private 
	// int b; //Ŭ���� �ȿ� ����� ������ ��� ������� �Ѵ�.
	int m_b; // �����ڵ��� ���������� ��� ������°� ǥ���ϱ� ���� m_ �� ���̱⵵ �Ѵ�.
public:
	 //������
	// Ŭ������ ������ �� ȣ��Ǵ� �Լ�
	//�������� �ʾƵ� �⺻ �����ڰ� ����
	// �����ڵ� private �̸�  �ܺο� ȣ�� �Ұ�. �ݵ�� public ���� �����ؾ� �Ѵ�.
	// �����ڵ� �Ķ��Ÿ�� ������ Ÿ�Կ� ���� Overload(Ÿ�Ժ� ���� ���� �Լ��� ����) �� �� �ִ�.
	// (int valueA= 0 ) �̷� ������� ������ �Ķ���͸� �־��� �� �ִ�.
	
	// �Ķ���� ������ ���°� �Է� ��Ŀ� ���� ������ �Ұ��� �ϸ� ������ �߻��Ѵ�. (int valueA=0, int valueB=0) �� ���� ������ ���� ������ ���¿��� ȣ��ÿ�
	//  �� ���� �Է°��� ������ �� ��° ������ ���� ������ ������ ȥ���� ���� ������ ������ �߻��Ѵ�.

	CMyClass(int valueA=0) : a(valueA), m_b(0), c(0) /// �Է°�(int valueA=0)�� �������� �� �ִ�.
	{
		printf("������ A ȣ��� \n");

	}

	CMyClass(int valueA, int valueB) : a(valueA), m_b(valueB), c(0) /// ���� ���� Ư�� ������ ���� �� �ִ�.
	{
		printf("������ B ȣ��� \n");

	}

	CMyClass(int valueA, int valueB, int valueC) : a(valueA), m_b(valueB), c(valueC) /// ���� ���� Ư�� ������ ���� �� �ִ�.
	{
		printf("������ C ȣ��� \n");

	}
	//


	//�ı���
	// Ŭ������ �ı��� �� ȣ��Ǵ� �Լ�
	// �������� �ʾƵ� �⺻ �ı��� ����
	// �ı��ڵ� public �� �ƴϸ� ȣ���� �Ұ���, �ݵ�� public ���� ����
	~CMyClass()
	{
		printf("�ı��� ȣ��� \n ");
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
		c = num; //  �𽺰� ������ ����.     this->c = num;       �Ϲ������δ� this Ű���尡 ������.
	}

	// =========================================
	//������ �����ε�(Operator Overloading)
	//���Կ����� (�⺻������ ������)
	//const CMyClass& : �������� ��ȯ�� ������
	// operator = : �����ε��� ������
	// (const CMyClass& other) : �����ʿ� �Էµ� ����

	//cMy3 = cMy + cMy2;
	//cMy3 = CMyClass(a + other.a , m_b+ other.m_b, c+other.c);
	const CMyClass& operator=(const CMyClass& other)
	{
		a = other.a;
		m_b = other.m_b;
		c = other.c;
		return*this; // Ŭ���������� �Լ��� ȣ��� ��� ��ü�� �ǹ���

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
		// ���۷��� ����
		// �޸� ������ ���� �ʰ� ������ �����Ͽ� �޸𸮸� ȿ�������� ����ϱ� ���� ������


		int num = 100;
						stMyStruct stTest;

		// ������ ������ ������ ������ �ּ� ���� �����Ѵ�.
		// ������ ������ �ּҰ��� ������  ����Ű�� �ִ� �ּ� ���� �ٸ���.

		int* pNum = &num; // pNum  (������ ���� )���� num�� �ּ� ���� ����. ��, pNum �� num ������ ����Ű�� �ִ�.
						stMyStruct* pTest = &stTest;
						pTest->a = 0;
		printf("&pNum != &num ? %d\n", (int(&pNum) != int(&num)));

		// ���۷��� ������ ���� ����� �ּ� ���� �����ϴ�.
		
		int& refNum = num;
						stMyStruct& refTest = stTest;
						refTest.a = 0;
		printf("&refNum == &num ? %d\n", (int(&refNum) == int(&num)));

	}




	//stMyStruct stMy;
	//stMy.a = 0; 

	CMyClass cMy(100);// <----������ ȣ���. /// ���� �� �� �־����� �� �� �־������� ���� �ٸ� �Լ��� ȣ��
	CMyClass cMy2(400, 200);

	CMyClass cMy3;
	CMyClass cMy4;
	printf("cMy.a=%d\n", cMy.a);
	//cMy.a = 0; 
	cMy.SecC(2);
	cMy.SecC(29);
	cMy.SecC(55);
	cMy.SecC(4); // Ư�� ������ �����ϱ� ���� �Լ�. c�� private ���������� �Լ��� �����س������� �����Լ����� ������ �� �� �ִ�. 
								// Ư �� ������ �����ϱ� ���� �Լ��� �����ؼ� �����ϴ°� �⺻ ��Ģ�̴�.
	// cMy.c =100; // ���� ������ private ���·� �س��ٸ� �����ڰ� ���� �������� ����� �ǵ��� �ִٴ� ��.

	cMy = cMy2;
	cMy.PrintAllValue();
	//cMy.a = 1000;
	cMy4 = cMy - cMy2;
	cMy4.PrintAllValue();
} // <----�ı��� ȣ���.(���� �Լ� ��)
