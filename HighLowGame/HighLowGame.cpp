#include<stdio.h>
#include<vector>
#include<string>
#include"card.h"
#include<random> //랜덤을 쓰기위해서 불러옴
/*
*  52 개의 카드로 게임을 시작.
*  52 개의 카드를 무작위로 섞습니다.
*  게임이 시작되면 카드 하나를 오픈
*  플레이어는 다음 카드가 오픈된 카드보다 높은 카드인지 낮은 카드인지 배팅
*  다음 카드를 오픈하고 배팅이 맞으면 승리, 틀리면 패배
*  카드는 1이 가장 낮고 k가 가장 높습니다.
*  문양은 스페이드 > 다이아 > 하트 > 클로버 순으로 높습니다.

*/
//Cards의 CCard를 랜덤하게 배치한다. ======================
void Shuffle(std::vector<CCard>& Cards)
{
	//랜덤값 구하기 ==============================================
	std::random_device rd;
	// std::mt19937 mt(1234) ;  //1234은 시드 값이라고 해서 초기에 주어지는 키값
	// 같은 시드면은 랜덤 숫자가 일정하게 나온다.
	std::mt19937 mt(rd.entropy());// mt()값이 시드 값.  rd로 랜덤한 값을 가져온다. 시드 값도 랜덤으로 부여해서 거의 같은 결과가 나오지 않는다.
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1); //0부터 카드사이즈 -1 중에서 랜덤사이즈가 나오는 변수.
	//=========================================================

	//구한 랜덤값을 Cards에 넣기=======================
	for (int i = 0; i < 100; i++)
	{
		int firstIndex = dist(mt);// dist 변수에 mt난수를 넣어서 랜덤값이 firstIndex 값에 들어간다. 
		int secondIndex = dist(mt); 

		//카드값 셔플========================
		CCard temp = Cards[firstIndex]; //
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}
//함수 이름 : CompareCard
//파라미터 : const CCard&CardA, const CCard&CardB
//반환 값 : bool
//함수 기능 : CardA 와  CardB 를 비교하여  CardA 가 크다면 true, CardB 가 크면 false 반환
bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	if ((int)CardA.m_number > (int)CardB.m_number)
	{
		return true;
	}
	else if ((int)CardA.m_number < (int)CardB.m_number)
	{
		return false;
	}
	else if ((int)CardA.m_number == (int)CardA.m_number)
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
//=============================================
/*
bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark;

	return ScoreA > ScoreB;
*/
//=================================================



int main()
{
	std::vector<CCard> Cards; //클래스를 벡터변수로 선언

	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card; //클래스형 변수
			card.m_mark = (CardMark)i; //클래스 멤버 변수 마크에 넣기(enum 카드마크라는 형식을넣어주는것이 i값에 무엇이 들어가는지 명확해진다.)
			card.m_number = j; //클래스 멤버 변수 넘버에 j값 넣기
			Cards.push_back(card); //변수들을 벡터 cards에넣기
		}
	}
	//std::vector<CCard> aCards;

	Shuffle(Cards);//Cards의 CCard를 랜덤하게 배치한다. 
	//int aa = CompareCard(Cards[5], Cards[1]); 
	//printf("CompareCard=%d\n", aa);

	//for (CCard& card : Cards)// CCard클래스 변수로 card를 지정. 벡터 변수 cards를 for each문으로 돌려서 출력
	//{
	//	card.printCard();
	//}
	//==================================================================
	bool bRun = true; //실행 종료를 조건걸수있게 
	int i = 0; //랜덤변수를 겹치지 않게 조절
	int ai = 0; //횟수를 저장해서 불린함수를 사용할 수 있게 만듬

	while (bRun) //true면 계속 실행.
	{
		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str()); //Cards[i]. 클래스 벡터 변수로 선언된 Cards에 인덱스값으로 i를 넣어줌. 
		//초기 i값은 0으로 설정 . 클래스 변수에서  GetCardStr() 함수를 참조한다.

		int input = 0;//input = 1 이면 Cards[0] 높다.
		printf("두번째 카드가 높으면 0, 낮으면 1을 입력해주세요 : ");
		scanf_s("%d", &input);
		system("cls");

		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str());
		printf("두번째 카드는 %s 입니다.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 이면 Cards[0] 높다.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);

		if (IsFirstHigh == input)
		{
			printf("맞췄다.\n");
		}
		else
		{
			printf("틀렸다.\n");
			ai += 1;
		}
		if (ai == 2)
		{
			printf("기회가 한 번 남았습니다.\n");
		}
		if (ai == 3)
		{
			printf("종료합니다.\n");
			bRun = false;
		}

			


		i += 2;

		//==============================================================


	}
}