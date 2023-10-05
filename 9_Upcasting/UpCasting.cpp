#include<stdio.h>

// ���
// ���� Ŭ������ ����� �߰��ϰų� �������Ͽ� ���ο� Ŭ������ �����ϴ� ���
// ���� = �⺻ �ֻ��� Ŭ���� ��� ����
// ���� = ���� + �����δٴ� ���
// ������ = ���� + ������ ���
// ��� = ������ + ���� ���
// ����� �������� ����� ��ӹ���

class CBase
{
public:
	CBase(int x=1, int y = 2) :m_X(x) , m_Y(y)
	{
		printf("�θ� Ŭ���� (CBase) ����\n");
	}
	~CBase()
	{
		printf("�θ� Ŭ���� (CBase) �ı�\n");

	}
	//�����Լ� virtual
	//�ڽ� Ŭ�������� �������� ������ ����ϴ� ����Լ�
	// �Լ� �տ� virtual Ű���带 ���δ�.
	//virtual void printValue() //�����Լ� virtual
	//{
	//	printf("m_x=%d\n", m_X);
	//}

public:
	int m_X;
	int m_Y;
};

// ��� ���    ' : public ����� �θ� Ŭ���� '  ( : public CBase)
class CChild : public CBase
{
public:

	// " : " �� �ڿ� �θ� Ŭ���� (CBase(x))�� �־ �θ�Ŭ���� ������ ȣ��
	// �θ� Ŭ������ �����ڰ� ���� ȣ�� �� �Ŀ� �ڽ� �����ڰ� ȣ���
	CChild(int x=1, int y=2, int z=3) : m_Z(z),  CBase(x, y)
	{
		printf("�ڽ� Ŭ���� (CChild) ����\n");

	}

	//  �ı�ȣ���� �ڽ� �ı��� ���� ȣ�� �� �θ� �ı��� ȣ���
	~CChild()
	{
		printf("�ڽ� Ŭ���� (CChild) �ı�\n");

	}

	////�����Լ��� ������
	//virtual void printValue() override // override �� �ڿ� ����
	//{
	//	CBase::printValue(); // �θ��� ó���� ȣ�� -�θ��� Ŭ�������� ������ �������� �Լ� ȣ��
	//	printf("m_x=%d m_Z=%d\n", m_X, m_Z); //�� �Ʒ� ������ ���� ó�� ������ �����ȴ�.
	//}

public:
	int m_Z;
};

//��ĳ����. 
//�ڽ� Ŭ�������� �θ�Ŭ������ ���ٸ� ������ ���� �ڵ����� ĳ���� ȣ��(�о����� ) �Ǵ� ���.
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
	//child.m_X = 200; // ��� ���� �θ��� ����� �״�� ��� ����
	//child.printValue();



	/*CChild* pArrChild = new CChild[10];
	printobject(pArrChild, 10);
	delete[] pArrChild;*/
	CBase** pArrBase = new CBase * [10]; //�����ͷ� �迭�� ���� ������ �������� �����Ǳ� �� for���� �����鼭 ������ ����
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