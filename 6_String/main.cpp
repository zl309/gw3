#include<stdio.h>
#include<iostream>//문자열의 길이를 구하기 위해 wcslen 함수를 사용하기 위해 불러옴
#include<assert.h>// 주의, 알림을 호출할 함수를 불러옴
unsigned int GetStringLendgth(const wchar_t* _pString)
{
	int i = 0;
	while (1)
	{
		wchar_t c = *(_pString + i); //순차적인 주소값에 문자를 저장
		//if (c==0)
		if (c == '\0')
		{
			break;		

		}
		i++;
	}
	return i;
}
//_Dest : "abcde"
//_pSoure:"fghji"
//StringCar(_Dest, 20, L"hij");
//wprintf(L"szWCharlen=%s\n", _dest);

void StringCat(wchar_t* _Dest, unsigned int size, const wchar_t* _pSource)
{
	int destLen = GetStringLendgth(_Dest);
	int sourceLen = GetStringLendgth(_pSource);
	//if (size < destLen + sourceLen + 1);
	/*{
		assert(nullptr);
	}*/
	
	wchar_t c = *(_Dest + destLen); //순차적인 주소값에 문자를 저장

	for (int i = 0; i <= sourceLen+1; i++) 
	{
		*(_Dest + destLen+i) = *(_pSource + i);
		//_Dest[destLen + i] = _pSource[i]; //위에와 같은 문법.
	}





	/*int i = 0;
	while (1)
	{
		wchar_t c = *(_pSource + i);

		if (c == '\0')
		{
			break;
		}
		i++;
	}
	int j = 0;
	while (1)
	{
		wchar_t c = *(_Dest + j);

		if (c == '\0')
		{
			break;
		}
		j++;
	}
	_Dest[j];
	_pSource[i];

	for ( = 0, i + j, ++j)
	{

	}
	*/
	
}

int StringCmp(const wchar_t* _pLeft, const wchar_t* _pRight)
{
	int LeftLen = GetStringLendgth(_pLeft);
	int RightLen = GetStringLendgth(_pRight);

	int nLoop = (LeftLen < RightLen) ? LeftLen : RightLen;//가장 짧은 문자의 길이 만큼만 비교한다.

	for (int i = 0; i < nLoop; i++)
	{
		if (_pLeft[i] == _pRight[i])//문자 같으면 크기비교 결과를 실행하지 않고 다시 for문을 실행
			continue;		
		return (_pLeft[i] > _pRight[i]) ? 1 : -1;//크기비교 결과를 반환
	}

	if (LeftLen != RightLen)
	{
		//left가 길면 1, right 길면 -1
		return (LeftLen > RightLen) ? 1 : -1; //크기비교 결과를 반환
	}
	return 0; //모든 문자가 같고 길이도 같다.
}




int main()
{
	//문자 처리
	//multi-byte
	//127개의 아스키 코드 문자 표기, 문자에 따라 가변형으로 크기가 변경됨.
	//국가간의 호환이 되지 않는 방식으로 다른 시스템으로 보내면 글자가 깨짐
	//일본어 텍스트 파일을 한글 윈도우에서 열었을 때 뷁어로 깨지는 현상이 생김
	//철저히 자국어 표기만을 위한 인코딩. 외국어 교재 같이 다른 문자체계가 필요한 경우 불편함.
	char c1 = 'a'; //1Byte(0~255) //글자하나는 따옴표 한 개 짜리로.
	printf("c1=%c\n", c1);//문자열은 쌍따옴표. 한글자 char 출력시에는 %c로 사용.
	
	setlocale(LC_ALL, "korean"); //멀티바이트 한글 사용가능하게.

	char arrC1[10] = "abc한글";//영어는 1Byte, 한글은 2Byte 사용
	printf("arrC1=%s\n", arrC1);//문자열 char 출력시에는 %s 사용.
	
	//wchar_t //와이드 캐릭터 형이 생김.와이드 문자.
	//멀티 바이트 의 문제를 해결하기 위해 나온 유니코드 방식.
	//세계의 모든 문자를 표현할 수 있기 때문에 최근에 많이 사용됨
	//가장 자주 사용하는 방식은 UTF-8 이 있다.

	wchar_t wc1 = L'a'; //2Byte(0~65535). 약 3만개표기가능
	wprintf(L"wc=%c\n", wc1); //와이드 프린트f 사용. "앞에 L을 붙임.
							  
	//배열로 처리
	
	_wsetlocale(LC_ALL, L"korean"); // 와이드 문자 한글 사용가능하게.
	
	wchar_t arrWC1[10] = L"abc한글";
	wprintf(L"arrWC1=%s\n", arrWC1);

	//10개의 배열을 만들어도 9개의 문자까지밖에 허용이 안되는 이유.
	wchar_t szWChar[10] = L"abcdefghi"; //마지막에 문자의 마지막이라는 표기로 '\0'문자가 자동으로 들어간다.
	wprintf(L"szWChar=%s\n", szWChar);

	//문자열의 길이를 구하는 것.
	wchar_t szWCharLen[20] = L"abcdefg";
	
	int size=wcslen(szWCharLen); //길이를 구하는 wcslen. 문자열 관련 wcs로 검색해서 나오는 함수들이 있다.
	printf("szWCharLen size=%d\n", size);
	
	size = GetStringLendgth(szWCharLen); //위에 만든 함수로 사이즈알아내기.
	printf("szWCharLen size=%d\n", size);

	
	
	wcscat_s(szWCharLen, 20, L"hij"); //문자열 붙이기
	wprintf(L"szWCharlen=%s\n", szWCharLen);

	//wchar_t _dest[6] = L"abcde";
	StringCat(szWCharLen, 20, L"adj");
	wprintf(L"szWCharlen=%s\n", szWCharLen);
	


	wcscpy_s(szWCharLen, L"abcdef");// 앞쪽 문자열에 뒤에 문자열 복사해서 넣는다.

	//compare
	//wcscmp(,) //두 문자열을 비교해주는것.

	wchar_t szWCharCmp[20] = L"abcdefg"; 
	int nResult = wcscmp(L"abcdefg", L"abcdefg"); //같으면 0, 앞에 문자 순번이 빠르면 1, 뒤에 문자 순번이 빠르면 -1.
	printf("nResult=%d\n", nResult);//0

	int nResult1 = wcscmp(L"cbcdefg", L"abcdefg"); //같으면 0, 앞에 문자 순번이 빠르면 1, 뒤에 문자 순번이 빠르면 -1.
	printf("nResult=%d\n", nResult1);//1

	int nResult2 = wcscmp(L"abcdefg", L"cbcdefg"); //같으면 0, 앞에 문자 순번이 빠르면 1, 뒤에 문자 순번이 빠르면 -1.
	printf("nResult=%d\n", nResult2);//-1



}