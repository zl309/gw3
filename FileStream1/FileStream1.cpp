#include<stdio.h>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std; // std 사용

struct stTest
{
	string m_name = " "; //문자 " "
	int m_math = 0;
	int m_eng = 0;
	int m_lang = 0;
	stTest(string name="", int math=0, int eng=0, int lang=0) :
		m_name(name), m_math(math), m_eng(eng), m_lang(lang) {

	}
	void printTest()
	{
		printf("name=%s,math=%d, eng=%d,lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang); //스트링은  .c_str()
	}

	void setData(string& str) //함수를 만들어서 메인 함수 안의 변수를 가져온다.
	{
		stringstream ssTest(str); // s 스트림 을 이용해서 변수를 만들고
		string line; //변수를 담을 다른 변수를 선언

		while (getline(ssTest, line, ',')) // ','를  기준으로 줄바꿈
		{
			line.erase(remove(line.begin(), line.end(), ' '), line.end()); // 띄어쓰기를 제거해준다.
			//printf("[%s]\n", line.c_str());


			int aaL = line.find('=') + 1; //=까지의 수를 찾고
			string dline = line.substr(0, aaL - 1); //왼쪽라인
			string cline = line.substr(aaL, line.length() - aaL); //오른쪽라인

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

			std::string str; //문자열 str
			std::getline(readFile, str); // readFile 의 텍스트를 한 줄 읽어서 str 에 넣는다.
			//printf("str=%s\n", str.c_str()); //출력

			stTest newData; //구조체 변수
			newData.setData(str); //구조체안의 함수에 str
			vecTest.push_back(newData); 
		}
		readFile.close();
	}

	for (stTest& test : vecTest)
	{
		test.printTest();
	}

}