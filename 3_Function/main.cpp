#include <stdio.h>


 //�Լ���
 //unsigned int :��ȯ �ڷ��� <-�ƿ�ǲ
 //calculatorsum :�Լ� �̸�
 //(int x, int y) : �Ű� ���� (�Ķ��Ÿ) <-��ǲ
int calculatorsum(int x, int y)
{ //�Լ�����
	printf("�Լ� �����ߴ�.\n");
	return x + y;//��ȯ �� ���� ó��
	printf("�Լ� ��\n");
} //�Լ� ��


// ���� �Լ� �����
// calculatorminus

// ���ϱ� �Լ� �����
// calculatormultiply

// ������ �Լ� �����
// calculatordivide

// ������ �Լ� �����
// calculatorremain

void callfunction()
{
	return;

	printf("�Լ� ȣ��ƴ�!");

}

int calculatorminus(int x, int y) //unsigned int ���ϴ� ���� ����. ���̳ʽ����� ���� �� �����Ƿ�,
{
	printf("���̳ʽ� \n");
	return x - y;
}

int calculatormultiply(int x, int y)
{
	printf("���ϱ� \n");
	return x * y;
}

float calculatordivide (float x, float y)
{
	printf("������ \n");
	return x / y;
}
float calculatorremain (int x, int y) 
 {
	 printf("������ \n");
	 return x % y;
 }


////



int Factorial(int Num)
{
	int FacNum = 1;
	for (int i = Num; i > 0; --i)
	{
		FacNum *= i;
	}
	return FacNum;

}



int Factorial1(int Num2)
{

	int FacResult = 1;
	for (int i = 1; i <= Num2; ++i)
	{
		FacResult *= i;
	}
		return FacResult;
}

//����Լ�
int reFactorial(int Num)
{
	if (Num == 1)
	{
		return 1;

	}
	return Num * reFactorial(Num - 1);
}

int SumToN(int Num)
{
	int FacSum = 0;
	for (int i=1 ; i <= Num;++i)
	{
		FacSum += i;
	}
	return FacSum;
}

int SumToN2(int Num)
{
	if (Num == 1)
	{
		return 1;
	}
	return Num + SumToN2(Num-1);
}

int main()
{
	//unsigned int nresult = 0;
	//nresult = calculatorsum(1, 1);
	//printf("�Լ� ���� ��� = %d\n", nresult);

	//nresult = calculatorminus(2, 1);
	//printf("�Լ� ���� ��� = %d\n", nresult);

	//nresult = calculatormultiply(3, 3);
	//printf("�Լ� ���� ��� = %d\n", nresult);

	//float fresult = 0.0f;//0�� �ƴ�. 0.0f
	//fresult = calculatordivide(10, 3);
	//printf("�Լ� ���� ��� =%f\n", fresult);

	//nresult = calculatorremain(5, 2);
	//printf("�Լ� ���� ��� =%d\n", nresult);

	//
	//callfunction();





	//25����//
	// 9�� ����//
	// �ݺ���
	// for ��
	//for (/*�ʱ� ����*/int i = 0; /*�ݺ� ���� üũ*/i < 10; /*�ݺ� �� ó��*/++i)
	//{//�ݺ� ó���� �ڵ� ����
	//	printf("%d Hello\n", i);
	//
	//}//�ݺ� ó���� �ڵ� ��

	/*for (int i = 0; i < 10; ++i)
	{
		printf("Hello\n");
	}*/

	/*int a = 0;
	for (; a < 5;++a)
		{
			printf("%d\n", a);
		}

	for (a = 0; a < 10; ++a )
	{
		printf("%d\n", a+=2);
	}*/

	// 10�� ����//
	//Factorial
	// 5 * 4 * 3 * 2 * 1 = 120;

	//�Լ���
	//Factorial �Լ�
	printf("%d\n", Factorial(5));
	printf("%d\n", Factorial1(4));
	printf("%d\n", reFactorial(8));
	printf("%d\n", SumToN(8));
	printf("%d\n", SumToN2(8));

	//1~n���� �� ���ϴ� �Լ�
	//SumToN(int Num)
	//return (int)
	
}



	











	
