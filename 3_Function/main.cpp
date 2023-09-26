#include <stdio.h>


 //함수형
 //unsigned int :반환 자료형 <-아웃풋
 //calculatorsum :함수 이름
 //(int x, int y) : 매개 변수 (파라메타) <-인풋
int calculatorsum(int x, int y)
{ //함수시작
	printf("함수 시작했다.\n");
	return x + y;//반환 및 종료 처리
	printf("함수 끝\n");
} //함수 끝


// 빼기 함수 만들기
// calculatorminus

// 곱하기 함수 만들기
// calculatormultiply

// 나누기 함수 만들기
// calculatordivide

// 나머지 함수 만들기
// calculatorremain

//void callfunction()
//{
//	return;
//
//	printf("함수 호출됐다!");
//
//}
//
//int calculatorminus(int x, int y) //unsigned int 않하는 것이 좋다. 마이너스값이 나올 수 있으므로,
//{
//	printf("마이너스 \n");
//	return x - y;
//}
//
//int calculatormultiply(int x, int y)
//{
//	printf("곱하기 \n");
//	return x * y;
//}
//
//float calculatordivide (float x, float y)
//{
//	printf("나누기 \n");
//	return x / y;
//}
//float calculatorremain (int x, int y) 
// {
//	 printf("나머지 \n");
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
////재귀함수
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


//return 과 break 의 차이//

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
	//printf("함수 실행 결과 = %d\n", nresult);

	//nresult = calculatorminus(2, 1);
	//printf("함수 실행 결과 = %d\n", nresult);

	//nresult = calculatormultiply(3, 3);
	//printf("함수 실행 결과 = %d\n", nresult);

	//float fresult = 0.0f;//0이 아님. 0.0f
	//fresult = calculatordivide(10, 3);
	//printf("함수 실행 결과 =%f\n", fresult);

	//nresult = calculatorremain(5, 2);
	//printf("함수 실행 결과 =%d\n", nresult);

	//
	//callfunction();





	//25일자//
	// 9시 수업//
	// 반복문
	// for 문
	//for (/*초기 설정*/int i = 0; /*반복 조건 체크*/i < 10; /*반복 후 처리*/++i)
	//{//반복 처리할 코드 시작
	//	printf("%d Hello\n", i);
	//
	//}//반복 처리할 코드 끝

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

	//// 10시 수업//
	////Factorial
	//// 5 * 4 * 3 * 2 * 1 = 120;

	////함수로
	////Factorial 함수
	//printf("%d\n", Factorial(5));
	//printf("%d\n", Factorial1(4));
	//printf("%d\n", reFactorial(8));
	//printf("%d\n", SumToN(8));
	//printf("%d\n", SumToN2(8));

	////1~n까지 합 구하는 함수
	////SumToN(int Num)
	////return (int)
	//
	//int nResult = 1;

	//int i = 1;
	//while (i<=10)// <-조건식이 true 면 아래 코드를 실행. 
	//				//	false 면 while 문을 종료하고 다음 코드 실행.

	//{ 
	//	nResult *= i;
	//	i++;
	//}

	//printf("while Factorial = %d", nResult);

	//while (true)
	//{
	//	printf("i=%d\n", i);
	//	i++;
	//	printf("break 실행전\n");
	//	break; //이 명령어를 만나면 while문 종료.
	//	printf("break 실행후\n"); //실행안됨.
	//}






//0~Num 까지 짝수만 더하기
	int i = 0, Num = 10;
	int nResult = 0;

	

	while (i <= Num)
	{
		i++;
		if (i % 2 != 0)
			continue; //다음 코드를 실행하지 않고 while 코드를 계속 실행.
		
		nResult += i;
	}
	printf("while if 0~Num EvenSum=%d\n", nResult);


	int hResult = 0;
	for (int i = hResult; i <= Num; i++)
	{
		if (i % 2 == 0)
		{
			continue; //다음 코드를 실행하지 않고 for 코드를 계속 실행.
		}


		hResult += i;

	}
	printf("for 0~Num 홀수=%d\n", hResult);



	//
	int sResult = 0; 
	for (int i = sResult ; i <= Num; i++)
	{
		if (i % 2 != 0)
		{
			continue; //다음 코드를 실행하지 않고 for 코드를 계속 실행.
		}


		sResult += i;
		
	}
	printf("for 0~Num EvenSum=%d\n", sResult);

	

// 

	AAA();

}
	











	
