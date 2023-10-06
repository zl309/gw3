#include<stdio.h>
#include<vector>
#include<list>

struct stMonster
{
	int index = 0; //���� Ÿ��.
};

bool IsFindMonIndex(const stMonster& mon)
{
	return mon.index == 3; // ����  mon.index �� 3�̸� true ��ȯ, �ƴϸ� false ��ȯ.
}


//=======================================

class CShop
{
public:
	int isOpen = false;
};

int main()
{
		//STL
	//�������� ���� �������� �迭
	// �迭 �����ϸ鼭 ó������ ������ �������� �ʰ� �ʿ��� ������ �ø��� ���� �� �ִ� �迭

	//����(Vector)  = ����(Stack) ����
	/* 
	*	#include<vector> //�߰������ ��� ����
	*
	*�������� �޸𸮸� Ȯ���Ѵ�.
	*�ڽ��� ��Ҹ� ������ ���� �迭 (dynamic array) �� �����Ѵ�.
	*���� ���� �����ڸ� ���� ([]) �ϱ� ������ ��� ���� �����ϵ� ����ð� (������ �ð�) �� �ҿ�ȴ�.
	*���� �迭�̱� ������ �迭�� �߰��� ���� �߰��ϰų� �����ϸ� ���� ���� �̵��ؾ� �ϱ� ������ ���� �ð��� �ɸ���.
	*�߰��� �߰��ϴ� ���� ������尡 ũ�� ������ ���� �޺κп� �߰��Ѵ� ( push_back )
	*���� �迭�̱� ������ ũ���� Ȯ��� ��Ұ� ���������� ���Ҵ� ����� ũ��.

	**����
	* ���� ������ ����ð� (������ �ð�) �� �����ϹǷ� �б� �ӵ��� �ſ� ������.
	**����
	*�߰��� ���� �߰�/ �����ϴ� ����� ũ��.
	* ���Ҵ� ����� ũ��.
	* 
	
	*/

	//=============================================================
	//std::vector<int> :  int ���� vector �迭
	//vecint : vector �迭�� �̸�
	//{ 0,1,2,3,4 } : vecint �� �ʱⰪ�� �־��� ��.
	//std::vector<int>vecint{ 0,1,2,3,4 };
	// 
	// =======================================================
	//int vectorSize = vecint.size(); // ������ ��� ���� ��ȯ
	//int vec0 = vecint[0]; // []�� ��Ȯ�� ��ġ�� �־ ���� ����
	//int* pData = vecint.data(); //���� �迭 ���� ������ �޸� ������ �ּ�(������) �� ��ȯ
	//int vCap = vecint.capacity(); // ������ ũ�� ���鿡�� ���� ���� ũ�⸦ ��ȯ
	//============================================================


	//for (int i = 0; i < vecint.size(); i++)
	//{
	//	printf("vecint[%d]= %d\n", i, vecint[i])	;
	//}
	//for (int value : vecint) // �� ���� ������� ���� �����ϸ��� ���� �����ʹ� ������ �ȵȴ�.
	//{
	//	value = 0;	
	//	printf("vecint= %d\n", value);
	//}
	//for (int& value : vecint) // ���۷��� ���� ������� ���� �����ϸ��� ���� ������ ����
	//{
	//	value = 1;
	//	printf("Ref vecint= %d\n", value);
	//}
	//for (const int& value : vecint) // ���۷��� ������ const ������ �����ϸ� �� ���� �Ұ���
	//{
	//	//value = 0;
	//	printf("Const vecint= %d\n", value);
	//}


	//====================================================================
	// 
	//std::vector<int> vecint{ 0,1,2,3,4,5,6,5,8, 9};
	//std::vector<int>::iterator veclter = vecint.begin(); // �� 0
	//veclter++;      // �� 1, ���������� �� ĭ �̵��� �迭�� ��ġ�� ����Ų��.
	//veclter += 2;  // �� 3, ���������� �� �� �̵��� �迭�� ��ġ�� ����Ų��.
	//veclter--;     //�� 2,

	////vecint.end(); // �迭 �� �̶�� �ǹ�(������ �迭�� �ƴϴ�.)
	//printf("veclter=%d\n", *veclter);

	//vecint.push_back(100); //�迭�� ������ ��ҿ� 100�� �߰��ϰڴ�.
	//for (std::vector<int>::iterator iter = vecint.begin(); iter != vecint.end(); ++iter)
	//{
	//	printf("iter=%d\n", *iter);
	//}

	//vecint.pop_back(); //������ �迭�� ��Ҹ� �����ϰڴ�.
	//
	//veclter = vecint.begin();
	//while (veclter != vecint.end())
	//{
	//	printf("while iter=%d\n", *veclter);
	//	veclter++;

	//}
	//printf("vecint Size =%d\n", int(vecint.size()));

	//veclter = vecint.begin();
	//while (veclter != vecint.end())
	//{
	//	if (*veclter ==5)
	//	{
	//		veclter = vecint.erase(veclter); //veclter �� ����Ű�� �ִ� �迭 ��� �����ϰڴ�.

	//	}
	//	else
	//	{
	//		veclter++;
	//	}
	//}

	//veclter = vecint.begin();
	//while (veclter != vecint.end())
	//{
	//	printf("while iter=%d\n", *veclter);
	//	veclter++;
	//}
	//printf("vecint Size =%d\n", int(vecint.size()));




	
	// ����Ʈ(list)

	/*
	* ����Ʈ�� ��ҵ��� ����� ���Ḯ��Ʈ�� ���·� �����Ѵ�. (Doubly linked List)
	* ����Ʈ ��ü�� ��Ŀ�� �Ҹ��� ������ 2���� �����ϴµ� �̴� head �� tail �� ������.
	* ���ο� ��Ҹ� �����ϱ� ���ؼ��� �� ������ (��Ŀ)�� �����Ѵ�.
	* ����Ʈ�� ���� ����([])�� �������� �ʴ´�. (n��° ��ҿ� �����ϱ� ���ؼ� ������ ���ľ� �ϱ� ����)
	* Ư�� ��ġ�� �߰�/ ������ �����Ӵ�. (Ư�� ��ġ�� ã�� �ð��� ����)
	* ���Ҵ� ������ ����. �������� �޸𸮰� �ƴϱ� ������ (�޸𸮰� �����Ǵ� ��) ������ �߰��� �� �ִ�.
	* 
	* ����
	* -������ ��ġ�� ��Ҹ� �߰��ϴ� ���� �����Ӵ�( Ư�� ��ġ�� ã�� �ð��� ���� ) �ٶ� ���⿡ �ſ� ���ϴ�.
	* 
	* ����
	* -���� ������ �Ұ����ϱ� ������ ���� Ž���Ͽ� ��ġ�� ã�´�.
	* -���Ұ��� ������ ���� �߰����� �޸𸮸� �Ҹ��Ѵ�.(���� ����� ������ �޸�)
	* 
	*/
//std::list<int> : ����Ʈ�� ������ ������
//listint : ������ ����Ʈ�� �̸�
// {0,1,2,3,4} : ����Ʈ�� �⺻ ��


//======================================================================
//std::list<int > listint{ 0,1,2,3,4 };
//
//for (int value : listint)
//{
//	printf("List Value=%d\n", value);
//}
//
//for (const int& value : listint)
//{
//
//	printf("List Value=%d\n", value);
//}
//
//std::list<int>::iterator listlter = listint.begin();
//printf("listlter=%d\n", *listlter);
//for (std :: list<int>::iterator iter = listint.begin(); iter != listint.end(); ++iter)
//{
//	printf("For List Value=%d\n", *iter);
//
//}
//
//listlter = listint.begin();
//while (listlter != listint.end())
//{
//	printf("While List Value=%d\n", *listlter);
//	listlter++;
//}



	std::list<int > listint{ 0,1,2,3,4 };
	listint.push_back(100); // ����Ʈ ���ʿ� ���� �߰� �����Ѵ�.
	listint.push_front(200); // ����Ʈ ���ʿ� ���� �߰� �����Ѵ�.
	listint.pop_back(); //����Ʈ ������ ���� �����Ѵ�.
	listint.pop_front(); //����Ʈ ������ ���� �����Ѵ�.
	 for (const int& value : listint)
	{

		printf("List Value=%d\n", value);
	}
	 //����Ʈ���� Ư�� ���� ã�� =====================================
	 std::list<int>::iterator it = std::find(listint.begin(), listint.end(), 2);
	 if (it != listint.end())
	 {
		 printf("Find List Value=%d\n", *it);
		 //listint.erase(it); // ����Ʈ ���� Ư�� ���� �����ϱ�====================
		 int value = 2023; // ���� ��� ���� ����Ʈ�� int �� ������� ������ int �� �ִ´�. char �̸� char Ÿ������ �־�� �ȴ�.
		// listint.insert(it, value); // Ư�� ��� ���ʿ� ���ο� ��Ҹ� �����ִ´�. ===================
		 listint.emplace(it, 2024); //Ư�� ��� ���ʿ� ���ο� ��Ҹ� �����ִ´�. ===================
	 }
	 else
	 {
		 printf("Find List Fail\n");
	 }
	 for (const int& value : listint)
	 {

		 printf("List Value=%d\n", value);
	 }


	 //=============================================
	 //����ü �迭 find_if �� Ư�� ��� ã��

	 std::list<stMonster>arrMon;
	 for (int i = 1; i < 6; ++i )
	 {
		 stMonster temp;
		 temp.index = i;
		 arrMon.push_back(temp);
	 }

	 std::list<stMonster>::iterator monlter;
	 //monlter = std::find_if(arrMon.begin(), arrMon.end(), IsFindMonIndex);
	 monlter = std::find_if(arrMon.begin(), arrMon.end(), [](const stMonster& mon) {return mon.index == 3; });

	 if (monlter != arrMon.end())
	 { //ã��
		 printf("monlter index=%d\n", monlter->index);
	 } //��ã��
	 else {
		 printf("monlter find Fail!\n");
	 }

	 for (const stMonster& value : arrMon)
	 {
		 printf("Monster index=%d\n", value.index);
	 }
	


	 ////stMonster m1;
	 ////m1.index = 1;
	 ////stMonster m2;
	 ////m2.index = 2;
	 ////stMonster m3;
	 ////m3.index = 3;
	 ////stMonster m2;
	 ////m2.index = 2;
}

