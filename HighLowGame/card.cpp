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
		if (m_number < 11)
			{
				return GetMarkStr() + "[" + std::to_string(m_number) + "]"; //ī�� ��� ������ [ ] ���̿� ���� ������ ��ȯ�Ѵ�.
			}
		else if (m_number==11)
		{
			//std::string J = std::to_string(m_number);
			return GetMarkStr() + "[" + "J" + "]";
		}
		else if (12 == m_number)
		{
			//std::string Q = std::to_string(m_number);
			return GetMarkStr() + "[" + "Q" + "]";
		}
		else if (13 == m_number)
		{
			//std::string K = std::to_string(m_number);
			return GetMarkStr() + "[" + "K" + "]";
		}
		
		}



		void CCard::printCard()
		{
			printf("%s[%d]\n", GetMarkStr().c_str(), m_number);
		}
	

		bool CompareCard(const CCard& CardA, const CCard& CardB) //���� �Լ� �����.
		{
			if ((int)CardA.m_number > (int)CardB.m_number) //CCard Ŭ���� ���� m_number �� m_mark ������ �����ͼ� ��
				//����� enum �� ����ؼ� int������ �񱳰���
			{
				return true;
			}
			else if ((int)CardA.m_number < (int)CardB.m_number)
			{
				return false;
			}
			else if ((int)CardA.m_number == (int)CardA.m_number) //���ڰ� ���� �� ��� �񱳷� �Ѿ��.
			{
				if ((int)CardA.m_mark > (int)CardB.m_mark)
				{
					return true;
				}
				else
				{
					return false;
				}
			}

		}

