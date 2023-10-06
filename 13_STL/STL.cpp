#include<stdio.h>
#include<vector>
#include<list>

struct stMonster
{
	int index = 0; //몬스터 타입.
};

bool IsFindMonIndex(const stMonster& mon)
{
	return mon.index == 3; // 만약  mon.index 가 3이면 true 반환, 아니면 false 반환.
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
	//고정되지 않은 유동적인 배열
	// 배열 생성하면서 처음부터 공간을 점유하지 않고 필요할 때마다 늘리고 줄일 수 있는 배열

	//백터(Vector)  = 스택(Stack) 구조
	/* 
	*	#include<vector> //추가해줘야 사용 가능
	*
	*연속적인 메모리를 확보한다.
	*자신의 요소를 내부의 동적 배열 (dynamic array) 로 복사한다.
	*임의 접근 연산자를 제공 ([]) 하기 때문에 어떠한 값에 접근하든 상수시간 (고정된 시간) 이 소요된다.
	*동적 배열이기 때문에 배열의 중간에 새로 추가하거나 삭제하면 많은 값이 이동해야 하기 때문에 오랜 시간이 걸린다.
	*중간에 추가하는 것이 오버헤드가 크기 때문에 보통 뒷부분에 추가한다 ( push_back )
	*동적 배열이기 때문에 크기의 확장과 축소가 자유롭지만 재할당 비용은 크다.

	**장점
	* 임의 접근을 상수시간 (고정된 시간) 에 가능하므로 읽기 속도가 매우 빠르다.
	**단점
	*중간에 값을 추가/ 제거하는 비용이 크다.
	* 재할당 비용이 크다.
	* 
	
	*/

	//=============================================================
	//std::vector<int> :  int 형의 vector 배열
	//vecint : vector 배열의 이름
	//{ 0,1,2,3,4 } : vecint 의 초기값을 넣어준 것.
	//std::vector<int>vecint{ 0,1,2,3,4 };
	// 
	// =======================================================
	//int vectorSize = vecint.size(); // 벡터의 요소 갯수 반환
	//int vec0 = vecint[0]; // []로 명확한 위치를 넣어서 접근 가능
	//int* pData = vecint.data(); //벡터 배열 실제 데이터 메모리 공간의 주소(포인터) 를 반환
	//int vCap = vecint.capacity(); // 데이터 크기 측면에서 저장 공간 크기를 반환
	//============================================================


	//for (int i = 0; i < vecint.size(); i++)
	//{
	//	printf("vecint[%d]= %d\n", i, vecint[i])	;
	//}
	//for (int value : vecint) // 값 복사 방식으로 값을 변경하면은 원본 데이터는 수정이 안된다.
	//{
	//	value = 0;	
	//	printf("vecint= %d\n", value);
	//}
	//for (int& value : vecint) // 레퍼런스 참조 방식으로 값을 변경하면은 원본 데이터 변경
	//{
	//	value = 1;
	//	printf("Ref vecint= %d\n", value);
	//}
	//for (const int& value : vecint) // 레퍼런스 참조시 const 변수로 참조하면 값 변경 불가능
	//{
	//	//value = 0;
	//	printf("Const vecint= %d\n", value);
	//}


	//====================================================================
	// 
	//std::vector<int> vecint{ 0,1,2,3,4,5,6,5,8, 9};
	//std::vector<int>::iterator veclter = vecint.begin(); // 값 0
	//veclter++;      // 값 1, 오른쪽으로 한 칸 이동한 배열의 위치를 가리킨다.
	//veclter += 2;  // 값 3, 오른쪽으로 두 번 이동한 배열의 위치를 가리킨다.
	//veclter--;     //값 2,

	////vecint.end(); // 배열 끝 이라는 의미(마지막 배열은 아니다.)
	//printf("veclter=%d\n", *veclter);

	//vecint.push_back(100); //배열의 마지막 요소에 100을 추가하겠다.
	//for (std::vector<int>::iterator iter = vecint.begin(); iter != vecint.end(); ++iter)
	//{
	//	printf("iter=%d\n", *iter);
	//}

	//vecint.pop_back(); //마지막 배열의 요소를 제거하겠다.
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
	//		veclter = vecint.erase(veclter); //veclter 가 가리키고 있는 배열 요소 제거하겠다.

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




	
	// 리스트(list)

	/*
	* 리스트는 요소들을 양방향 연결리스트의 형태로 관리한다. (Doubly linked List)
	* 리스트 객체는 앵커라 불리는 포인터 2개를 제공하는데 이는 head 와 tail 을 가진다.
	* 새로운 요소를 삽입하기 위해서는 이 포인터 (앵커)를 조작한다.
	* 리스트는 임의 접근([])을 제공하지 않는다. (n번째 요소에 접근하기 위해서 노드들을 거쳐야 하기 때문)
	* 특정 위치에 추가/ 삭제가 자유롭다. (특정 위치를 찾는 시간은 제외)
	* 재할당 연산이 없다. 연속적인 메모리가 아니기 때문에 (메모리가 제공되는 한) 무한히 추가할 수 있다.
	* 
	* 장점
	* -임의의 위치에 요소를 추가하는 것이 자유롭다( 특정 위치를 찾는 시간은 제외 ) 다라서 쓰기에 매우 강하다.
	* 
	* 단점
	* -임의 접근이 불가능하기 때문에 선형 탐색하여 위치를 찾는다.
	* -원소간의 연결을 위해 추가적인 메모리를 소모한다.(다음 노드의 포인터 메모리)
	* 
	*/
//std::list<int> : 리스트로 생성할 변수형
//listint : 생성할 리스트의 이름
// {0,1,2,3,4} : 리스트의 기본 값


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
	listint.push_back(100); // 리스트 뒤쪽에 값을 추가 연결한다.
	listint.push_front(200); // 리스트 앞쪽에 값을 추가 연결한다.
	listint.pop_back(); //리스트 뒤쪽의 값을 제거한다.
	listint.pop_front(); //리스트 앞쪽의 값을 제거한다.
	 for (const int& value : listint)
	{

		printf("List Value=%d\n", value);
	}
	 //리스트에서 특정 원소 찾기 =====================================
	 std::list<int>::iterator it = std::find(listint.begin(), listint.end(), 2);
	 if (it != listint.end())
	 {
		 printf("Find List Value=%d\n", *it);
		 //listint.erase(it); // 리스트 안의 특정 원소 제거하기====================
		 int value = 2023; // 넣을 밸류 값은 리스트를 int 로 만들었기 때문에 int 로 넣는다. char 이면 char 타입으로 넣어야 된다.
		// listint.insert(it, value); // 특정 요소 앞쪽에 새로운 요소를 끼워넣는다. ===================
		 listint.emplace(it, 2024); //특정 요소 앞쪽에 새로운 요소를 끼워넣는다. ===================
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
	 //구조체 배열 find_if 로 특정 요소 찾기

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
	 { //찾음
		 printf("monlter index=%d\n", monlter->index);
	 } //못찾음
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

