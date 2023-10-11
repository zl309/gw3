#include<stdio.h>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std; // std ���

struct stTest
{
	string m_name = " "; //���� " "
	int m_math = 0;
	int m_eng = 0;
	int m_lang = 0;
	stTest(string name="", int math=0, int eng=0, int lang=0) :
		m_name(name), m_math(math), m_eng(eng), m_lang(lang) {

	}
	void printTest()
	{
		printf("name=%s,math=%d, eng=%d,lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang); //��Ʈ����  .c_str()
	}

	void setData(string& str) //�Լ��� ���� ���� �Լ� ���� ������ �����´�.
	{
		stringstream ssTest(str); // s ��Ʈ�� �� �̿��ؼ� ������ �����
		string line; //������ ���� �ٸ� ������ ����

		while (getline(ssTest, line, ',')) // ','��  �������� �ٹٲ�
		{
			line.erase(remove(line.begin(), line.end(), ' '), line.end()); // ���⸦ �������ش�.
			//printf("[%s]\n", line.c_str());


			int aaL = line.find('=') + 1; //=������ ���� ã��
			string dline = line.substr(0, aaL - 1); //���ʶ���
			string cline = line.substr(aaL, line.length() - aaL); //�����ʶ���

			if (dline == "name")
			{
				m_name = cline; 
			}
			else if (dline == "math")
			{
				size_t index = 0;
				int result = stoi(cline, &index);
				m_math = result;
			}
			else if (dline == "eng")
			{
				size_t index = 0;
				int result = stoi(cline, &index);
				m_eng = result;
			}
			else if (dline == "lang")
			{
				size_t index = 0;
				int result = stoi(cline, &index);
				m_lang = result;
			}


		}

	}
};


int main()
{
	std::ifstream readFile;
	readFile.open("test.txt");

	vector<stTest> vecTest;
	if (readFile.is_open())
	{
		while (!readFile.eof())
		{

			std::string str; //���ڿ� str
			std::getline(readFile, str); // readFile �� �ؽ�Ʈ�� �� �� �о str �� �ִ´�.
			//printf("str=%s\n", str.c_str()); //���

			stTest newData; //����ü ����
			newData.setData(str); //����ü���� �Լ��� str
			vecTest.push_back(newData); 
		}
		readFile.close();
	}

	for (stTest& test : vecTest)
	{
		test.printTest();
	}

}