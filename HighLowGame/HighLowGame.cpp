#include<stdio.h>
#include<vector>
#include<string>
#include"card.h"
#include<random> //������ �������ؼ� �ҷ���
/*
*  52 ���� ī��� ������ ����.
*  52 ���� ī�带 �������� �����ϴ�.
*  ������ ���۵Ǹ� ī�� �ϳ��� ����
*  �÷��̾�� ���� ī�尡 ���µ� ī�庸�� ���� ī������ ���� ī������ ����
*  ���� ī�带 �����ϰ� ������ ������ �¸�, Ʋ���� �й�
*  ī��� 1�� ���� ���� k�� ���� �����ϴ�.
*  ������ �����̵� > ���̾� > ��Ʈ > Ŭ�ι� ������ �����ϴ�.

*/
//Cards�� CCard�� �����ϰ� ��ġ�Ѵ�. ======================
void Shuffle(std::vector<CCard>& Cards)
{
	//������ ���ϱ� ==============================================
	std::random_device rd;
	// std::mt19937 mt(1234) ;  //1234�� �õ� ���̶�� �ؼ� �ʱ⿡ �־����� Ű��
	// ���� �õ���� ���� ���ڰ� �����ϰ� ���´�.
	std::mt19937 mt(rd.entropy());// mt()���� �õ� ��.  rd�� ������ ���� �����´�. �õ� ���� �������� �ο��ؼ� ���� ���� ����� ������ �ʴ´�.
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1); //0���� ī������� -1 �߿��� ��������� ������ ����.
	//=========================================================

	//���� �������� Cards�� �ֱ�=======================
	for (int i = 0; i < 100; i++)
	{
		int firstIndex = dist(mt);// dist ������ mt������ �־ �������� firstIndex ���� ����. 
		int secondIndex = dist(mt); 

		//ī�尪 ����========================
		CCard temp = Cards[firstIndex]; //
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}
//�Լ� �̸� : CompareCard
//�Ķ���� : const CCard&CardA, const CCard&CardB
//��ȯ �� : bool
//�Լ� ��� : CardA ��  CardB �� ���Ͽ�  CardA �� ũ�ٸ� true, CardB �� ũ�� false ��ȯ
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
	std::vector<CCard> Cards; //Ŭ������ ���ͺ����� ����

	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card; //Ŭ������ ����
			card.m_mark = (CardMark)i; //Ŭ���� ��� ���� ��ũ�� �ֱ�(enum ī�帶ũ��� �������־��ִ°��� i���� ������ ������ ��Ȯ������.)
			card.m_number = j; //Ŭ���� ��� ���� �ѹ��� j�� �ֱ�
			Cards.push_back(card); //�������� ���� cards���ֱ�
		}
	}
	//std::vector<CCard> aCards;

	Shuffle(Cards);//Cards�� CCard�� �����ϰ� ��ġ�Ѵ�. 
	//int aa = CompareCard(Cards[5], Cards[1]); 
	//printf("CompareCard=%d\n", aa);

	//for (CCard& card : Cards)// CCardŬ���� ������ card�� ����. ���� ���� cards�� for each������ ������ ���
	//{
	//	card.printCard();
	//}
	//==================================================================
	bool bRun = true; //���� ���Ḧ ���ǰɼ��ְ� 
	int i = 0; //���������� ��ġ�� �ʰ� ����
	int ai = 0; //Ƚ���� �����ؼ� �Ҹ��Լ��� ����� �� �ְ� ����

	while (bRun) //true�� ��� ����.
	{
		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str()); //Cards[i]. Ŭ���� ���� ������ ����� Cards�� �ε��������� i�� �־���. 
		//�ʱ� i���� 0���� ���� . Ŭ���� ��������  GetCardStr() �Լ��� �����Ѵ�.

		int input = 0;//input = 1 �̸� Cards[0] ����.
		printf("�ι�° ī�尡 ������ 0, ������ 1�� �Է����ּ��� : ");
		scanf_s("%d", &input);
		system("cls");

		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());
		printf("�ι�° ī��� %s �Դϴ�.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 �̸� Cards[0] ����.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);

		if (IsFirstHigh == input)
		{
			printf("�����.\n");
		}
		else
		{
			printf("Ʋ�ȴ�.\n");
			ai += 1;
		}
		if (ai == 2)
		{
			printf("��ȸ�� �� �� ���ҽ��ϴ�.\n");
		}
		if (ai == 3)
		{
			printf("�����մϴ�.\n");
			bRun = false;
		}

			


		i += 2;

		//==============================================================


	}
}