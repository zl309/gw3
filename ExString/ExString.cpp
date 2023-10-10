#include<stdint.h>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
// ���� �����̽��� ���� �ĺ��ڷ� �������� ���̺귯���� ����� �� �̸� ���� �浹�� �����ϱ� ���ؼ� ���
 using namespace std; //std �� �̸� ������ �������ڴ�. std:: ���̺귯�� �Լ� �տ� std�� ������ �ʾƵ� �ȴ�.

int main()
{
	/*
	* String �̶�?
	* c++ STL ���� �����ϴ� Ŭ������, ���ڿ��� �ٷ�� Ŭ����
	* 
	* C ������ char* , char[] �� ���·� ���ڿ��� �ٷ���ٸ�,  c++ ������ ���ڿ��� �ϳ��� ���� type ó�� ���
	* 
	* ���ڿ��� �پ��ϰ� ���� �ٷ� �� �ְ� ���ش�.
	* 
	* char*, char[] �� �ٸ��� ���ڿ��� ���� '\0' ���ڰ� ���� ������, ���ڿ��� ���̸� �������� ���� �����ϴ�. 
	*
	*/
	// ������  : std::string
	// ���� �̸� : strA
	// �⺻ �� : ("abcdefg")
	std::string strA("abcdefg");
	printf("stra A=%s\n", strA.c_str()); //���ڿ� ����� c_str() �� ����Ͽ� ���
	size_t size = strA.capacity(); //���ڿ� ũ�� ���ϱ�
	size_t len = strA.length()	; // ���ڿ� ���� ���ϱ�

	std::string A("12");
	std::string	B("34");
	A + B; // A���ٰ� B�� ���δ�. (1234)
	printf("A= %s, b =%s\n", A.c_str(), B.c_str());
	A = B; // A�� B�� �����Ѵ�.
	printf("A= %s, b =%s\n", A.c_str(), B.c_str());
	//if(A=="a")// string �񱳽ÿ��� ���ڿ� " " �� ��
	if (A == B) // ���ڿ� �� ������ ����
	{
		printf("A= B �� ����\n");
	}
	
	std::wstring wstr;//wchar_t �� string
	// auto :  ������ ���� ���¿� ���� �ڵ����� �������� ������ �ȴ�.
	//literals: https://learn.microsoft.com/ko-kr/cpp/cpp/string-and-character-literals-cpp?view=msvc-170

	auto stringS = "abcdef"s;  //string �������� ǥ��

	double d = 3.14;
	string strD = to_string(d);  //->���ڸ� ���� �� ��ȯ
	printf("strD=%s\n", strD.c_str());


	string toParse = " 123777USD";
	size_t index = 0;
	// stoi(int), stof(float), stod(double), sotl(long)
	int result= stoi(toParse, &index ); //���� -> ���ڷ� ��ȯ
	printf("stoi result=%d\n", result); // result ��ȯ�� ����
	printf("toParse index Character=%d\n", toParse[index]); // parse �� �Ұ����� ���� ����Ʈ

	//find ==================================================================
	string findStr = "123SABC456SORRY"; 
	int nPointL = findStr.find('S'); // ���ʿ��� ���͹��� ã�� 
	printf("Find Point[%d] Character =%c\n", nPointL, findStr[nPointL]); // nPointL : ã�� ���ڿ� ��ġ
	int nPointR = findStr.rfind('S');//�����ʿ��� ���� ���� ã��
	printf("rfind Point[%d] Charcter= %c\n", nPointR, findStr[nPointR]);// nPointR : ã�� ���ڿ� ��ġ

	//�߶���� ====================================================================
	string strleft= findStr.substr(0, nPointL); // ���ڿ� �߶����. 0���� ����Ʈ L ���̸�ŭ
	string strcenter = findStr.substr(nPointL, nPointR-nPointL); //
	string	strright = findStr.substr(nPointR, findStr.length() - nPointR);
	printf("strleft=%s\nstrcenter=%s\nstrright=%s\n", strleft.c_str(), strcenter.c_str(), strright.c_str());
	printf("L+R=%d\n", nPointL + nPointR);



	//sstream �� �̿��� ===================================================
	string  testStr = "1,2,3,4,5,6,7,8,9";
	stringstream ssTest(testStr); //string ���ڿ��� stringstream ���� ���·� �����.
	string line; //�о�� string ��Ƶ� ����

	while (getline(ssTest, line, ',')) // ssTest �� ���ʺ��� ',' �� �������� ���ڸ� �߶� line �� �ִ´�.
		//getline ����� false(���̻� ���� ���ڿ��� ���ٸ� ) ����
	{
		printf("line=%s\n", line.c_str());
	}

	//��Ʈ������ Ư�� ���� ���� ==============================================================
	//remove(testStr.begin(), testStr.end(), ',');
	testStr.erase(remove(testStr.begin(), testStr.end(), ','), testStr.end());
	printf("testStr=%s\n", testStr.c_str());






}
