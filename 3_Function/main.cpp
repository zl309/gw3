#include <stdio.h>


// �Լ���
// unsigned int :��ȯ �ڷ��� <-�ƿ�ǲ
// CalculatorSum :�Լ� �̸�
// (int x, int y) : �Ű� ���� (�Ķ��Ÿ) <-��ǲ


unsigned int CalculatorSum(int x, int y)
{ //�Լ�����
	printf("�Լ� �����ߴ�.\n");
	return x + y;//��ȯ �� ���� ó��
	printf("�Լ� ��\n");
} //�Լ� ��


// ���� �Լ� �����
// CalculatorMinus

// ���ϱ� �Լ� �����
// CalculatorMultiply

// ������ �Լ� �����
// CalculatorDivide

// ������ �Լ� �����
// CalculatorRemain

void CallFunction()
{
	return;

	printf("�Լ� ȣ��ƴ�!");

}

unsigned int CalculatorMinus(int x, int y)
{
	printf("���̳ʽ� \n");
	return x - y;
}

unsigned int CalculatorMultiply(int x, int y)
{
	printf("���ϱ� \n");
	return x * y;
}

 float CalculatorDivide(float x, float y)
{
	printf("������ \n");
	return x / y;
}
 int CalculatorRemain (int x, int y)
 {
	 printf("������ \n");
	 return x % y;
 }

int main()

{
	unsigned int nResult = 0;
	nResult = CalculatorSum(1, 1);
	printf("�Լ� ���� ��� = %d\n", nResult);

	nResult = CalculatorMinus(2, 1);
	printf("�Լ� ���� ��� = %d\n", nResult);

	nResult = CalculatorMultiply(3, 3);
	printf("�Լ� ���� ��� = %d\n", nResult);

	float fResult = 0;
	fResult = CalculatorDivide(10, 3);
	printf("�Լ� ���� ��� =%f\n", fResult);

	nResult = CalculatorRemain(5, 2);
	printf("�Լ� ���� ��� =%d\n", nResult);
	CallFunction();
}
