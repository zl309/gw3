#include<stdio.h>
#include<iostream>

int main()
{

	_wsetlocale(LC_ALL, L"korean"); //�ѱ� ��¿����� �־��

	//2�� ��� ����ϱ� (0~100)
	//��)0 2 4 6 8 ~96 98 100

	
	for (int i = 0; i < 101; i++)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}
	//n�� ���� �ϳ��� �Է� �ޱ�
	//n�� ��� ����ϱ�(0~100)
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

	//(0~100) 2�� ����� ���� ���
	int c = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (i % 2 == 0)
		{
			c++;
		}
	}
	printf("������%d\n", c);


	//abcdef�� ������ ����ϱ� fedcba
	wchar_t szWChar[20] = L"abcdef";
	int t=wcslen(szWChar);

	for(int i = 0; i < t; i++)
	{

		wprintf(L"��=%c\n", szWChar[t-1-i]); //%s �� �ϸ� �ټ��� ���ڿ�. %c�� �ϸ� �ѱ���.
	}


	//wchar_t ������ ���� �Է� �ޱ�
	wchar_t szWCharInput[19] = L"";
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);

	//�Է¹��� ���ڿ����� 'a'���� ���� ���
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


		


		