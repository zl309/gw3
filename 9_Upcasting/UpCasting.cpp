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
	CBase(int x) :m_X(x)
	{
		printf("�θ� Ŭ���� (CBase) ����\n");
	}
	~CBase()
	{
		printf("�θ� Ŭ���� (CBase) �ı�\n");

	}
public:
	int m_X;
};

// ��� ���    ' : public ����� �θ� Ŭ���� '  ( : public CBase)
class CChild : public CBase
{
public:

	// " : " �� �ڿ� �θ� Ŭ���� (CBase(x))�� �־ �θ�Ŭ���� ������ ȣ��
	// �θ� Ŭ������ �����ڰ� ���� ȣ�� �� �Ŀ� �ڽ� �����ڰ� ȣ���
	CChild(int x, int y) : m_Y(y),  CBase(x)
	{
		printf("�ڽ� Ŭ���� (CChild) ����\n");

	}
	~CChild()
	{
		printf("�ڽ� Ŭ���� (CChild) �ı�\n");

	}
public:
	int m_Y;
};

int main()
{
	CBase base(10);
	base.m_X = 100;

	CChild child(20, 10);
	child.m_X = 200; // ��� ���� �θ��� ����� �״�� ��� ����

}