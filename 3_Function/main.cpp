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

//void callfunction()
//{
//	return;
//
//	printf("�Լ� ȣ��ƴ�!");
//
//}
//
//int calculatorminus(int x, int y) //unsigned int ���ϴ� ���� ����. ���̳ʽ����� ���� �� �����Ƿ�,
//{
//	printf("���̳ʽ� \n");
//	return x - y;
//}
//
//int calculatormultiply(int x, int y)
//{
//	printf("���ϱ� \n");
//	return x * y;
//}
//
//float calculatordivide (float x, float y)
//{
//	printf("������ \n");
//	return x / y;
//}
//float calculatorremain (int x, int y) 
// {
//	 printf("������ \n");
//	 return x % y;
// }
//
//
//////
//
//
//
//int Factorial(int Num)
//{
//	int FacNum = 1;
//	for (int i = Num; i > 0; --i)
//	{
//		FacNum *= i;
//	}
//	return FacNum;
//
//}
//
//
//
//int Factorial1(int Num2)
//{
//
//	int FacResult = 1;
//	for (int i = 1; i <= Num2; ++i)
//	{
//		FacResult *= i;
//	}
//		return FacResult;
//}
//
////����Լ�
//int reFactorial(int Num)
//{
//	if (Num == 1)
//	{
//		return 1;
//
//	}
//	return Num * reFactorial(Num - 1);
//}
//
//int SumToN(int Num)
//{
//	int FacSum = 0;
//	for (int i=1 ; i <= Num;++i)
//	{
//		FacSum += i;
//	}
//	return FacSum;
//}
//
//int SumToN2(int Num)
//{
//	if (Num == 1)
//	{
//		return 1;
//	}
//	return Num + SumToN2(Num-1);
//}


//return �� break �� ����//

int AAA()
{
	while (1)
	{
		printf("1st While! Start\n");
		break;
		printf("1st While! End\n");
	}

	while (1)
	{
		printf("2nd While! Start\n");
		return 0;
		printf("2nd While! End\n");
	}

	while (1)
	{
		printf("3rd While! Start\n");
		break;
		printf("3rd While! End\n");
	}
	return 0;

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

	//// 10�� ����//
	////Factorial
	//// 5 * 4 * 3 * 2 * 1 = 120;

	////�Լ���
	////Factorial �Լ�
	//printf("%d\n", Factorial(5));
	//printf("%d\n", Factorial1(4));
	//printf("%d\n", reFactorial(8));
	//printf("%d\n", SumToN(8));
	//printf("%d\n", SumToN2(8));

	////1~n���� �� ���ϴ� �Լ�
	////SumToN(int Num)
	////return (int)
	//
	//int nResult = 1;

	//int i = 1;
	//while (i<=10)// <-���ǽ��� true �� �Ʒ� �ڵ带 ����. 
	//				//	false �� while ���� �����ϰ� ���� �ڵ� ����.

	//{ 
	//	nResult *= i;
	//	i++;
	//}

	//printf("while Factorial = %d", nResult);

	//while (true)
	//{
	//	printf("i=%d\n", i);
	//	i++;
	//	printf("break ������\n");
	//	break; //�� ��ɾ ������ while�� ����.
	//	printf("break ������\n"); //����ȵ�.
	//}






//0~Num ���� ¦���� ���ϱ�
	int i = 0, Num = 10;
	int nResult = 0;

	

	while (i <= Num)
	{
		i++;
		if (i % 2 != 0)
			continue; //���� �ڵ带 �������� �ʰ� while �ڵ带 ��� ����.
		
		nResult += i;
	}
	printf("while if 0~Num EvenSum=%d\n", nResult);


	int hResult = 0;
	for (int i = hResult; i <= Num; i++)
	{
		if (i % 2 == 0)
		{
			continue; //���� �ڵ带 �������� �ʰ� for �ڵ带 ��� ����.
		}


		hResult += i;

	}
	printf("for 0~Num Ȧ��=%d\n", hResult);



	//
	int sResult = 0; 
	for (int i = sResult ; i <= Num; i++)
	{
		if (i % 2 != 0)
		{
			continue; //���� �ڵ带 �������� �ʰ� for �ڵ带 ��� ����.
		}


		sResult += i;
		
	}
	printf("for 0~Num EvenSum=%d\n", sResult);

	

// 

	AAA();

}
	











	
