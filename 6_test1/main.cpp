#include<stdio.h>
#include<iostream>

int main()
{

	_wsetlocale(LC_ALL, L"korean"); //한글 출력용으로 넣어놈

	//2에 배수 출력하기 (0~100)
	//예)0 2 4 6 8 ~96 98 100

	
	for (int i = 0; i < 101; i++)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}
	//n은 숫자 하나를 입력 받기
	//n에 배수 출력하기(0~100)
	int num1=0;
	scanf_s("%d", &num1);
	for (int i = 1; i < 100; i++)
	{
		num1 = i*num1 ;
		
		if (num1 > 100)
		{
			break;
		}
		printf("%d\n", num1);
	}

	//(0~100) 2에 배수에 갯수 출력
	int c = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (i % 2 == 0)
		{
			c++;
		}
	}
	printf("갯수는%d\n", c);


	//abcdef를 역으로 출력하기 fedcba
	wchar_t szWChar[20] = L"abcdef";
	int t=wcslen(szWChar);

	for(int i = 0; i < t; i++)
	{

		wprintf(L"역=%c\n", szWChar[t-1-i]); //%s 로 하면 다수의 문자열. %c로 하면 한글자.
	}


	//wchar_t 형으로 문자 입력 받기
	wchar_t szWCharInput[19] = L"";
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);

	//입력받은 문자열에서 'a'문자 갯수 출력
	int	d = 0;
	for (int i = 0; i < (unsigned)_countof(szWCharInput); i++)
	{
				
		if (szWCharInput[i] == 'a')
			d++;
		

		else if(szWCharInput[i]=='b')
			d++;

	}
	printf("%d\n", d);
}


		


		