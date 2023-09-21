#include <iostream>
#include <stdlib.h>
int main()
{
	//컴퓨터는 0, 1 표현할 수 있는 1개를 1bit라고 한다.
	// 
	//2진법 4개 bit 일때는 0~15 , 16개 숫자를 표현
	// 2진법 8개 bit 일때는 0~255, 256개 숫자를 표현
	// 0000 0000 = 0
	// 0000 0001 = 1
	// 0000 0010 = 2
	// 0000 0011 = 3
	// 0000 0100 = 4
	// 0000 1000 = 8
	// 0000 1111 = 15
	// 
	// 0001 0000 = 16
	// 0010 0000 = 32
	// 0100 0000 = 64
	// 1000 0000 = 128
	// 1111 1111 = 255
	// 1000 0000 부호비트로 빠진다. (-)
	// 0000 0000 : 맨 앞에 부호가 1이면 (-) , 0이면 부호 (+)
	
	// 0111 1111 = 127
	// 0000 0001 
	// 1000 0000 = 128 (-128)
	//0000 0001(1) + 1111 1111 (-1) = 0000 0000 (0)
	//0110 0100(100) + 1001 1100(-100) = 0000 0000 (0)
	// 
	

	signed char c; // -128~127 // 1Byte

	unsigned char uc; // 0~255 // 1Byte


	c = 128;
	

	//short int = short : 작은 정수
	short s; // -32,768 ~ 32,767 // 0000 0000 0000 0000 //2Byte
	//long int = long : 큰 정수
	long l; // 4byte; 
	
	// long l; //4byte;
	

	//int 자료형
	//최초 16bit 아키텍쳐 16bit 자료형
	// 32bit 아키텍처 32bit
	// 64bit 아키텍처 일때는 32bit
	// int64 = 64bit


	int A; //숫자, 음수, 양수, 정수(0, 1, 2,)
	unsigned int uA; // 숫자, 양수, 정수(0,1,2,)


	float f = 0.1f; //4Byte
	f = 2.0f;
    f = 2.f; //0을 빼고도 사용

	// 부동소수점

	double d = 0.1; //8Byte  float 보다 더 정밀하다



	int i2 = 0;
	float f2 = 1.0f;

	i2 = (int)f2;
	f2 = (float)i2;
	f2 = float(i2);
	f2 = (float)(i2 + 1);
	i2 = int(f2) + 1;


	printf("%d, i2");






		//연산자
		//+, -. *, /, %,++, --

		//대입연산자 (=)
		//오른쪽에 값을 왼쪽에 대입한다.
	i2 = 1 + 1;
	i2 = i2 + 1;
	i2 += 1; //i2 = i2 + 1 ; 과 동일하다

	float divide = 10 / 2.0f;//10*0.5f;
	float remain = 10 % 3;
	// 실수 기리 나머지 연산 불가능 (몇번째 소수점 자리를 기준으로 연산을 해야하는지 알 수 없음)
	//즉,  둘다 정수 일 때만 나머지 연산 가능

	int add = 0 , minus = 0; //변수를 선언할 때 대입연산자를 이용해서 값을 초기화 해주는 것
	//add 나 minus 에 값이 쓰레기 값이 들어가 있을 수 있다.
	//add++; //후치 연산
	// ++add; //전치 연산 (후치 연산과 동일하게 작동한다)
	// add++;

	

	int addR = 0, addL = 0;
	addL = ++add; //전치 
	addR = add++; //후치 은 대입연산자(=) 보다 뒤에 실행된다.


	minus--;
	minus--;
	minus--;

	

	//	논리 연산자
	//	&&(and) , ||(or), !(not)
	//	 and 는 둘다 참이면 참 그렇지 않으면 거짓
	//	 or 둘 중에 하나만 참이면 참
	//	 not 참이면 거짓, 거짓이면 참
	//	yes : 0이 아닌 값 true(1)

	//no : 0, false

	// bool bResult = true;
	// bool bResult = false;
	// bool bResult = 1;  (true)
	// bool bResult = 0;	(false)
	bool bResult = 0;



	bResult =			 0 && 20;
	bResult =			 0 || 20;
	bResult =			 !1;
	bResult =			 !0;

	// 주석 :컴파일에 포함되지 않는 문자로 코드로 인식하지 않는다.
	/* 주석 */


	// 자주쓰는 단축키
	// 지정한 구문 주석 : ctrl + k -> c
	// 지정한 주석 해제 : ctrl + k -> u
	// alt + drag : 부분 영역 지정

	// 디버깅 단축키
	// f5 : 디버깅 시작, 디버깅 계속 진행
	// f9 : 중단점 생성 및 해제(브레이크포인트)
	// f10 : 디버깅 중 다음 구문 진행
	// f11 : 디버깅 중 함수 내부 구문 진행
	// shift + f5 : 디버깅 중단(종료)

	// 비교 연산자
	// == : 같으면 true, 아니면 false
	// != : 같으면 flase, 아니면 true
	// > : 왼쪽이 오른쪽보다 크면은 true, 아니면 false
	// >= : 왼쪽이 오른쪽보다 크거나 같으면 true, 아니면 false
	// < : 왼쪽이 오른쪽보다 작으면 true, 아미녀 false
	// <= : 왼쪽이 오른쪽보다 작거나 같으면 true, 아니면 false

	bResult = (10 == 11);
	bResult = (10 != 11);
	bResult = (10 > 11);
	bResult = (10 < 11);

		
	int nResult = (10 == 11) ? 100 : 50;

	//
	unsigned int total_sec = 987654321;//초
	unsigned int day = 0, min = 0, hour = 0 , sec = 0 ;
	
	/*min = sec / 60;
	hour = min / 60;
	day = hour / 24;
	*/
	
	min = total_sec / 60;
	sec = total_sec % 60;

	hour	= min / 60;
	min		= min % 60;
	day		= hour / 24;
	hour	= hour % 24;
	
	

	system("pause");
}