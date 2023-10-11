#include"card.h"
#include<stdio.h>
#include<iostream>
#include<string>
CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number) //변수 초기화. m_mark 에 들어갈 변수를 enum 에서 선언한 것으로 대입.
//card.h 에서 초기 선언을 했기 때문에 재정의할 필요 없음
	{

	}

	std::string CCard::GetMarkStr() //함수=함수이름, 파라미터, 반환값 //카드모양을 enum과 매치시킨다.
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
				return GetMarkStr() + "[" + std::to_string(m_number) + "]"; //카드 모양 정보와 [ ] 사이에 숫자 정보를 반환한다.
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
	

		bool CompareCard(const CCard& CardA, const CCard& CardB) //비교할 함수 만들기.
		{
			if ((int)CardA.m_number > (int)CardB.m_number) //CCard 클래스 안의 m_number 와 m_mark 변수를 가져와서 비교
				//모양은 enum 을 사용해서 int형으로 비교가능
			{
				return true;
			}
			else if ((int)CardA.m_number < (int)CardB.m_number)
			{
				return false;
			}
			else if ((int)CardA.m_number == (int)CardA.m_number) //숫자가 같을 때 모양 비교로 넘어간다.
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

