#include<stdio.h>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std; // std ���

struct stTest
{
	string m_name=" "; //���� " "
	int m_math = 0;
	int m_eng = 0;
	int m_lang = 0;
	stTest(string name, int math, int eng, int lang) : //�ʱ�ȭ
		m_name(name), m_math(math), m_eng(eng), m_lang(lang) {

	}
		void printTest()
	{
		printf("name=%s,math=%d, eng=%d,lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang); //��Ʈ����  .c_str()
	}
};

void pushStTest(vector<stTest>&vecTest, string& str) //�Լ��� ���� ���� �Լ� ���� ������ �����´�.
{
	stringstream ssTest(str); // s ��Ʈ�� �� �̿��ؼ� ������ �����
	string line; //������ ���� �ٸ� ������ ����
		string aaN="";
		int bb=0, cc=0, dd=0;
	while (getline(ssTest, line, ',')) // ','��  �������� �ٹٲ�
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end()); // ���⸦ �������ش�.
		//printf("[%s]\n", line.c_str());

		int aaL=line.find('=')+1;
		string dline = line.substr(0, aaL-1);
		string cline = line.substr(aaL, line.length() - aaL);

		if (dline == "name")
		{
			aaN = cline;
		}
		else if (dline == "math")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			bb = result;
		}
		else if (dline == "eng")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			cc = result;
		}
		else if (dline == "lang")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			dd = result;
		}


	}
		printf("name=%s,math=%d, eng=%d,lang=%d\n", aaN.c_str(), bb,cc,dd); 

}

int main()
{

	//���� ���� ==========================================
	//std::ofstream writeFile;
	//writeFile.open("test.txt");  // "test.txt" ������ ����(������ ���ٸ� �����Ѵ�.)
	//std::string strTest = "test 1234 abcd �Դϴ�.\n";
	//writeFile.write(strTest.c_str(), strTest.size());
	//writeFile.write(strTest.c_str(), strTest.size());

	//writeFile.close();		 // ������ �������� �ݵ�� �ݱ� ����


	
	
	//���� �б�===================================================
	std::ifstream readFile;
	readFile.open("test.txt");

	vector<stTest> vecTest;


	//stTest aaa("aaa", 80, 60, 70);
	//vecTest.push_back(aaa);
	//stTest bbb("bbb", 90, 30, 40);
	//vecTest.push_back(bbb);
	//stTest ccc("ccc", 20, 90, 80);
	//vecTest.push_back(ccc);

	if (readFile.is_open())
	{
		while (!readFile.eof())
		{

			std::string str; //���ڿ� str
			std::getline(readFile, str); // readFile �� �ؽ�Ʈ�� �� �� �о str �� �ִ´�.
			//printf("str=%s\n", str.c_str()); //���
			
			pushStTest(vecTest, str); //�Լ��� ���� ���� �Լ��� ���ڸ� ��������.
		
			//int pointF = str.find('=')+1; // = ������ ���̸� ����Ʈ f�� �ִ´�. 
			//std::string aaa=str.substr(pointF, str.length() - pointF); //����Ʈ f�������� ��ü���̿��� ����Ʈ ������ �� ����. �� ����Ʈ �������� ����
			//size_t index = 0; //�ε��� ����
			////���ڷ� �ٲٱ�
			//int result = stoi(aaa, &index); //����Ʈ���� ��Ʈ�� �� ��Ʈ ���� �ִ´�. 
			//std::string bbb = str.substr(0, pointF-1); //bbb ���� ������ �� ���� ������ ���Ѵ�.

			//if (bbb == "a")
			//{
			//	test.a = result;
			//}
			//if (bbb == "b")
			//{
			//	test.b = result;
			//}
		/*	int inputName = str.find('=');
			int endName = str.find(',');
			string Namename = str.substr(inputName + 1, endName-1-inputName);


			string MathL = str.substr(inputName+1, str.length()-inputName);
			int inputMath = MathL.find('=');
			string EngL = MathL.substr(inputMath, MathL.length() - inputMath);
			*/
			//=======================================================================
			
			//=======================================================================
		}
		readFile.close();
	}
			

	for (stTest& test : vecTest)
	{
		test.printTest();
	}



			
	
}