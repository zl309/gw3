#include <stdio.h>


// 함수형
// unsigned int :반환 자료형 <-아웃풋
// CalculatorSum :함수 이름
// (int x, int y) : 매개 변수 (파라메타) <-인풋


unsigned int CalculatorSum(int x, int y)
{ //함수시작
	printf("함수 시작했다.\n");
	return x + y;//반환 및 종료 처리
	printf("함수 끝\n");
} //함수 끝


// 빼기 함수 만들기
// CalculatorMinus

// 곱하기 함수 만들기
// CalculatorMultiply

// 나누기 함수 만들기
// CalculatorDivide

// 나머지 함수 만들기
// CalculatorRemain

void CallFunction()
{
	return;

	printf("함수 호출됐다!");

}

unsigned int CalculatorMinus(int x, int y)
{
	printf("마이너스 \n");
	return x - y;
}

unsigned int CalculatorMultiply(int x, int y)
{
	printf("곱하기 \n");
	return x * y;
}

 float CalculatorDivide(float x, float y)
{
	printf("나누기 \n");
	return x / y;
}
 int CalculatorRemain (int x, int y)
 {
	 printf("나머지 \n");
	 return x % y;
 }

int main()

{
	unsigned int nResult = 0;
	nResult = CalculatorSum(1, 1);
	printf("함수 실행 결과 = %d\n", nResult);

	nResult = CalculatorMinus(2, 1);
	printf("함수 실행 결과 = %d\n", nResult);

	nResult = CalculatorMultiply(3, 3);
	printf("함수 실행 결과 = %d\n", nResult);

	float fResult = 0;
	fResult = CalculatorDivide(10, 3);
	printf("함수 실행 결과 =%f\n", fResult);

	nResult = CalculatorRemain(5, 2);
	printf("함수 실행 결과 =%d\n", nResult);
	CallFunction();
}
