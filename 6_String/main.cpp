#include<stdio.h>
#include<iostream>//���ڿ��� ���̸� ���ϱ� ���� wcslen �Լ��� ����ϱ� ���� �ҷ���
#include<assert.h>// ����, �˸��� ȣ���� �Լ��� �ҷ���
unsigned int GetStringLendgth(const wchar_t* _pString)
{
	int i = 0;
	while (1)
	{
		wchar_t c = *(_pString + i); //�������� �ּҰ��� ���ڸ� ����
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
	
	wchar_t c = *(_Dest + destLen); //�������� �ּҰ��� ���ڸ� ����

	for (int i = 0; i <= sourceLen+1; i++) 
	{
		*(_Dest + destLen+i) = *(_pSource + i);
		//_Dest[destLen + i] = _pSource[i]; //������ ���� ����.
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

	int nLoop = (LeftLen < RightLen) ? LeftLen : RightLen;//���� ª�� ������ ���� ��ŭ�� ���Ѵ�.

	for (int i = 0; i < nLoop; i++)
	{
		if (_pLeft[i] == _pRight[i])//���� ������ ũ��� ����� �������� �ʰ� �ٽ� for���� ����
			continue;		
		return (_pLeft[i] > _pRight[i]) ? 1 : -1;//ũ��� ����� ��ȯ
	}

	if (LeftLen != RightLen)
	{
		//left�� ��� 1, right ��� -1
		return (LeftLen > RightLen) ? 1 : -1; //ũ��� ����� ��ȯ
	}
	return 0; //��� ���ڰ� ���� ���̵� ����.
}




int main()
{
	//���� ó��
	//multi-byte
	//127���� �ƽ�Ű �ڵ� ���� ǥ��, ���ڿ� ���� ���������� ũ�Ⱑ �����.
	//�������� ȣȯ�� ���� �ʴ� ������� �ٸ� �ý������� ������ ���ڰ� ����
	//�Ϻ��� �ؽ�Ʈ ������ �ѱ� �����쿡�� ������ �� ���� ������ ������ ����
	//ö���� �ڱ��� ǥ�⸸�� ���� ���ڵ�. �ܱ��� ���� ���� �ٸ� ����ü�谡 �ʿ��� ��� ������.
	char c1 = 'a'; //1Byte(0~255) //�����ϳ��� ����ǥ �� �� ¥����.
	printf("c1=%c\n", c1);//���ڿ��� �ֵ���ǥ. �ѱ��� char ��½ÿ��� %c�� ���.
	
	setlocale(LC_ALL, "korean"); //��Ƽ����Ʈ �ѱ� ��밡���ϰ�.

	char arrC1[10] = "abc�ѱ�";//����� 1Byte, �ѱ��� 2Byte ���
	printf("arrC1=%s\n", arrC1);//���ڿ� char ��½ÿ��� %s ���.
	
	//wchar_t //���̵� ĳ���� ���� ����.���̵� ����.
	//��Ƽ ����Ʈ �� ������ �ذ��ϱ� ���� ���� �����ڵ� ���.
	//������ ��� ���ڸ� ǥ���� �� �ֱ� ������ �ֱٿ� ���� ����
	//���� ���� ����ϴ� ����� UTF-8 �� �ִ�.

	wchar_t wc1 = L'a'; //2Byte(0~65535). �� 3����ǥ�Ⱑ��
	wprintf(L"wc=%c\n", wc1); //���̵� ����Ʈf ���. "�տ� L�� ����.
							  
	//�迭�� ó��
	
	_wsetlocale(LC_ALL, L"korean"); // ���̵� ���� �ѱ� ��밡���ϰ�.
	
	wchar_t arrWC1[10] = L"abc�ѱ�";
	wprintf(L"arrWC1=%s\n", arrWC1);

	//10���� �迭�� ���� 9���� ���ڱ����ۿ� ����� �ȵǴ� ����.
	wchar_t szWChar[10] = L"abcdefghi"; //�������� ������ �������̶�� ǥ��� '\0'���ڰ� �ڵ����� ����.
	wprintf(L"szWChar=%s\n", szWChar);

	//���ڿ��� ���̸� ���ϴ� ��.
	wchar_t szWCharLen[20] = L"abcdefg";
	
	int size=wcslen(szWCharLen); //���̸� ���ϴ� wcslen. ���ڿ� ���� wcs�� �˻��ؼ� ������ �Լ����� �ִ�.
	printf("szWCharLen size=%d\n", size);
	
	size = GetStringLendgth(szWCharLen); //���� ���� �Լ��� ������˾Ƴ���.
	printf("szWCharLen size=%d\n", size);

	
	
	wcscat_s(szWCharLen, 20, L"hij"); //���ڿ� ���̱�
	wprintf(L"szWCharlen=%s\n", szWCharLen);

	//wchar_t _dest[6] = L"abcde";
	StringCat(szWCharLen, 20, L"adj");
	wprintf(L"szWCharlen=%s\n", szWCharLen);
	


	wcscpy_s(szWCharLen, L"abcdef");// ���� ���ڿ��� �ڿ� ���ڿ� �����ؼ� �ִ´�.

	//compare
	//wcscmp(,) //�� ���ڿ��� �����ִ°�.

	wchar_t szWCharCmp[20] = L"abcdefg"; 
	int nResult = wcscmp(L"abcdefg", L"abcdefg"); //������ 0, �տ� ���� ������ ������ 1, �ڿ� ���� ������ ������ -1.
	printf("nResult=%d\n", nResult);//0

	int nResult1 = wcscmp(L"cbcdefg", L"abcdefg"); //������ 0, �տ� ���� ������ ������ 1, �ڿ� ���� ������ ������ -1.
	printf("nResult=%d\n", nResult1);//1

	int nResult2 = wcscmp(L"abcdefg", L"cbcdefg"); //������ 0, �տ� ���� ������ ������ 1, �ڿ� ���� ������ ������ -1.
	printf("nResult=%d\n", nResult2);//-1



}