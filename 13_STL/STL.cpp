#include<stdio.h>
#include<vector>

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
	//std::vector<int> :  int ���� vector �迭
	//vecint : vector �迭�� �̸�
	//{ 0,1,2,3,4 } : vecint �� �ʱⰪ�� �־��� ��.
	//std::vector<int>vecint{ 0,1,2,3,4 };
	//int vectorSize = vecint.size(); // ������ ��� ���� ��ȯ
	//int vec0 = vecint[0]; // []�� ��Ȯ�� ��ġ�� �־ ���� ����
	//int* pData = vecint.data(); //���� �迭 ���� ������ �޸� ������ �ּ�(������) �� ��ȯ
	//int vCap = vecint.capacity(); // ������ ũ�� ���鿡�� ���� ���� ũ�⸦ ��ȯ



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


	//====================
	// 
	std::vector<int> vecint{ 0,1,2,3,4,5,6,5,8, 9};
	std::vector<int>::iterator veclter = vecint.begin();
	// �� 0
	//veclter++ // �� 1, ���������� �� ĭ �̵��� �迭�� ��ġ�� ����Ų��.
	veclter += 2; // �� 3, ���������� �� �� �̵��� �迭�� ��ġ�� ����Ų��.
	veclter--;  //�� 2,

	//vecint.end(); // �迭 �� �̶�� �ǹ�(������ �迭�� �ƴϴ�.)
	printf("veclter=%d\n", *veclter);

	vecint.push_back(100); //�迭�� ������ ��ҿ� 100�� �߰��ϰڴ�.
	for (std::vector<int>::iterator iter = vecint.begin(); iter != vecint.end(); ++iter)
	{
		printf("iter=%d\n", *iter);
	}

	vecint.pop_back(); //������ �迭�� ��Ҹ� �����ϰڴ�.
	veclter = vecint.begin();
	while (veclter != vecint.end())
	{
		printf("while iter=%d\n", *veclter);
		veclter++;

	}
	printf("vecint Size =%d\n", int(vecint.size()));

	veclter = vecint.begin();
	while (veclter != vecint.end())
	{
		if (*veclter ==5)
		{
			veclter = vecint.erase(veclter); //veclter �� ����Ű�� �ִ� �迭 ��� �����ϰڴ�.

		}
		else
		{
			veclter++;
		}
	}
	veclter = vecint.begin();
	while (veclter != vecint.end())
	{
		printf("while iter=%d\n", *veclter);
		veclter++;

	}
	


	
	// ����Ʈ(list)



}