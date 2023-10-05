#include<iostream>

class CBase
{
public:
	int a = 1;

private:

};
class CChild1 :public CBase
{
public:
	void printB()
	{
		printf("Child1::printB=%f\n",b);
	}

	float b = 3.14f;
};

class CChild2 :public CBase
{
public:
	void printB()
	{
		printf("Child2::printC= %d\n", c);

	}
	int c = 3;


};

int main()
{
	CBase* pBase = new CChild1;
	//   pBase->printB();  //CBase* ����Ʈ�� ĳ����(�о�´�) �ϱ� ������ printB �� ���� �Ұ���
	

	//�⺻ ĳ���� ���
	// ������ CBase* �����Ϳ� �޸𸮸� CChild1 Ŭ���� �޸� Ʋ�� ���� �о�´�.
	CChild1* pChild1 = (CChild1*)pBase;
	pChild1->printB();

	//�Ʒ��� ���� ����Ʈ�� �߸� ����Ű�� �Ǽ��� �� ��� ������ �߻��� �� �ִ�.
	// ������ int* �����Ϳ� �޸𸮸� CChild* �����Ϳ� ���߸�
	// ���� ���� �ʾ� ������ ���Ŀ� �߻��� �� �ִµ� ���� ���� �������� �ȴ�.
	// ���Ŀ� ���� �߻��� ��� ������ �߻��ߴ��� ã�Ⱑ ��ƴ�.
	int* a = new int(0);
	pChild1 = (CChild1*)a;

	// static_cast : ���� ĳ����(������ �ܰ迡�� ��ȯ)
	// ������ int* �����Ϳ� �޸𸮸�  CChild* �� ���߷��� �ϸ� ������ �Ұ�
	pChild1 = static_cast<CChild1*>(pBase);
	pChild1->printB();
	
	// pChild1 = static_cast<CChild1*>(a);
	// ���� "�߸��� ���� ��ȯ�Դϴ�."
	// CBase* �� ĳ���ý� ���������� ������ ����


	//static_cast �� �θ��� ���¸� Ȯ��, ������ �ܰ迡�� ����ǹǷ� � ���°� �������� �� �� ����.
	// �ڽ��� �ٸ��� Ȯ������ �ʱ� ������ ���� x, ������ ���� x, ���������� �����
	// ��� ������ �߻��ߴ��� ã�� �����
	// static_cast �ÿ��� �ݵ�� ĳ�����ϴ� ����� ���¸� Ȯ���ؾ���
	CBase* pBase2 = new CChild1;
	CChild2* pChild2 = static_cast<CChild2*>(pBase2);
	pChild2->printB();

	// float ��  int������ ������ �޸𸮸� �о ����ؼ� 3.14f ��  int  ������ �� ���
	float fvalue = 3.14f;
	int* pl = (int*)&fvalue;
	printf ("pl=%d", *pl);



	delete pBase;
	delete a;
	delete pBase2;
}