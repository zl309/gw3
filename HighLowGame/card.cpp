#include"card.h"
#include<stdio.h>
#include<iostream>
#include<string>
CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number) //���� �ʱ�ȭ. m_mark �� �� ������ enum ���� ������ ������ ����.
//card.h ���� �ʱ� ������ �߱� ������ �������� �ʿ� ����
	{

	}

	std::string CCard::GetMarkStr() //�Լ�=�Լ��̸�, �Ķ����, ��ȯ�� //ī������ enum�� ��ġ��Ų��.
	{
		switch (m_mark)
		{
		case Clover:
			return "Clover";
			break;
		case Heart:
			return "Heart";
			break;
		case Dia:
			return "Dia";
			break;
		case Spade:
			return "Spade";
			break;
		}

		return "None";
	}
	std::string CCard::GetCardStr()
	{

		return GetMarkStr() + "[" + std::to_string(m_number) + "]"; //ī�� ��� ������ [ ] ���̿� ���� ������ ��ȯ�Ѵ�.
	}

	

	void CCard::printCard()
	{
		printf("%s[%d]\n", GetMarkStr().c_str(), m_number);
	}


