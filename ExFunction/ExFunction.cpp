#include<stdio.h>
#include"Divid.h"
#include"Minus.h"
#include"Multi.h"
#include"Sum.h"
#include<iostream>
//�Լ��̸� : Sum
// �Ű� ����(�Ķ����) : int a, int b
// ��ȯ �� : int
// a �� b �� ���� ����� ��ȯ�Ͻÿ�.

//�Լ� �̸�:  Minus
// �Ű� ���� (�Ķ����): int a, int b
// ��ȯ ��:  int
// a �� b�� ������ ����� ��ȯ�Ͻÿ�

//�Լ� �̸�:  Multi
// �Ű� ���� (�Ķ����): int a, int b
// ��ȯ ��:  int
// a �� b�� ���ϱ��� ����� ��ȯ�Ͻÿ�

//�Լ� �̸�:  Divid
// �Ű� ���� (�Ķ����): float a, float b
// ��ȯ ��:  float
// a �� b�� �������� ����� ��ȯ�Ͻÿ�

// �Լ� �̸� : Average
// �Ķ���� int &Sum, int a, int b, int c
// ��ȯ�� ����
//���۷��� ���� Sum���� a, b, c �� ��� ���� ��ȯ


void Average(int&Sum,int& a, int b, int c)
{
	a = 77;
	Sum=(b+c);
}
		

// �Լ��̸� : ArraySum
// �Ķ���� int* arr, int length
// ��ȯ �� : int
// �迭 "arr" �� �迭�� ���� "length" �� �Ķ���ͷ� �޾Ƽ� ��� �迭�� ���� ��ȯ

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

// Ŭ���� �̸� : CShop
// �ɹ� ���� : m_value(�⺻��:0)
// �ɹ� �Լ� �߰� : printValue
// printValue �Լ� ��� : "Value=%d"�� m_value ���

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





// Ŭ���� �̸� : CPhoneShop
// �θ� Ŭ���� : CShop
// ������ �Ķ��Ÿ : int PhoneCnt ( m_PhoneCnt�� �� ���� )
// ������ �Ķ��Ÿ : int PhonePrice ( m_PhonePrice�� �� ���� )
// �ɹ� ���� : m_PhoneCnt
// �ɹ� ���� : m_PhonePrice
// printValue �Լ� ��� : "Value=%d"�� m_PhoneCnt * m_PhonePrice���

//CPhoneShop(10, 100) ���� �� ��ü�� printValue ���
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
// Ŭ���� �̸� : CFruitShop
// ������ �Ķ��Ÿ : int FruitCnt ( m_FruitCnt�� �� ���� )
// ������ �Ķ��Ÿ : int FruitPrice ( m_FruitPrice�� �� ���� )
// �θ� Ŭ���� : CShop
// �ɹ� ���� : m_FruitCnt
// �ɹ� ���� : m_FruitPrice
// printValue �Լ� ��� : "Value=%d"�� m_FruitCnt * m_FruitPrice���

//CFruitShop(10, 100) ���� �� ��ü�� printValue ���



int main()
{
	int nresult = 0;
	
	//printf�� "Sum=%d" �� Sum �Լ� ��� ���
	nresult = Sum(3, 2);
	printf("Sum=%d\n", nresult);

	//printf�� "Minus=%d" �� Minus �Լ� ��� ���
	nresult = Minus(3, 2);
	printf("Minus=%d\n", nresult);

	//printf�� "Multi=%d" �� Multi �Լ� ��� ���
	nresult = Multi(3, 2);
	printf("Multi=%d\n", nresult);

	//printf�� "Divid=%f" �� Divid �Լ� ��� ���
	float fresult = 0.0f;
	fresult = Divid(3, 2);
	printf("Divid=%f\n", fresult);

	//���۷��� ����
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
