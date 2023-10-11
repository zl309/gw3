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

		return GetMarkStr() + "[" + std::to_string(m_number) + "]"; //카드 모양 정보와 [ ] 사이에 숫자 정보를 반환한다.
	}

	

	void CCard::printCard()
	{
		printf("%s[%d]\n", GetMarkStr().c_str(), m_number);
	}


